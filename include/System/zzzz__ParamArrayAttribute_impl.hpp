#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ParamArrayAttribute_def.hpp"
//  Writing Method size for method: ::System::ParamArrayAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ParamArrayAttribute::*)()>(&::System::ParamArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25be184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParamArrayAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::ParamArrayAttribute* System::ParamArrayAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ParamArrayAttribute*>());
}
inline void System::ParamArrayAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParamArrayAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ParamArrayAttribute::ParamArrayAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
