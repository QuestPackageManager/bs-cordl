#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAvatarEditorResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAvatarEditorResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAvatarEditorResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAvatarEditorResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAvatarEditorResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAvatarEditorResult.GetAvatarEditorResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::MessageWithAvatarEditorResult::*)()>(
    &::Oculus::Platform::MessageWithAvatarEditorResult::GetAvatarEditorResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAvatarEditorResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::MessageWithAvatarEditorResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAvatarEditorResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAvatarEditorResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::MessageWithAvatarEditorResult::GetAvatarEditorResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::MessageWithAvatarEditorResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAvatarEditorResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAvatarEditorResult* Oculus::Platform::MessageWithAvatarEditorResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAvatarEditorResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAvatarEditorResult::MessageWithAvatarEditorResult() {}
