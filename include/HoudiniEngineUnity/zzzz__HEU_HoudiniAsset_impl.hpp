#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HoudiniAsset.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__BakedEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__CookedEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetSerializedMetaData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BakedDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstanceInputUIState_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_RecookPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__ReloadEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType::HEU_HoudiniAsset_HEU_AssetType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType::HEU_HoudiniAsset_HEU_AssetType() {}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType::TYPE_INVALID{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType::TYPE_HDA{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType::TYPE_CURVE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType::TYPE_INPUT{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::HEU_HoudiniAsset_AssetBuildAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::HEU_HoudiniAsset_AssetBuildAction() {}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::RELOAD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::COOK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::INVALID{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::STRIP_HEDATA{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::DUPLICATE{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction::RESET_PARAMS{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::HEU_HoudiniAsset_AssetCookStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::HEU_HoudiniAsset_AssetCookStatus() {}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::COOKING{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::POSTCOOK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::LOADING{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::POSTLOAD{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::PRELOAD{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus::SELECT_SUBASSET{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult::HEU_HoudiniAsset_AssetCookResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult::HEU_HoudiniAsset_AssetCookResult() {}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult::SUCCESS{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult::ERRORED{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a23784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a2380c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a23820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::*)(::System::IAsyncResult*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a23840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate::HEU_HoudiniAsset_UpdateUIDelegate() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod::HEU_HoudiniAsset_AssetInstantiationMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod::HEU_HoudiniAsset_AssetInstantiationMethod() {}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod::DEFAULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod::DUPLICATED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod::UNDO{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset___c::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a238a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c._ClearInvalidCurves_b__309_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset___c::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidCurves_b__309_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a238b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidCurves>b__309_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c._ClearInvalidLists_b__364_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset___c::*)(::HoudiniEngineUnity::HEU_ObjectNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidLists_b__364_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a2390c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidLists>b__364_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c._ClearInvalidLists_b__364_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset___c::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidLists_b__364_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a23968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidLists>b__364_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c._ClearInvalidLists_b__364_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset___c::*)(::HoudiniEngineUnity::HEU_MaterialData*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidLists_b__364_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a239c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidLists>b__364_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c::setStaticF___9(::HoudiniEngineUnity::HEU_HoudiniAsset___c* value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::HEU_HoudiniAsset___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>(
      std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>(value));
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c* HoudiniEngineUnity::HEU_HoudiniAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::HEU_HoudiniAsset___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c::setStaticF___9__309_0(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>*, "<>9__309_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* HoudiniEngineUnity::HEU_HoudiniAsset___c::getStaticF___9__309_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>*, "<>9__309_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c::setStaticF___9__364_0(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>*, "<>9__364_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>* HoudiniEngineUnity::HEU_HoudiniAsset___c::getStaticF___9__364_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>*, "<>9__364_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c::setStaticF___9__364_1(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>*, "<>9__364_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* HoudiniEngineUnity::HEU_HoudiniAsset___c::getStaticF___9__364_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>*, "<>9__364_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c::setStaticF___9__364_2(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>*, "<>9__364_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>* HoudiniEngineUnity::HEU_HoudiniAsset___c::getStaticF___9__364_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>*, "<>9__364_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidCurves_b__309_0(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidCurves>b__309_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curve);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidLists_b__364_0(::HoudiniEngineUnity::HEU_ObjectNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidLists>b__364_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidLists_b__364_1(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidLists>b__364_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curve);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset___c::_ClearInvalidLists_b__364_2(::HoudiniEngineUnity::HEU_MaterialData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>::get(), "<ClearInvalidLists>b__364_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c* HoudiniEngineUnity::HEU_HoudiniAsset___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniAsset___c*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset___c::HEU_HoudiniAsset___c() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a23a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0._BakeToExistingPrefab_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::*)(::UnityEngine::Transform*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::_BakeToExistingPrefab_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3a23a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0*>::get(), "<BakeToExistingPrefab>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::__cordl_internal_get_previousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* const&
HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::__cordl_internal_get_previousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr void
HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::__cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousTransformValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::_BakeToExistingPrefab_b__0(::UnityEngine::Transform* trans) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0*>::get(), "<BakeToExistingPrefab>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trans);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0* HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0::HEU_HoudiniAsset___c__DisplayClass281_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a23b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0._CopyPropertiesTo_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::_CopyPropertiesTo_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a23b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0*>::get(), "<CopyPropertiesTo>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_get_newAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newAsset;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_get_newAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newAsset;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_set_newAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>*& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* const& HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::__cordl_internal_set___9__0(::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::_CopyPropertiesTo_b__0(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0*>::get(), "<CopyPropertiesTo>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curve);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0* HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0::HEU_HoudiniAsset___c__DisplayClass365_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_AssetInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a134a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_NodeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_NodeInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a134bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_NodeInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetOpName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_AssetOpName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetHelp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetHelp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformInputCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_TransformInputCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GeoInputCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GeoInputCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a134fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_LoadAssetFromMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_LoadAssetFromMemory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_LoadAssetFromMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a1350c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_LoadAssetFromMemory",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AlwaysOverwriteOnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_AlwaysOverwriteOnLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AlwaysOverwriteOnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AlwaysOverwriteOnLoad",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1352c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_HandleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_OwnerGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a10c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_OwnerGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_RootGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_RootGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_Parameters> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1353c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_Parameters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SubassetNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SubassetNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1354c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_SessionID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_WarnedPrefabNotSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_WarnedPrefabNotSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_WarnedPrefabNotSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a1355c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_WarnedPrefabNotSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_InstanceInputUIState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_InstanceInputUIState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_InstanceInputUIState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_InstanceInputUIState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateUVs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateUVs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1358c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateTangents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateTangents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a135a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a135a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateNormals",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PushTransformToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a135b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_PushTransformToHoudini", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PushTransformToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a135bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PushTransformToHoudini",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformChangeTriggersCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a135c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_TransformChangeTriggersCooks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_TransformChangeTriggersCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a135d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_TransformChangeTriggersCooks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CookingTriggersDownCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a135dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CookingTriggersDownCooks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CookingTriggersDownCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a135e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CookingTriggersDownCooks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AutoCookOnParameterChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a135f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_AutoCookOnParameterChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AutoCookOnParameterChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a135f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AutoCookOnParameterChange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_IgnoreNonDisplayNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_IgnoreNonDisplayNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_IgnoreNonDisplayNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a1360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_IgnoreNonDisplayNodes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateMeshUsingPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateMeshUsingPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateMeshUsingPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateMeshUsingPoints",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_UseLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1362c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_UseLODGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_UseLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_UseLODGroups",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SplitGeosByGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SplitGeosByGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SplitGeosByGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SplitGeosByGroup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionSyncAutoCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SessionSyncAutoCook", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SessionSyncAutoCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a1365c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SessionSyncAutoCook",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_BakeUpdateKeepPreviousTransformValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_BakeUpdateKeepPreviousTransformValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_BakeUpdateKeepPreviousTransformValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_BakeUpdateKeepPreviousTransformValues",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PauseCooking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1367c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_PauseCooking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PauseCooking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PauseCooking",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveEditorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveEditorEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveEditorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveEditorEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDrawCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveDrawCollision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDrawCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDrawCollision", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetCurveDrawColliders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetCurveDrawLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurveDrawLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::LayerMask)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurveDrawLayerMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDisableScaleRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveDisableScaleRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDisableScaleRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a136d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDisableScaleRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveCookOnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveCookOnDrag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveCookOnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a136e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveCookOnDrag",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a136f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveFrameSelectedNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a136fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodeDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_CurveFrameSelectedNodeDistance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodeDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(float_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodeDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandlesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_HandlesEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_HandlesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_HandlesEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_EditableNodesToolsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1372c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_EditableNodesToolsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_EditableNodesToolsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_EditableNodesToolsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_ToolsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_ToolsInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SerializedMetaData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SerializedMetaData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PendingAutoCookOnMouseRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a13750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_PendingAutoCookOnMouseRelease",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PendingAutoCookOnMouseRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PendingAutoCookOnMouseRelease",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetupAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, ::StringW, ::UnityEngine::GameObject*, ::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x3a13764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetupAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpAndDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a13ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CleanUpAndDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetSavedInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a13dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "IsAssetSavedInScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvalidateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a13b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "InvalidateAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AssetUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AssetUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PostAssetUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "PostAssetUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestResetParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestResetParameters",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestReload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a13dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestReload",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a03624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestCook", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestBakeInPlace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a13e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "RequestBakeInPlace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearBuildRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a13e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearBuildRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasValidAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a13e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HasValidAssetPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3a13e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessRebuild", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeReloadEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3a14be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeReloadEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3a14348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartRebuild", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.FinishRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x3a144e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "FinishRebuild",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a16b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookBlocking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3a17338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookBlocking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoPostCookWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3a176e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DoPostCookWork", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsValidForInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::ByRef<::StringW>)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a1785c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsValidForInteraction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3a178c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnValidate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ExecutePostCookCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3a17294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ExecutePostCookCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokePostCookEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3a178f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokePostCookEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalStartRecook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x3a16c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalStartRecook", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalSetAssetID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3a14d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalSetAssetID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCookStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus, ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a14a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCookStatus", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCookStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a18654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCookStatus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessPoskCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x3a1865c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ProcessPoskCook", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartHoudiniCookNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a185f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartHoudiniCookNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessHoudiniCookStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3a17448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessHoudiniCookStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoesAssetRequireRecook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x3a19998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "DoesAssetRequireRecook", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteSessionDataOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3a19da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "DeleteSessionDataOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAllGeneratedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3a13b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAllGeneratedData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3a1a0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CleanUpInputNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAssetCacheData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a1a49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAssetCacheData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3a15d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DownloadParameterPresetFromHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3a189f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DownloadParameterPresetFromHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadParameterPresetToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3a17b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadParameterPresetToHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateParameterInputsToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3a17d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateParameterInputsToHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetFileWithSubasset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x3a14f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetFileWithSubasset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAndCookAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ByRef<int32_t>, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x3a154fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAndCookAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAssetInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x3a157f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAssetInputs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadCurvesParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3a17e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadCurvesParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x3a18004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadAttributeValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncDirtyAttributesToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3a19350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SyncDirtyAttributesToHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3a18420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadInputNodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasInputNodeTransformChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3a1a7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HasInputNodeTransformChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyInputNodesCookFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3a16a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "NotifyInputNodesCookFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3a15f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjects", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateAllObjectNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x3a18ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateAllObjectNodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjectNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>, ::ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a1a91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjectNode", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateObjectsGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3a16094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateObjectsGeometry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateAttributesStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a164f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateAttributesStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x3a161ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3a16648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateHandles", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3a1a37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CleanUpHandles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandleByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_Handle> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3a1a9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandleByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1ab5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a1ab64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NumHandles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_Transform (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3a1abb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectWithID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a1adec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectWithID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeBakedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3a1aebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeBakedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CloneAssetWithoutHDA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::ByRef<::StringW>, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x3a1b01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CloneAssetWithoutHDA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x3a1b768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToNewPrefab", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewStandalone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3a1bb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "BakeToNewStandalone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x3a1bd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingPrefab", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingStandalone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone)> {
  constexpr static std::size_t size = 0xc2c;
  constexpr static std::size_t addrs = 0x3a1c388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingStandalone", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyUpstreamCooked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3a1cfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NotifyUpstreamCooked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ConnectToUpstream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a1cfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ConnectToUpstream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisconnectFromUpstream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a1d0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DisconnectFromUpstream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddDownstreamConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3a1d06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddDownstreamConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveDownstreamConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a1d178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveDownstreamConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearAllUpstreamConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3a19e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearAllUpstreamConnections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateInputsOnAssetRecreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a17a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateInputsOnAssetRecreation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReconnectInputsUpstreamNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3a1d1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ReconnectInputsUpstreamNotifications",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHoudiniTransformAndApply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x3a1d364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHoudiniTransformAndApply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadUnityTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3a167d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadUnityTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::HoudiniEngineUnity::HEU_MaterialData> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3a1d624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetMaterialData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1d7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetMaterialCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearMaterialCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a19e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearMaterialCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateHoudiniMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3a18a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateHoudiniMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveUnusedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x3a19530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "RemoveUnusedMaterials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3a1d84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValidInHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a14d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValidInHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a1d990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasTransformChangedSinceLastUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a1d9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "HasTransformChangedSinceLastUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetClonableParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3a1b5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetClonableParts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a14a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGameObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a1da54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGeoNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a1dba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGeoNodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInternalHDAPartWithGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_PartData> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3a1dcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInternalHDAPartWithGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1de94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurves",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_Curve> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3a1de9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a1a4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearInvalidCurves", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetEditableCurveCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3a1e054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetEditableCurveCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a08b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a0f11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurveDrawCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a1e1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurveDrawCollider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurveDrawCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a1e27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurveDrawCollider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearCurveDrawColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a1e2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearCurveDrawColliders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1e348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_InputNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3a1e350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_InputNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3a1a5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetInputNode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodeByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_InputNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a1e4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodeByIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetNonParameterInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3a1e53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetNonParameterInputNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a107f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddInputNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a0f0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveInputNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InputNodeNotifyRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a1e75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InputNodeNotifyRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCacheCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3a1e760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetVolumeCacheCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCaches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1e7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetVolumeCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddVolumeCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a1e7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddVolumeCache", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3a130f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributesStores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a1e880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetAttributesStores", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumAttributeStores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a1e888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "NumAttributeStores", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3a1e8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAttributeStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3a1ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddAttributeStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a1a750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveAttributeStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReorderAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3a1ebec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ReorderAttributeStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAPartWithGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_PartData> (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3a1ecfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAPartWithGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAAssetFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3a1ee40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAAssetFromGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3a1ef84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetOutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a1f0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PopulateObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3a1f160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "PopulateObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddToAssetDBCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::StringW, ::UnityEngine::Object*, ::StringW, ::ByRef<::UnityEngine::Object*>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a1f2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddToAssetDBCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurvesVisibilityInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3a1f350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurvesVisibilityInScene",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3a03628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetSession",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetValidAssetCacheFolderPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3a1d7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetValidAssetCacheFolderPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HideAllGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3a1f534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HideAllGeometry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3a1f680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CalculateVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisableAllColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3a1f7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "DisableAllColliders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateColliderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3a1f918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CalculateColliderState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DuplicateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x3a1fa64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DuplicateAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectNodeByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3a03fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectNodeByName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetMaterialOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3a20978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ResetMaterialOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetParametersToDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x3a20b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ResetParametersToDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetPreset* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x3a06868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetPreset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetPresetAndCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AssetPreset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x3a07684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetPresetAndCook", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyRecookPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a194b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ApplyRecookPreset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyInputPresets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x3a20ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyInputPresets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCachePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_VolumeCachePreset* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3a21760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetVolumeCachePreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCachePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCachePreset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a21938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCachePreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyVolumeCachePresets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x3a2129c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyVolumeCachePresets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncInternalParametersForUndoCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3a219a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SyncInternalParametersForUndoCompare",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateSessionSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3a21ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "UpdateSessionSync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateTotalCookCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a15788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "UpdateTotalCookCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetAndCopyInstantiatedProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x3a21c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ResetAndCopyInstantiatedProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiationMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3a21fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetInstantiationMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiatedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a221b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetInstantiatedObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x3a140dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearInvalidLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CopyPropertiesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x3a1fd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CopyPropertiesTo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetSoftDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3a2224c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetSoftDeleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x10b4;
  constexpr static std::size_t addrs = 0x3a2244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3a23500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetType;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetType;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetType(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assetType = value;
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetInfo;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetInfo(::HoudiniEngineUnity::HAPI_AssetInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assetInfo = value;
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__nodeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__nodeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeInfo;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__nodeInfo(::HoudiniEngineUnity::HAPI_NodeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeInfo = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetName;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetOpName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetOpName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetOpName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetOpName;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetOpName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetOpName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetHelp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetHelp;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetHelp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetHelp;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetHelp(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetHelp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetID;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assetID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetPath;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__loadAssetFromMemory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadAssetFromMemory;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__loadAssetFromMemory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadAssetFromMemory;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__loadAssetFromMemory(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadAssetFromMemory = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__alwaysOverwriteOnLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOverwriteOnLoad;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__alwaysOverwriteOnLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOverwriteOnLoad;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__alwaysOverwriteOnLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alwaysOverwriteOnLoad = value;
}
constexpr ::UnityW<::UnityEngine::Object>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetFileObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetFileObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileObject;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetFileObject(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetFileObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__objectNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__objectNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__objectNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__rootGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__rootGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootGameObject;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__rootGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__materialCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__materialCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialCache;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__materialCache(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_Parameters>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_Parameters> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__parameters(::UnityW<::HoudiniEngineUnity::HEU_Parameters> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Matrix4x4& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__lastSyncedTransformMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSyncedTransformMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__lastSyncedTransformMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSyncedTransformMatrix;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__lastSyncedTransformMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSyncedTransformMatrix = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetCacheFolderPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetCacheFolderPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__assetCacheFolderPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetCacheFolderPath;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__assetCacheFolderPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetCacheFolderPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__subassetNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subassetNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__subassetNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subassetNames;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__subassetNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subassetNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__selectedSubassetIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubassetIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__selectedSubassetIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubassetIndex;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__selectedSubassetIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedSubassetIndex = value;
}
constexpr ::HoudiniEngineUnity::HEU_AssetPreset*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__savedAssetPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____savedAssetPreset;
}
constexpr ::HoudiniEngineUnity::HEU_AssetPreset* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__savedAssetPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____savedAssetPreset;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__savedAssetPreset(::HoudiniEngineUnity::HEU_AssetPreset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____savedAssetPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_RecookPreset*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__recookPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recookPreset;
}
constexpr ::HoudiniEngineUnity::HEU_RecookPreset* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__recookPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recookPreset;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__recookPreset(::HoudiniEngineUnity::HEU_RecookPreset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recookPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__totalCookCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalCookCount;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__totalCookCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalCookCount;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__totalCookCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalCookCount = value;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__requestBuildAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestBuildAction;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__requestBuildAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestBuildAction;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__requestBuildAction(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestBuildAction = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__checkParameterChangeForCook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkParameterChangeForCook;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__checkParameterChangeForCook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkParameterChangeForCook;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__checkParameterChangeForCook(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkParameterChangeForCook = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__skipCookCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skipCookCheck;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__skipCookCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skipCookCheck;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__skipCookCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skipCookCheck = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__uploadParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadParameters;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__uploadParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadParameters;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__uploadParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uploadParameters = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__forceUploadInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceUploadInputs;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__forceUploadInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceUploadInputs;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__forceUploadInputs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceUploadInputs = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__upstreamCookChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upstreamCookChanged;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__upstreamCookChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upstreamCookChanged;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__upstreamCookChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upstreamCookChanged = value;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookStatus;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookStatus;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__cookStatus(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cookStatus = value;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__lastCookResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCookResult;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__lastCookResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCookResult;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__lastCookResult(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastCookResult = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__isCookingAssetReloaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCookingAssetReloaded;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__isCookingAssetReloaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCookingAssetReloaded;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__isCookingAssetReloaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCookingAssetReloaded = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bForceUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bForceUpdate;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bForceUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bForceUpdate;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__bForceUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bForceUpdate = value;
}
constexpr int64_t& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__sessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionID;
}
constexpr int64_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__sessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionID;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__sessionID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionID = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__WarnedPrefabNotSupported_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WarnedPrefabNotSupported_k__BackingField;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__WarnedPrefabNotSupported_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WarnedPrefabNotSupported_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__WarnedPrefabNotSupported_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WarnedPrefabNotSupported_k__BackingField = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__uiLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiLocked;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__uiLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiLocked;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__uiLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiLocked = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showHDAOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showHDAOptions;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showHDAOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showHDAOptions;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showHDAOptions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showHDAOptions = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showGenerateSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showGenerateSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showGenerateSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showGenerateSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showGenerateSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showGenerateSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showBakeSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBakeSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showBakeSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBakeSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showBakeSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showBakeSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showEventsSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showEventsSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showEventsSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showEventsSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showEventsSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showEventsSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showCurvesSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showCurvesSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showCurvesSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showCurvesSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showCurvesSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showCurvesSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showInputNodesSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInputNodesSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showInputNodesSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInputNodesSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showInputNodesSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showInputNodesSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showToolsSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showToolsSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showToolsSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showToolsSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showToolsSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showToolsSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showTerrainSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTerrainSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__showTerrainSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTerrainSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__showTerrainSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTerrainSection = value;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__instanceInputUIState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceInputUIState;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__instanceInputUIState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceInputUIState;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__instanceInputUIState(::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instanceInputUIState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::ReloadEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__reloadEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadEvent;
}
constexpr ::HoudiniEngineUnity::ReloadEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__reloadEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__reloadEvent(::HoudiniEngineUnity::ReloadEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reloadEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::CookedEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedEvent;
}
constexpr ::HoudiniEngineUnity::CookedEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__cookedEvent(::HoudiniEngineUnity::CookedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cookedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::BakedEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bakedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedEvent;
}
constexpr ::HoudiniEngineUnity::BakedEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bakedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__bakedEvent(::HoudiniEngineUnity::BakedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bakedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__reloadDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadDataEvent;
}
constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__reloadDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadDataEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__reloadDataEvent(::HoudiniEngineUnity::HEU_ReloadDataEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reloadDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedDataEvent;
}
constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedDataEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__cookedDataEvent(::HoudiniEngineUnity::HEU_CookedDataEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cookedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bakedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedDataEvent;
}
constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bakedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedDataEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__bakedDataEvent(::HoudiniEngineUnity::HEU_BakedDataEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bakedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__preAssetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preAssetEvent;
}
constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__preAssetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preAssetEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__preAssetEvent(::HoudiniEngineUnity::HEU_PreAssetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preAssetEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__refreshUIDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshUIDelegate;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__refreshUIDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshUIDelegate;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__refreshUIDelegate(::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refreshUIDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::CookedEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__downstreamConnectionCookedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downstreamConnectionCookedEvent;
}
constexpr ::HoudiniEngineUnity::CookedEvent* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__downstreamConnectionCookedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downstreamConnectionCookedEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__downstreamConnectionCookedEvent(::HoudiniEngineUnity::CookedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downstreamConnectionCookedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateUVs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateUVs;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateUVs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateUVs;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__generateUVs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateUVs = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateTangents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateTangents;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateTangents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateTangents;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__generateTangents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateTangents = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateNormals;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateNormals;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__generateNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateNormals = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__pushTransformToHoudini() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pushTransformToHoudini;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__pushTransformToHoudini() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pushTransformToHoudini;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__pushTransformToHoudini(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pushTransformToHoudini = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__transformChangeTriggersCooks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformChangeTriggersCooks;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__transformChangeTriggersCooks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformChangeTriggersCooks;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__transformChangeTriggersCooks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformChangeTriggersCooks = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookingTriggersDownCooks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookingTriggersDownCooks;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__cookingTriggersDownCooks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookingTriggersDownCooks;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__cookingTriggersDownCooks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cookingTriggersDownCooks = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__autoCookOnParameterChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCookOnParameterChange;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__autoCookOnParameterChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCookOnParameterChange;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__autoCookOnParameterChange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoCookOnParameterChange = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__ignoreNonDisplayNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNonDisplayNodes;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__ignoreNonDisplayNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNonDisplayNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__ignoreNonDisplayNodes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreNonDisplayNodes = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateMeshUsingPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateMeshUsingPoints;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__generateMeshUsingPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateMeshUsingPoints;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__generateMeshUsingPoints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateMeshUsingPoints = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__useLODGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLODGroups;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__useLODGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLODGroups;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__useLODGroups(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLODGroups = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__splitGeosByGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splitGeosByGroup;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__splitGeosByGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splitGeosByGroup;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__splitGeosByGroup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____splitGeosByGroup = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__sessionSyncAutoCook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionSyncAutoCook;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__sessionSyncAutoCook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionSyncAutoCook;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__sessionSyncAutoCook(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionSyncAutoCook = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bakeUpdateKeepPreviousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeUpdateKeepPreviousTransformValues;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__bakeUpdateKeepPreviousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeUpdateKeepPreviousTransformValues;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__bakeUpdateKeepPreviousTransformValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakeUpdateKeepPreviousTransformValues = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__pauseCooking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseCooking;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__pauseCooking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseCooking;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__pauseCooking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseCooking = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveEditorEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveEditorEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveEditorEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveEditorEnabled;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveEditorEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveEditorEnabled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curves() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curves;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curves() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curves;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curves(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curves)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDrawCollision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawCollision;
}
constexpr ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDrawCollision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawCollision;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveDrawCollision(::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveDrawCollision = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDrawColliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDrawColliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawColliders;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveDrawColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curveDrawColliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDrawLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawLayerMask;
}
constexpr ::UnityEngine::LayerMask const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDrawLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawLayerMask;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveDrawLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveDrawLayerMask = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveProjectMaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectMaxDistance;
}
constexpr float_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveProjectMaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectMaxDistance;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveProjectMaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveProjectMaxDistance = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveProjectDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectDirection;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveProjectDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectDirection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveProjectDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveProjectDirection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDisableScaleRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDisableScaleRotation;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveDisableScaleRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDisableScaleRotation;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveDisableScaleRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveDisableScaleRotation = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveCookOnDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveCookOnDrag;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveCookOnDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveCookOnDrag;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveCookOnDrag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveCookOnDrag = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveFrameSelectedNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodes;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveFrameSelectedNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveFrameSelectedNodes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveFrameSelectedNodes = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveFrameSelectedNodeDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodeDistance;
}
constexpr float_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__curveFrameSelectedNodeDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodeDistance;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__curveFrameSelectedNodeDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveFrameSelectedNodeDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__inputNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__inputNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__inputNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__handles(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__handlesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlesEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__handlesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlesEnabled;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__handlesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlesEnabled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__volumeCaches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeCaches;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__volumeCaches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeCaches;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__volumeCaches(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeCaches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__attributeStores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeStores;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__attributeStores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeStores;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__attributeStores(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeStores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__editableNodesToolsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableNodesToolsEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__editableNodesToolsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableNodesToolsEnabled;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__editableNodesToolsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editableNodesToolsEnabled = value;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__toolsInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolsInfo;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__toolsInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolsInfo;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__toolsInfo(::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toolsInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__serializedMetaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedMetaData;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__serializedMetaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedMetaData;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__serializedMetaData(::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializedMetaData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__pendingAutoCookOnMouseRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingAutoCookOnMouseRelease;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_get__pendingAutoCookOnMouseRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingAutoCookOnMouseRelease;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__cordl_internal_set__pendingAutoCookOnMouseRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingAutoCookOnMouseRelease = value;
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_AssetInfo HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_AssetInfo, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_NodeInfo HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_NodeInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_NodeInfo, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetOpName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetHelp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_TransformInputCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GeoInputCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_LoadAssetFromMemory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_LoadAssetFromMemory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_AlwaysOverwriteOnLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AlwaysOverwriteOnLoad",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_HandleCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_OwnerGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_RootGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_Parameters> HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_Parameters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_Parameters>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SubassetNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline int64_t HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_SessionID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_WarnedPrefabNotSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_WarnedPrefabNotSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_InstanceInputUIState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_InstanceInputUIState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_GenerateUVs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateUVs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GenerateTangents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateTangents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GenerateNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateNormals",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_PushTransformToHoudini", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PushTransformToHoudini",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_TransformChangeTriggersCooks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_TransformChangeTriggersCooks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CookingTriggersDownCooks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CookingTriggersDownCooks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_AutoCookOnParameterChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AutoCookOnParameterChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_IgnoreNonDisplayNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_IgnoreNonDisplayNodes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GenerateMeshUsingPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateMeshUsingPoints",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_UseLODGroups",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_UseLODGroups",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SplitGeosByGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SplitGeosByGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SessionSyncAutoCook", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SessionSyncAutoCook",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_BakeUpdateKeepPreviousTransformValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_BakeUpdateKeepPreviousTransformValues",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_PauseCooking",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PauseCooking",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveEditorEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveEditorEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveDrawCollision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision(::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDrawCollision", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetCurveDrawColliders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetCurveDrawLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask(::UnityEngine::LayerMask mask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurveDrawLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveDisableScaleRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDisableScaleRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveCookOnDrag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveCookOnDrag",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveFrameSelectedNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_CurveFrameSelectedNodeDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodeDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_HandlesEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_HandlesEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_EditableNodesToolsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_EditableNodesToolsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_ToolsInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SerializedMetaData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_PendingAutoCookOnMouseRelease",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PendingAutoCookOnMouseRelease",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType assetType, ::StringW filePath, ::UnityEngine::GameObject* rootGameObject,
                                                             ::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetupAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetType, filePath, rootGameObject, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CleanUpAndDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "IsAssetSavedInScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvalidateAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AssetUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "PostAssetUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters(bool bAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestResetParameters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bAsync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload(bool bAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestReload",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bAsync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook(bool bCheckParametersChanged, bool bAsync, bool bSkipCookCheck, bool bUploadParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestCook", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bCheckParametersChanged, bAsync, bSkipCookCheck, bUploadParameters);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "RequestBakeInPlace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearBuildRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "HasValidAssetPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessRebuild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeReloadEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bCookSuccess, outputObjects);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartRebuild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "FinishRebuild",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs,
                                                              bool bCookingSessionSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs,
                                                          bCookingSessionSync);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs,
                                                                 bool bCookingSessionSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookBlocking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs,
                                                          bCookingSessionSync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DoPostCookWork", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction(::ByRef<::StringW> errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsValidForInteraction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, errorMessage);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ExecutePostCookCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokePostCookEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bCookSuccess, outputObjects);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs,
                                                                      bool bCookingSessionSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalStartRecook", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs,
                                                          bCookingSessionSync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID(int32_t assetID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalSetAssetID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetID);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus status, ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCookStatus", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, result);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCookStatus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessPoskCook",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartHoudiniCookNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus(bool bAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessHoudiniCookStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bAsync);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "DoesAssetRequireRecook", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "DeleteSessionDataOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData(bool bIsRebuild) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAllGeneratedData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bIsRebuild);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CleanUpInputNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData(bool bRegisterUndo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAssetCacheData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bRegisterUndo);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateParameters", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DownloadParameterPresetFromHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadParameterPresetToHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateParameterInputsToHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bForceUpdate);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset(::HoudiniEngineUnity::HEU_SessionBase* session, bool bPromptForSubasset, int32_t desiredSubassetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetFileWithSubasset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, bPromptForSubasset, desiredSubassetIndex);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t subassetIndex, ::ByRef<int32_t> newAssetID, bool bCookTemplatedGeos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAndCookAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, subassetIndex, newAssetID, bCookTemplatedGeos);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAssetInputs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters(::HoudiniEngineUnity::HEU_SessionBase* session, bool bCheckParamsChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadCurvesParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bCheckParamsChanged);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadAttributeValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SyncDirtyAttributesToHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate, bool bUpdateAll) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadInputNodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bForceUpdate, bUpdateAll);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "HasInputNodeTransformChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "NotifyInputNodesCookFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjects", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateAllObjectNodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                             ::ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo,
                                                                                                             ::ByRef<::HoudiniEngineUnity::HAPI_Transform> objectTranform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjectNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, false>(this, ___internal_method, session, objectInfo, objectTranform);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateObjectsGeometry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bRebuild);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateAttributesStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateHandles", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CleanUpHandles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_Handle> HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName(::StringW handleName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandleByName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_Handle>, false>(this, ___internal_method, handleName);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NumHandles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_Transform HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t objectID) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectTransform", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_Transform, false>(this, ___internal_method, session, objectID);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID(int32_t objId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectWithID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, false>(this, ___internal_method, objId);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent(bool bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects, bool isNewBake) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeBakedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bSuccess, outputObjects, isNewBake);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA(::ByRef<::StringW> bakedAssetPath, bool bWriteMeshesToAssetDatabase,
                                                                                                      bool bReconnectPrefabInstances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CloneAssetWithoutHDA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, bakedAssetPath, bWriteMeshesToAssetDatabase, bReconnectPrefabInstances);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab(::StringW destinationPrefabPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToNewPrefab", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, destinationPrefabPath);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "BakeToNewStandalone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab(::UnityEngine::GameObject* bakeTargetGO) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakeTargetGO);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone(::UnityEngine::GameObject* bakeTargetGO) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingStandalone", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakeTargetGO);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset, bool bSuccess,
                                                                       ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NotifyUpstreamCooked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upstreamAsset, bSuccess, outputs);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ConnectToUpstream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upstreamAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DisconnectFromUpstream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upstreamAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection(
    ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddDownstreamConnection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection(
    ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveDownstreamConnection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearAllUpstreamConnections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateInputsOnAssetRecreation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ReconnectInputsUpstreamNotifications",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHoudiniTransformAndApply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform(::HoudiniEngineUnity::HEU_SessionBase* session, bool bOnlySendIfChangedFromLastSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadUnityTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bOnlySendIfChangedFromLastSync);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetMaterialData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, false>(this, ___internal_method, material);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetMaterialCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearMaterialCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateHoudiniMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "RemoveUnusedMaterials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValidInHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "HasTransformChangedSinceLastUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetClonableParts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clonableParts);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGameObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputObjects);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputs);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* outputGeoNodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGeoNodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputGeoNodes);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInternalHDAPartWithGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_PartData>, false>(this, ___internal_method, outputGameObject);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurves",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>*, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_Curve> HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve(::StringW curveName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurve", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_Curve>, false>(this, ___internal_method, curveName);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearInvalidCurves", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetEditableCurveCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurve", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curve);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurve", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curve);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider(::UnityEngine::Collider* newCollider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurveDrawCollider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCollider);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider(::UnityEngine::Collider* collider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurveDrawCollider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collider);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearCurveDrawColliders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode(::StringW inputName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_InputNode>, false>(this, ___internal_method, inputName);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode(::StringW inputName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetInputNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_InputNode>, false>(this, ___internal_method, inputName);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodeByIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_InputNode>, false>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetNonParameterInputNodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode(::HoudiniEngineUnity::HEU_InputNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddInputNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode(::HoudiniEngineUnity::HEU_InputNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveInputNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved(::HoudiniEngineUnity::HEU_InputNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InputNodeNotifyRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetVolumeCacheCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetVolumeCaches",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache* cache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddVolumeCache", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache* cache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCache", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetAttributesStores", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "NumAttributeStores", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore(::StringW geoName, int32_t partID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAttributeStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>, false>(this, ___internal_method, geoName, partID);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore* attributeStore) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddAttributeStore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeStore);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore* attributeStore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveAttributeStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeStore);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore(int32_t oldIndex, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ReorderAttributeStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldIndex, newIndex);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAPartWithGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_PartData>, false>(nullptr, ___internal_method, outputGameObject);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject(::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAAssetFromGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, false>(nullptr, ___internal_method, outputGameObject);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput(::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetOutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot(::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetRoot", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* objInstanceInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "PopulateObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objInstanceInfos);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache(::StringW assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::StringW relativeFolderPath,
                                                                    ::ByRef<::UnityEngine::Object*> targetAssetDBObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddToAssetDBCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetObjectFileName, objectToAdd, relativeFolderPath, targetAssetDBObject);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene(bool bShow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurvesVisibilityInScene",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bShow);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession(bool bCreateIfInvalid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetSession",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(this, ___internal_method, bCreateIfInvalid);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetValidAssetCacheFolderPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "HideAllGeometry",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CalculateVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "DisableAllColliders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CalculateColliderState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset(::UnityEngine::GameObject* newRootGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DuplicateAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, newRootGameObject);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName(::StringW objName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectNodeByName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, false>(this, ___internal_method, objName);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ResetMaterialOverrides", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ResetParametersToDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AssetPreset* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetPreset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetPreset*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook(::HoudiniEngineUnity::HEU_AssetPreset* assetPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetPresetAndCook", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetPreset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ApplyRecookPreset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets,
                                                                    bool bAddMissingInputsToRecookPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyInputPresets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, inputPresets, bAddMissingInputsToRecookPreset);
}
inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset(::StringW objName, ::StringW geoName, int32_t tile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetVolumeCachePreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_VolumeCachePreset*, false>(this, ___internal_method, objName, geoName, tile);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* preset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCachePreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preset);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyVolumeCachePresets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, volumeCachePresets);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SyncInternalParametersForUndoCompare",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "UpdateSessionSync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "UpdateTotalCookCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties(::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ResetAndCopyInstantiatedProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAsset);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetInstantiationMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetInstantiatedObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearInvalidLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo(::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CopyPropertiesTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetSoftDeleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo(::HoudiniEngineUnity::HEU_HoudiniAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniAsset*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>"
constexpr HoudiniEngineUnity::HEU_HoudiniAsset::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>*
HoudiniEngineUnity::HEU_HoudiniAsset::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_HoudiniAsset__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset::HEU_HoudiniAsset() {}
