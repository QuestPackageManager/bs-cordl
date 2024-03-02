#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__CamelCasePropertyNamesContractResolver_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2760534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.ResolvePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27605b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 21));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>());
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName(::StringW propertyName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, propertyName);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::CamelCasePropertyNamesContractResolver() {}
