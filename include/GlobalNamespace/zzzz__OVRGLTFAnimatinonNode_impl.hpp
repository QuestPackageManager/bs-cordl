#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimatinonNode.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAccessor_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
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
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::OVRGLTFAnimatinonNode_ThumbstickDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::OVRGLTFAnimatinonNode_ThumbstickDirection() {}
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::North{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::NorthEast{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::East{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::SouthEast{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::South{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::SouthWest{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::West{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection::NorthWest{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::OVRGLTFAnimatinonNode_OVRGLTFTransformType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::OVRGLTFAnimatinonNode_OVRGLTFTransformType() {}
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::Translation{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::Rotation{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::Scale{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType::Weights{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType::OVRGLTFAnimatinonNode_OVRInterpolationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType::OVRGLTFAnimatinonNode_OVRInterpolationType() {}
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType::LINEAR{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType::STEP{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType::CUBICSPLINE{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vecT",
// ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState::OVRGLTFAnimatinonNode_InputNodeState(bool down, float_t t, ::UnityEngine::Vector2 vecT) noexcept {
  this->down = down;
  this->t = t;
  this->vecT = vecT;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState::OVRGLTFAnimatinonNode_InputNodeState() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::GlobalNamespace::OVRGLTFInputNode, ::UnityEngine::GameObject*, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::_ctor)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5e222ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::OVRGLTFInputNode>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.AddChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::OVRSimpleJSON::JSONNode*, ::OVRSimpleJSON::JSONNode*, ::GlobalNamespace::OVRGLTFAccessor*)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::AddChannel)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e225f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                         { "AddChannel", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::GlobalNamespace::OVRGLTFAccessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(bool)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e22e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "UpdatePose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(float_t, bool)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5e2313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "UpdatePose", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.UpdatePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5e23588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "UpdatePose", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetCardinalThumbsticks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>* (
    ::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalThumbsticks)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e23920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "GetCardinalThumbsticks", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetCardinalWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::UnityEngine::Vector2, ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalWeights)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e23ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                            { "GetCardinalWeights",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector2>(),
                                ::i2c::type_of<::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.ProcessAnimationSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(
    ::OVRSimpleJSON::JSONNode*, int32_t, ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType, ::OVRSimpleJSON::JSONNode*, ::GlobalNamespace::OVRGLTFAccessor*)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::ProcessAnimationSampler)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5e2291c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                                         { "ProcessAnimationSampler",
                                           {},
                                           { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType>(),
                                             ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::GlobalNamespace::OVRGLTFAccessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.GetTransformType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::StringW)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::GetTransformType)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5e227a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "GetTransformType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.ToOVRInterpolationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::StringW)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::ToOVRInterpolationType)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e23c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "ToOVRInterpolationType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.CloneVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::CloneVector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e225ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "CloneVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.CloneQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVRGLTFAnimatinonNode::CloneQuaternion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e225f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "CloneQuaternion", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimatinonNode.SetScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimatinonNode::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRGLTFAnimatinonNode::SetScale)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e2303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "SetScale", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
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
constexpr ::OVRSimpleJSON::JSONNode* const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_jsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_jsonData = value;
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
  this->___m_gameObj = value;
}
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_inputNodeState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inputNodeState;
}
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_inputNodeState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inputNodeState;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_inputNodeState(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_inputNodeState = value;
}
constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_morphTargetHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_morphTargetHandler;
}
constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_morphTargetHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_morphTargetHandler;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_morphTargetHandler(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_morphTargetHandler = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_translations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_translations;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_translations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_translations;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_translations = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_rotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rotations;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_rotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rotations;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rotations = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_scales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scales;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_scales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scales;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_scales = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_weights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_weights;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_weights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_weights;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_weights(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_weights = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_additiveWeightIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_additiveWeightIndex;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_get_m_additiveWeightIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_additiveWeightIndex;
}
constexpr void GlobalNamespace::OVRGLTFAnimatinonNode::__cordl_internal_set_m_additiveWeightIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_additiveWeightIndex = value;
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>*, "InputNodeKeyFrames", ::GlobalNamespace::OVRGLTFAnimatinonNode*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>* GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_InputNodeKeyFrames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, int32_t>*, "InputNodeKeyFrames",
                                           ::GlobalNamespace::OVRGLTFAnimatinonNode*>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "ThumbStickKeyFrames", ::GlobalNamespace::OVRGLTFAnimatinonNode*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_ThumbStickKeyFrames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "ThumbStickKeyFrames", ::GlobalNamespace::OVRGLTFAnimatinonNode*>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::setStaticF_CardDirections(::ArrayW<::UnityEngine::Vector2> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "CardDirections", ::GlobalNamespace::OVRGLTFAnimatinonNode*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> GlobalNamespace::OVRGLTFAnimatinonNode::getStaticF_CardDirections() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "CardDirections", ::GlobalNamespace::OVRGLTFAnimatinonNode*>();
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::_ctor(::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject* gameObj,
                                                          ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* morphTargetHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::OVRGLTFInputNode>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputNodeType, gameObj, morphTargetHandler);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::AddChannel(::OVRSimpleJSON::JSONNode* channel, ::OVRSimpleJSON::JSONNode* samplers, ::GlobalNamespace::OVRGLTFAccessor* dataAccessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                       { "AddChannel", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::GlobalNamespace::OVRGLTFAccessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, samplers, dataAccessor);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(bool down) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "UpdatePose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, down);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(float_t t, bool applyDeadZone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "UpdatePose", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, applyDeadZone);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::UpdatePose(::UnityEngine::Vector2 joystick) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "UpdatePose", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick);
}
inline ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*
GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalThumbsticks(::UnityEngine::Vector2 joystick) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "GetCardinalThumbsticks", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*>(
      this, ___internal_method, joystick);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRGLTFAnimatinonNode::GetCardinalWeights(
    ::UnityEngine::Vector2 joystick, ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>* cardinals) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                          { "GetCardinalWeights",
                            {},
                            { ::i2c::type_of<::UnityEngine::Vector2>(),
                              ::i2c::type_of<::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection, ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, joystick, cardinals);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::ProcessAnimationSampler(::OVRSimpleJSON::JSONNode* samplerNode, int32_t nodeId,
                                                                            ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType transformType, ::OVRSimpleJSON::JSONNode* extras,
                                                                            ::GlobalNamespace::OVRGLTFAccessor* _dataAccessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                                       { "ProcessAnimationSampler",
                                         {},
                                         { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType>(),
                                           ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::GlobalNamespace::OVRGLTFAccessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplerNode, nodeId, transformType, extras, _dataAccessor);
}
inline ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GlobalNamespace::OVRGLTFAnimatinonNode::GetTransformType(::StringW transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "GetTransformType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType>(this, ___internal_method, transform);
}
inline ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType GlobalNamespace::OVRGLTFAnimatinonNode::ToOVRInterpolationType(::StringW interpolationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "ToOVRInterpolationType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType>(this, ___internal_method, interpolationType);
}
template <typename T> inline void GlobalNamespace::OVRGLTFAnimatinonNode::CopyData(::by_ref<::System::Collections::Generic::List_1<T>*> dest, ::ArrayW<T> src) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(),
                                              { "CopyData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest, src);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFAnimatinonNode::CloneVector3(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "CloneVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, v);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRGLTFAnimatinonNode::CloneQuaternion(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "CloneQuaternion", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, q);
}
inline void GlobalNamespace::OVRGLTFAnimatinonNode::SetScale(::UnityEngine::Vector3 scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimatinonNode*>(), { "SetScale", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline ::GlobalNamespace::OVRGLTFAnimatinonNode* GlobalNamespace::OVRGLTFAnimatinonNode::New_ctor(::GlobalNamespace::OVRGLTFInputNode inputNodeType, ::UnityEngine::GameObject* gameObj,
                                                                                                  ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* morphTargetHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFAnimatinonNode*>(inputNodeType, gameObj, morphTargetHandler));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode::OVRGLTFAnimatinonNode() {}
