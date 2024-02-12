#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputHDAInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemapSettings_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNodeUICache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType::__HEU_InputNode__InputNodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType::__HEU_InputNode__InputNodeType() {}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType HoudiniEngineUnity::__HEU_InputNode__InputNodeType::CONNECTION{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType HoudiniEngineUnity::__HEU_InputNode__InputNodeType::NODE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType HoudiniEngineUnity::__HEU_InputNode__InputNodeType::PARAMETER{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType::__HEU_InputNode__InputObjectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType::__HEU_InputNode__InputObjectType() {}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::__HEU_InputNode__InputObjectType::HDA{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::__HEU_InputNode__InputObjectType::UNITY_MESH{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::__HEU_InputNode__InputObjectType::CURVE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::__HEU_InputNode__InputObjectType::TERRAIN{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::__HEU_InputNode__InputObjectType::BOUNDING_BOX{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::__HEU_InputNode__InputObjectType::TILEMAP{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::__HEU_InputNode__InternalObjectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::__HEU_InputNode__InternalObjectType() {}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::UNKNOWN{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::HDA{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::UNITY_MESH{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions::__HEU_InputNode__InputActions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions::__HEU_InputNode__InputActions() {}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions HoudiniEngineUnity::__HEU_InputNode__InputActions::ACTION{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions HoudiniEngineUnity::__HEU_InputNode__InputActions::DELETE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions HoudiniEngineUnity::__HEU_InputNode__InputActions::INSERT{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::get_InputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22021f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_ThisInputObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::get_ThisInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "get_ThisInputObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_PendingInputObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::get_PendingInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "get_PendingInputObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_PendingInputObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType)>(
    &::HoudiniEngineUnity::HEU_InputNode::set_PendingInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_PendingInputObjectType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* (
    ::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputObjects",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputNodeID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputNodeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputNodeID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_RequiresCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_RequiresCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_RequiresCook",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_RequiresCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_RequiresCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2202230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_RequiresCook",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_RequiresUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_RequiresUpload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220223c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "get_RequiresUpload", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_RequiresUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_RequiresUpload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2202244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_RequiresUpload",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_LabelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_LabelName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_LabelName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_ParamName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_ParamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_ParamName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_ParamName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::StringW)>(&::HoudiniEngineUnity::HEU_InputNode::set_ParamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_ParamName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_KeepWorldTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_KeepWorldTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "get_KeepWorldTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_KeepWorldTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_KeepWorldTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2202278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_KeepWorldTransform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_PackGeometryBeforeMerging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::get_PackGeometryBeforeMerging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "get_PackGeometryBeforeMerging", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_PackGeometryBeforeMerging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(
    &::HoudiniEngineUnity::HEU_InputNode::set_PackGeometryBeforeMerging)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x220228c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_PackGeometryBeforeMerging",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_ParentAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::get_ParentAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_ParentAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.IsAssetInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::IsAssetInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22022a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "IsAssetInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_TilemapSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::get_TilemapSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22022b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "get_TilemapSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CreateSetupInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_InputNode> (*)(
    int32_t, int32_t, ::StringW, ::StringW, ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_InputNode::CreateSetupInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22022b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CreateSetupInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.SetInputNodeID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&::HoudiniEngineUnity::HEU_InputNode::SetInputNodeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2202348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "SetInputNodeID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.DestroyAllData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::DestroyAllData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2202350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "DestroyAllData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ResetInputObjectTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ResetInputObjectTransforms)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x220264c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "ResetInputObjectTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ResetInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::ResetInputNode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2202738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ResetInputNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.InsertInputEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t, ::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::InsertInputEntry)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2202804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "InsertInputEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetInputEntryGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_InputNode::GetInputEntryGameObject)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2202b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "GetInputEntryGameObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.AddInputEntryAtEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEnd)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2202d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "AddInputEntryAtEnd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.AddInputEntryAtEndMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputObjectInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEndMesh)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2202f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "AddInputEntryAtEndMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.RemoveAllInputEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::RemoveAllInputEntries)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22025a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "RemoveAllInputEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.NumInputEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::NumInputEntries)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2202fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "NumInputEntries",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ChangeInputType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType)>(&::HoudiniEngineUnity::HEU_InputNode::ChangeInputType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22027d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ChangeInputType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ResetConnectionForForceUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::ResetConnectionForForceUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2202784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ResetConnectionForForceUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UploadInput)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x22035bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadHDAInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UploadHDAInput)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x22039b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadHDAInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadUnityInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UploadUnityInput)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x2203b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadUnityInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.AreAnyInputHDAsConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::AreAnyInputHDAsConnected)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x220303c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "AreAnyInputHDAsConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ReconnectToUpstreamAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ReconnectToUpstreamAsset)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2204618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "ReconnectToUpstreamAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CreateInputObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputObjectInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::CreateInputObjectInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2202a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CreateInputObjectInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CreateInputHDAInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputHDAInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::CreateInputHDAInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2202ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CreateInputHDAInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.InternalAddInputObjectAtEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputObjectInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::InternalAddInputObjectAtEnd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2202e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "InternalAddInputObjectAtEnd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.InternalAddInputHDAAtEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputHDAInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputNode::InternalAddInputHDAAtEnd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2202ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "InternalAddInputHDAAtEnd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.DisconnectConnectedMergeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::DisconnectConnectedMergeNode)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x22031f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "DisconnectConnectedMergeNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ClearConnectedInputHDAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ClearConnectedInputHDAs)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2203404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "ClearConnectedInputHDAs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ConnectToMergeObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::ConnectToMergeObject)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2204114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ConnectToMergeObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.DisconnectAndDestroyInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::DisconnectAndDestroyInputs)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2202374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "DisconnectAndDestroyInputs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetConnectedInputCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::GetConnectedInputCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2204988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "GetConnectedInputCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetConnectedNodeID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_InputNode::GetConnectedNodeID)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2204a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "GetConnectedNodeID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadObjectMergeTransformType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UploadObjectMergeTransformType)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2204294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadObjectMergeTransformType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadObjectMergePackGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UploadObjectMergePackGeometry)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x22043a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadObjectMergePackGeometry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.HasInputNodeTransformChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(
    &::HoudiniEngineUnity::HEU_InputNode::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2204ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "HasInputNodeTransformChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadInputObjectTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UploadInputObjectTransforms)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2204d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadInputObjectTransforms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UpdateOnAssetRecreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_InputNode::UpdateOnAssetRecreation)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2204ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UpdateOnAssetRecreation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CopyInputValuesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputNode*)>(&::HoudiniEngineUnity::HEU_InputNode::CopyInputValuesTo)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2205034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CopyInputValuesTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.PopulateInputPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_InputPreset*)>(
    &::HoudiniEngineUnity::HEU_InputNode::PopulateInputPreset)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x220549c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "PopulateInputPreset", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.LoadPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputPreset*)>(&::HoudiniEngineUnity::HEU_InputNode::LoadPreset)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x2205a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "LoadPreset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.FindAddToInputHDA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::StringW)>(&::HoudiniEngineUnity::HEU_InputNode::FindAddToInputHDA)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2205f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "FindAddToInputHDA", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.NotifyParentRemovedInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::NotifyParentRemovedInput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22060a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                               "NotifyParentRemovedInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ClearUICache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ClearUICache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220236c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ClearUICache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.HandleSelectedObjectsForInputObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(
    ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>)>(&::HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputObjects)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x220612c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "HandleSelectedObjectsForInputObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.HandleSelectedObjectsForInputHDAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(
    ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>)>(&::HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputHDAs)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2206248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "HandleSelectedObjectsForInputHDAs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_InputNode::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2206364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetInternalObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType (*)(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType)>(&::HoudiniEngineUnity::HEU_InputNode::GetInternalObjectType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2202a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "GetInternalObjectType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2206778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>"
