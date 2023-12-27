#pragma once
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__BypassElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)()>(
    &::System::Net::Configuration::BypassElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2944c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::BypassElementCollection*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::BypassElementCollection* System::Net::Configuration::BypassElementCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Configuration::BypassElementCollection*>());
}
inline void System::Net::Configuration::BypassElementCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::BypassElementCollection*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::BypassElementCollection::BypassElementCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
