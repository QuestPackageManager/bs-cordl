#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IncludeAdditionalRPAssets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IncludeAdditionalRPAssets_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IncludeAdditionalRPAssets_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::IncludeAdditionalRPAssets_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::IncludeAdditionalRPAssets_Version() {}
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::Count{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version UnityEngine::Rendering::IncludeAdditionalRPAssets_Version::Last{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a2f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.get_includeReferencedInScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeReferencedInScenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a2f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "get_includeReferencedInScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.set_includeReferencedInScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)(bool)>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeReferencedInScenes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a2f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "set_includeReferencedInScenes", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.get_includeAssetsByLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeAssetsByLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a2fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "get_includeAssetsByLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.set_includeAssetsByLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)(bool)>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeAssetsByLabel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a2fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "set_includeAssetsByLabel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.get_labelToInclude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::get_labelToInclude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a3038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "get_labelToInclude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets.set_labelToInclude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)(::StringW)>(
    &::UnityEngine::Rendering::IncludeAdditionalRPAssets::set_labelToInclude)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a3040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "set_labelToInclude", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IncludeAdditionalRPAssets._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IncludeAdditionalRPAssets::*)()>(&::UnityEngine::Rendering::IncludeAdditionalRPAssets::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a30b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_version(::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_version = value;
}
constexpr bool& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeReferencedInScenes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeReferencedInScenes;
}
constexpr bool const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeReferencedInScenes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeReferencedInScenes;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_IncludeReferencedInScenes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IncludeReferencedInScenes = value;
}
constexpr bool& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeAssetsByLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeAssetsByLabel;
}
constexpr bool const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_IncludeAssetsByLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeAssetsByLabel;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_IncludeAssetsByLabel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IncludeAssetsByLabel = value;
}
constexpr ::StringW& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_LabelToInclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelToInclude;
}
constexpr ::StringW const& UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_get_m_LabelToInclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelToInclude;
}
constexpr void UnityEngine::Rendering::IncludeAdditionalRPAssets::__cordl_internal_set_m_LabelToInclude(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LabelToInclude = value;
}
inline int32_t UnityEngine::Rendering::IncludeAdditionalRPAssets::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeReferencedInScenes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "get_includeReferencedInScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeReferencedInScenes(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "set_includeReferencedInScenes", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::IncludeAdditionalRPAssets::get_includeAssetsByLabel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "get_includeAssetsByLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::set_includeAssetsByLabel(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "set_includeAssetsByLabel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::IncludeAdditionalRPAssets::get_labelToInclude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "get_labelToInclude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::set_labelToInclude(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { "set_labelToInclude", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::IncludeAdditionalRPAssets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IncludeAdditionalRPAssets* UnityEngine::Rendering::IncludeAdditionalRPAssets::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::IncludeAdditionalRPAssets*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::IncludeAdditionalRPAssets::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::IncludeAdditionalRPAssets::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets::IncludeAdditionalRPAssets() {}