constexpr HoudiniEngineUnity::HEU_InputNode::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*
HoudiniEngineUnity::HEU_InputNode::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_InputNode__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputNodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputNodeType;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputNodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputNodeType;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputNodeType(::HoudiniEngineUnity::__HEU_InputNode__InputNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputNodeType = value;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputObjectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectType;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputObjectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectType;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputObjectType = value;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__pendingInputObjectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingInputObjectType;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__pendingInputObjectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingInputObjectType;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__pendingInputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingInputObjectType = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*> const&
HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjects;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputObjects(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputObjectsConnectedAssetIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectsConnectedAssetIDs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputObjectsConnectedAssetIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputObjectsConnectedAssetIDs;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputObjectsConnectedAssetIDs(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputObjectsConnectedAssetIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAsset;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAsset;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputAsset(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__connectedInputAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedInputAsset;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__connectedInputAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedInputAsset;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__connectedInputAsset(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedInputAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputAssetInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAssetInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*> const&
HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputAssetInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputAssetInfos;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputAssetInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputAssetInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__nodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__nodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__nodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputIndex;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputIndex = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__requiresCook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresCook;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__requiresCook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresCook;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__requiresCook(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiresCook = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__requiresUpload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresUpload;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__requiresUpload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresUpload;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__requiresUpload(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiresUpload = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__inputName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputName;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__inputName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__labelName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__labelName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelName;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__labelName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labelName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__paramName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__paramName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramName;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__paramName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__connectedNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__connectedNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__connectedNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedNodeID = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__keepWorldTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepWorldTransform;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__keepWorldTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keepWorldTransform;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__keepWorldTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keepWorldTransform = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__packGeometryBeforeMerging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packGeometryBeforeMerging;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__packGeometryBeforeMerging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packGeometryBeforeMerging;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__packGeometryBeforeMerging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packGeometryBeforeMerging = value;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__parentAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentAsset;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__parentAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentAsset;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__parentAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__tilemapSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilemapSettings;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*> const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__tilemapSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilemapSettings;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__tilemapSettings(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tilemapSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_InputNodeUICache*& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__uiCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiCache;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputNodeUICache*> const& HoudiniEngineUnity::HEU_InputNode::__cordl_internal_get__uiCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiCache;
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__cordl_internal_set__uiCache(::HoudiniEngineUnity::HEU_InputNodeUICache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType HoudiniEngineUnity::HEU_InputNode::get_InputType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::get_ThisInputObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "get_ThisInputObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::get_PendingInputObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "get_PendingInputObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_PendingInputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_PendingInputObjectType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* HoudiniEngineUnity::HEU_InputNode::get_InputObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputObjects",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::get_InputNodeID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputNodeID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_RequiresCook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_RequiresCook",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_RequiresCook(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_RequiresCook",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_RequiresUpload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_RequiresUpload",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_RequiresUpload(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_RequiresUpload",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW HoudiniEngineUnity::HEU_InputNode::get_InputName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_InputName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_InputNode::get_LabelName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_LabelName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_InputNode::get_ParamName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_ParamName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_ParamName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_ParamName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_KeepWorldTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "get_KeepWorldTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_KeepWorldTransform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_KeepWorldTransform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_PackGeometryBeforeMerging() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "get_PackGeometryBeforeMerging", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_PackGeometryBeforeMerging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "set_PackGeometryBeforeMerging",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> HoudiniEngineUnity::HEU_InputNode::get_ParentAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_ParentAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputNode::IsAssetInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "IsAssetInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* HoudiniEngineUnity::HEU_InputNode::get_TilemapSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "get_TilemapSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> HoudiniEngineUnity::HEU_InputNode::CreateSetupInput(int32_t nodeID, int32_t inputIndex, ::StringW inputName, ::StringW labelName,
                                                                                                         ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType inputNodeType,
                                                                                                         ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CreateSetupInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_InputNode>, false>(nullptr, ___internal_method, nodeID, inputIndex, inputName, labelName, inputNodeType, parentAsset);
}
inline void HoudiniEngineUnity::HEU_InputNode::SetInputNodeID(int32_t nodeID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "SetInputNodeID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeID);
}
inline void HoudiniEngineUnity::HEU_InputNode::DestroyAllData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "DestroyAllData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::ResetInputObjectTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "ResetInputObjectTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ResetInputNode(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ResetInputNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::InsertInputEntry(int32_t index, ::UnityEngine::GameObject* newInputGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "InsertInputEntry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, newInputGameObject);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_InputNode::GetInputEntryGameObject(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "GetInputEntryGameObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, index);
}
inline void HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEnd(::UnityEngine::GameObject* newEntryGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "AddInputEntryAtEnd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEntryGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEndMesh(::UnityEngine::GameObject* newEntryGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "AddInputEntryAtEndMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputObjectInfo*, false>(this, ___internal_method, newEntryGameObject);
}
inline void HoudiniEngineUnity::HEU_InputNode::RemoveAllInputEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "RemoveAllInputEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::NumInputEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "NumInputEntries",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ChangeInputType(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType newType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ChangeInputType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, newType);
}
inline void HoudiniEngineUnity::HEU_InputNode::ResetConnectionForForceUpdate(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ResetConnectionForForceUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadInput(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadHDAInput(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadHDAInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadUnityInput(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadUnityInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_InputNode::AreAnyInputHDAsConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "AreAnyInputHDAsConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ReconnectToUpstreamAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "ReconnectToUpstreamAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputNode::CreateInputObjectInfo(::UnityEngine::GameObject* inputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CreateInputObjectInfo", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputObjectInfo*, false>(this, ___internal_method, inputGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputHDAInfo* HoudiniEngineUnity::HEU_InputNode::CreateInputHDAInfo(::UnityEngine::GameObject* inputGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CreateInputHDAInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputHDAInfo*, false>(this, ___internal_method, inputGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputNode::InternalAddInputObjectAtEnd(::UnityEngine::GameObject* newInputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "InternalAddInputObjectAtEnd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputObjectInfo*, false>(this, ___internal_method, newInputGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputHDAInfo* HoudiniEngineUnity::HEU_InputNode::InternalAddInputHDAAtEnd(::UnityEngine::GameObject* newInputHDA) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "InternalAddInputHDAAtEnd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputHDAInfo*, false>(this, ___internal_method, newInputHDA);
}
inline void HoudiniEngineUnity::HEU_InputNode::DisconnectConnectedMergeNode(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "DisconnectConnectedMergeNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::ClearConnectedInputHDAs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "ClearConnectedInputHDAs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ConnectToMergeObject(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ConnectToMergeObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::DisconnectAndDestroyInputs(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "DisconnectAndDestroyInputs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::GetConnectedInputCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "GetConnectedInputCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::GetConnectedNodeID(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "GetConnectedNodeID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline bool HoudiniEngineUnity::HEU_InputNode::UploadObjectMergeTransformType(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadObjectMergeTransformType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_InputNode::UploadObjectMergePackGeometry(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadObjectMergePackGeometry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_InputNode::HasInputNodeTransformChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "HasInputNodeTransformChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadInputObjectTransforms(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UploadInputObjectTransforms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UpdateOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "UpdateOnAssetRecreation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::CopyInputValuesTo(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputNode* destInputNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "CopyInputValuesTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, destInputNode);
}
inline void HoudiniEngineUnity::HEU_InputNode::PopulateInputPreset(::HoudiniEngineUnity::HEU_InputPreset* inputPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "PopulateInputPreset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputPreset);
}
inline void HoudiniEngineUnity::HEU_InputNode::LoadPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputPreset* inputPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "LoadPreset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, inputPreset);
}
inline bool HoudiniEngineUnity::HEU_InputNode::FindAddToInputHDA(::StringW gameObjectName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "FindAddToInputHDA", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, gameObjectName);
}
inline void HoudiniEngineUnity::HEU_InputNode::NotifyParentRemovedInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                                                                             "NotifyParentRemovedInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ClearUICache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "ClearUICache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> selectedObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "HandleSelectedObjectsForInputObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedObjects);
}
inline void HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputHDAs(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> selectedObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "HandleSelectedObjectsForInputHDAs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedObjects);
}
inline bool HoudiniEngineUnity::HEU_InputNode::IsEquivalentTo(::HoudiniEngineUnity::HEU_InputNode* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType HoudiniEngineUnity::HEU_InputNode::GetInternalObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType type) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), "GetInternalObjectType", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType, false>(nullptr, ___internal_method, type);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_InputNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InputNode*>());
}
inline void HoudiniEngineUnity::HEU_InputNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputNode::HEU_InputNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
