#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectRenderData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectRenderData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectRenderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRenderData::*)()>(&::GlobalNamespace::MainEffectRenderData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f430cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRenderData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& GlobalNamespace::MainEffectRenderData::__cordl_internal_get_tempTextureHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextureHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& GlobalNamespace::MainEffectRenderData::__cordl_internal_get_tempTextureHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextureHandles;
}
constexpr void GlobalNamespace::MainEffectRenderData::__cordl_internal_set_tempTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tempTextureHandles = value;
}
inline void GlobalNamespace::MainEffectRenderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRenderData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectRenderData* GlobalNamespace::MainEffectRenderData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectRenderData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectRenderData::MainEffectRenderData() {}
