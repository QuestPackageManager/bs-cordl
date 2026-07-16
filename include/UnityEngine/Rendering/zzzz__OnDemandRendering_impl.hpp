#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OnDemandRendering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OnDemandRendering_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.get_renderFrameInterval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b07ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(), { "get_renderFrameInterval", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.GetRenderFrameInterval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>)>(&::UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b07f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(), { "GetRenderFrameInterval", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OnDemandRendering::setStaticF_m_RenderFrameInterval(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_RenderFrameInterval", ::UnityEngine::Rendering::OnDemandRendering*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::getStaticF_m_RenderFrameInterval() {
  return ::cordl_internals::getStaticField<int32_t, "m_RenderFrameInterval", ::UnityEngine::Rendering::OnDemandRendering*>();
}
inline int32_t UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(), { "get_renderFrameInterval", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval(::by_ref<int32_t> frameInterval) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnDemandRendering*>(), { "GetRenderFrameInterval", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frameInterval);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OnDemandRendering::OnDemandRendering() {}
