#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithMicrophoneAvailabilityState.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMicrophoneAvailabilityState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMicrophoneAvailabilityState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithMicrophoneAvailabilityState::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f7c364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMicrophoneAvailabilityState.GetMicrophoneAvailabilityState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (
    ::Oculus::Platform::MessageWithMicrophoneAvailabilityState::*)()>(&::Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetMicrophoneAvailabilityState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f7f71c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMicrophoneAvailabilityState.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (
    ::Oculus::Platform::MessageWithMicrophoneAvailabilityState::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f7f758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(), 72));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithMicrophoneAvailabilityState::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetMicrophoneAvailabilityState() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithMicrophoneAvailabilityState* Oculus::Platform::MessageWithMicrophoneAvailabilityState::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMicrophoneAvailabilityState::MessageWithMicrophoneAvailabilityState() {}
