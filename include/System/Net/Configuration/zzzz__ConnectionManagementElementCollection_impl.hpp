#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__ConnectionManagementElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementElementCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ConnectionManagementElementCollection::*)()>(
    &::System::Net::Configuration::ConnectionManagementElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x44071fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ConnectionManagementElementCollection*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::ConnectionManagementElementCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ConnectionManagementElementCollection*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::ConnectionManagementElementCollection* System::Net::Configuration::ConnectionManagementElementCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::ConnectionManagementElementCollection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ConnectionManagementElementCollection::ConnectionManagementElementCollection() {}
