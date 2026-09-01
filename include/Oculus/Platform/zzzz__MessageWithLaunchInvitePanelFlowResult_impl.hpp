#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLaunchInvitePanelFlowResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd783c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult.GetLaunchInvitePanelFlowResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchInvitePanelFlowResult* (::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::*)()>(
    &::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::GetLaunchInvitePanelFlowResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchInvitePanelFlowResult* (::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::GetLaunchInvitePanelFlowResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult* Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult::MessageWithLaunchInvitePanelFlowResult() {}
