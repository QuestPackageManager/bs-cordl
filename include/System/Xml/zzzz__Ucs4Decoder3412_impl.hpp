#pragma once
// IWYU pragma private; include "System\Xml\Ucs4Decoder3412.hpp"
#include "System/Xml/zzzz__Ucs4Decoder_impl.hpp"
#include "System/Xml/zzzz__Ucs4Decoder3412_def.hpp"
//  Writing Method size for method: ::System::Xml::Ucs4Decoder3412.GetFullChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Decoder3412::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Xml::Ucs4Decoder3412::GetFullChars)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x62e4658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder3412*>(), { ::i2c::class_of<::System::Xml::Ucs4Decoder3412*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Decoder3412._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Ucs4Decoder3412::*)()>(&::System::Xml::Ucs4Decoder3412::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e3aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder3412*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Xml::Ucs4Decoder3412::GetFullChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Decoder3412*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline void System::Xml::Ucs4Decoder3412::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder3412*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Ucs4Decoder3412* System::Xml::Ucs4Decoder3412::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Ucs4Decoder3412*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Ucs4Decoder3412::Ucs4Decoder3412() {}
