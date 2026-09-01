#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithApplicationVersion.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithApplicationVersion::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithApplicationVersion::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd70b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion.GetApplicationVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::MessageWithApplicationVersion::*)()>(
    &::Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd9d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::MessageWithApplicationVersion::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd9d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithApplicationVersion::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationVersion*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithApplicationVersion*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithApplicationVersion::MessageWithApplicationVersion() {}
