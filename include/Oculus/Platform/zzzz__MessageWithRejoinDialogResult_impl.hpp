#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithRejoinDialogResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithRejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithRejoinDialogResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithRejoinDialogResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithRejoinDialogResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRejoinDialogResult.GetRejoinDialogResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::RejoinDialogResult* (::Oculus::Platform::MessageWithRejoinDialogResult::*)()>(
    &::Oculus::Platform::MessageWithRejoinDialogResult::GetRejoinDialogResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddcc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRejoinDialogResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::RejoinDialogResult* (::Oculus::Platform::MessageWithRejoinDialogResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithRejoinDialogResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithRejoinDialogResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::MessageWithRejoinDialogResult::GetRejoinDialogResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RejoinDialogResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::MessageWithRejoinDialogResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithRejoinDialogResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RejoinDialogResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithRejoinDialogResult* Oculus::Platform::MessageWithRejoinDialogResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithRejoinDialogResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithRejoinDialogResult::MessageWithRejoinDialogResult() {}
