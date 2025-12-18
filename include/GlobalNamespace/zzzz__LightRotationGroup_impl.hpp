#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationGroup.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationXTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationYTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationZTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroupType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroup.get_transformGroupType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightTransformGroupType (::GlobalNamespace::LightRotationGroup::*)()>(
    &::GlobalNamespace::LightRotationGroup::get_transformGroupType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e66b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroup::*)()>(&::GlobalNamespace::LightRotationGroup::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57e66bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTransformGroupType GlobalNamespace::LightRotationGroup::get_transformGroupType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTransformGroupType, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationGroup* GlobalNamespace::LightRotationGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightRotationGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroup::LightRotationGroup() {}
