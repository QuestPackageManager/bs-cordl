#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithPlatformInitialize.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPlatformInitialize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPlatformInitialize::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithPlatformInitialize::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd8304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPlatformInitialize.GetPlatformInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (::Oculus::Platform::MessageWithPlatformInitialize::*)()>(
    &::Oculus::Platform::MessageWithPlatformInitialize::GetPlatformInitialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPlatformInitialize.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (::Oculus::Platform::MessageWithPlatformInitialize::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPlatformInitialize::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddd8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPlatformInitialize::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::MessageWithPlatformInitialize::GetPlatformInitialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PlatformInitialize*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::MessageWithPlatformInitialize::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPlatformInitialize*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PlatformInitialize*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPlatformInitialize* Oculus::Platform::MessageWithPlatformInitialize::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPlatformInitialize*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPlatformInitialize::MessageWithPlatformInitialize() {}
