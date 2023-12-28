#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeGizmos_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeGizmos._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodeGizmos::*)()>(&::GlobalNamespace::MissionNodeGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a0884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeGizmos*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionNode*& GlobalNamespace::MissionNodeGizmos::__get__missionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& GlobalNamespace::MissionNodeGizmos::__get__missionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNode;
}
constexpr void GlobalNamespace::MissionNodeGizmos::__set__missionNode(::GlobalNamespace::MissionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO*& GlobalNamespace::MissionNodeGizmos::__get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& GlobalNamespace::MissionNodeGizmos::__get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::MissionNodeGizmos::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CampaignProgressModel*& GlobalNamespace::MissionNodeGizmos::__get__missionProgressModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionProgressModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> const& GlobalNamespace::MissionNodeGizmos::__get__missionProgressModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionProgressModel;
}
constexpr void GlobalNamespace::MissionNodeGizmos::__set__missionProgressModel(::GlobalNamespace::CampaignProgressModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionProgressModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MissionNodeGizmos* GlobalNamespace::MissionNodeGizmos::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionNodeGizmos*>());
}
inline void GlobalNamespace::MissionNodeGizmos::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeGizmos*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeGizmos::MissionNodeGizmos() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
