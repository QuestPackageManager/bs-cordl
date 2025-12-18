#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeSceneData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeSceneData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeSceneData::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Rendering::ProbeVolumeSceneData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e0ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeSceneData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeSceneData.SetParentObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeSceneData::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Rendering::ProbeVolumeSceneData::SetParentObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e0cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeSceneData*>::get(), "SetParentObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_get_parentAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentAsset;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_get_parentAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentAsset;
}
constexpr void UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_set_parentAsset(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>*& UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_get_obsoleteSceneBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteSceneBounds;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>* const& UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_get_obsoleteSceneBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteSceneBounds;
}
constexpr void UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_set_obsoleteSceneBounds(::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obsoleteSceneBounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>*& UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_get_obsoleteHasProbeVolumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteHasProbeVolumes;
}
constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>* const& UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_get_obsoleteHasProbeVolumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obsoleteHasProbeVolumes;
}
constexpr void UnityEngine::Rendering::ProbeVolumeSceneData::__cordl_internal_set_obsoleteHasProbeVolumes(::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obsoleteHasProbeVolumes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeVolumeSceneData::_ctor(::UnityEngine::Object* parentAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeSceneData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentAsset);
}
inline void UnityEngine::Rendering::ProbeVolumeSceneData::SetParentObject(::UnityEngine::Object* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeSceneData*>::get(), "SetParentObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline ::UnityEngine::Rendering::ProbeVolumeSceneData* UnityEngine::Rendering::ProbeVolumeSceneData::New_ctor(::UnityEngine::Object* parentAsset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeSceneData*>(parentAsset));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData::ProbeVolumeSceneData() {}
