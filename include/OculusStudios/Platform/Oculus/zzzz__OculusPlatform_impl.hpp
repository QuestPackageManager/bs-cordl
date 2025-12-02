#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatform.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatform_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformInternal_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IRichPresenceDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceRuntimeInstance_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__Entitlements_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatform_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__PlatformUser_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5d1e464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d1e954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::OculusPlatform*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "initParams", ty: "::OculusStudios::Platform::Core::PlatformInitParams*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::OculusPlatform__InitializeUserAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::Platform::Oculus::OculusPlatform* __4__this,
    ::OculusStudios::Platform::Core::PlatformInitParams* initParams,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->initParams = initParams;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::OculusPlatform__InitializeUserAsync_d__26() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::*)()>(
        &::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x5d1e9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>::get(),
        "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d1f30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::OculusPlatform*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "initParams", ty: "::OculusStudios::Platform::Core::PlatformInitParams*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::
    OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::Platform::Oculus::OculusPlatform* __4__this,
        ::OculusStudios::Platform::Core::PlatformInitParams* initParams,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1,
        ::System::Runtime::CompilerServices::TaskAwaiter __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->initParams = initParams;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::
    OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_displayName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d1daf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_key)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d1db3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "get_key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_vendor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::Vendor (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_vendor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1db80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "get_vendor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_user
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::IPlatformUser* (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_user)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1db88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "get_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_entitlements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements* (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_entitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1db90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "get_entitlements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.add_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::add_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d1db98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "add_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.remove_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::remove_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d1dc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "remove_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::OculusStudios::Platform::Oculus::OculusPlatform::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
        &::OculusStudios::Platform::Oculus::OculusPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d1dd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                    "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1dddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(float_t)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d1ddec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "Tick", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.GetAppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::GetAppVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d1ddf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "GetAppVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.SetRichPresenceStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance)>(&::OculusStudios::Platform::Oculus::OculusPlatform::SetRichPresenceStatus)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5d1de04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "SetRichPresenceStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.ClearRichPresenceStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::ClearRichPresenceStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1dde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "ClearRichPresenceStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.GetDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> (
    ::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::GetDestination)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d1e09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               "GetDestination", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.InitializeUserAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::OculusStudios::Platform::Oculus::OculusPlatform::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::InitializeUserAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d1e180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "InitializeUserAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.OnJoinIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::OnJoinIntent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5d1e244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "OnJoinIntent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d1e398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform._GetDestination_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::OculusStudios::Platform::Core::IRichPresenceDefinition*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::_GetDestination_b__25_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d1e3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "<GetDestination>b__25_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IRichPresenceDefinition*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_destinationRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationRequestedEvent;
}
constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* const&
OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_destinationRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationRequestedEvent;
}
constexpr void
OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Oculus::PlatformUser*& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get__user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____user;
}
constexpr ::OculusStudios::Platform::Oculus::PlatformUser* const& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get__user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____user;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set__user(::OculusStudios::Platform::Oculus::PlatformUser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____user)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Oculus::Entitlements*& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get__entitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr ::OculusStudios::Platform::Oculus::Entitlements* const& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get__entitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set__entitlements(::OculusStudios::Platform::Oculus::Entitlements* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>*&
OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_destinations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinations;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* const&
OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_destinations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinations;
}
constexpr void
OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set_destinations(::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_lastKnownDestinationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastKnownDestinationId;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_lastKnownDestinationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastKnownDestinationId;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set_lastKnownDestinationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastKnownDestinationId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_lastKnownJoinKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastKnownJoinKey;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_get_lastKnownJoinKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastKnownJoinKey;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatform::__cordl_internal_set_lastKnownJoinKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastKnownJoinKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatform::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatform::get_key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "get_key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Oculus::OculusPlatform::get_vendor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "get_vendor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::Vendor, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Oculus::OculusPlatform::get_user() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "get_user", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformUser*, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformEntitlements* OculusStudios::Platform::Oculus::OculusPlatform::get_entitlements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "get_entitlements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformEntitlements*, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "add_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "remove_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task*
OculusStudios::Platform::Oculus::OculusPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                  "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::Tick(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "Tick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatform::GetAppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "GetAppVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "SetRichPresenceStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::ClearRichPresenceStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "ClearRichPresenceStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> OculusStudios::Platform::Oculus::OculusPlatform::GetDestination() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(),
                                                                             "GetDestination", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* OculusStudios::Platform::Oculus::OculusPlatform::InitializeUserAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "InitializeUserAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::OnJoinIntent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "OnJoinIntent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Oculus::OculusPlatform::_GetDestination_b__25_0(::OculusStudios::Platform::Core::IRichPresenceDefinition* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatform*>::get(), "<GetDestination>b__25_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IRichPresenceDefinition*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Oculus::OculusPlatform* OculusStudios::Platform::Oculus::OculusPlatform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::OculusPlatform*>());
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatform"
constexpr OculusStudios::Platform::Oculus::OculusPlatform::operator ::OculusStudios::Platform::Core::IPlatform*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatform*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatform"
constexpr ::OculusStudios::Platform::Core::IPlatform* OculusStudios::Platform::Oculus::OculusPlatform::i___OculusStudios__Platform__Core__IPlatform() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::Platform::Oculus::OculusPlatform::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::Platform::Oculus::OculusPlatform::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformInternal"
constexpr OculusStudios::Platform::Oculus::OculusPlatform::operator ::OculusStudios::Platform::Core::IPlatformInternal*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformInternal"
constexpr ::OculusStudios::Platform::Core::IPlatformInternal* OculusStudios::Platform::Oculus::OculusPlatform::i___OculusStudios__Platform__Core__IPlatformInternal() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformInternal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatform::OculusPlatform() {}
