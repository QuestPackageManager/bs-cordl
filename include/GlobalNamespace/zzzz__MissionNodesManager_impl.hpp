#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionNodesManager.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeVisualController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.get_rootMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::get_rootMissionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_rootMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.get_finalMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::get_finalMissionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593cde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_finalMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.get_missionStagesManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionStagesManager> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::get_missionStagesManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593cde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_missionStagesManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.get_missionProgressModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CampaignProgressModel> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::get_missionProgressModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593cdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_missionProgressModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.get_allMissionNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::get_allMissionNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593cdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_allMissionNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.get_IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593ce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.IMissionNodesManager_get_finalMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IMissionNode* (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::IMissionNodesManager_get_finalMissionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593ce08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "IMissionNodesManager.get_finalMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.IMissionNodesManager_get_allMissionNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::IMissionNodesManager_get_allMissionNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593ce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "IMissionNodesManager.get_allMissionNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x593ce18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.SetupNodeMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::SetupNodeMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x593ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "SetupNodeMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.MissionWasCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionNodesManager::*)(::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::MissionNodesManager::MissionWasCleared)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x593d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "MissionWasCleared", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.GetMissionNodeWithModelClearedStateInconsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::GetMissionNodeWithModelClearedStateInconsistency)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x593a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetMissionNodeWithModelClearedStateInconsistency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.DidFirstLockedMissionStageChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::DidFirstLockedMissionStageChange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x593b9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "DidFirstLockedMissionStageChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.UpdateStageLockText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::UpdateStageLockText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x593b978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "UpdateStageLockText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.GetTopMostNotClearedMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::GetTopMostNotClearedMissionNode)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x593aa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetTopMostNotClearedMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.GetAllMissionNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::GetAllMissionNodes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x593ce44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetAllMissionNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.GetAllMissionNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* (
    ::GlobalNamespace::MissionNodesManager::*)(::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*)>(
    &::GlobalNamespace::MissionNodesManager::GetAllMissionNodes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x593d3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(),
                            { "GetAllMissionNodes",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.GetNewEnabledConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> (::GlobalNamespace::MissionNodesManager::*)()>(
    &::GlobalNamespace::MissionNodesManager::GetNewEnabledConnection)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x593b620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetNewEnabledConnection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.ResetAllNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::ResetAllNodes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x593cfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "ResetAllNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.SetupStages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::SetupStages)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x593cffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "SetupStages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.RegisterAllNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::RegisterAllNodes)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x593cef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "RegisterAllNodes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.SetupNodeTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)(::GlobalNamespace::MissionNodeVisualController*, bool)>(
    &::GlobalNamespace::MissionNodesManager::SetupNodeTree)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x593d068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(),
                                                             { "SetupNodeTree", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.IsNodeInteractable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionNodesManager::*)(::GlobalNamespace::MissionNodeVisualController*, bool)>(
    &::GlobalNamespace::MissionNodesManager::IsNodeInteractable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x593d4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(),
                                                             { "IsNodeInteractable", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager.SetupNodeConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::SetupNodeConnections)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x593d170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "SetupNodeConnections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesManager::*)()>(&::GlobalNamespace::MissionNodesManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593d554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__rootMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__rootMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootMissionNode;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__rootMissionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootMissionNode = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__finalMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__finalMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionNode;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__finalMissionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalMissionNode = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionStagesManager>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__missionStagesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStagesManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionStagesManager> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__missionStagesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStagesManager;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__missionStagesManager(::UnityW<::GlobalNamespace::MissionStagesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionStagesManager = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__connectionsParentObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionsParentObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__connectionsParentObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionsParentObject;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__connectionsParentObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionsParentObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__missionNodesParentObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesParentObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__missionNodesParentObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesParentObject;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__missionNodesParentObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodesParentObject = value;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__missionProgressModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionProgressModel;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__missionProgressModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionProgressModel;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__missionProgressModel(::UnityW<::GlobalNamespace::CampaignProgressModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionProgressModel = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__allMissionNodeConnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionNodeConnections;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__allMissionNodeConnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionNodeConnections;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__allMissionNodeConnections(::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allMissionNodeConnections = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>>& GlobalNamespace::MissionNodesManager::__cordl_internal_get__allMissionNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionNodes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__allMissionNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMissionNodes;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__allMissionNodes(::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allMissionNodes = value;
}
constexpr bool& GlobalNamespace::MissionNodesManager::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::MissionNodesManager::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::MissionNodesManager::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionNodesManager::get_rootMissionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_rootMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionNodesManager::get_finalMissionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_finalMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionStagesManager> GlobalNamespace::MissionNodesManager::get_missionStagesManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_missionStagesManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionStagesManager>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::CampaignProgressModel> GlobalNamespace::MissionNodesManager::get_missionProgressModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_missionProgressModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CampaignProgressModel>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::MissionNode>> GlobalNamespace::MissionNodesManager::get_allMissionNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_allMissionNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::MissionNode>>>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionNodesManager::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "get_IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::IMissionNode* GlobalNamespace::MissionNodesManager::IMissionNodesManager_get_finalMissionNode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "IMissionNodesManager.get_finalMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMissionNode*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* GlobalNamespace::MissionNodesManager::IMissionNodesManager_get_allMissionNodes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "IMissionNodesManager.get_allMissionNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::SetupNodeMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "SetupNodeMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionNodesManager::MissionWasCleared(::GlobalNamespace::MissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "MissionWasCleared", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, missionNode);
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionNodesManager::GetMissionNodeWithModelClearedStateInconsistency() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetMissionNodeWithModelClearedStateInconsistency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionNodesManager::DidFirstLockedMissionStageChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "DidFirstLockedMissionStageChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::UpdateStageLockText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "UpdateStageLockText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionNodesManager::GetTopMostNotClearedMissionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetTopMostNotClearedMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::GetAllMissionNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetAllMissionNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*
GlobalNamespace::MissionNodesManager::GetAllMissionNodes(::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* visited) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(),
                          { "GetAllMissionNodes",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>(this, ___internal_method, node, visited);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> GlobalNamespace::MissionNodesManager::GetNewEnabledConnection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "GetNewEnabledConnection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::ResetAllNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "ResetAllNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::SetupStages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "SetupStages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::RegisterAllNodes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "RegisterAllNodes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::SetupNodeTree(::GlobalNamespace::MissionNodeVisualController* node, bool parentCleared) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(),
                                                           { "SetupNodeTree", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, parentCleared);
}
inline bool GlobalNamespace::MissionNodesManager::IsNodeInteractable(::GlobalNamespace::MissionNodeVisualController* node, bool parentCleared) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(),
                                                           { "IsNodeInteractable", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, parentCleared);
}
inline void GlobalNamespace::MissionNodesManager::SetupNodeConnections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { "SetupNodeConnections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodesManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionNodesManager* GlobalNamespace::MissionNodesManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionNodesManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMissionNodesManager"
constexpr GlobalNamespace::MissionNodesManager::operator ::GlobalNamespace::IMissionNodesManager*() noexcept {
  return static_cast<::GlobalNamespace::IMissionNodesManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMissionNodesManager"
constexpr ::GlobalNamespace::IMissionNodesManager* GlobalNamespace::MissionNodesManager::i___GlobalNamespace__IMissionNodesManager() noexcept {
  return static_cast<::GlobalNamespace::IMissionNodesManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodesManager::MissionNodesManager() {}
