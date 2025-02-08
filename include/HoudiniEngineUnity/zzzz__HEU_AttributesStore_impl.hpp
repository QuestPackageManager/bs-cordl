#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AttributesStore.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::*)(::System::Object*, ::System::IntPtr)>(
    &::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3a3f610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::*)(
    ::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a3f6b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t,
                                                                        ::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3a3f6c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::*)(::System::IAsyncResult*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a3f7ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), 15));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::Invoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                                  ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::BeginInvoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                                                          ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor,
                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor, callback, object);
}
inline void HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc::HEU_AttributesStore_SetAttributeValueFunc() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_GeoID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3bc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "get_GeoID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_PartID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3bc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "get_PartID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_GeoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::get_GeoName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3bc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "get_GeoName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HasColorAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::HasColorAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3bc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "HasColorAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_OutputTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::get_OutputTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3bc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "get_OutputTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.get_OutputMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::get_OutputMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3bc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "get_OutputMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.DestroyAllData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::DestroyAllData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3a3a90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "DestroyAllData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SyncAllAttributesFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, int32_t, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>, ::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SyncAllAttributesFrom)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x3a39ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SyncAllAttributesFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetupMeshAndMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::HoudiniEngineUnity::HAPI_PartType, ::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_AttributesStore::SetupMeshAndMaterials)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x3a3a564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetupMeshAndMaterials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HasDirtyAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::HasDirtyAttributes)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3a3c5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "HasDirtyAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SyncDirtyAttributesToHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SyncDirtyAttributesToHoudini)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a3c744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SyncDirtyAttributesToHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.PopulateAttributeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::HoudiniEngineUnity::HEU_AttributeData*, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::PopulateAttributeData)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x3a3be54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "PopulateAttributeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributesList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*, ::HoudiniEngineUnity::HAPI_AttributeOwner, int32_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::GetAttributesList)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3a3cc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributesList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeOwner>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.UpdateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::HoudiniEngineUnity::HEU_AttributeData*)>(&::HoudiniEngineUnity::HEU_AttributesStore::UpdateAttribute)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x3a3cf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "UpdateAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.UpdateAttributeList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::UpdateAttributeList)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3a3d380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "UpdateAttributeList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.RefreshUpstreamInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::RefreshUpstreamInputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a3d4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "RefreshUpstreamInputs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.UploadAttributeViaMeshInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::UploadAttributeViaMeshInput)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x3a3c7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "UploadAttributeViaMeshInput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeDataSyncd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataSyncd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a3cc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeDataSyncd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeDataDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataDirty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a3d54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeDataDirty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.CreateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributeData* (
    ::HoudiniEngineUnity::HEU_AttributesStore::*)(::StringW, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(&::HoudiniEngineUnity::HEU_AttributesStore::CreateAttribute)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3a3bda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "CreateAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributeData* (::HoudiniEngineUnity::HEU_AttributesStore::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3a3bc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributeData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributeData* (::HoudiniEngineUnity::HEU_AttributesStore::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a3d568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributeData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeNames)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3a3d5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "GetAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.EnablePaintCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::EnablePaintCollider)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3a3d7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "EnablePaintCollider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.DisablePaintCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::DisablePaintCollider)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3a3d9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "DisablePaintCollider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.ShowPaintMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::ShowPaintMesh)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3a3dab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "ShowPaintMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HidePaintMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::HidePaintMesh)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3a3dbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "HidePaintMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.HasMeshForPainting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::HasMeshForPainting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a3dcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "HasMeshForPainting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetPaintMeshCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::MeshCollider> (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::GetPaintMeshCollider)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a3dd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "GetPaintMeshCollider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.PaintAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t, ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::PaintAttribute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a3dd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "PaintAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeEditValueInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueInt)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a3ddf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeEditValueInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeEditValueFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::ArrayW<float_t, ::Array<float_t>*>)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueFloat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a3de5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeEditValueFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeEditValueString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3a3dec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeEditValueString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.ReplaceAttributeValueInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueInt)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3a3df34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "ReplaceAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.AddAttributeValueInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueInt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3a3e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "AddAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SubtractAttributeValueInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueInt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3a3e2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SubtractAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.MultiplyAttributeValueInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueInt)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3a3e484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "MultiplyAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.ReplaceAttributeValueFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3a3e670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "ReplaceAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.AddAttributeValueFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueFloat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a3e710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "AddAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SubtractAttributeValueFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueFloat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a3e7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SubtractAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.MultiplyAttributeValueFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueFloat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3a3e838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "MultiplyAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.SetAttributeValueString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_AttributeData*, int32_t, ::HoudiniEngineUnity::HEU_ToolsInfo*, int32_t, float_t)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a3e8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeValueString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.FillAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HEU_ToolsInfo*)>(&::HoudiniEngineUnity::HEU_AttributesStore::FillAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3a3e974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "FillAttribute", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.AreAttributesDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(
    &::HoudiniEngineUnity::HEU_AttributesStore::AreAttributesDirty)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3a3ec34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                               "AreAttributesDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetPositionAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(
    ::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>)>(&::HoudiniEngineUnity::HEU_AttributesStore::GetPositionAttributeValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a3ed90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetPositionAttributeValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetVertexIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::GetVertexIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a3ed9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetVertexIndices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.GetAttributeSetValueFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* (*)(::HoudiniEngineUnity::HEU_AttributeData_AttributeType, ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode)>(
        &::HoudiniEngineUnity::HEU_AttributesStore::GetAttributeSetValueFunction)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3a3ea14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributeSetValueFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData_AttributeType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.CopyAttributeValuesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::CopyAttributeValuesTo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3a3eda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "CopyAttributeValuesTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.IsValidStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::IsValidStore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a3ef80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "IsValidStore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AttributesStore::*)(::HoudiniEngineUnity::HEU_AttributesStore*)>(
    &::HoudiniEngineUnity::HEU_AttributesStore::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x3a3efdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AttributesStore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AttributesStore::*)()>(&::HoudiniEngineUnity::HEU_AttributesStore::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3a3f544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__geoID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__geoID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoID;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__geoID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____geoID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__partID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__partID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partID;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__partID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__geoName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__geoName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoName;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__geoName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____geoName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__attributeDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeDatas;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__attributeDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeDatas;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__attributeDatas(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__hasColorAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasColorAttribute;
}
constexpr bool const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__hasColorAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasColorAttribute;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__hasColorAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasColorAttribute = value;
}
constexpr ::UnityW<::UnityEngine::Material>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__localMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__localMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMaterial;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__localMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputTransform;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__positionAttributeValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionAttributeValues;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__positionAttributeValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionAttributeValues;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__positionAttributeValues(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionAttributeValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__vertexIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexIndices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__vertexIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexIndices;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__vertexIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertexIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputGameObject;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMesh;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMaterials;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputCollider;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputCollider(::UnityW<::UnityEngine::MeshCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputColliderMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputColliderMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputColliderMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputColliderMesh;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputColliderMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputColliderMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMeshCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMeshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMeshCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMeshCollider;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputMeshCollider(::UnityW<::UnityEngine::MeshCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputMeshCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__localMeshCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMeshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__localMeshCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMeshCollider;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__localMeshCollider(::UnityW<::UnityEngine::MeshCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localMeshCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMeshRendererInitiallyEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMeshRendererInitiallyEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMeshRendererInitiallyEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMeshRendererInitiallyEnabled;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputMeshRendererInitiallyEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputMeshRendererInitiallyEnabled = value;
}
constexpr bool& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMeshColliderInitiallyEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMeshColliderInitiallyEnabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_get__outputMeshColliderInitiallyEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputMeshColliderInitiallyEnabled;
}
constexpr void HoudiniEngineUnity::HEU_AttributesStore::__cordl_internal_set__outputMeshColliderInitiallyEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputMeshColliderInitiallyEnabled = value;
}
inline int32_t HoudiniEngineUnity::HEU_AttributesStore::get_GeoID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "get_GeoID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_AttributesStore::get_PartID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "get_PartID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_AttributesStore::get_GeoName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "get_GeoName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::HasColorAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "HasColorAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> HoudiniEngineUnity::HEU_AttributesStore::get_OutputTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "get_OutputTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> HoudiniEngineUnity::HEU_AttributesStore::get_OutputMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "get_OutputMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::DestroyAllData(::HoudiniEngineUnity::HEU_HoudiniAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "DestroyAllData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SyncAllAttributesFrom(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* asset, int32_t geoID,
                                                                           ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, ::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SyncAllAttributesFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, asset, geoID, partInfo, outputGameObject);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetupMeshAndMaterials(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HAPI_PartType partType,
                                                                           ::UnityEngine::GameObject* outputGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetupMeshAndMaterials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, partType, outputGameObject);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::HasDirtyAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "HasDirtyAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SyncDirtyAttributesToHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::PopulateAttributeData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                                                           ::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "PopulateAttributeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attributeData, attributeInfo);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::GetAttributesList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                                                       ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributesList,
                                                                       ::HoudiniEngineUnity::HAPI_AttributeOwner ownerType, int32_t attributeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributesList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeOwner>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attributesList, ownerType, attributeCount);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::UpdateAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                                                     ::HoudiniEngineUnity::HEU_AttributeData* attributeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "UpdateAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attributeData);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::UpdateAttributeList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                                                         ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributeDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "UpdateAttributeList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attributeDataList);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::RefreshUpstreamInputs(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "RefreshUpstreamInputs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::UploadAttributeViaMeshInput(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "UploadAttributeViaMeshInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoID, partID);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataSyncd(::HoudiniEngineUnity::HEU_AttributeData* attributeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeDataSyncd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetAttributeDataDirty(::HoudiniEngineUnity::HEU_AttributeData* attributeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeDataDirty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData);
}
inline ::HoudiniEngineUnity::HEU_AttributeData* HoudiniEngineUnity::HEU_AttributesStore::CreateAttribute(::StringW attributeName, ::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "CreateAttribute", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributeData*, false>(this, ___internal_method, attributeName, attributeInfo);
}
inline ::HoudiniEngineUnity::HEU_AttributeData* HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributeData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributeData*, false>(this, ___internal_method, name);
}
inline ::HoudiniEngineUnity::HEU_AttributeData* HoudiniEngineUnity::HEU_AttributesStore::GetAttributeData(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributeData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributeData*, false>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::List_1<::StringW>* HoudiniEngineUnity::HEU_AttributesStore::GetAttributeNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "GetAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::EnablePaintCollider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "EnablePaintCollider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::DisablePaintCollider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "DisablePaintCollider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::ShowPaintMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "ShowPaintMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::HidePaintMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "HidePaintMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::HasMeshForPainting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "HasMeshForPainting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshCollider> HoudiniEngineUnity::HEU_AttributesStore::GetPaintMeshCollider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "GetPaintMeshCollider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshCollider>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::PaintAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t attributeIndex,
                                                                    float_t paintFactor, ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* setAttrFunc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "PaintAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeData, sourceTools, attributeIndex, paintFactor, setAttrFunc);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<int32_t, ::Array<int32_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeEditValueInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, startIndex, values);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex,
                                                                                ::ArrayW<float_t, ::Array<float_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeEditValueFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, startIndex, values);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetAttributeEditValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex,
                                                                                 ::ArrayW<::StringW, ::Array<::StringW>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeEditValueString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, startIndex, values);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                              ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "ReplaceAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools,
                                                                          int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "AddAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                               ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SubtractAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                               ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "MultiplyAttributeValueInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::ReplaceAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                                ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "ReplaceAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::AddAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                            ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "AddAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SubtractAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                                 ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SubtractAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::MultiplyAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                                 ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "MultiplyAttributeValueFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::SetAttributeValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex,
                                                                             ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "SetAttributeValueString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeData, targetIndex, sourceTools, sourceIndex, factor);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::FillAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "FillAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeData, sourceTools);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::AreAttributesDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(),
                                                                             "AreAttributesDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::GetPositionAttributeValues(::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positionArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetPositionAttributeValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positionArray);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::GetVertexIndices(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetVertexIndices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indices);
}
inline ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*
HoudiniEngineUnity::HEU_AttributesStore::GetAttributeSetValueFunction(::HoudiniEngineUnity::HEU_AttributeData_AttributeType attrType,
                                                                      ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode paintMergeMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "GetAttributeSetValueFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributeData_AttributeType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*, false>(nullptr, ___internal_method, attrType, paintMergeMode);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::CopyAttributeValuesTo(::HoudiniEngineUnity::HEU_AttributesStore* destAttrStore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "CopyAttributeValuesTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destAttrStore);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::IsValidStore(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "IsValidStore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_AttributesStore::IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributesStore* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_AttributesStore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AttributesStore*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_AttributesStore* HoudiniEngineUnity::HEU_AttributesStore::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_AttributesStore*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>"
constexpr HoudiniEngineUnity::HEU_AttributesStore::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*
HoudiniEngineUnity::HEU_AttributesStore::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_AttributesStore__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AttributesStore::HEU_AttributesStore() {}
