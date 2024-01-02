#pragma once
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonDictionaryAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonDictionaryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonDictionaryAttribute::*)()>(&::Newtonsoft::Json::JsonDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263e3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonDictionaryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonDictionaryAttribute::*)(::StringW)>(
    &::Newtonsoft::Json::JsonDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x263e3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::JsonDictionaryAttribute* Newtonsoft::Json::JsonDictionaryAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonDictionaryAttribute*>());
}
inline void Newtonsoft::Json::JsonDictionaryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonDictionaryAttribute* Newtonsoft::Json::JsonDictionaryAttribute::New_ctor(::StringW id) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonDictionaryAttribute*>(id));
}
inline void Newtonsoft::Json::JsonDictionaryAttribute::_ctor(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonDictionaryAttribute::JsonDictionaryAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
