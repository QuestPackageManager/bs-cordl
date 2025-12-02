#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalLightData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__LightLayerEnum_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SoftShadowQuality_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalAdditionalLightData)
namespace UnityEngine::Rendering::Universal {
struct LightLayerEnum;
}
namespace UnityEngine::Rendering::Universal {
struct SoftShadowQuality;
}
namespace UnityEngine::Rendering {
class IAdditionalData;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalLightData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.Universal.LightLayerEnum, UnityEngine.Rendering.Universal.SoftShadowQuality, UnityEngine.Vector2
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalLightData
class CORDL_TYPE UniversalAdditionalLightData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field AdditionalLightsShadowDefaultCustomResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowDefaultCustomResolution,
                      put = setStaticF_AdditionalLightsShadowDefaultCustomResolution)) int32_t AdditionalLightsShadowDefaultCustomResolution;

  /// @brief Field AdditionalLightsShadowDefaultResolutionTier, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowDefaultResolutionTier, put = setStaticF_AdditionalLightsShadowDefaultResolutionTier)) int32_t AdditionalLightsShadowDefaultResolutionTier;

  /// @brief Field AdditionalLightsShadowMinimumResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowMinimumResolution, put = setStaticF_AdditionalLightsShadowMinimumResolution)) int32_t AdditionalLightsShadowMinimumResolution;

  /// @brief Field AdditionalLightsShadowResolutionTierCustom, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowResolutionTierCustom, put = setStaticF_AdditionalLightsShadowResolutionTierCustom)) int32_t AdditionalLightsShadowResolutionTierCustom;

  /// @brief Field AdditionalLightsShadowResolutionTierHigh, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowResolutionTierHigh, put = setStaticF_AdditionalLightsShadowResolutionTierHigh)) int32_t AdditionalLightsShadowResolutionTierHigh;

  /// @brief Field AdditionalLightsShadowResolutionTierLow, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowResolutionTierLow, put = setStaticF_AdditionalLightsShadowResolutionTierLow)) int32_t AdditionalLightsShadowResolutionTierLow;

  /// @brief Field AdditionalLightsShadowResolutionTierMedium, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsShadowResolutionTierMedium, put = setStaticF_AdditionalLightsShadowResolutionTierMedium)) int32_t AdditionalLightsShadowResolutionTierMedium;

  __declspec(property(get = get_additionalLightsShadowResolutionTier)) int32_t additionalLightsShadowResolutionTier;

  __declspec(property(get = get_customShadowLayers, put = set_customShadowLayers)) bool customShadowLayers;

  __declspec(property(get = get_light)) ::UnityW<::UnityEngine::Light> light;

  __declspec(property(get = get_lightCookieOffset, put = set_lightCookieOffset)) ::UnityEngine::Vector2 lightCookieOffset;

  __declspec(property(get = get_lightCookieSize, put = set_lightCookieSize)) ::UnityEngine::Vector2 lightCookieSize;

  __declspec(property(get = get_lightLayerMask, put = set_lightLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum lightLayerMask;

  /// @brief Field m_AdditionalLightsShadowResolutionTier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTier,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTier)) int32_t m_AdditionalLightsShadowResolutionTier;

  /// @brief Field m_CustomShadowLayers, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CustomShadowLayers, put = __cordl_internal_set_m_CustomShadowLayers)) bool m_CustomShadowLayers;

  /// @brief Field m_Light, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Light, put = __cordl_internal_set_m_Light)) ::UnityW<::UnityEngine::Light> m_Light;

  /// @brief Field m_LightCookieOffset, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieOffset, put = __cordl_internal_set_m_LightCookieOffset)) ::UnityEngine::Vector2 m_LightCookieOffset;

  /// @brief Field m_LightCookieSize, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieSize, put = __cordl_internal_set_m_LightCookieSize)) ::UnityEngine::Vector2 m_LightCookieSize;

  /// @brief Field m_LightLayerMask, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightLayerMask, put = __cordl_internal_set_m_LightLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum m_LightLayerMask;

  /// @brief Field m_RenderingLayers, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayers, put = __cordl_internal_set_m_RenderingLayers)) uint32_t m_RenderingLayers;

  /// @brief Field m_ShadowLayerMask, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowLayerMask, put = __cordl_internal_set_m_ShadowLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum m_ShadowLayerMask;

  /// @brief Field m_ShadowRenderingLayers, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowRenderingLayers, put = __cordl_internal_set_m_ShadowRenderingLayers)) uint32_t m_ShadowRenderingLayers;

  /// @brief Field m_SoftShadowQuality, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SoftShadowQuality, put = __cordl_internal_set_m_SoftShadowQuality)) ::UnityEngine::Rendering::Universal::SoftShadowQuality m_SoftShadowQuality;

  /// @brief Field m_UsePipelineSettings, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UsePipelineSettings, put = __cordl_internal_set_m_UsePipelineSettings)) bool m_UsePipelineSettings;

  /// @brief Field m_Version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_renderingLayers, put = set_renderingLayers)) uint32_t renderingLayers;

  __declspec(property(get = get_shadowLayerMask, put = set_shadowLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum shadowLayerMask;

  __declspec(property(get = get_shadowRenderingLayers, put = set_shadowRenderingLayers)) uint32_t shadowRenderingLayers;

  __declspec(property(get = get_softShadowQuality, put = set_softShadowQuality)) ::UnityEngine::Rendering::Universal::SoftShadowQuality softShadowQuality;

  __declspec(property(get = get_usePipelineSettings, put = set_usePipelineSettings)) bool usePipelineSettings;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
  constexpr operator ::UnityEngine::Rendering::IAdditionalData*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x66a98ac, size 0xe8, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x66a98a8, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method SyncLightAndShadowLayers, addr 0x66a9778, size 0xac, virtual false, abstract: false, final false
  inline void SyncLightAndShadowLayers();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTier() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTier();

  constexpr bool const& __cordl_internal_get_m_CustomShadowLayers() const;

  constexpr bool& __cordl_internal_get_m_CustomShadowLayers();

  constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_m_Light() const;

  constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_m_Light();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LightCookieOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LightCookieOffset();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LightCookieSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LightCookieSize();

  constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum const& __cordl_internal_get_m_LightLayerMask() const;

  constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum& __cordl_internal_get_m_LightLayerMask();

  constexpr uint32_t const& __cordl_internal_get_m_RenderingLayers() const;

  constexpr uint32_t& __cordl_internal_get_m_RenderingLayers();

  constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum const& __cordl_internal_get_m_ShadowLayerMask() const;

  constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum& __cordl_internal_get_m_ShadowLayerMask();

  constexpr uint32_t const& __cordl_internal_get_m_ShadowRenderingLayers() const;

  constexpr uint32_t& __cordl_internal_get_m_ShadowRenderingLayers();

  constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality const& __cordl_internal_get_m_SoftShadowQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality& __cordl_internal_get_m_SoftShadowQuality();

  constexpr bool const& __cordl_internal_get_m_UsePipelineSettings() const;

  constexpr bool& __cordl_internal_get_m_UsePipelineSettings();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTier(int32_t value);

  constexpr void __cordl_internal_set_m_CustomShadowLayers(bool value);

  constexpr void __cordl_internal_set_m_Light(::UnityW<::UnityEngine::Light> value);

  constexpr void __cordl_internal_set_m_LightCookieOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LightCookieSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  constexpr void __cordl_internal_set_m_RenderingLayers(uint32_t value);

  constexpr void __cordl_internal_set_m_ShadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  constexpr void __cordl_internal_set_m_ShadowRenderingLayers(uint32_t value);

  constexpr void __cordl_internal_set_m_SoftShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);

  constexpr void __cordl_internal_set_m_UsePipelineSettings(bool value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x66a9994, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_AdditionalLightsShadowDefaultCustomResolution();

  static inline int32_t getStaticF_AdditionalLightsShadowDefaultResolutionTier();

  static inline int32_t getStaticF_AdditionalLightsShadowMinimumResolution();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierCustom();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierHigh();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierLow();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierMedium();

  /// @brief Method get_additionalLightsShadowResolutionTier, addr 0x66a9740, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTier();

  /// @brief Method get_customShadowLayers, addr 0x66a9824, size 0x8, virtual false, abstract: false, final false
  inline bool get_customShadowLayers();

  /// @brief Method get_light, addr 0x66a96a8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Light> get_light();

  /// @brief Method get_lightCookieOffset, addr 0x66a9888, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lightCookieOffset();

  /// @brief Method get_lightCookieSize, addr 0x66a9878, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lightCookieSize();

  /// @brief Method get_lightLayerMask, addr 0x66a9748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightLayerEnum get_lightLayerMask();

  /// @brief Method get_renderingLayers, addr 0x66a9758, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_renderingLayers();

  /// @brief Method get_shadowLayerMask, addr 0x66a9848, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightLayerEnum get_shadowLayerMask();

  /// @brief Method get_shadowRenderingLayers, addr 0x66a9858, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_shadowRenderingLayers();

  /// @brief Method get_softShadowQuality, addr 0x66a9898, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::SoftShadowQuality get_softShadowQuality();

  /// @brief Method get_usePipelineSettings, addr 0x66a9698, size 0x8, virtual false, abstract: false, final false
  inline bool get_usePipelineSettings();

  /// @brief Method get_version, addr 0x66a9690, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
  constexpr ::UnityEngine::Rendering::IAdditionalData* i___UnityEngine__Rendering__IAdditionalData() noexcept;

  static inline void setStaticF_AdditionalLightsShadowDefaultCustomResolution(int32_t value);

  static inline void setStaticF_AdditionalLightsShadowDefaultResolutionTier(int32_t value);

  static inline void setStaticF_AdditionalLightsShadowMinimumResolution(int32_t value);

  static inline void setStaticF_AdditionalLightsShadowResolutionTierCustom(int32_t value);

  static inline void setStaticF_AdditionalLightsShadowResolutionTierHigh(int32_t value);

  static inline void setStaticF_AdditionalLightsShadowResolutionTierLow(int32_t value);

  static inline void setStaticF_AdditionalLightsShadowResolutionTierMedium(int32_t value);

  /// @brief Method set_customShadowLayers, addr 0x66a982c, size 0x1c, virtual false, abstract: false, final false
  inline void set_customShadowLayers(bool value);

  /// @brief Method set_lightCookieOffset, addr 0x66a9890, size 0x8, virtual false, abstract: false, final false
  inline void set_lightCookieOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_lightCookieSize, addr 0x66a9880, size 0x8, virtual false, abstract: false, final false
  inline void set_lightCookieSize(::UnityEngine::Vector2 value);

  /// @brief Method set_lightLayerMask, addr 0x66a9750, size 0x8, virtual false, abstract: false, final false
  inline void set_lightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  /// @brief Method set_renderingLayers, addr 0x66a9760, size 0x18, virtual false, abstract: false, final false
  inline void set_renderingLayers(uint32_t value);

  /// @brief Method set_shadowLayerMask, addr 0x66a9850, size 0x8, virtual false, abstract: false, final false
  inline void set_shadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  /// @brief Method set_shadowRenderingLayers, addr 0x66a9860, size 0x18, virtual false, abstract: false, final false
  inline void set_shadowRenderingLayers(uint32_t value);

  /// @brief Method set_softShadowQuality, addr 0x66a98a0, size 0x8, virtual false, abstract: false, final false
  inline void set_softShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);

  /// @brief Method set_usePipelineSettings, addr 0x66a96a0, size 0x8, virtual false, abstract: false, final false
  inline void set_usePipelineSettings(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalAdditionalLightData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalAdditionalLightData(UniversalAdditionalLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalAdditionalLightData(UniversalAdditionalLightData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12965 };

  /// @brief Field m_Version, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_UsePipelineSettings, offset: 0x24, size: 0x1, def value: None
  bool ___m_UsePipelineSettings;

  /// @brief Field m_Light, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> ___m_Light;

  /// @brief Field m_AdditionalLightsShadowResolutionTier, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTier;

  /// @brief Field m_LightLayerMask, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightLayerEnum ___m_LightLayerMask;

  /// @brief Field m_RenderingLayers, offset: 0x38, size: 0x4, def value: None
  uint32_t ___m_RenderingLayers;

  /// @brief Field m_CustomShadowLayers, offset: 0x3c, size: 0x1, def value: None
  bool ___m_CustomShadowLayers;

  /// @brief Field m_ShadowLayerMask, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightLayerEnum ___m_ShadowLayerMask;

  /// @brief Field m_ShadowRenderingLayers, offset: 0x44, size: 0x4, def value: None
  uint32_t ___m_ShadowRenderingLayers;

  /// @brief Field m_LightCookieSize, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LightCookieSize;

  /// @brief Field m_LightCookieOffset, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LightCookieOffset;

  /// @brief Field m_SoftShadowQuality, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::SoftShadowQuality ___m_SoftShadowQuality;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_Version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_UsePipelineSettings) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_Light) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_AdditionalLightsShadowResolutionTier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_LightLayerMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_RenderingLayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_CustomShadowLayers) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_ShadowLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_ShadowRenderingLayers) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_LightCookieSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_LightCookieOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_SoftShadowQuality) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, "UnityEngine.Rendering.Universal", "UniversalAdditionalLightData");
