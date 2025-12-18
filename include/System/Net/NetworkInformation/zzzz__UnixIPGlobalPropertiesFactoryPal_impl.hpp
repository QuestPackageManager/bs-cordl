#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixIPGlobalPropertiesFactoryPal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalPropertiesFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal.get_PlatformNeedsLibCWorkaround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::get_PlatformNeedsLibCWorkaround)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61a2538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*>::get(),
                                                 "get_PlatformNeedsLibCWorkaround", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPGlobalProperties* (*)()>(
    &::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::Create)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x619f9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::setStaticF__PlatformNeedsLibCWorkaround_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<PlatformNeedsLibCWorkaround>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*>::get>(std::forward<bool>(value));
}
inline bool System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::getStaticF__PlatformNeedsLibCWorkaround_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<PlatformNeedsLibCWorkaround>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*>::get>();
}
inline bool System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::get_PlatformNeedsLibCWorkaround() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*>::get(),
                                               "get_PlatformNeedsLibCWorkaround", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Net::NetworkInformation::IPGlobalProperties* System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal*>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPGlobalProperties*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal::UnixIPGlobalPropertiesFactoryPal() {}
