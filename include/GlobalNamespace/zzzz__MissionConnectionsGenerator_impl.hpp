#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionConnectionsGenerator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionConnectionsGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.get__rootMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionConnectionsGenerator::*)()>(
    &::GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5937e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { "get__rootMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.CreateNodeConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)()>(&::GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5937e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { "CreateNodeConnections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.RemoveOldConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)()>(&::GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5937eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { "RemoveOldConnections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.CreateConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)(
    ::GlobalNamespace::MissionNode*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>*)>(&::GlobalNamespace::MissionConnectionsGenerator::CreateConnections)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5938324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(),
            { "CreateConnections", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.CreateConnectionBetweenNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNodeConnection> (::GlobalNamespace::MissionConnectionsGenerator::*)(
    ::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x593851c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(),
                                                { "CreateConnectionBetweenNodes", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)()>(&::GlobalNamespace::MissionConnectionsGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodesManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection>& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__nodeConnectionPref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeConnectionPref;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection> const& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__nodeConnectionPref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeConnectionPref;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_set__nodeConnectionPref(::UnityW<::GlobalNamespace::MissionNodeConnection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeConnectionPref = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__connectionsCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionsCanvas;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__connectionsCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionsCanvas;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_set__connectionsCanvas(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionsCanvas = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>*& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__missionNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* const& GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_get__missionNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodes;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__cordl_internal_set__missionNodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodes = value;
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { "get__rootMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { "CreateNodeConnections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { "RemoveOldConnections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionConnectionsGenerator::CreateConnections(::GlobalNamespace::MissionNode* missionNode,
                                                                            ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>* visitedNodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(),
          { "CreateConnections", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionNode, visitedNodes);
}
inline ::UnityW<::GlobalNamespace::MissionNodeConnection> GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes(::GlobalNamespace::MissionNode* parentMissionNode,
                                                                                                                                     ::GlobalNamespace::MissionNode* childMissionNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(),
                                              { "CreateConnectionBetweenNodes", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNodeConnection>>(this, ___internal_method, parentMissionNode, childMissionNode);
}
inline void GlobalNamespace::MissionConnectionsGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionConnectionsGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionConnectionsGenerator* GlobalNamespace::MissionConnectionsGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionConnectionsGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionConnectionsGenerator::MissionConnectionsGenerator() {}
