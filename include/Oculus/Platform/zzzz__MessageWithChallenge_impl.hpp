#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithChallenge.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithChallenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallenge._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithChallenge::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithChallenge::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd51c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallenge.GetChallenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Challenge* (::Oculus::Platform::MessageWithChallenge::*)()>(
    &::Oculus::Platform::MessageWithChallenge::GetChallenge)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd848c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallenge.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Challenge* (::Oculus::Platform::MessageWithChallenge::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithChallenge::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd84d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithChallenge::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::MessageWithChallenge::GetChallenge() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Challenge*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::MessageWithChallenge::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithChallenge*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Challenge*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithChallenge* Oculus::Platform::MessageWithChallenge::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithChallenge*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithChallenge::MessageWithChallenge() {}
