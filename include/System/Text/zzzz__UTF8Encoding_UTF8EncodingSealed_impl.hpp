#pragma once
// IWYU pragma private; include "System\Text\UTF8Encoding_UTF8EncodingSealed.hpp"
#include "System/Text/zzzz__UTF8Encoding_impl.hpp"
#include "System/Text/zzzz__UTF8Encoding_UTF8EncodingSealed_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::*)(bool)>(&::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ae3760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed.get_Preamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::*)()>(
    &::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::get_Preamble)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae37ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(), { ::i2c::class_of<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(), 7 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::_ctor(bool encoderShouldEmitUTF8Identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderShouldEmitUTF8Identifier);
}
inline ::System::ReadOnlySpan_1<uint8_t> GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::get_Preamble() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(this, ___internal_method);
}
inline ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::New_ctor(bool encoderShouldEmitUTF8Identifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(encoderShouldEmitUTF8Identifier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::UTF8Encoding_UTF8EncodingSealed() {}
