#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BakedDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_RecookPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetSerializedMetaData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedDataEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "HoudiniEngineUnity/zzzz__ReloadEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__CookedEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstanceInputUIState_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__BakedEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::__HEU_HoudiniAsset__HEU_AssetType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::__HEU_HoudiniAsset__HEU_AssetType() {}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_INVALID{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_HDA{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_CURVE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType::TYPE_INPUT{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::__HEU_HoudiniAsset__AssetBuildAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::__HEU_HoudiniAsset__AssetBuildAction() {}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::RELOAD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::COOK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::INVALID{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::STRIP_HEDATA{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::DUPLICATE{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction::RESET_PARAMS{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::__HEU_HoudiniAsset__AssetCookStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::__HEU_HoudiniAsset__AssetCookStatus() {}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::COOKING{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::POSTCOOK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::LOADING{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::POSTLOAD{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::PRELOAD{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus::SELECT_SUBASSET{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::__HEU_HoudiniAsset__AssetCookResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::__HEU_HoudiniAsset__AssetCookResult() {}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::SUCCESS{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult::ERRORED{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::Object*, void*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x216d018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)()>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x216d0d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x216d0e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::IAsyncResult*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216d108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate* HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>(object, method));
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                                                             "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(),
                                                                             "BeginInvoke", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate::__HEU_HoudiniAsset__UpdateUIDelegate() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::__HEU_HoudiniAsset__AssetInstantiationMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::__HEU_HoudiniAsset__AssetInstantiationMethod() {}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::DEFAULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::DUPLICATED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod::UNDO{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::*)()>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0._BakeToExistingPrefab_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::*)(::UnityEngine::Transform*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_BakeToExistingPrefab_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x216d11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(), "<BakeToExistingPrefab>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__get_previousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*> const&
HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__get_previousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousTransformValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>());
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::_BakeToExistingPrefab_b__0(::UnityEngine::Transform* trans) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0*>::get(), "<BakeToExistingPrefab>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trans);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass281_0::__HEU_HoudiniAsset____c__DisplayClass281_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)()>(&::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidCurves_b__309_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidCurves_b__309_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidCurves>b__309_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_ObjectNode*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidLists>b__364_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidLists>b__364_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_MaterialData*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x216d3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidLists>b__364_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9(::HoudiniEngineUnity::__HEU_HoudiniAsset____c* value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(
      std::forward<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>(value));
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__309_0(::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>*, "<>9__309_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(
      std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__309_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>*, "<>9__309_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__364_0(::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, bool>*, "<>9__364_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(
      std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__364_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, bool>*, "<>9__364_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__364_1(::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>*, "<>9__364_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(
      std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__364_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, bool>*, "<>9__364_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::setStaticF___9__364_2(::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, bool>*, "<>9__364_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>(
      std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, bool>*>(value));
}
inline ::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, bool>* HoudiniEngineUnity::__HEU_HoudiniAsset____c::getStaticF___9__364_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, bool>*, "<>9__364_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get>();
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c* HoudiniEngineUnity::__HEU_HoudiniAsset____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>());
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidCurves_b__309_0(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidCurves>b__309_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curve);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_0(::HoudiniEngineUnity::HEU_ObjectNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidLists>b__364_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_1(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidLists>b__364_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curve);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_2(::HoudiniEngineUnity::HEU_MaterialData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c*>::get(), "<ClearInvalidLists>b__364_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset____c::__HEU_HoudiniAsset____c() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::*)()>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0._CopyPropertiesTo_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_CopyPropertiesTo_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x216d40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(), "<CopyPropertiesTo>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_newAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newAsset;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_newAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newAsset;
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__set_newAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>*> const& HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__set___9__0(::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0* HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>());
}
inline void HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::_CopyPropertiesTo_b__0(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0*>::get(), "<CopyPropertiesTo>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curve);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset____c__DisplayClass365_0::__HEU_HoudiniAsset____c__DisplayClass365_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_AssetInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x215bd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_NodeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_NodeInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x215bd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_NodeInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetOpName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_AssetOpName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetHelp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetHelp",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformInputCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_TransformInputCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GeoInputCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GeoInputCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetPath",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_LoadAssetFromMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_LoadAssetFromMemory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_LoadAssetFromMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_LoadAssetFromMemory",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AlwaysOverwriteOnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_AlwaysOverwriteOnLoad", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AlwaysOverwriteOnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AlwaysOverwriteOnLoad",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_HandleCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_OwnerGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2159400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_OwnerGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_RootGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_RootGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Parameters* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_Parameters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SubassetNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SubassetNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_SessionID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_WarnedPrefabNotSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_WarnedPrefabNotSupported", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_WarnedPrefabNotSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bdbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_WarnedPrefabNotSupported",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_InstanceInputUIState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InstanceInputUIState* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_InstanceInputUIState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_InstanceInputUIState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_InstanceInputUIState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateUVs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateUVs", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateTangents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateTangents",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateNormals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateNormals",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PushTransformToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_PushTransformToHoudini", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PushTransformToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PushTransformToHoudini",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformChangeTriggersCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_TransformChangeTriggersCooks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_TransformChangeTriggersCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_TransformChangeTriggersCooks",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CookingTriggersDownCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CookingTriggersDownCooks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CookingTriggersDownCooks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CookingTriggersDownCooks",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AutoCookOnParameterChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_AutoCookOnParameterChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AutoCookOnParameterChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AutoCookOnParameterChange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_IgnoreNonDisplayNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_IgnoreNonDisplayNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_IgnoreNonDisplayNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_IgnoreNonDisplayNodes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateMeshUsingPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_GenerateMeshUsingPoints", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateMeshUsingPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateMeshUsingPoints",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_UseLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215be8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_UseLODGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_UseLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215be94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_UseLODGroups",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SplitGeosByGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SplitGeosByGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SplitGeosByGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SplitGeosByGroup",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionSyncAutoCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215beb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SessionSyncAutoCook", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SessionSyncAutoCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SessionSyncAutoCook",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_BakeUpdateKeepPreviousTransformValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_BakeUpdateKeepPreviousTransformValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_BakeUpdateKeepPreviousTransformValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_BakeUpdateKeepPreviousTransformValues",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PauseCooking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_PauseCooking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PauseCooking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PauseCooking",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveEditorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveEditorEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveEditorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveEditorEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDrawCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveDrawCollision", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDrawCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDrawCollision", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Collider*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetCurveDrawColliders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetCurveDrawLayerMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurveDrawLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::LayerMask)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurveDrawLayerMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDisableScaleRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveDisableScaleRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDisableScaleRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDisableScaleRotation",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveCookOnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveCookOnDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveCookOnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveCookOnDrag",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveFrameSelectedNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodeDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_CurveFrameSelectedNodeDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodeDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(float_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodeDistance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandlesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_HandlesEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_HandlesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_HandlesEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_EditableNodesToolsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_EditableNodesToolsEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_EditableNodesToolsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_EditableNodesToolsEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_ToolsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ToolsInfo* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_ToolsInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SerializedMetaData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetSerializedMetaData* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_SerializedMetaData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PendingAutoCookOnMouseRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215bfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "get_PendingAutoCookOnMouseRelease", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PendingAutoCookOnMouseRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215bfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PendingAutoCookOnMouseRelease",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetupAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, ::StringW, ::UnityEngine::GameObject*, ::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x215bfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetupAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType>::get(),
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
  constexpr static std::size_t addrs = 0x215c340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CleanUpAndDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetSavedInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x215c640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "IsAssetSavedInScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvalidateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215c39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "InvalidateAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AssetUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AssetUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PostAssetUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "PostAssetUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestResetParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestResetParameters",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestReload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215c670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestReload", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x214be64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestCook", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestBakeInPlace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x215c674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "RequestBakeInPlace", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearBuildRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x215c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearBuildRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasValidAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x215c69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HasValidAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x215c6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessRebuild", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeReloadEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x215d43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeReloadEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x215cbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartRebuild", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.FinishRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x215cd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "FinishRebuild",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x215f3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
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
  constexpr static std::size_t addrs = 0x215fb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookBlocking", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
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
  constexpr static std::size_t addrs = 0x215ff4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DoPostCookWork", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsValidForInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(ByRef<::StringW>)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21600c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsValidForInteraction",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2160138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnValidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ExecutePostCookCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x215faf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ExecutePostCookCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokePostCookEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2160168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokePostCookEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalStartRecook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x215f4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalStartRecook", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
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
  constexpr static std::size_t addrs = 0x215d5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalSetAssetID",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCookStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215d2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCookStatus", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCookStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2160ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCookStatus",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessPoskCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2160ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ProcessPoskCook", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartHoudiniCookNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2160e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartHoudiniCookNode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessHoudiniCookStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x215fcac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessHoudiniCookStatus",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoesAssetRequireRecook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x21621dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "DoesAssetRequireRecook", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteSessionDataOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21625cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "DeleteSessionDataOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAllGeneratedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x215c3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAllGeneratedData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2162918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CleanUpInputNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAssetCacheData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2162cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAssetCacheData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x215e560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateParameters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DownloadParameterPresetFromHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x216126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DownloadParameterPresetFromHoudini", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadParameterPresetToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2160410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadParameterPresetToHoudini", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateParameterInputsToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21605ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateParameterInputsToHoudini", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetFileWithSubasset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x215d774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetFileWithSubasset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAndCookAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ByRef<int32_t>, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x215dd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAndCookAsset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAssetInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x215e060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAssetInputs", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadCurvesParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2160690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadCurvesParameters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2160878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadAttributeValues", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncDirtyAttributesToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2161b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SyncDirtyAttributesToHoudini", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2160ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadInputNodes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasInputNodeTransformChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2162ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HasInputNodeTransformChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyInputNodesCookFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x215f284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "NotifyInputNodesCookFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x215e774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjects", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateAllObjectNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x216155c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateAllObjectNodes", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjectNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>, ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x216316c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjectNode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateObjectsGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x215e8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateObjectsGeometry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateAttributesStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x215ed48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateAttributesStore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x215ea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateInstances", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x215ee9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateHandles", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2162bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CleanUpHandles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandleByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Handle* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2163244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandleByName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21633d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21633dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NumHandles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_Transform (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2163428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectTransform", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectWithID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2163664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectWithID", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeBakedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2163734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeBakedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CloneAssetWithoutHDA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(ByRef<::StringW>, bool, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x2163880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CloneAssetWithoutHDA", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2163fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToNewPrefab", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewStandalone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x21643c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "BakeToNewStandalone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x2164588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingPrefab", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingStandalone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x2164bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingStandalone", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyUpstreamCooked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21657dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NotifyUpstreamCooked", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ConnectToUpstream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2165808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ConnectToUpstream", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisconnectFromUpstream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2165918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DisconnectFromUpstream", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddDownstreamConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2165898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddDownstreamConnection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveDownstreamConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21659a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveDownstreamConnection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearAllUpstreamConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x21626a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearAllUpstreamConnections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateInputsOnAssetRecreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21602bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateInputsOnAssetRecreation", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReconnectInputsUpstreamNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2165a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ReconnectInputsUpstreamNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHoudiniTransformAndApply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2165b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHoudiniTransformAndApply", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadUnityTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x215f028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadUnityTransform", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_MaterialData* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2165e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetMaterialData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetMaterialCache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearMaterialCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2162630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearMaterialCache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateHoudiniMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2161304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateHoudiniMaterials", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveUnusedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x2161d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "RemoveUnusedMaterials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x216609c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValidInHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x215d590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValidInHoudini", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21661e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasTransformChangedSinceLastUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x216621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HasTransformChangedSinceLastUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetClonableParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2163e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetClonableParts", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x215d2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGameObjects", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21662b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutput", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGeoNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2166404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGeoNodes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInternalHDAPartWithGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2166558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInternalHDAPartWithGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurves",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Curve* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x216670c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2162d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearInvalidCurves", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetEditableCurveCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x21668d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetEditableCurveCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x215134c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x215789c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurveDrawCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2166a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurveDrawCollider", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurveDrawCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2166b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurveDrawCollider", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearCurveDrawColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2166b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearCurveDrawColliders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2166bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2162e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetInputNode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodeByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2166d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodeByIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetNonParameterInputNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2166dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetNonParameterInputNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2158f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddInputNode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2157844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveInputNode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InputNodeNotifyRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2166ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InputNodeNotifyRemoved", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCacheCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2167000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetVolumeCacheCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCaches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetVolumeCaches", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddVolumeCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2167050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddVolumeCache", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x215b940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCache", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributesStores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2167124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetAttributesStores", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumAttributeStores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x216712c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "NumAttributeStores", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributesStore* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2167178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAttributeStore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2167308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddAttributeStore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2162fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveAttributeStore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReorderAttributeStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t, int32_t)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x21674a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ReorderAttributeStore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAPartWithGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData* (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21675b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAPartWithGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAAssetFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21676f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAAssetFromGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x216783c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetOutput", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x216798c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetRoot", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PopulateObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2167a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "PopulateObjectInstanceInfos", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddToAssetDBCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::StringW, ::UnityEngine::Object*, ::StringW, ByRef<::UnityEngine::Object*>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2167ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddToAssetDBCache", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurvesVisibilityInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2167c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurvesVisibilityInScene",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x214be68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetSession", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetValidAssetCacheFolderPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x216600c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetValidAssetCacheFolderPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HideAllGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2167dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "HideAllGeometry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2167f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CalculateVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisableAllColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2168084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "DisableAllColliders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateColliderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x21681d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "CalculateColliderState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DuplicateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x216831c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DuplicateAsset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectNodeByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x214c844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectNodeByName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetMaterialOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x216920c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ResetMaterialOverrides", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetParametersToDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2169388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ResetParametersToDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetPreset* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x214efec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetPreset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetPresetAndCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AssetPreset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x214fe40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetPresetAndCook", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyRecookPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2161cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ApplyRecookPreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyInputPresets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2169778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyInputPresets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCachePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_VolumeCachePreset* (
    ::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2169fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetVolumeCachePreset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCachePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCachePreset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x216a1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCachePreset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyVolumeCachePresets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x2169b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyVolumeCachePresets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncInternalParametersForUndoCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x216a210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "SyncInternalParametersForUndoCompare", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateSessionSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x216a414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "UpdateSessionSync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateTotalCookCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x215dff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "UpdateTotalCookCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetAndCopyInstantiatedProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x216a4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ResetAndCopyInstantiatedProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiationMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x216a820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetInstantiationMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiatedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x216aa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "GetInstantiatedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x215c948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                               "ClearInvalidLists", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CopyPropertiesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x2168620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CopyPropertiesTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetSoftDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x216aaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetSoftDeleted",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x10c4;
  constexpr static std::size_t addrs = 0x216acb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::_ctor)> {
  constexpr static std::size_t size = 0x12a4;
  constexpr static std::size_t addrs = 0x216bd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset*>"
constexpr HoudiniEngineUnity::HEU_HoudiniAsset::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset*>*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetType;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetType;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetType(::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assetType = value;
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetInfo;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetInfo(::HoudiniEngineUnity::HAPI_AssetInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assetInfo = value;
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo& HoudiniEngineUnity::HEU_HoudiniAsset::__get__nodeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__nodeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeInfo;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__nodeInfo(::HoudiniEngineUnity::HAPI_NodeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeInfo = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetName;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetOpName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetOpName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetOpName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetOpName;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetOpName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetOpName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetHelp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetHelp;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetHelp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetHelp;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetHelp(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetHelp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetID;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assetID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetPath;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__loadAssetFromMemory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadAssetFromMemory;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__loadAssetFromMemory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadAssetFromMemory;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__loadAssetFromMemory(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadAssetFromMemory = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__alwaysOverwriteOnLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOverwriteOnLoad;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__alwaysOverwriteOnLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOverwriteOnLoad;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__alwaysOverwriteOnLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alwaysOverwriteOnLoad = value;
}
constexpr ::UnityEngine::Object*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetFileObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetFileObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileObject;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetFileObject(::UnityEngine::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetFileObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__objectNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__objectNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__objectNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__rootGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__rootGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootGameObject;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__rootGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__materialCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> const&
HoudiniEngineUnity::HEU_HoudiniAsset::__get__materialCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialCache;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__materialCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_Parameters*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_Parameters*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__parameters(::HoudiniEngineUnity::HEU_Parameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Matrix4x4& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastSyncedTransformMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSyncedTransformMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastSyncedTransformMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSyncedTransformMatrix;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__lastSyncedTransformMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSyncedTransformMatrix = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetCacheFolderPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetCacheFolderPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetCacheFolderPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetCacheFolderPath;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetCacheFolderPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetCacheFolderPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_HoudiniAsset::__get__subassetNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subassetNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__subassetNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subassetNames;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__subassetNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subassetNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__selectedSubassetIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubassetIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__selectedSubassetIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubassetIndex;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__selectedSubassetIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedSubassetIndex = value;
}
constexpr ::HoudiniEngineUnity::HEU_AssetPreset*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__savedAssetPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____savedAssetPreset;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_AssetPreset*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__savedAssetPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____savedAssetPreset;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__savedAssetPreset(::HoudiniEngineUnity::HEU_AssetPreset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____savedAssetPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_RecookPreset*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__recookPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recookPreset;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_RecookPreset*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__recookPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recookPreset;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__recookPreset(::HoudiniEngineUnity::HEU_RecookPreset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recookPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__totalCookCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalCookCount;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__totalCookCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalCookCount;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__totalCookCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalCookCount = value;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction& HoudiniEngineUnity::HEU_HoudiniAsset::__get__requestBuildAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestBuildAction;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__requestBuildAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestBuildAction;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__requestBuildAction(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetBuildAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestBuildAction = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__checkParameterChangeForCook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkParameterChangeForCook;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__checkParameterChangeForCook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkParameterChangeForCook;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__checkParameterChangeForCook(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkParameterChangeForCook = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__skipCookCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skipCookCheck;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__skipCookCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skipCookCheck;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__skipCookCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skipCookCheck = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uploadParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadParameters;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uploadParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadParameters;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__uploadParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uploadParameters = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__forceUploadInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceUploadInputs;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__forceUploadInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceUploadInputs;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__forceUploadInputs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceUploadInputs = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__upstreamCookChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upstreamCookChanged;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__upstreamCookChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upstreamCookChanged;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__upstreamCookChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upstreamCookChanged = value;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookStatus;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookStatus;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookStatus(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cookStatus = value;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastCookResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCookResult;
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastCookResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCookResult;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__lastCookResult(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastCookResult = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__isCookingAssetReloaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCookingAssetReloaded;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__isCookingAssetReloaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCookingAssetReloaded;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__isCookingAssetReloaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCookingAssetReloaded = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bForceUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bForceUpdate;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bForceUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bForceUpdate;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bForceUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bForceUpdate = value;
}
constexpr int64_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionID;
}
constexpr int64_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionID;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__sessionID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionID = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__WarnedPrefabNotSupported_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WarnedPrefabNotSupported_k__BackingField;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__WarnedPrefabNotSupported_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WarnedPrefabNotSupported_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__WarnedPrefabNotSupported_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WarnedPrefabNotSupported_k__BackingField = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uiLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiLocked;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__uiLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiLocked;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__uiLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiLocked = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showHDAOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showHDAOptions;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showHDAOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showHDAOptions;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showHDAOptions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showHDAOptions = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showGenerateSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showGenerateSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showGenerateSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showGenerateSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showGenerateSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showGenerateSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showBakeSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBakeSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showBakeSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBakeSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showBakeSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showBakeSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showEventsSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showEventsSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showEventsSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showEventsSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showEventsSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showEventsSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showCurvesSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showCurvesSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showCurvesSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showCurvesSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showCurvesSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showCurvesSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showInputNodesSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInputNodesSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showInputNodesSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInputNodesSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showInputNodesSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showInputNodesSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showToolsSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showToolsSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showToolsSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showToolsSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showToolsSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showToolsSection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showTerrainSection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTerrainSection;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__showTerrainSection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTerrainSection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__showTerrainSection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTerrainSection = value;
}
constexpr ::HoudiniEngineUnity::HEU_InstanceInputUIState*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__instanceInputUIState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceInputUIState;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InstanceInputUIState*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__instanceInputUIState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceInputUIState;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__instanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instanceInputUIState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::ReloadEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::ReloadEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__reloadEvent(::HoudiniEngineUnity::ReloadEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reloadEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::CookedEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::CookedEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookedEvent(::HoudiniEngineUnity::CookedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cookedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::BakedEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::BakedEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakedEvent(::HoudiniEngineUnity::BakedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bakedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ReloadDataEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reloadDataEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__reloadDataEvent(::HoudiniEngineUnity::HEU_ReloadDataEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reloadDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_CookedDataEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookedDataEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookedDataEvent(::HoudiniEngineUnity::HEU_CookedDataEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cookedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_BakedDataEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedDataEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakedDataEvent(::HoudiniEngineUnity::HEU_BakedDataEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bakedDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__preAssetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preAssetEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_PreAssetEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__preAssetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preAssetEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__preAssetEvent(::HoudiniEngineUnity::HEU_PreAssetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preAssetEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__refreshUIDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshUIDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__refreshUIDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshUIDelegate;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__refreshUIDelegate(::HoudiniEngineUnity::__HEU_HoudiniAsset__UpdateUIDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refreshUIDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::CookedEvent*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__downstreamConnectionCookedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downstreamConnectionCookedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::CookedEvent*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__downstreamConnectionCookedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downstreamConnectionCookedEvent;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__downstreamConnectionCookedEvent(::HoudiniEngineUnity::CookedEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downstreamConnectionCookedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateUVs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateUVs;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateUVs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateUVs;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateUVs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateUVs = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateTangents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateTangents;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateTangents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateTangents;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateTangents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateTangents = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateNormals;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateNormals;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateNormals = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pushTransformToHoudini() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pushTransformToHoudini;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pushTransformToHoudini() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pushTransformToHoudini;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__pushTransformToHoudini(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pushTransformToHoudini = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__transformChangeTriggersCooks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformChangeTriggersCooks;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__transformChangeTriggersCooks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformChangeTriggersCooks;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__transformChangeTriggersCooks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformChangeTriggersCooks = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookingTriggersDownCooks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookingTriggersDownCooks;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookingTriggersDownCooks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookingTriggersDownCooks;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookingTriggersDownCooks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cookingTriggersDownCooks = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__autoCookOnParameterChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCookOnParameterChange;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__autoCookOnParameterChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCookOnParameterChange;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__autoCookOnParameterChange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoCookOnParameterChange = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__ignoreNonDisplayNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNonDisplayNodes;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__ignoreNonDisplayNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNonDisplayNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__ignoreNonDisplayNodes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreNonDisplayNodes = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateMeshUsingPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateMeshUsingPoints;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateMeshUsingPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateMeshUsingPoints;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateMeshUsingPoints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateMeshUsingPoints = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__useLODGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLODGroups;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__useLODGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLODGroups;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__useLODGroups(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLODGroups = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__splitGeosByGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splitGeosByGroup;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__splitGeosByGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____splitGeosByGroup;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__splitGeosByGroup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____splitGeosByGroup = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionSyncAutoCook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionSyncAutoCook;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionSyncAutoCook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionSyncAutoCook;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__sessionSyncAutoCook(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionSyncAutoCook = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakeUpdateKeepPreviousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeUpdateKeepPreviousTransformValues;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakeUpdateKeepPreviousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeUpdateKeepPreviousTransformValues;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakeUpdateKeepPreviousTransformValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakeUpdateKeepPreviousTransformValues = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pauseCooking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseCooking;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pauseCooking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseCooking;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__pauseCooking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseCooking = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveEditorEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveEditorEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveEditorEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveEditorEnabled;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveEditorEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveEditorEnabled = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curves() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curves;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curves() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curves;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curves)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawCollision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawCollision;
}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawCollision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawCollision;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawCollision(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveDrawCollision = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawColliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawColliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawColliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawColliders;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawColliders(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curveDrawColliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawLayerMask;
}
constexpr ::UnityEngine::LayerMask const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDrawLayerMask;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveDrawLayerMask = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectMaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectMaxDistance;
}
constexpr float_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectMaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectMaxDistance;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveProjectMaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveProjectMaxDistance = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectDirection;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveProjectDirection;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveProjectDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveProjectDirection = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDisableScaleRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDisableScaleRotation;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDisableScaleRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveDisableScaleRotation;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDisableScaleRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveDisableScaleRotation = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveCookOnDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveCookOnDrag;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveCookOnDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveCookOnDrag;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveCookOnDrag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveCookOnDrag = value;
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodes;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveFrameSelectedNodes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveFrameSelectedNodes = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodeDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodeDistance;
}
constexpr float_t const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodeDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveFrameSelectedNodeDistance;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveFrameSelectedNodeDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curveFrameSelectedNodeDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__inputNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputNodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__inputNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputNodes;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__inputNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__handles(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__handlesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlesEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__handlesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlesEnabled;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__handlesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlesEnabled = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__volumeCaches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeCaches;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*> const&
HoudiniEngineUnity::HEU_HoudiniAsset::__get__volumeCaches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeCaches;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__volumeCaches(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeCaches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__attributeStores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeStores;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*> const&
HoudiniEngineUnity::HEU_HoudiniAsset::__get__attributeStores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeStores;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__attributeStores(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeStores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__editableNodesToolsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableNodesToolsEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__editableNodesToolsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editableNodesToolsEnabled;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__editableNodesToolsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editableNodesToolsEnabled = value;
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__toolsInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolsInfo;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ToolsInfo*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__toolsInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolsInfo;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__toolsInfo(::HoudiniEngineUnity::HEU_ToolsInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toolsInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_AssetSerializedMetaData*& HoudiniEngineUnity::HEU_HoudiniAsset::__get__serializedMetaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedMetaData;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*> const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__serializedMetaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedMetaData;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__serializedMetaData(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializedMetaData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pendingAutoCookOnMouseRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingAutoCookOnMouseRelease;
}
constexpr bool const& HoudiniEngineUnity::HEU_HoudiniAsset::__get__pendingAutoCookOnMouseRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingAutoCookOnMouseRelease;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniAsset::__set__pendingAutoCookOnMouseRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingAutoCookOnMouseRelease = value;
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_AssetInfo HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_AssetInfo, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_NodeInfo HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_NodeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_NodeInfo, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetOpName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetHelp",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_TransformInputCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GeoInputCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_AssetPath",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_LoadAssetFromMemory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_LoadAssetFromMemory",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_AlwaysOverwriteOnLoad", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AlwaysOverwriteOnLoad",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_HandleCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_OwnerGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_RootGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Parameters* HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_Parameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Parameters*, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SubassetNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline int64_t HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_SessionID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_WarnedPrefabNotSupported", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_WarnedPrefabNotSupported",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_InstanceInputUIState* HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_InstanceInputUIState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InstanceInputUIState*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_InstanceInputUIState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_GenerateUVs",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateUVs", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GenerateTangents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateTangents",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GenerateNormals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateNormals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_PushTransformToHoudini", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PushTransformToHoudini",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_TransformChangeTriggersCooks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_TransformChangeTriggersCooks",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CookingTriggersDownCooks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CookingTriggersDownCooks",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_AutoCookOnParameterChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_AutoCookOnParameterChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_IgnoreNonDisplayNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_IgnoreNonDisplayNodes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_GenerateMeshUsingPoints", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_GenerateMeshUsingPoints",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_UseLODGroups",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_UseLODGroups", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SplitGeosByGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SplitGeosByGroup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SessionSyncAutoCook", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_SessionSyncAutoCook",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_BakeUpdateKeepPreviousTransformValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_BakeUpdateKeepPreviousTransformValues",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_PauseCooking",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PauseCooking", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveEditorEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveEditorEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveDrawCollision", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision(::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDrawCollision", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetCurveDrawColliders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetCurveDrawLayerMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask(::UnityEngine::LayerMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurveDrawLayerMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveDisableScaleRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveDisableScaleRotation",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveCookOnDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveCookOnDrag",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveFrameSelectedNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_CurveFrameSelectedNodeDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_CurveFrameSelectedNodeDistance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_HandlesEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_HandlesEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_EditableNodesToolsEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_EditableNodesToolsEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_ToolsInfo* HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "get_ToolsInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ToolsInfo*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AssetSerializedMetaData* HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_SerializedMetaData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "get_PendingAutoCookOnMouseRelease", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "set_PendingAutoCookOnMouseRelease",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset(::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType assetType, ::StringW filePath, ::UnityEngine::GameObject* rootGameObject,
                                                             ::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetupAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__HEU_AssetType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetType, filePath, rootGameObject, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CleanUpAndDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "IsAssetSavedInScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvalidateAsset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AssetUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "PostAssetUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters(bool bAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestResetParameters",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bAsync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload(bool bAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestReload", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bAsync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook(bool bCheckParametersChanged, bool bAsync, bool bSkipCookCheck, bool bUploadParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RequestCook", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bCheckParametersChanged, bAsync, bSkipCookCheck, bUploadParameters);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "RequestBakeInPlace", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearBuildRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "HasValidAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessRebuild", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeReloadEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bCookSuccess, outputObjects);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartRebuild", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "FinishRebuild",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs,
                                                              bool bCookingSessionSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs,
                                                          bCookingSessionSync);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs,
                                                                 bool bCookingSessionSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RecookBlocking", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs,
                                                          bCookingSessionSync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DoPostCookWork", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction(ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsValidForInteraction",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, errorMessage);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "OnValidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ExecutePostCookCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokePostCookEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bCookSuccess, outputObjects);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs,
                                                                      bool bCookingSessionSync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalStartRecook", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs,
                                                          bCookingSessionSync);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID(int32_t assetID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InternalSetAssetID",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetID);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus(::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus status, ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCookStatus", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, result);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCookStatus",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetCookStatus, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessPoskCook",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "StartHoudiniCookNode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus(bool bAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ProcessHoudiniCookStatus",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bAsync);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "DoesAssetRequireRecook", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "DeleteSessionDataOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param bIsRebuild: bool (default: false)
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData(bool bIsRebuild) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAllGeneratedData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bIsRebuild);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CleanUpInputNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData(bool bRegisterUndo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DeleteAssetCacheData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bRegisterUndo);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DownloadParameterPresetFromHoudini", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadParameterPresetToHoudini", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateParameterInputsToHoudini", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bForceUpdate);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset(::HoudiniEngineUnity::HEU_SessionBase* session, bool bPromptForSubasset, int32_t desiredSubassetIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetFileWithSubasset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, bPromptForSubasset, desiredSubassetIndex);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t subassetIndex, ByRef<int32_t> newAssetID, bool bCookTemplatedGeos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAndCookAsset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, subassetIndex, newAssetID, bCookTemplatedGeos);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateAssetInputs", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters(::HoudiniEngineUnity::HEU_SessionBase* session, bool bCheckParamsChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadCurvesParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bCheckParamsChanged);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadAttributeValues", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SyncDirtyAttributesToHoudini", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate, bool bUpdateAll) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadInputNodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bForceUpdate, bUpdateAll);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "HasInputNodeTransformChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "NotifyInputNodesCookFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjects", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateAllObjectNodes", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline ::HoudiniEngineUnity::HEU_ObjectNode* HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                    ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo,
                                                                                                    ByRef<::HoudiniEngineUnity::HAPI_Transform> objectTranform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CreateObjectNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode*, false>(this, ___internal_method, session, objectInfo, objectTranform);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateObjectsGeometry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bRebuild);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateAttributesStore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateInstances", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GenerateHandles", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CleanUpHandles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Handle* HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName(::StringW handleName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandleByName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Handle*, false>(this, ___internal_method, handleName);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHandles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NumHandles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_Transform HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t objectID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectTransform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_Transform, false>(this, ___internal_method, session, objectID);
}
inline ::HoudiniEngineUnity::HEU_ObjectNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID(int32_t objId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectWithID", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode*, false>(this, ___internal_method, objId);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent(bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects, bool isNewBake) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InvokeBakedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bSuccess, outputObjects, isNewBake);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA(ByRef<::StringW> bakedAssetPath, bool bWriteMeshesToAssetDatabase, bool bReconnectPrefabInstances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CloneAssetWithoutHDA", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, bakedAssetPath, bWriteMeshesToAssetDatabase, bReconnectPrefabInstances);
}
/// @param destinationPrefabPath: ::StringW (default: nullptr)
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab(::StringW destinationPrefabPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToNewPrefab", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, destinationPrefabPath);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "BakeToNewStandalone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab(::UnityEngine::GameObject* bakeTargetGO) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingPrefab", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakeTargetGO);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone(::UnityEngine::GameObject* bakeTargetGO) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "BakeToExistingStandalone", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakeTargetGO);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset, bool bSuccess,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "NotifyUpstreamCooked", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upstreamAsset, bSuccess, outputs);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ConnectToUpstream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upstreamAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DisconnectFromUpstream", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upstreamAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection(
    ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddDownstreamConnection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection(
    ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* receiver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveDownstreamConnection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearAllUpstreamConnections", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateInputsOnAssetRecreation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ReconnectInputsUpstreamNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetHoudiniTransformAndApply", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform(::HoudiniEngineUnity::HEU_SessionBase* session, bool bOnlySendIfChangedFromLastSync) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UploadUnityTransform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, bOnlySendIfChangedFromLastSync);
}
inline ::HoudiniEngineUnity::HEU_MaterialData* HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetMaterialData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData*, false>(this, ___internal_method, material);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetMaterialCache",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearMaterialCache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "UpdateHoudiniMaterials", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "RemoveUnusedMaterials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValidInHoudini", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsAssetValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "HasTransformChangedSinceLastUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* clonableParts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetClonableParts", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clonableParts);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGameObjects", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputObjects);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutput", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputs);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* outputGeoNodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetOutputGeoNodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputGeoNodes);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInternalHDAPartWithGameObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData*, false>(this, ___internal_method, outputGameObject);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurves",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Curve* HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve(::StringW curveName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetCurve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Curve*, false>(this, ___internal_method, curveName);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearInvalidCurves", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetEditableCurveCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curve);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve(::HoudiniEngineUnity::HEU_Curve* curve) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curve);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider(::UnityEngine::Collider* newCollider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddCurveDrawCollider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCollider);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider(::UnityEngine::Collider* collider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveCurveDrawCollider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collider);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearCurveDrawColliders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode(::StringW inputName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(this, ___internal_method, inputName);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode(::StringW inputName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetInputNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(this, ___internal_method, inputName);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetInputNodeByIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetNonParameterInputNodes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode(::HoudiniEngineUnity::HEU_InputNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddInputNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode(::HoudiniEngineUnity::HEU_InputNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveInputNode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved(::HoudiniEngineUnity::HEU_InputNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "InputNodeNotifyRemoved", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetVolumeCacheCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetVolumeCaches",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache* cache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddVolumeCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache* cache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>* HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetAttributesStores", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore*>*, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "NumAttributeStores", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AttributesStore* HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore(::StringW geoName, int32_t partID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAttributeStore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributesStore*, false>(this, ___internal_method, geoName, partID);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore* attributeStore) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddAttributeStore", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeStore);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore* attributeStore) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveAttributeStore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeStore);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore(int32_t oldIndex, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ReorderAttributeStore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldIndex, newIndex);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAPartWithGameObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData*, false>(nullptr, ___internal_method, outputGameObject);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject(::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetSceneHDAAssetFromGameObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(nullptr, ___internal_method, outputGameObject);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput(::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetOutput", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot(::UnityEngine::GameObject* go) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsHoudiniAssetRoot", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* objInstanceInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "PopulateObjectInstanceInfos", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objInstanceInfos);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache(::StringW assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::StringW relativeFolderPath,
                                                                    ByRef<::UnityEngine::Object*> targetAssetDBObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "AddToAssetDBCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetObjectFileName, objectToAdd, relativeFolderPath, targetAssetDBObject);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene(bool bShow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetCurvesVisibilityInScene",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bShow);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession(bool bCreateIfInvalid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetSession", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(this, ___internal_method, bCreateIfInvalid);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetValidAssetCacheFolderPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "HideAllGeometry",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CalculateVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "DisableAllColliders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "CalculateColliderState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param newRootGameObject: ::UnityEngine::GameObject* (default: nullptr)
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset(::UnityEngine::GameObject* newRootGameObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "DuplicateAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, newRootGameObject);
}
inline ::HoudiniEngineUnity::HEU_ObjectNode* HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName(::StringW objName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetObjectNodeByName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode*, false>(this, ___internal_method, objName);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ResetMaterialOverrides", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ResetParametersToDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AssetPreset* HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetAssetPreset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetPreset*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook(::HoudiniEngineUnity::HEU_AssetPreset* assetPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "LoadAssetPresetAndCook", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetPreset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ApplyRecookPreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets,
                                                                    bool bAddMissingInputsToRecookPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyInputPresets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, inputPresets, bAddMissingInputsToRecookPreset);
}
inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset(::StringW objName, ::StringW geoName, int32_t tile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "GetVolumeCachePreset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_VolumeCachePreset*, false>(this, ___internal_method, objName, geoName, tile);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* preset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "RemoveVolumeCachePreset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preset);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ApplyVolumeCachePresets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, volumeCachePresets);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "SyncInternalParametersForUndoCompare", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "UpdateSessionSync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "UpdateTotalCookCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties(::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "ResetAndCopyInstantiatedProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAsset);
}
inline ::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetInstantiationMethod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_HoudiniAsset__AssetInstantiationMethod, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "GetInstantiatedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                             "ClearInvalidLists", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo(::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "CopyPropertiesTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAsset);
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "SetSoftDeleted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo(::HoudiniEngineUnity::HEU_HoudiniAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asset);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_HoudiniAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_HoudiniAsset*>());
}
inline void HoudiniEngineUnity::HEU_HoudiniAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset::HEU_HoudiniAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
