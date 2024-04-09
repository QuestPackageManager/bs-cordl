#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputAssetPreset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputAssetPreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputAssetPreset::*)()>(&::HoudiniEngineUnity::HEU_InputAssetPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2430ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputAssetPreset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_InputAssetPreset::__cordl_internal_get__gameObjectName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputAssetPreset::__cordl_internal_get__gameObjectName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectName;
}
constexpr void HoudiniEngineUnity::HEU_InputAssetPreset::__cordl_internal_set__gameObjectName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_InputAssetPreset* HoudiniEngineUnity::HEU_InputAssetPreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InputAssetPreset*>());
}
inline void HoudiniEngineUnity::HEU_InputAssetPreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputAssetPreset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputAssetPreset::HEU_InputAssetPreset() {}
