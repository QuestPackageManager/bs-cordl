#pragma once
#include "GlobalNamespace/zzzz__OVRBinaryChunk_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::__OVRGLTFAnimatinonNode__ThumbstickDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::__OVRGLTFAnimatinonNode__ThumbstickDirection() {}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::North{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::NorthEast{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::East{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::SouthEast{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::South{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::SouthWest{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::West{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection::NorthWest{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::__OVRGLTFAnimatinonNode__OVRGLTFTransformType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::__OVRGLTFAnimatinonNode__OVRGLTFTransformType() {}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Translation{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Rotation{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType::Scale{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::__OVRGLTFAnimatinonNode__OVRInterpolationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::__OVRGLTFAnimatinonNode__OVRInterpolationType() {}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::LINEAR{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::STEP{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType::CUBICSPLINE{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vecT",
// ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__OVRGLTFAnimatinonNode__InputNodeState(bool down, float_t t, ::UnityEngine::Vector2 vecT) noexcept {
  this->down = down;
  this->t = t;
  this->vecT = vecT;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState::__OVRGLTFAnimatinonNode__InputNodeState() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::OVRSimpleJSON::JSONNode*, ::GlobalNamespace::OVRBinaryChunk, ::GlobalNamespace::OVRGLTFInputNode, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x274cc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFInputNode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.AddChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::AddChannel)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x274cedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "AddChannel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(bool)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x274d704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "UpdatePose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(float_t)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x274d890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "UpdatePose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x274db74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "UpdatePose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetCardinalThumbsticks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>* (
        ::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalThumbsticks)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x274de94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "GetCardinalThumbsticks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetCardinalWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::UnityEngine::Vector2, ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalWeights)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x274e050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "GetCardinalWeights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.ProcessAnimationSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::OVRSimpleJSON::JSONNode*, int32_t, ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::ProcessAnimationSampler)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x274d14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "ProcessAnimationSampler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetTransformType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::StringW)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::GetTransformType)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x274d030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "GetTransformType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.ToOVRInterpolationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::StringW)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::ToOVRInterpolationType)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x274e1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "ToOVRInterpolationType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.CloneVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::CloneVector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x274ced4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "CloneVector3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.CloneQuaternion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::CloneQuaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x274ced8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "CloneQuaternion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRGLTFInputNode& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_intputNodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_intputNodeType;
}
constexpr ::GlobalNamespace::OVRGLTFInputNode const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_intputNodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_intputNodeType;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_intputNodeType(::GlobalNamespace::OVRGLTFInputNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_intputNodeType = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_jsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_jsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_jsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRBinaryChunk& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_binaryChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binaryChunk;
}
constexpr ::GlobalNamespace::OVRBinaryChunk const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_binaryChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binaryChunk;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_binaryChunk = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_gameObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_gameObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_gameObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_gameObj;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_gameObj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_gameObj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_inputNodeState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inputNodeState;
}
constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_inputNodeState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inputNodeState;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_inputNodeState(::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_inputNodeState = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_translations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_translations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const&
GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_translations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_translations;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_translations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_rotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rotations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*> const&
GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_rotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rotations;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_rotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_scales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scales;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_scales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scales;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_scales)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>*, "InputNodeKeyFrames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_InputNodeKeyFrames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>*, "InputNodeKeyFrames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "ThumbStickKeyFrames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_ThumbStickKeyFrames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "ThumbStickKeyFrames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_CardDirections(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "CardDirections",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_CardDirections() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "CardDirections",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get>();
}
inline ::GlobalNamespace::OVRGLTFAnimatinonNode* GlobalNamespace::OVRGLTFAnimatinonNode::New_ctor(::OVRSimpleJSON::JSONNode* jsonData, ::GlobalNamespace::OVRBinaryChunk binaryChunk,
                                                                                                  ::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject* gameObj) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRGLTFAnimatinonNode*>(jsonData, binaryChunk, inputNodeType, gameObj));
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::_ctor(::OVRSimpleJSON::JSONNode* jsonData, ::GlobalNamespace::OVRBinaryChunk binaryChunk, ::GlobalNamespace::OVRGLTFInputNode inputNodeType,
                                                          ::UnityEngine::GameObject* gameObj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBinaryChunk>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRGLTFInputNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonData, binaryChunk, inputNodeType, gameObj);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::AddChannel(::OVRSimpleJSON::JSONNode* channel, ::OVRSimpleJSON::JSONNode* samplers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "AddChannel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channel, samplers);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(bool down) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "UpdatePose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, down);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "UpdatePose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(::UnityEngine::Vector2 joystick) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "UpdatePose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, joystick);
}
inline ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*
GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalThumbsticks(::UnityEngine::Vector2 joystick) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "GetCardinalThumbsticks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*,
                                             false>(this, ___internal_method, joystick);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalWeights(
    ::UnityEngine::Vector2 joystick, ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>* cardinals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "GetCardinalWeights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, joystick, cardinals);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::ProcessAnimationSampler(::OVRSimpleJSON::JSONNode* samplerNode, int32_t nodeId,
                                                                            ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType transformType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "ProcessAnimationSampler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samplerNode, nodeId, transformType);
}
inline ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode::GetTransformType(::StringW transform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "GetTransformType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType, false>(this, ___internal_method, transform);
}
inline ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode::ToOVRInterpolationType(::StringW interpolationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "ToOVRInterpolationType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType, false>(this, ___internal_method, interpolationType);
}
template <typename T> inline void GlobalNamespace::OVRGLTFAnimatinonNode::CopyData(::System::Collections::Generic::List_1<T>* dest, ::ArrayW<T, ::Array<T>*> src) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "CopyData",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest, src);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFAnimatinonNode::CloneVector3(::UnityEngine::Vector3 v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "CloneVector3", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, v);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRGLTFAnimatinonNode::CloneQuaternion(::UnityEngine::Quaternion q) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimatinonNode*>::get(), "CloneQuaternion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, q);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode::OVRGLTFAnimatinonNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
