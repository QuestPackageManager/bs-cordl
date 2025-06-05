#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_GeoInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GroupType_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_GeoInfo.getGroupCountByType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HAPI_GeoInfo::*)(::HoudiniEngineUnity::HAPI_GroupType)>(
    &::HoudiniEngineUnity::HAPI_GeoInfo::getGroupCountByType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a48520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_GeoInfo>::get(), "getGroupCountByType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GroupType>::get() })));
    return ___internal_method;
  }
};
inline int32_t HoudiniEngineUnity::HAPI_GeoInfo::getGroupCountByType(::HoudiniEngineUnity::HAPI_GroupType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_GeoInfo>::get(), "getGroupCountByType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GroupType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_GeoType", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isEditable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isTemplated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDisplayGeo", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasGeoChanged", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMaterialChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointGroupCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "primitiveGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "edgeGroupCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "partCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo::HAPI_GeoInfo(::HoudiniEngineUnity::HAPI_GeoType type, int32_t nameSH, int32_t nodeId, bool isEditable, bool isTemplated, bool isDisplayGeo,
                                                           bool hasGeoChanged, bool hasMaterialChanged, int32_t pointGroupCount, int32_t primitiveGroupCount, int32_t edgeGroupCount,
                                                           int32_t partCount) noexcept {
  this->type = type;
  this->nameSH = nameSH;
  this->nodeId = nodeId;
  this->isEditable = isEditable;
  this->isTemplated = isTemplated;
  this->isDisplayGeo = isDisplayGeo;
  this->hasGeoChanged = hasGeoChanged;
  this->hasMaterialChanged = hasMaterialChanged;
  this->pointGroupCount = pointGroupCount;
  this->primitiveGroupCount = primitiveGroupCount;
  this->edgeGroupCount = edgeGroupCount;
  this->partCount = partCount;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo::HAPI_GeoInfo() {}
