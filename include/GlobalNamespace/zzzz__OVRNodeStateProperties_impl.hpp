#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRNodeStateProperties::IsHmdPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2aede24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(),
                                                                               "IsHmdPresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetNodeStatePropertyVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ::GlobalNamespace::__OVRPlugin__Node,
                                                                                           ::GlobalNamespace::__OVRPlugin__Step, ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyVector3)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2ae8a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetNodeStatePropertyVector3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Node>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetNodeStatePropertyQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ::GlobalNamespace::__OVRPlugin__Node,
                                                                                           ::GlobalNamespace::__OVRPlugin__Step, ByRef<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyQuaternion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2ae8d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetNodeStatePropertyQuaternion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Node>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.ValidateProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ByRef<::UnityEngine::XR::XRNodeState>)>(
    &::GlobalNamespace::OVRNodeStateProperties::ValidateProperty)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2af0210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "ValidateProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::XRNodeState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetUnityXRNodeStateVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateVector3)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2aeffa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetUnityXRNodeStateVector3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNodeStateProperties.GetUnityXRNodeStateQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::NodeStatePropertyType, ByRef<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateQuaternion)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2af0118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetUnityXRNodeStateQuaternion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRNodeStateProperties::setStaticF_nodeStateList(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStateList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* GlobalNamespace::OVRNodeStateProperties::getStaticF_nodeStateList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*, "nodeStateList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get>();
}
inline bool GlobalNamespace::OVRNodeStateProperties::IsHmdPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "IsHmdPresent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                 ::GlobalNamespace::__OVRPlugin__Node ovrpNodeType, ::GlobalNamespace::__OVRPlugin__Step stepType,
                                                                                 ByRef<::UnityEngine::Vector3> retVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetNodeStatePropertyVector3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Node>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nodeType, propertyType, ovrpNodeType, stepType, retVec);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                    ::GlobalNamespace::__OVRPlugin__Node ovrpNodeType, ::GlobalNamespace::__OVRPlugin__Step stepType,
                                                                                    ByRef<::UnityEngine::Quaternion> retQuat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetNodeStatePropertyQuaternion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Node>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nodeType, propertyType, ovrpNodeType, stepType, retQuat);
}
inline bool GlobalNamespace::OVRNodeStateProperties::ValidateProperty(::UnityEngine::XR::XRNode nodeType, ByRef<::UnityEngine::XR::XRNodeState> requestedNodeState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "ValidateProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::XRNodeState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nodeType, requestedNodeState);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateVector3(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                ByRef<::UnityEngine::Vector3> retVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetUnityXRNodeStateVector3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nodeType, propertyType, retVec);
}
inline bool GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateQuaternion(::UnityEngine::XR::XRNode nodeType, ::GlobalNamespace::NodeStatePropertyType propertyType,
                                                                                   ByRef<::UnityEngine::Quaternion> retQuat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNodeStateProperties*>::get(), "GetUnityXRNodeStateQuaternion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodeStatePropertyType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nodeType, propertyType, retQuat);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNodeStateProperties::OVRNodeStateProperties() {}
