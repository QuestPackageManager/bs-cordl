#pragma once
// IWYU pragma private; include "System/Runtime/Interop/SafeEventLogWriteHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/Runtime/Interop/zzzz__SafeEventLogWriteHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Interop::SafeEventLogWriteHandle::*)()>(
    &::System::Runtime::Interop::SafeEventLogWriteHandle::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fd5b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle.RegisterEventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Interop::SafeEventLogWriteHandle* (*)(::StringW, ::StringW)>(
    &::System::Runtime::Interop::SafeEventLogWriteHandle::RegisterEventSource)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fd5ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(), "RegisterEventSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle.DeregisterEventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::System::Runtime::Interop::SafeEventLogWriteHandle::DeregisterEventSource)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fd5d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(), "DeregisterEventSource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::SafeEventLogWriteHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Interop::SafeEventLogWriteHandle::*)()>(
    &::System::Runtime::Interop::SafeEventLogWriteHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd5ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(), 7));
    return ___internal_method;
  }
};
inline void System::Runtime::Interop::SafeEventLogWriteHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Interop::SafeEventLogWriteHandle* System::Runtime::Interop::SafeEventLogWriteHandle::RegisterEventSource(::StringW uncServerName, ::StringW sourceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(), "RegisterEventSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Interop::SafeEventLogWriteHandle*, false>(nullptr, ___internal_method, uncServerName, sourceName);
}
inline bool System::Runtime::Interop::SafeEventLogWriteHandle::DeregisterEventSource(::System::IntPtr hEventLog) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(), "DeregisterEventSource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hEventLog);
}
inline bool System::Runtime::Interop::SafeEventLogWriteHandle::ReleaseHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::SafeEventLogWriteHandle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Interop::SafeEventLogWriteHandle* System::Runtime::Interop::SafeEventLogWriteHandle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Interop::SafeEventLogWriteHandle*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::SafeEventLogWriteHandle::SafeEventLogWriteHandle() {}
