#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PreAssetEventData.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PreAssetEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PreAssetEventData::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::HoudiniEngineUnity::HEU_AssetEventType)>(&::HoudiniEngineUnity::HEU_PreAssetEventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3a05f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& HoudiniEngineUnity::HEU_PreAssetEventData::__cordl_internal_get_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Asset;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& HoudiniEngineUnity::HEU_PreAssetEventData::__cordl_internal_get_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Asset;
}
constexpr void HoudiniEngineUnity::HEU_PreAssetEventData::__cordl_internal_set_Asset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Asset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType& HoudiniEngineUnity::HEU_PreAssetEventData::__cordl_internal_get_AssetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetType;
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& HoudiniEngineUnity::HEU_PreAssetEventData::__cordl_internal_get_AssetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetType;
}
constexpr void HoudiniEngineUnity::HEU_PreAssetEventData::__cordl_internal_set_AssetType(::HoudiniEngineUnity::HEU_AssetEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetType = value;
}
inline void HoudiniEngineUnity::HEU_PreAssetEventData::_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HEU_AssetEventType assetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, assetType);
}
inline ::HoudiniEngineUnity::HEU_PreAssetEventData* HoudiniEngineUnity::HEU_PreAssetEventData::New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset,
                                                                                                        ::HoudiniEngineUnity::HEU_AssetEventType assetType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PreAssetEventData*>(asset, assetType));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PreAssetEventData::HEU_PreAssetEventData() {}
