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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5f31268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f31758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x5f317c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f32110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::get_displayName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f308fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::get_key)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f30940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_vendor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::Vendor (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_vendor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f30984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_vendor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_user
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IPlatformUser* (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_user)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3098c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_user", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.get_entitlements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements* (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::get_entitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f30994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_entitlements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.add_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::add_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f3099c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                         { "add_destinationRequestedEvent", {}, { ::i2c::type_of<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.remove_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::remove_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f30a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                         { "remove_destinationRequestedEvent", {}, { ::i2c::type_of<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::OculusStudios::Platform::Oculus::OculusPlatform::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f30b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                { "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f30be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(float_t)>(&::OculusStudios::Platform::Oculus::OculusPlatform::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f30bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "Tick", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.GetAppVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::GetAppVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f30bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "GetAppVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.SetRichPresenceStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::SetRichPresenceStatus)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5f30c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                             { "SetRichPresenceStatus", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.ClearRichPresenceStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::ClearRichPresenceStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f30be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "ClearRichPresenceStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.GetDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> (
    ::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::GetDestination)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f30ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "GetDestination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.InitializeUserAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::OculusStudios::Platform::Oculus::OculusPlatform::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::InitializeUserAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f30f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                                                           { "InitializeUserAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform.OnJoinIntent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&::OculusStudios::Platform::Oculus::OculusPlatform::OnJoinIntent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f31048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                             { "OnJoinIntent", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatform::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f3119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatform._GetDestination_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Oculus::OculusPlatform::*)(::OculusStudios::Platform::Core::IRichPresenceDefinition*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatform::_GetDestination_b__25_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f311b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                             { "<GetDestination>b__25_0", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>() } })));
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
  this->___destinationRequestedEvent = value;
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
  this->___logger = value;
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
  this->____user = value;
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
  this->____entitlements = value;
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
  this->___destinations = value;
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
  this->___lastKnownDestinationId = value;
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
  this->___lastKnownJoinKey = value;
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatform::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatform::get_key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Oculus::OculusPlatform::get_vendor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_vendor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::Vendor>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Oculus::OculusPlatform::get_user() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_user", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformUser*>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformEntitlements* OculusStudios::Platform::Oculus::OculusPlatform::get_entitlements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "get_entitlements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformEntitlements*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                       { "add_destinationRequestedEvent", {}, { ::i2c::type_of<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                       { "remove_destinationRequestedEvent", {}, { ::i2c::type_of<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task*
OculusStudios::Platform::Oculus::OculusPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                              { "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::Tick(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "Tick", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatform::GetAppVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "GetAppVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                           { "SetRichPresenceStatus", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::ClearRichPresenceStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "ClearRichPresenceStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> OculusStudios::Platform::Oculus::OculusPlatform::GetDestination() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { "GetDestination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* OculusStudios::Platform::Oculus::OculusPlatform::InitializeUserAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                                                         { "InitializeUserAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::OnJoinIntent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                           { "OnJoinIntent", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Oculus::OculusPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Oculus::OculusPlatform::_GetDestination_b__25_0(::OculusStudios::Platform::Core::IRichPresenceDefinition* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatform*>(),
                                                           { "<GetDestination>b__25_0", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Oculus::OculusPlatform* OculusStudios::Platform::Oculus::OculusPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::OculusPlatform*>());
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
