#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_MaterialInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source::__HEU_MaterialData__Source(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source::__HEU_MaterialData__Source() {}
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source HoudiniEngineUnity::__HEU_MaterialData__Source::DEFAULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source HoudiniEngineUnity::__HEU_MaterialData__Source::HOUDINI{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source HoudiniEngineUnity::__HEU_MaterialData__Source::UNITY{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source HoudiniEngineUnity::__HEU_MaterialData__Source::SUBSTANCE{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.IsExistingMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_MaterialData::*)()>(&::HoudiniEngineUnity::HEU_MaterialData::IsExistingMaterial)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2232e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(),
                                                                               "IsExistingMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.UpdateMaterialFromHoudini
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MaterialData::*)(::HoudiniEngineUnity::HAPI_MaterialInfo, ::StringW)>(
    &::HoudiniEngineUnity::HEU_MaterialData::UpdateMaterialFromHoudini)> {
  constexpr static std::size_t size = 0xf40;
  constexpr static std::size_t addrs = 0x2232e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "UpdateMaterialFromHoudini", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.UseLegacyShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MaterialData::*)(
    ::HoudiniEngineUnity::HAPI_MaterialInfo, ::StringW, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_NodeInfo,
    ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>)>(&::HoudiniEngineUnity::HEU_MaterialData::UseLegacyShaders)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x2233e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "UseLegacyShaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_NodeInfo>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.GetTextureFileNameFromMaterialParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::HoudiniEngineUnity::HAPI_ParmInfo)>(
    &::HoudiniEngineUnity::HEU_MaterialData::GetTextureFileNameFromMaterialParam)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2234428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "GetTextureFileNameFromMaterialParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.IsTransparentMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>)>(
        &::HoudiniEngineUnity::HEU_MaterialData::IsTransparentMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2233dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "IsTransparentMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.GetMaterialAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>, float_t, ByRef<float_t>)>(
        &::HoudiniEngineUnity::HEU_MaterialData::GetMaterialAlpha)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2234ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "GetMaterialAlpha", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.GetSupportedFileFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::HEU_SessionBase*, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>)>(
    &::HoudiniEngineUnity::HEU_MaterialData::GetSupportedFileFormat)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2234cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "GetSupportedFileFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_MaterialData::*)(::HoudiniEngineUnity::HEU_MaterialData*)>(
    &::HoudiniEngineUnity::HEU_MaterialData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2234de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MaterialData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MaterialData::*)()>(&::HoudiniEngineUnity::HEU_MaterialData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2234fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>"
constexpr HoudiniEngineUnity::HEU_MaterialData::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*
HoudiniEngineUnity::HEU_MaterialData::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_MaterialData__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Material>& HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source& HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_get__materialSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialSource;
}
constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source const& HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_get__materialSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialSource;
}
constexpr void HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_set__materialSource(::HoudiniEngineUnity::__HEU_MaterialData__Source value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialSource = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_get__materialKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialKey;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_get__materialKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialKey;
}
constexpr void HoudiniEngineUnity::HEU_MaterialData::__cordl_internal_set__materialKey(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialKey = value;
}
inline bool HoudiniEngineUnity::HEU_MaterialData::IsExistingMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(),
                                                                             "IsExistingMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_MaterialData::UpdateMaterialFromHoudini(::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "UpdateMaterialFromHoudini", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, materialInfo, assetCacheFolderPath);
}
inline void HoudiniEngineUnity::HEU_MaterialData::UseLegacyShaders(::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW assetCacheFolderPath, ::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                   ::HoudiniEngineUnity::HAPI_NodeInfo nodeInfo,
                                                                   ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*> parmInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "UseLegacyShaders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_MaterialInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_NodeInfo>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, materialInfo, assetCacheFolderPath, session, nodeInfo, parmInfos);
}
inline ::StringW HoudiniEngineUnity::HEU_MaterialData::GetTextureFileNameFromMaterialParam(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                                           ::HoudiniEngineUnity::HAPI_ParmInfo parmInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "GetTextureFileNameFromMaterialParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, nodeID, parmInfo);
}
inline bool HoudiniEngineUnity::HEU_MaterialData::IsTransparentMaterial(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                        ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "IsTransparentMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, parameters);
}
inline bool HoudiniEngineUnity::HEU_MaterialData::GetMaterialAlpha(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                   ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*> parameters, float_t defaultValue,
                                                                   ByRef<float_t> alpha) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "GetMaterialAlpha", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, parameters, defaultValue, alpha);
}
inline ::StringW HoudiniEngineUnity::HEU_MaterialData::GetSupportedFileFormat(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo> imageInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "GetSupportedFileFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, imageInfo);
}
inline bool HoudiniEngineUnity::HEU_MaterialData::IsEquivalentTo(::HoudiniEngineUnity::HEU_MaterialData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_MaterialData* HoudiniEngineUnity::HEU_MaterialData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_MaterialData*>());
}
inline void HoudiniEngineUnity::HEU_MaterialData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MaterialData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_MaterialData::HEU_MaterialData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
