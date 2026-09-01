#pragma once
// IWYU pragma private; include "System\Text\EncodingProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncodingProvider_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Text::EncodingProvider::*)(::StringW)>(&::System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { ::i2c::class_of<::System::Text::EncodingProvider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Text::EncodingProvider::*)(int32_t)>(&::System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { ::i2c::class_of<::System::Text::EncodingProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Text::EncodingProvider::*)(int32_t, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*)>(
    &::System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ad69f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { ::i2c::class_of<::System::Text::EncodingProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncodingFromProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(int32_t)>(&::System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ad6afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { "GetEncodingFromProvider", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncodingFromProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(::StringW)>(&::System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ad6bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { "GetEncodingFromProvider", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncodingFromProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(int32_t, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*)>(
    &::System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ad6cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(),
                            { "GetEncodingFromProvider", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::EncoderFallback*>(), ::i2c::type_of<::System::Text::DecoderFallback*>() } })));
    return ___internal_method;
  }
};
inline void System::Text::EncodingProvider::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::System::Text::EncodingProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::EncodingProvider::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::System::Text::EncodingProvider*>();
}
inline void System::Text::EncodingProvider::setStaticF_s_providers(::ArrayW<::System::Text::EncodingProvider*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Text::EncodingProvider*>, "s_providers", ::System::Text::EncodingProvider*>(std::forward<::ArrayW<::System::Text::EncodingProvider*>>(value));
}
inline ::ArrayW<::System::Text::EncodingProvider*> System::Text::EncodingProvider::getStaticF_s_providers() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Text::EncodingProvider*>, "s_providers", ::System::Text::EncodingProvider*>();
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncoding(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method, name);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncoding(int32_t codepage) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method, codepage);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method, codepage, encoderFallback, decoderFallback);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncodingFromProvider(int32_t codepage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { "GetEncodingFromProvider", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, codepage);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncodingFromProvider(::StringW encodingName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(), { "GetEncodingFromProvider", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, encodingName);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncodingFromProvider(int32_t codepage, ::System::Text::EncoderFallback* enc, ::System::Text::DecoderFallback* dec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::EncodingProvider*>(),
                          { "GetEncodingFromProvider", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::EncoderFallback*>(), ::i2c::type_of<::System::Text::DecoderFallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, codepage, enc, dec);
}
// Ctor Parameters []
constexpr ::System::Text::EncodingProvider::EncodingProvider() {}
