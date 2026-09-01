#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLaunchUnblockFlowResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchUnblockFlowResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLaunchUnblockFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchUnblockFlowResult.GetLaunchUnblockFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult* (::Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)()>(
    &::Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetLaunchUnblockFlowResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchUnblockFlowResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult* (::Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLaunchUnblockFlowResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetLaunchUnblockFlowResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLaunchUnblockFlowResult* Oculus::Platform::MessageWithLaunchUnblockFlowResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLaunchUnblockFlowResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLaunchUnblockFlowResult::MessageWithLaunchUnblockFlowResult() {}
