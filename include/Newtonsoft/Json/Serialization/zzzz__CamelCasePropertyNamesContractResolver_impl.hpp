#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__CamelCasePropertyNamesContractResolver_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x266ec2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.ResolvePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266ecb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 21));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>());
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), "ResolvePropertyName",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, propertyName);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::CamelCasePropertyNamesContractResolver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
