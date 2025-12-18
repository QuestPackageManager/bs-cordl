#pragma once
// IWYU pragma private; include "UnityEngine/LightmapData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightmapData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LightmapData::*)()>(&::UnityEngine::LightmapData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68bc920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightmapData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::LightmapData::__cordl_internal_get_m_Light() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Light;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::LightmapData::__cordl_internal_get_m_Light() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Light;
}
constexpr void UnityEngine::LightmapData::__cordl_internal_set_m_Light(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Light)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::LightmapData::__cordl_internal_get_m_Dir() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dir;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::LightmapData::__cordl_internal_get_m_Dir() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dir;
}
constexpr void UnityEngine::LightmapData::__cordl_internal_set_m_Dir(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dir)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::LightmapData::__cordl_internal_get_m_ShadowMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowMask;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::LightmapData::__cordl_internal_get_m_ShadowMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowMask;
}
constexpr void UnityEngine::LightmapData::__cordl_internal_set_m_ShadowMask(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShadowMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::LightmapData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightmapData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::LightmapData* UnityEngine::LightmapData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::LightmapData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapData::LightmapData() {}
