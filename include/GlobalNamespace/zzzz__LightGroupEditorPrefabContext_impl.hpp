#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupEditorPrefabContext_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupEditorPrefabContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupEditorPrefabContext::*)()>(
    &::GlobalNamespace::LightGroupEditorPrefabContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210e33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupEditorPrefabContext*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*& GlobalNamespace::LightGroupEditorPrefabContext::__get_lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*> const&
GlobalNamespace::LightGroupEditorPrefabContext::__get_lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroups;
}
constexpr void GlobalNamespace::LightGroupEditorPrefabContext::__set_lightGroups(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::LightGroupEditorPrefabContext* GlobalNamespace::LightGroupEditorPrefabContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightGroupEditorPrefabContext*>());
}
inline void GlobalNamespace::LightGroupEditorPrefabContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupEditorPrefabContext*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupEditorPrefabContext::LightGroupEditorPrefabContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
