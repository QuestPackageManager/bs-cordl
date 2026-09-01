#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionNodeGizmos.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeGizmos_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeGizmos._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeGizmos::*)()>(&::GlobalNamespace::MissionNodeGizmos::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeGizmos*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionNodeGizmos::__cordl_internal_get__missionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionNodeGizmos::__cordl_internal_get__missionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNode;
}
constexpr void GlobalNamespace::MissionNodeGizmos::__cordl_internal_set__missionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNode = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::MissionNodeGizmos::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::MissionNodeGizmos::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::MissionNodeGizmos::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& GlobalNamespace::MissionNodeGizmos::__cordl_internal_get__missionProgressModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionProgressModel;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& GlobalNamespace::MissionNodeGizmos::__cordl_internal_get__missionProgressModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionProgressModel;
}
constexpr void GlobalNamespace::MissionNodeGizmos::__cordl_internal_set__missionProgressModel(::UnityW<::GlobalNamespace::CampaignProgressModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionProgressModel = value;
}
inline void GlobalNamespace::MissionNodeGizmos::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeGizmos*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionNodeGizmos* GlobalNamespace::MissionNodeGizmos::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionNodeGizmos*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeGizmos::MissionNodeGizmos() {}
