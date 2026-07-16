#pragma once
// IWYU pragma private; include "Oculus/Platform/AndroidPlatform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__AndroidPlatform_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::AndroidPlatform.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::AndroidPlatform::*)(::StringW)>(&::Oculus::Platform::AndroidPlatform::Initialize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5db23cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AndroidPlatform*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AndroidPlatform.AsyncInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (::Oculus::Platform::AndroidPlatform::*)(::StringW)>(
    &::Oculus::Platform::AndroidPlatform::AsyncInitialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5db2514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AndroidPlatform*>(), { "AsyncInitialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AndroidPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AndroidPlatform::*)()>(&::Oculus::Platform::AndroidPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db269c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AndroidPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Oculus::Platform::AndroidPlatform::Initialize(::StringW appId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AndroidPlatform*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appId);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::AndroidPlatform::AsyncInitialize(::StringW appId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AndroidPlatform*>(), { "AsyncInitialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(this, ___internal_method, appId);
}
inline void Oculus::Platform::AndroidPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AndroidPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::AndroidPlatform* Oculus::Platform::AndroidPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::AndroidPlatform*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AndroidPlatform::AndroidPlatform() {}
