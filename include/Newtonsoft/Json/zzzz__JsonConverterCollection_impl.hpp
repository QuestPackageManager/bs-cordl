#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterCollection_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonConverterCollection::*)()>(&::Newtonsoft::Json::JsonConverterCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x264a52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterCollection*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::JsonConverterCollection* Newtonsoft::Json::JsonConverterCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonConverterCollection*>());
}
inline void Newtonsoft::Json::JsonConverterCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterCollection*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConverterCollection::JsonConverterCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
