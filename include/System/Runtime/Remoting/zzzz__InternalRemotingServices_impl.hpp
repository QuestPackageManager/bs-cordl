#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/InternalRemotingServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__InternalRemotingServices_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::InternalRemotingServices.GetCachedSoapAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Metadata::SoapAttribute* (*)(::System::Object*)>(
    &::System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x3ccbe50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::InternalRemotingServices*>::get(), "GetCachedSoapAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::InternalRemotingServices::setStaticF__soapAttributes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_soapAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::InternalRemotingServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::InternalRemotingServices::getStaticF__soapAttributes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_soapAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::InternalRemotingServices*>::get>();
}
inline ::System::Runtime::Remoting::Metadata::SoapAttribute* System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute(::System::Object* reflectionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::InternalRemotingServices*>::get(), "GetCachedSoapAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Metadata::SoapAttribute*, false>(nullptr, ___internal_method, reflectionObject);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::InternalRemotingServices::InternalRemotingServices() {}
