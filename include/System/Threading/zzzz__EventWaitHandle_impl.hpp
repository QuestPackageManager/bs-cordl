#pragma once
// IWYU pragma private; include "System/Threading/EventWaitHandle.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
#include "System/Threading/zzzz__EventResetMode_def.hpp"
//  Writing Method size for method: ::System::Threading::EventWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::EventWaitHandle::*)(bool, ::System::Threading::EventResetMode)>(
    &::System::Threading::EventWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e4cee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventResetMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::EventWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::EventWaitHandle::*)(bool, ::System::Threading::EventResetMode, ::StringW)>(
    &::System::Threading::EventWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3e542f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventResetMode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::EventWaitHandle.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::EventWaitHandle::*)()>(&::System::Threading::EventWaitHandle::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e523d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::EventWaitHandle.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::EventWaitHandle::*)()>(&::System::Threading::EventWaitHandle::Set)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e4e998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), "Set",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Threading::EventWaitHandle::_ctor(bool initialState, ::System::Threading::EventResetMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventResetMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialState, mode);
}
inline void System::Threading::EventWaitHandle::_ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventResetMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialState, mode, name);
}
inline bool System::Threading::EventWaitHandle::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::EventWaitHandle::Set() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::EventWaitHandle*>::get(), "Set",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::EventWaitHandle* System::Threading::EventWaitHandle::New_ctor(bool initialState, ::System::Threading::EventResetMode mode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::EventWaitHandle*>(initialState, mode));
}
inline ::System::Threading::EventWaitHandle* System::Threading::EventWaitHandle::New_ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::EventWaitHandle*>(initialState, mode, name));
}
// Ctor Parameters []
constexpr ::System::Threading::EventWaitHandle::EventWaitHandle() {}
