#pragma once
#include "System/Net/Sockets/zzzz__IPProtectionLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Configuration/zzzz__SettingsSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Section
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::SettingsSectionInternal* (*)()>(
    &::System::Net::Configuration::SettingsSectionInternal::get_Section)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b3d160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get(),
                                                                               "get_Section", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Ipv6Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(
    &::System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3d1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get(),
                                                                               "get_Ipv6Enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)()>(
    &::System::Net::Configuration::SettingsSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b3d1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_HttpListenerUnescapeRequestUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpListenerUnescapeRequestUrl;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_HttpListenerUnescapeRequestUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpListenerUnescapeRequestUrl;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set_HttpListenerUnescapeRequestUrl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HttpListenerUnescapeRequestUrl = value;
}
constexpr ::System::Net::Sockets::IPProtectionLevel& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_IPProtectionLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IPProtectionLevel;
}
constexpr ::System::Net::Sockets::IPProtectionLevel const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_IPProtectionLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IPProtectionLevel;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IPProtectionLevel = value;
}
inline void System::Net::Configuration::SettingsSectionInternal::setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal* value) {
  ::cordl_internals::setStaticField<::System::Net::Configuration::SettingsSectionInternal*, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get>(
      std::forward<::System::Net::Configuration::SettingsSectionInternal*>(value));
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::System::Net::Configuration::SettingsSectionInternal*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get>();
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::get_Section() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get(),
                                                                             "get_Section", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SettingsSectionInternal*, false>(nullptr, ___internal_method);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get(),
                                                                             "get_Ipv6Enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::SettingsSectionInternal*>());
}
inline void System::Net::Configuration::SettingsSectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::SettingsSectionInternal*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SettingsSectionInternal::SettingsSectionInternal() {}
