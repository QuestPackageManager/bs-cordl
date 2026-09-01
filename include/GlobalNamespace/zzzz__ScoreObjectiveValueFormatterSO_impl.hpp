#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoreObjectiveValueFormatterSO.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)(int32_t)>(&::GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3756984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>(), { ::i2c::class_of<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)()>(&::GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37569dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreObjectiveValueFormatterSO* GlobalNamespace::ScoreObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreObjectiveValueFormatterSO::ScoreObjectiveValueFormatterSO() {}
