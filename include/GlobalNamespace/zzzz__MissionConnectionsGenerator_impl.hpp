#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionConnectionsGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.get__rootMissionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNode* (::GlobalNamespace::MissionConnectionsGenerator::*)()>(
    &::GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(),
                                                                               "get__rootMissionNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.CreateNodeConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)()>(
    &::GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x229e8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(),
                                                                               "CreateNodeConnections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.RemoveOldConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)()>(
    &::GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x229e970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(),
                                                                               "RemoveOldConnections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.CreateConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)(
    ::GlobalNamespace::MissionNode*, ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*)>(&::GlobalNamespace::MissionConnectionsGenerator::CreateConnections)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x229ee2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(), "CreateConnections", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator.CreateConnectionBetweenNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::MissionNodeConnection* (::GlobalNamespace::MissionConnectionsGenerator::*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*)>(
        &::GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x229f024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(), "CreateConnectionBetweenNodes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionConnectionsGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionConnectionsGenerator::*)()>(&::GlobalNamespace::MissionConnectionsGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229f120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionNodesManager*& GlobalNamespace::MissionConnectionsGenerator::__get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> const& GlobalNamespace::MissionConnectionsGenerator::__get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__missionNodesManager(::GlobalNamespace::MissionNodesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionNodeConnection*& GlobalNamespace::MissionConnectionsGenerator::__get__nodeConnectionPref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeConnectionPref;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeConnection*> const& GlobalNamespace::MissionConnectionsGenerator::__get__nodeConnectionPref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeConnectionPref;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__nodeConnectionPref(::GlobalNamespace::MissionNodeConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeConnectionPref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::MissionConnectionsGenerator::__get__connectionsCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionsCanvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::MissionConnectionsGenerator::__get__connectionsCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionsCanvas;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__connectionsCanvas(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionsCanvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*& GlobalNamespace::MissionConnectionsGenerator::__get__missionNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*> const&
GlobalNamespace::MissionConnectionsGenerator::__get__missionNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodes;
}
constexpr void GlobalNamespace::MissionConnectionsGenerator::__set__missionNodes(::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MissionNode* GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(),
                                                                             "get__rootMissionNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionNode*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(),
                                                                             "CreateNodeConnections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(),
                                                                             "RemoveOldConnections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionConnectionsGenerator::CreateConnections(::GlobalNamespace::MissionNode* missionNode,
                                                                            ::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>* visitedNodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(), "CreateConnections", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::MissionNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNode, visitedNodes);
}
inline ::GlobalNamespace::MissionNodeConnection* GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes(::GlobalNamespace::MissionNode* parentMissionNode,
                                                                                                                            ::GlobalNamespace::MissionNode* childMissionNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(), "CreateConnectionBetweenNodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionNodeConnection*, false>(this, ___internal_method, parentMissionNode, childMissionNode);
}
inline ::GlobalNamespace::MissionConnectionsGenerator* GlobalNamespace::MissionConnectionsGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionConnectionsGenerator*>());
}
inline void GlobalNamespace::MissionConnectionsGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionConnectionsGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionConnectionsGenerator::MissionConnectionsGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
