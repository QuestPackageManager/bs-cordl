#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/Shims/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Shims::PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Shims::PreserveAttribute::*)()>(&::Newtonsoft::Json::Shims::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2506c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Shims::PreserveAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Shims::PreserveAttribute* Newtonsoft::Json::Shims::PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Shims::PreserveAttribute*>());
}
inline void Newtonsoft::Json::Shims::PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Shims::PreserveAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Shims::PreserveAttribute::PreserveAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
