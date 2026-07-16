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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b2033c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "get_ApplicationName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.set_ApplicationName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b20398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "set_ApplicationName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.get_ProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::RemotingConfiguration::get_ProcessId)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b203f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "get_ProcessId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.LoadDefaultDelayedChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5b204a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "LoadDefaultDelayedChannels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.IsActivationAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Remoting::RemotingConfiguration::IsActivationAllowed)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b20864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "IsActivationAllowed", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.IsRemotelyActivatedClientType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ActivatedClientTypeEntry* (*)(::System::Type*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b209a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "IsRemotelyActivatedClientType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.IsWellKnownClientType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::WellKnownClientTypeEntry* (*)(::System::Type*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b20b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "IsWellKnownClientType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterActivatedClientType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b20ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterActivatedClientType", {}, { ::i2c::type_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterActivatedServiceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ActivatedServiceTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b20f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterActivatedServiceType", {}, { ::i2c::type_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterWellKnownClientType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b21088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterWellKnownClientType", {}, { ::i2c::type_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterWellKnownServiceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::WellKnownServiceTypeEntry*)>(
    &::System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b21304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterWellKnownServiceType", {}, { ::i2c::type_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterChannelTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ChannelData*)>(&::System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b21490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                                                           { "RegisterChannelTemplate", {}, { ::i2c::type_of<::System::Runtime::Remoting::ChannelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterClientProviderTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ProviderData*)>(&::System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b21510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterClientProviderTemplate", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterServerProviderTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ProviderData*)>(&::System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b21590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterServerProviderTemplate", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ArrayList*, bool)>(&::System::Runtime::Remoting::RemotingConfiguration::RegisterChannels)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x5b21610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                             { "RegisterChannels", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.RegisterTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::RemotingConfiguration::RegisterTypes)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5b22220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "RegisterTypes", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.CustomErrorsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b2272c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "CustomErrorsEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::RemotingConfiguration.SetCustomErrorsMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5b227c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "SetCustomErrorsMode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_applicationID(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "applicationID", ::System::Runtime::Remoting::RemotingConfiguration*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::getStaticF_applicationID() {
  return ::cordl_internals::getStaticField<::StringW, "applicationID", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_applicationName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "applicationName", ::System::Runtime::Remoting::RemotingConfiguration*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::getStaticF_applicationName() {
  return ::cordl_internals::getStaticField<::StringW, "applicationName", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_processGuid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "processGuid", ::System::Runtime::Remoting::RemotingConfiguration*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::getStaticF_processGuid() {
  return ::cordl_internals::getStaticField<::StringW, "processGuid", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_defaultConfigRead(bool value) {
  ::cordl_internals::setStaticField<bool, "defaultConfigRead", ::System::Runtime::Remoting::RemotingConfiguration*>(std::forward<bool>(value));
}
inline bool System::Runtime::Remoting::RemotingConfiguration::getStaticF_defaultConfigRead() {
  return ::cordl_internals::getStaticField<bool, "defaultConfigRead", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_defaultDelayedConfigRead(bool value) {
  ::cordl_internals::setStaticField<bool, "defaultDelayedConfigRead", ::System::Runtime::Remoting::RemotingConfiguration*>(std::forward<bool>(value));
}
inline bool System::Runtime::Remoting::RemotingConfiguration::getStaticF_defaultDelayedConfigRead() {
  return ::cordl_internals::getStaticField<bool, "defaultDelayedConfigRead", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF__errorMode(::System::Runtime::Remoting::CustomErrorsModes value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::CustomErrorsModes, "_errorMode", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Runtime::Remoting::CustomErrorsModes>(value));
}
inline ::System::Runtime::Remoting::CustomErrorsModes System::Runtime::Remoting::RemotingConfiguration::getStaticF__errorMode() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::CustomErrorsModes, "_errorMode", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_wellKnownClientEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "wellKnownClientEntries", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_wellKnownClientEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "wellKnownClientEntries", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_activatedClientEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "activatedClientEntries", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_activatedClientEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "activatedClientEntries", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_wellKnownServiceEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "wellKnownServiceEntries", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_wellKnownServiceEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "wellKnownServiceEntries", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_activatedServiceEntries(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "activatedServiceEntries", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_activatedServiceEntries() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "activatedServiceEntries", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_channelTemplates(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "channelTemplates", ::System::Runtime::Remoting::RemotingConfiguration*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_channelTemplates() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "channelTemplates", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_clientProviderTemplates(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "clientProviderTemplates", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_clientProviderTemplates() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "clientProviderTemplates", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline void System::Runtime::Remoting::RemotingConfiguration::setStaticF_serverProviderTemplates(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "serverProviderTemplates", ::System::Runtime::Remoting::RemotingConfiguration*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::RemotingConfiguration::getStaticF_serverProviderTemplates() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "serverProviderTemplates", ::System::Runtime::Remoting::RemotingConfiguration*>();
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "get_ApplicationName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "set_ApplicationName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW System::Runtime::Remoting::RemotingConfiguration::get_ProcessId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "get_ProcessId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "LoadDefaultDelayedChannels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Runtime::Remoting::RemotingConfiguration::IsActivationAllowed(::System::Type* svrType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "IsActivationAllowed", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, svrType);
}
inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType(::System::Type* svrType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "IsRemotelyActivatedClientType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(nullptr, ___internal_method, svrType);
}
inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType(::System::Type* svrType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "IsWellKnownClientType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(nullptr, ___internal_method, svrType);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                           { "RegisterActivatedClientType", {}, { ::i2c::type_of<::System::Runtime::Remoting::ActivatedClientTypeEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                           { "RegisterActivatedServiceType", {}, { ::i2c::type_of<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                           { "RegisterWellKnownClientType", {}, { ::i2c::type_of<::System::Runtime::Remoting::WellKnownClientTypeEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                           { "RegisterWellKnownServiceType", {}, { ::i2c::type_of<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* channel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                                                         { "RegisterChannelTemplate", {}, { ::i2c::type_of<::System::Runtime::Remoting::ChannelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channel);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* prov) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                                                         { "RegisterClientProviderTemplate", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prov);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* prov) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                                                         { "RegisterServerProviderTemplate", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prov);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterChannels(::System::Collections::ArrayList* channels, bool onlyDelayed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(),
                                                                                         { "RegisterChannels", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channels, onlyDelayed);
}
inline void System::Runtime::Remoting::RemotingConfiguration::RegisterTypes(::System::Collections::ArrayList* types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "RegisterTypes", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, types);
}
inline bool System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled(bool isLocalRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "CustomErrorsEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, isLocalRequest);
}
inline void System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode(::StringW mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::RemotingConfiguration*>(), { "SetCustomErrorsMode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::RemotingConfiguration::RemotingConfiguration() {}
