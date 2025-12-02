#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechniqueOption_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::DecalSettings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x668dba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_technique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___technique;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_technique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___technique;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_technique(::UnityEngine::Rendering::Universal::DecalTechniqueOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___technique = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_maxDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_maxDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_maxDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDrawDistance = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_decalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_decalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_decalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_dBufferSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_dBufferSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_dBufferSettings(::UnityEngine::Rendering::Universal::DBufferSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dBufferSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_screenSpaceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_screenSpaceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_screenSpaceSettings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screenSpaceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalSettings* UnityEngine::Rendering::Universal::DecalSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalSettings::DecalSettings() {}
