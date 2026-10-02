#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Sampling/SamplingResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Sampling/zzzz__SamplingResources_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Sampling/zzzz__SamplingResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType::SamplingResources_ResourceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType::SamplingResources_ResourceType() {}
constexpr ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType UnityEngine::Rendering::Sampling::SamplingResources_ResourceType::BlueNoiseTextures{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType UnityEngine::Rendering::Sampling::SamplingResources_ResourceType::SobolMatrices{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Sampling::SamplingResources_ResourceType UnityEngine::Rendering::Sampling::SamplingResources_ResourceType::All{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::Sampling::SamplingResources.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Sampling::SamplingResources*)>(
    &::UnityEngine::Rendering::Sampling::SamplingResources::Bind)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6bf1ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Sampling::SamplingResources*>(),
                                         { "Bind", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Sampling::SamplingResources*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Sampling::SamplingResources.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Sampling::SamplingResources::*)()>(&::UnityEngine::Rendering::Sampling::SamplingResources::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bf210c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Sampling::SamplingResources*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Sampling::SamplingResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Sampling::SamplingResources::*)()>(&::UnityEngine::Rendering::Sampling::SamplingResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bf2120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Sampling::SamplingResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolScramblingTile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolScramblingTile;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolScramblingTile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolScramblingTile;
}
constexpr void UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_set_m_SobolScramblingTile(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SobolScramblingTile = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolRankingTile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolRankingTile;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolRankingTile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolRankingTile;
}
constexpr void UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_set_m_SobolRankingTile(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SobolRankingTile = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolOwenScrambled256Samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolOwenScrambled256Samples;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolOwenScrambled256Samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolOwenScrambled256Samples;
}
constexpr void UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_set_m_SobolOwenScrambled256Samples(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SobolOwenScrambled256Samples = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_get_m_SobolBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SobolBuffer;
}
constexpr void UnityEngine::Rendering::Sampling::SamplingResources::__cordl_internal_set_m_SobolBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SobolBuffer = value;
}
inline void UnityEngine::Rendering::Sampling::SamplingResources::setStaticF_sobolMatrices(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "sobolMatrices", ::UnityEngine::Rendering::Sampling::SamplingResources*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> UnityEngine::Rendering::Sampling::SamplingResources::getStaticF_sobolMatrices() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "sobolMatrices", ::UnityEngine::Rendering::Sampling::SamplingResources*>();
}
inline void UnityEngine::Rendering::Sampling::SamplingResources::Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Sampling::SamplingResources* resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Sampling::SamplingResources*>(),
                                       { "Bind", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Sampling::SamplingResources*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, resources);
}
inline void UnityEngine::Rendering::Sampling::SamplingResources::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Sampling::SamplingResources*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Sampling::SamplingResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Sampling::SamplingResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Sampling::SamplingResources* UnityEngine::Rendering::Sampling::SamplingResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Sampling::SamplingResources*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Sampling::SamplingResources::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Sampling::SamplingResources::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Sampling::SamplingResources::SamplingResources() {}
