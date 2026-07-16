#pragma once
// IWYU pragma private; include "UnityEngine/LightmapData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightmapData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightmapData::*)()>(&::UnityEngine::LightmapData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a83ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapData*>(), { ".ctor", {}, {} })));
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
  this->___m_Light = value;
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
  this->___m_Dir = value;
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
  this->___m_ShadowMask = value;
}
inline void UnityEngine::LightmapData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LightmapData* UnityEngine::LightmapData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightmapData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapData::LightmapData() {}
