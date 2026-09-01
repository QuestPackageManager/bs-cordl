#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithNetSyncSetSessionPropertyResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddc07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetNetSyncSetSessionPropertyResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)()>(
    &::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddc0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (
    ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddc11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::MessageWithNetSyncSetSessionPropertyResult() {}
