#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassRenderDataSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderDataSO_Data._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRenderDataSO_Data::*)()>(&::GlobalNamespace::BloomPrePassRenderDataSO_Data::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderDataSO_Data*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_bloomPrePassRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_bloomPrePassRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassRenderTexture;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_bloomPrePassRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomPrePassRenderTexture = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_textureToScreenRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureToScreenRatio;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_textureToScreenRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureToScreenRatio;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_textureToScreenRatio(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureToScreenRatio = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_viewMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_viewMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewMatrix;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_projectionMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_projectionMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionMatrix;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectionMatrix = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_stereoCameraEyeOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoCameraEyeOffsets;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_stereoCameraEyeOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoCameraEyeOffsets;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_stereoCameraEyeOffsets(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoCameraEyeOffsets = value;
}
constexpr ::GlobalNamespace::ToneMapping& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_toneMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMapping;
}
constexpr ::GlobalNamespace::ToneMapping const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_toneMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMapping;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_toneMapping(::GlobalNamespace::ToneMapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toneMapping = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_tempTextureHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextureHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_get_tempTextureHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextureHandles;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO_Data::__cordl_internal_set_tempTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tempTextureHandles = value;
}
inline void GlobalNamespace::BloomPrePassRenderDataSO_Data::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderDataSO_Data*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRenderDataSO_Data* GlobalNamespace::BloomPrePassRenderDataSO_Data::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRenderDataSO_Data*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data::BloomPrePassRenderDataSO_Data() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRenderDataSO::*)()>(&::GlobalNamespace::BloomPrePassRenderDataSO::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58629ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data*& GlobalNamespace::BloomPrePassRenderDataSO::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data* const& GlobalNamespace::BloomPrePassRenderDataSO::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO::__cordl_internal_set_data(::GlobalNamespace::BloomPrePassRenderDataSO_Data* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void GlobalNamespace::BloomPrePassRenderDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRenderDataSO* GlobalNamespace::BloomPrePassRenderDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRenderDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO::BloomPrePassRenderDataSO() {}
