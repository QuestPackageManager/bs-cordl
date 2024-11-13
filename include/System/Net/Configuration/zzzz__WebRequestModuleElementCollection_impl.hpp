#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModuleElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__WebRequestModuleElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModuleElementCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::WebRequestModuleElementCollection::*)()>(
    &::System::Net::Configuration::WebRequestModuleElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43a4e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModuleElementCollection*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::WebRequestModuleElementCollection* System::Net::Configuration::WebRequestModuleElementCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::WebRequestModuleElementCollection*>());
}
inline void System::Net::Configuration::WebRequestModuleElementCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::WebRequestModuleElementCollection*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WebRequestModuleElementCollection::WebRequestModuleElementCollection() {}
