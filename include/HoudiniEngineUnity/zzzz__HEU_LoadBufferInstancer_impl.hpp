#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferInstancer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferInstancer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferInstancer::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferInstancer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceTransforms;
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceTransforms;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instanceTransforms(::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instanceTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instancePrefixes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancePrefixes;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instancePrefixes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancePrefixes;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instancePrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instancePrefixes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceNodeIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceNodeIDs;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceNodeIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceNodeIDs;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instanceNodeIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instanceNodeIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__assetPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetPaths;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__assetPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetPaths;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__assetPaths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetPaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__collisionAssetPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collisionAssetPaths;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__collisionAssetPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collisionAssetPaths;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__collisionAssetPaths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collisionAssetPaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* HoudiniEngineUnity::HEU_LoadBufferInstancer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferInstancer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_LoadBufferInstancer::HEU_LoadBufferInstancer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
