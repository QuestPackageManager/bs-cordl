#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/MockedPlatform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformInternal_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IRichPresenceDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceRuntimeInstance_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::get_displayName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d81c38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.get_key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::get_key)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d81c7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.get_vendor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::Vendor (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::get_vendor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d81cc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.get_user
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::IPlatformUser* (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::get_user)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d81cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.get_entitlements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements* (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::get_entitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d81cd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.add_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)(
    ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(&::OculusStudios::Platform::Core::MockedPlatform::add_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d81cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "add_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.remove_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)(
    ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(&::OculusStudios::Platform::Core::MockedPlatform::remove_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d81d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "remove_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::OculusStudios::Platform::Core::MockedPlatform::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
        &::OculusStudios::Platform::Core::MockedPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d81e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                    "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)(float_t)>(
    &::OculusStudios::Platform::Core::MockedPlatform::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "Tick", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.GetAppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::GetAppVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d8201c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                               "GetAppVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.SetRichPresenceStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)(
    ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance)>(&::OculusStudios::Platform::Core::MockedPlatform::SetRichPresenceStatus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "SetRichPresenceStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.ClearRichPresenceStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::ClearRichPresenceStatus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                               "ClearRichPresenceStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform.GetDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> (
    ::OculusStudios::Platform::Core::MockedPlatform::*)()>(&::OculusStudios::Platform::Core::MockedPlatform::GetDestination)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d82038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                               "GetDestination", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatform::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8207c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*& OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_get_destinationRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationRequestedEvent;
}
constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* const&
OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_get_destinationRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationRequestedEvent;
}
constexpr void
OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_set_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::MockedPlatformUser*& OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_get__user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____user;
}
constexpr ::OculusStudios::Platform::Core::MockedPlatformUser* const& OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_get__user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____user;
}
constexpr void OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_set__user(::OculusStudios::Platform::Core::MockedPlatformUser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____user)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::MockedEntitlements*& OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_get__entitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr ::OculusStudios::Platform::Core::MockedEntitlements* const& OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_get__entitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr void OculusStudios::Platform::Core::MockedPlatform::__cordl_internal_set__entitlements(::OculusStudios::Platform::Core::MockedEntitlements* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatform::get_displayName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatform::get_key() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::MockedPlatform::get_vendor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::Vendor, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Core::MockedPlatform::get_user() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformUser*, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformEntitlements* OculusStudios::Platform::Core::MockedPlatform::get_entitlements() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformEntitlements*, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatform::add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "add_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Core::MockedPlatform::remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "remove_destinationRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task*
OculusStudios::Platform::Core::MockedPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                  "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Core::MockedPlatform::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatform::Tick(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "Tick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatform::GetAppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                             "GetAppVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatform::SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), "SetRichPresenceStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status);
}
inline void OculusStudios::Platform::Core::MockedPlatform::ClearRichPresenceStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                             "ClearRichPresenceStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> OculusStudios::Platform::Core::MockedPlatform::GetDestination() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(),
                                                                             "GetDestination", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatform*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::MockedPlatform* OculusStudios::Platform::Core::MockedPlatform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::MockedPlatform*>());
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatform"
constexpr OculusStudios::Platform::Core::MockedPlatform::operator ::OculusStudios::Platform::Core::IPlatform*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatform*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatform"
constexpr ::OculusStudios::Platform::Core::IPlatform* OculusStudios::Platform::Core::MockedPlatform::i___OculusStudios__Platform__Core__IPlatform() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::Platform::Core::MockedPlatform::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::Platform::Core::MockedPlatform::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformInternal"
constexpr OculusStudios::Platform::Core::MockedPlatform::operator ::OculusStudios::Platform::Core::IPlatformInternal*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformInternal"
constexpr ::OculusStudios::Platform::Core::IPlatformInternal* OculusStudios::Platform::Core::MockedPlatform::i___OculusStudios__Platform__Core__IPlatformInternal() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformInternal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::MockedPlatform::MockedPlatform() {}
