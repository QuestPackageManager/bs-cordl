#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_UnityMaterialInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_UnityMaterialInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_UnityMaterialInfo::*)(::StringW, ::StringW, int32_t)>(
    &::HoudiniEngineUnity::HEU_UnityMaterialInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25868cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_UnityMaterialInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_get__unityMaterialPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityMaterialPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_get__unityMaterialPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityMaterialPath;
}
constexpr void HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_set__unityMaterialPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityMaterialPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_get__substancePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____substancePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_get__substancePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____substancePath;
}
constexpr void HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_set__substancePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____substancePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_get__substanceIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____substanceIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_get__substanceIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____substanceIndex;
}
constexpr void HoudiniEngineUnity::HEU_UnityMaterialInfo::__cordl_internal_set__substanceIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____substanceIndex = value;
}
inline ::HoudiniEngineUnity::HEU_UnityMaterialInfo* HoudiniEngineUnity::HEU_UnityMaterialInfo::New_ctor(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_UnityMaterialInfo*>(unityMaterialPath, substancePath, substanceIndex));
}
inline void HoudiniEngineUnity::HEU_UnityMaterialInfo::_ctor(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_UnityMaterialInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unityMaterialPath, substancePath, substanceIndex);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_UnityMaterialInfo::HEU_UnityMaterialInfo() {}
