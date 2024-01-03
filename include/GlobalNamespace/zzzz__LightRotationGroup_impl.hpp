#pragma once
#include "GlobalNamespace/zzzz__LightGroupRotationXTransform_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationYTransform_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationZTransform_impl.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroup::*)()>(&::GlobalNamespace::LightRotationGroup::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23a9a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightRotationGroup* GlobalNamespace::LightRotationGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightRotationGroup*>());
}
inline void GlobalNamespace::LightRotationGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroup::LightRotationGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
