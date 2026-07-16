#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNodeStateProperties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNodeStateProperties_def.hpp"
#include "GlobalNamespace/zzzz__NodeStatePropertyType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.IsHmdPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRNodeStateProperties::IsHmdPresent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e18870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(), { "IsHmdPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetNodeStatePropertyVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ::GlobalNamespace::OVRPlugin_Node, ::GlobalNamespace::OVRPlugin_Step, ::by_ref<::UnityEngine::Vector3>)>(
        &::GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyVector3)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5e0e488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                                                                                           { "GetNodeStatePropertyVector3",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::OVRPlugin_Node>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetNodeStatePropertyQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ::GlobalNamespace::OVRPlugin_Node,
                                                                ::GlobalNamespace::OVRPlugin_Step, ::by_ref<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyQuaternion)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e0e800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                                                                                           { "GetNodeStatePropertyQuaternion",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::OVRPlugin_Node>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.ValidateProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::XR::XRNodeState>)>(&::GlobalNamespace::OVRNodeStateProperties::ValidateProperty)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5e1b9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                                                             { "ValidateProperty", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::XRNodeState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetUnityXRNodeStateVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateVector3)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5e1b704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                            { "GetUnityXRNodeStateVector3",
                              {},
                              { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetUnityXRNodeStateQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ::by_ref<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateQuaternion)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1b89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                            { "GetUnityXRNodeStateQuaternion",
                              {},
                              { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRNodeStateProperties::setStaticF_nodeStateList(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStateList", ::GlobalNamespace::OVRNodeStateProperties*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* GlobalNamespace::OVRNodeStateProperties::getStaticF_nodeStateList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStateList", ::GlobalNamespace::OVRNodeStateProperties*>();
}
inline bool GlobalNamespace::OVRNodeStateProperties::IsHmdPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(), { "IsHmdPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                 ::GlobalNamespace::OVRPlugin_Node ovrpNodeType, ::GlobalNamespace::OVRPlugin_Step stepType,
                                                                                 ::by_ref<::UnityEngine::Vector3> retVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                                       { "GetNodeStatePropertyVector3",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Node>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType, propertyType, ovrpNodeType, stepType, retVec);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                    ::GlobalNamespace::OVRPlugin_Node ovrpNodeType, ::GlobalNamespace::OVRPlugin_Step stepType,
                                                                                    ::by_ref<::UnityEngine::Quaternion> retQuat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                                       { "GetNodeStatePropertyQuaternion",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Node>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType, propertyType, ovrpNodeType, stepType, retQuat);
}
inline bool GlobalNamespace::OVRNodeStateProperties::ValidateProperty(::UnityEngine::XR::XRNode nodeType, ::by_ref<::UnityEngine::XR::XRNodeState> requestedNodeState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                                                           { "ValidateProperty", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::XRNodeState>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType, requestedNodeState);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                ::by_ref<::UnityEngine::Vector3> retVec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                          { "GetUnityXRNodeStateVector3",
                            {},
                            { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType, propertyType, retVec);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                   ::by_ref<::UnityEngine::Quaternion> retQuat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNodeStateProperties*>(),
                          { "GetUnityXRNodeStateQuaternion",
                            {},
                            { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::NodeStatePropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeType, propertyType, retQuat);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNodeStateProperties::OVRNodeStateProperties() {}
