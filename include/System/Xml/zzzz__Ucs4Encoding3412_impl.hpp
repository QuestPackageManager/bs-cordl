#pragma once
// IWYU pragma private; include "System\Xml\Ucs4Encoding3412.hpp"
#include "System/Xml/zzzz__Ucs4Encoding_impl.hpp"
#include "System/Xml/zzzz__Ucs4Encoding3412_def.hpp"
//  Writing Method size for method: ::System::Xml::Ucs4Encoding3412._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Ucs4Encoding3412::*)()>(&::System::Xml::Ucs4Encoding3412::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62e3818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding3412.get_EncodingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Ucs4Encoding3412::*)()>(&::System::Xml::Ucs4Encoding3412::get_EncodingName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62e3af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding3412.GetPreamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::Ucs4Encoding3412::*)()>(&::System::Xml::Ucs4Encoding3412::GetPreamble)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62e3b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Xml::Ucs4Encoding3412::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Xml::Ucs4Encoding3412::get_EncodingName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::Ucs4Encoding3412::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding3412*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Xml::Ucs4Encoding3412* System::Xml::Ucs4Encoding3412::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Ucs4Encoding3412*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Ucs4Encoding3412::Ucs4Encoding3412() {}
