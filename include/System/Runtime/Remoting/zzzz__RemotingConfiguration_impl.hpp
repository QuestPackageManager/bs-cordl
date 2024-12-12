#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/RemotingConfiguration.hpp"
#include "System/Runtime/Remoting/zzzz__CustomErrorsModes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__RemotingConfiguration_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedServiceTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownServiceTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.get_ApplicationName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3cc7220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(),
                                                                               "get_ApplicationName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.set_ApplicationName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3cc7278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "set_ApplicationName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.get_ProcessId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::RemotingConfiguration::get_ProcessId)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3cc72d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(),
                                                                               "get_ProcessId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.LoadDefaultDelayedChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x3cc737c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(),
                                                                               "LoadDefaultDelayedChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.IsActivationAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Remoting::RemotingConfiguration::IsActivationAllowed)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3cc7790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "IsActivationAllowed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.IsRemotelyActivatedClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ActivatedClientTypeEntry* (*)(::System::Type*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3cc78d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "IsRemotelyActivatedClientType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.IsWellKnownClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::WellKnownClientTypeEntry* (*)(::System::Type*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3cc7a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "IsWellKnownClientType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterActivatedClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3cc7be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterActivatedClientType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterActivatedServiceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ActivatedServiceTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3cc7e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterActivatedServiceType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterWellKnownClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3cc7f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterWellKnownClientType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterWellKnownServiceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::WellKnownServiceTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3cc8218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterWellKnownServiceType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterChannelTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ChannelData*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3cc83a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterChannelTemplate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ChannelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterClientProviderTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ProviderData*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3cc841c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterClientProviderTemplate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterServerProviderTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ProviderData*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3cc8498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterServerProviderTemplate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::ArrayList*, bool)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterChannels)> {
  constexpr static std::size_t size = 0xc78;
  constexpr static std::size_t addrs = 0x3cc8514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterChannels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::RemotingConfiguration::RegisterTypes)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x3cc918c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.CustomErrorsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3cc96a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "CustomErrorsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.SetCustomErrorsMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3cc973c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "SetCustomErrorsMode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_applicationID(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "applicationID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::getStaticF_applicationID() {
  return ::cordl_internals::getStaticField<::StringW, "applicationID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_applicationName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "applicationName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::getStaticF_applicationName() {
  return ::cordl_internals::getStaticField<::StringW, "applicationName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_processGuid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "processGuid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::getStaticF_processGuid() {
  return ::cordl_internals::getStaticField<::StringW, "processGuid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_defaultConfigRead(bool value) {
  ::cordl_internals::setStaticField<bool, "defaultConfigRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<bool>(value));
}
inline bool System::Runtime::Remoting::RemotingConfiguration::getStaticF_defaultConfigRead() {
  return ::cordl_internals::getStaticField<bool, "defaultConfigRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_defaultDelayedConfigRead(bool value) {
  ::cordl_internals::setStaticField<bool, "defaultDelayedConfigRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<bool>(value));
}
inline bool System::Runtime::Remoting::RemotingConfiguration::getStaticF_defaultDelayedConfigRead() {
  return ::cordl_internals::getStaticField<bool, "defaultDelayedConfigRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF__errorMode(::System::Runtime::Remoting::CustomErrorsModes value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::CustomErrorsModes, "_errorMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Runtime::Remoting::CustomErrorsModes>(value));
}
inline ::System::Runtime::Remoting::CustomErrorsModes System::Runtime::Remoting::RemotingConfiguration::getStaticF__errorMode() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::CustomErrorsModes, "_errorMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_wellKnownClientEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "wellKnownClientEntries",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_wellKnownClientEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "wellKnownClientEntries",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_activatedClientEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "activatedClientEntries",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_activatedClientEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "activatedClientEntries",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_wellKnownServiceEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "wellKnownServiceEntries",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_wellKnownServiceEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "wellKnownServiceEntries",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_activatedServiceEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "activatedServiceEntries",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_activatedServiceEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "activatedServiceEntries",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_channelTemplates(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "channelTemplates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_channelTemplates() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "channelTemplates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_clientProviderTemplates(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "clientProviderTemplates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_clientProviderTemplates() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "clientProviderTemplates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_serverProviderTemplates(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "serverProviderTemplates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_serverProviderTemplates() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "serverProviderTemplates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get>();
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(),
                                                                             "get_ApplicationName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "set_ApplicationName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::get_ProcessId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(),
                                                                             "get_ProcessId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(),
                                                                             "LoadDefaultDelayedChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::Remoting::RemotingConfiguration::IsActivationAllowed(::System::Type* svrType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "IsActivationAllowed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, svrType);
}
inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType(::System::Type* svrType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "IsRemotelyActivatedClientType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ActivatedClientTypeEntry*, false>(nullptr, ___internal_method, svrType);
}
inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType(::System::Type* svrType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "IsWellKnownClientType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::WellKnownClientTypeEntry*, false>(nullptr, ___internal_method, svrType);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterActivatedClientType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterActivatedServiceType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterWellKnownClientType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterWellKnownServiceType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterChannelTemplate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ChannelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, channel);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* prov) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterClientProviderTemplate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prov);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* prov) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterServerProviderTemplate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prov);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterChannels(::System::Collections::ArrayList* channels, bool onlyDelayed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterChannels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, channels, onlyDelayed);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterTypes(::System::Collections::ArrayList* types) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "RegisterTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, types);
}
inline bool System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled(bool isLocalRequest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "CustomErrorsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, isLocalRequest);
}
inline void System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode(::StringW mode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::RemotingConfiguration*>::get(), "SetCustomErrorsMode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::RemotingConfiguration::RemotingConfiguration() {}
