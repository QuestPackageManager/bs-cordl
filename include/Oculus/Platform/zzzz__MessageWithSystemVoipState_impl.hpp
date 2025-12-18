#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithSystemVoipState.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithSystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithSystemVoipState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithSystemVoipState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithSystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c29bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSystemVoipState.GetSystemVoipState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::MessageWithSystemVoipState::*)()>(
    &::Oculus::Platform::MessageWithSystemVoipState::GetSystemVoipState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c2ebcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSystemVoipState.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::MessageWithSystemVoipState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithSystemVoipState::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2ec10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(), 74));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithSystemVoipState::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::MessageWithSystemVoipState::GetSystemVoipState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::MessageWithSystemVoipState::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSystemVoipState*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithSystemVoipState* Oculus::Platform::MessageWithSystemVoipState::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithSystemVoipState*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithSystemVoipState::MessageWithSystemVoipState() {}
