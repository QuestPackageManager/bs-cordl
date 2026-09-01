#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoreFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreFormatter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreFormatter.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::ScoreFormatter::Format)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x375480c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreFormatter*>(), { "Format", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreFormatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreFormatter::*)()>(&::GlobalNamespace::ScoreFormatter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3754894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreFormatter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScoreFormatter::setStaticF__numberFormatInfo(::System::Globalization::NumberFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::NumberFormatInfo*, "_numberFormatInfo", ::GlobalNamespace::ScoreFormatter*>(
      std::forward<::System::Globalization::NumberFormatInfo*>(value));
}
inline ::System::Globalization::NumberFormatInfo* GlobalNamespace::ScoreFormatter::getStaticF__numberFormatInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::NumberFormatInfo*, "_numberFormatInfo", ::GlobalNamespace::ScoreFormatter*>();
}
inline ::StringW GlobalNamespace::ScoreFormatter::Format(int32_t score) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreFormatter*>(), { "Format", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, score);
}
inline void GlobalNamespace::ScoreFormatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreFormatter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreFormatter* GlobalNamespace::ScoreFormatter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreFormatter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreFormatter::ScoreFormatter() {}
