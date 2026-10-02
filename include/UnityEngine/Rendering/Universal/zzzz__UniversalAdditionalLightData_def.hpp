#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalLightData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__LightLayerEnum_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SoftShadowQuality_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalAdditionalLightData)
namespace UnityEngine::Rendering::Universal {
struct LightLayerEnum;
}
namespace UnityEngine::Rendering::Universal {
struct SoftShadowQuality;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalAdditionalLightData_Version;
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
struct RenderingLayerMask;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct UniversalAdditionalLightData_Version;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalLightData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version, "UnityEngine.Rendering.Universal", "UniversalAdditionalLightData/Version");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, "UnityEngine.Rendering.Universal", "UniversalAdditionalLightData");
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalLightData/Version
struct CORDL_TYPE UniversalAdditionalLightData_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalAdditionalLightData_Version_Unwrapped
  enum struct __UniversalAdditionalLightData_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_RenderingLayers = static_cast<int32_t>(0x2),
    __E_SoftShadowQuality = static_cast<int32_t>(0x3),
    __E_RenderingLayersMask = static_cast<int32_t>(0x4),
    __E_Count = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalAdditionalLightData_Version_Unwrapped() const noexcept {
    return static_cast<__UniversalAdditionalLightData_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalAdditionalLightData_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalAdditionalLightData_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(5)
  static ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const Initial;

  /// @brief Field RenderingLayers value: I32(2)
  static ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const RenderingLayers;

  /// @brief Field RenderingLayersMask value: I32(4)
  static ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const RenderingLayersMask;

  /// @brief Field SoftShadowQuality value: I32(3)
  static ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const SoftShadowQuality;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.Light))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.Universal.LightLayerEnum, UnityEngine.Rendering.Universal.SoftShadowQuality,
// UnityEngine.Rendering.Universal.UniversalAdditionalLightData::Version, UnityEngine.RenderingLayerMask, UnityEngine.Vector2
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalLightData
class CORDL_TYPE UniversalAdditionalLightData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version;

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

  /// @brief [Tooltip("Controls the offset of the cookie mask currently assigned to the light.")]
  __declspec(property(get = get_lightCookieOffset, put = set_lightCookieOffset)) ::UnityEngine::Vector2 lightCookieOffset;

  /// @brief [Tooltip("Controls the size of the cookie mask currently assigned to the light.")]
  __declspec(property(get = get_lightCookieSize, put = set_lightCookieSize)) ::UnityEngine::Vector2 lightCookieSize;

  /// @brief [Obsolete("This is obsolete, please use renderingLayerMask instead. #from(2023.1) #breakingFrom(2023.1)", true)]
  __declspec(property(get = get_lightLayerMask, put = set_lightLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum lightLayerMask;

  /// @brief Field m_AdditionalLightsShadowResolutionTier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTier,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTier)) int32_t m_AdditionalLightsShadowResolutionTier;

  /// @brief Field m_CustomShadowLayers, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CustomShadowLayers, put = __cordl_internal_set_m_CustomShadowLayers)) bool m_CustomShadowLayers;

  /// @brief Field m_Light, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Light, put = __cordl_internal_set_m_Light)) ::UnityW<::UnityEngine::Light> m_Light;

  /// @brief Field m_LightCookieOffset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieOffset, put = __cordl_internal_set_m_LightCookieOffset)) ::UnityEngine::Vector2 m_LightCookieOffset;

  /// @brief Field m_LightCookieSize, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieSize, put = __cordl_internal_set_m_LightCookieSize)) ::UnityEngine::Vector2 m_LightCookieSize;

  /// @brief Field m_LightLayerMask, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightLayerMask, put = __cordl_internal_set_m_LightLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum m_LightLayerMask;

  /// @brief Field m_RenderingLayers, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayers, put = __cordl_internal_set_m_RenderingLayers)) uint32_t m_RenderingLayers;

  /// @brief Field m_RenderingLayersMask, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersMask, put = __cordl_internal_set_m_RenderingLayersMask)) ::UnityEngine::RenderingLayerMask m_RenderingLayersMask;

  /// @brief Field m_ShadowLayerMask, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowLayerMask, put = __cordl_internal_set_m_ShadowLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum m_ShadowLayerMask;

  /// @brief Field m_ShadowRenderingLayers, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowRenderingLayers, put = __cordl_internal_set_m_ShadowRenderingLayers)) uint32_t m_ShadowRenderingLayers;

  /// @brief Field m_ShadowRenderingLayersMask, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowRenderingLayersMask, put = __cordl_internal_set_m_ShadowRenderingLayersMask)) ::UnityEngine::RenderingLayerMask m_ShadowRenderingLayersMask;

  /// @brief Field m_SoftShadowQuality, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SoftShadowQuality, put = __cordl_internal_set_m_SoftShadowQuality)) ::UnityEngine::Rendering::Universal::SoftShadowQuality m_SoftShadowQuality;

  /// @brief Field m_UsePipelineSettings, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UsePipelineSettings, put = __cordl_internal_set_m_UsePipelineSettings)) bool m_UsePipelineSettings;

  /// @brief Field m_Version, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version m_Version;

  __declspec(property(get = get_renderingLayers, put = set_renderingLayers)) ::UnityEngine::RenderingLayerMask renderingLayers;

  /// @brief [Obsolete("This is obsolete, please use shadowRenderingLayerMask instead. #from(2023.1) #breakingFrom(2023.1)", true)]
  __declspec(property(get = get_shadowLayerMask, put = set_shadowLayerMask)) ::UnityEngine::Rendering::Universal::LightLayerEnum shadowLayerMask;

  __declspec(property(get = get_shadowRenderingLayers, put = set_shadowRenderingLayers)) ::UnityEngine::RenderingLayerMask shadowRenderingLayers;

  /// @brief [Tooltip("Controls the filtering quality of soft shadows. Higher quality has lower performance.")]
  __declspec(property(get = get_softShadowQuality, put = set_softShadowQuality)) ::UnityEngine::Rendering::Universal::SoftShadowQuality softShadowQuality;

  __declspec(property(get = get_usePipelineSettings, put = set_usePipelineSettings)) bool usePipelineSettings;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
  constexpr operator ::UnityEngine::Rendering::IAdditionalData*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* New_ctor();

  /// @brief Method SyncLightAndShadowLayers, addr 0x6d00dc0, size 0xe4, virtual false, abstract: false, final false
  inline void SyncLightAndShadowLayers();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x6d01004, size 0x12c, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x6d00fec, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

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

  constexpr ::UnityEngine::RenderingLayerMask const& __cordl_internal_get_m_RenderingLayersMask() const;

  constexpr ::UnityEngine::RenderingLayerMask& __cordl_internal_get_m_RenderingLayersMask();

  constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum const& __cordl_internal_get_m_ShadowLayerMask() const;

  constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum& __cordl_internal_get_m_ShadowLayerMask();

  constexpr uint32_t const& __cordl_internal_get_m_ShadowRenderingLayers() const;

  constexpr uint32_t& __cordl_internal_get_m_ShadowRenderingLayers();

  constexpr ::UnityEngine::RenderingLayerMask const& __cordl_internal_get_m_ShadowRenderingLayersMask() const;

  constexpr ::UnityEngine::RenderingLayerMask& __cordl_internal_get_m_ShadowRenderingLayersMask();

  constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality const& __cordl_internal_get_m_SoftShadowQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality& __cordl_internal_get_m_SoftShadowQuality();

  constexpr bool const& __cordl_internal_get_m_UsePipelineSettings() const;

  constexpr bool& __cordl_internal_get_m_UsePipelineSettings();

  constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTier(int32_t value);

  constexpr void __cordl_internal_set_m_CustomShadowLayers(bool value);

  constexpr void __cordl_internal_set_m_Light(::UnityW<::UnityEngine::Light> value);

  constexpr void __cordl_internal_set_m_LightCookieOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LightCookieSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  constexpr void __cordl_internal_set_m_RenderingLayers(uint32_t value);

  constexpr void __cordl_internal_set_m_RenderingLayersMask(::UnityEngine::RenderingLayerMask value);

  constexpr void __cordl_internal_set_m_ShadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  constexpr void __cordl_internal_set_m_ShadowRenderingLayers(uint32_t value);

  constexpr void __cordl_internal_set_m_ShadowRenderingLayersMask(::UnityEngine::RenderingLayerMask value);

  constexpr void __cordl_internal_set_m_SoftShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);

  constexpr void __cordl_internal_set_m_UsePipelineSettings(bool value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version value);

  /// @brief Method .ctor, addr 0x6d01150, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_AdditionalLightsShadowDefaultCustomResolution();

  static inline int32_t getStaticF_AdditionalLightsShadowDefaultResolutionTier();

  static inline int32_t getStaticF_AdditionalLightsShadowMinimumResolution();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierCustom();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierHigh();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierLow();

  static inline int32_t getStaticF_AdditionalLightsShadowResolutionTierMedium();

  /// @brief Method get_additionalLightsShadowResolutionTier, addr 0x6d00d94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTier();

  /// @brief Method get_customShadowLayers, addr 0x6d00d9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_customShadowLayers();

  /// @brief Method get_light, addr 0x6d00cfc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Light> get_light();

  /// @brief Method get_lightCookieOffset, addr 0x6d00eb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lightCookieOffset();

  /// @brief Method get_lightCookieSize, addr 0x6d00ea4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lightCookieSize();

  /// @brief Method get_lightLayerMask, addr 0x6d01130, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightLayerEnum get_lightLayerMask();

  /// @brief Method get_renderingLayers, addr 0x6d00ed4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingLayerMask get_renderingLayers();

  /// @brief Method get_shadowLayerMask, addr 0x6d01140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightLayerEnum get_shadowLayerMask();

  /// @brief Method get_shadowRenderingLayers, addr 0x6d00f60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingLayerMask get_shadowRenderingLayers();

  /// @brief Method get_softShadowQuality, addr 0x6d00ec4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::SoftShadowQuality get_softShadowQuality();

  /// @brief Method get_usePipelineSettings, addr 0x6d00cec, size 0x8, virtual false, abstract: false, final false
  inline bool get_usePipelineSettings();

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

  /// @brief Method set_customShadowLayers, addr 0x6d00da4, size 0x1c, virtual false, abstract: false, final false
  inline void set_customShadowLayers(bool value);

  /// @brief Method set_lightCookieOffset, addr 0x6d00ebc, size 0x8, virtual false, abstract: false, final false
  inline void set_lightCookieOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_lightCookieSize, addr 0x6d00eac, size 0x8, virtual false, abstract: false, final false
  inline void set_lightCookieSize(::UnityEngine::Vector2 value);

  /// @brief Method set_lightLayerMask, addr 0x6d01138, size 0x8, virtual false, abstract: false, final false
  inline void set_lightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  /// @brief Method set_renderingLayers, addr 0x6d00edc, size 0x84, virtual false, abstract: false, final false
  inline void set_renderingLayers(::UnityEngine::RenderingLayerMask value);

  /// @brief Method set_shadowLayerMask, addr 0x6d01148, size 0x8, virtual false, abstract: false, final false
  inline void set_shadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);

  /// @brief Method set_shadowRenderingLayers, addr 0x6d00f68, size 0x84, virtual false, abstract: false, final false
  inline void set_shadowRenderingLayers(::UnityEngine::RenderingLayerMask value);

  /// @brief Method set_softShadowQuality, addr 0x6d00ecc, size 0x8, virtual false, abstract: false, final false
  inline void set_softShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);

  /// @brief Method set_usePipelineSettings, addr 0x6d00cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_usePipelineSettings(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalAdditionalLightData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalLightData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalAdditionalLightData(UniversalAdditionalLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalLightData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalAdditionalLightData(UniversalAdditionalLightData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13239 };

  /// [Tooltip("Controls if light Shadow Bias parameters use pipeline settings.")]
  /// [SerializeField]
  /// @brief Field m_UsePipelineSettings, offset: 0x20, size: 0x1, def value: None
  bool ___m_UsePipelineSettings;

  /// @brief Field m_Light, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> ___m_Light;

  /// [Tooltip("Controls if light shadow resolution uses pipeline settings.")]
  /// [SerializeField]
  /// @brief Field m_AdditionalLightsShadowResolutionTier, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTier;

  /// [SerializeField]
  /// @brief Field m_CustomShadowLayers, offset: 0x34, size: 0x1, def value: None
  bool ___m_CustomShadowLayers;

  /// [SerializeField]
  /// @brief Field m_LightCookieSize, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LightCookieSize;

  /// [SerializeField]
  /// @brief Field m_LightCookieOffset, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LightCookieOffset;

  /// [SerializeField]
  /// @brief Field m_SoftShadowQuality, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::SoftShadowQuality ___m_SoftShadowQuality;

  /// [SerializeField]
  /// @brief Field m_RenderingLayersMask, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::RenderingLayerMask ___m_RenderingLayersMask;

  /// [SerializeField]
  /// @brief Field m_ShadowRenderingLayersMask, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::RenderingLayerMask ___m_ShadowRenderingLayersMask;

  /// [SerializeField]
  /// @brief Field m_Version, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version ___m_Version;

  /// [Obsolete("This is obsolete, please use m_RenderingLayerMask instead. #from(2023.1)")]
  /// [SerializeField]
  /// @brief Field m_LightLayerMask, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightLayerEnum ___m_LightLayerMask;

  /// [Obsolete("This is obsolete, please use m_RenderingLayerMask instead. #from(2023.1)")]
  /// [SerializeField]
  /// @brief Field m_ShadowLayerMask, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightLayerEnum ___m_ShadowLayerMask;

  /// [SerializeField]
  /// [Obsolete("This is obsolete, please use m_RenderingLayersMask instead. #from(6000.2)")]
  /// @brief Field m_RenderingLayers, offset: 0x60, size: 0x4, def value: None
  uint32_t ___m_RenderingLayers;

  /// [SerializeField]
  /// [Obsolete("This is obsolete, please use renderingLayersMask instead. #from(6000.2)")]
  /// @brief Field m_ShadowRenderingLayers, offset: 0x64, size: 0x4, def value: None
  uint32_t ___m_ShadowRenderingLayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_UsePipelineSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_Light) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_AdditionalLightsShadowResolutionTier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_CustomShadowLayers) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_LightCookieSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_LightCookieOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_SoftShadowQuality) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_RenderingLayersMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_ShadowRenderingLayersMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_Version) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_LightLayerMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_ShadowLayerMask) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_RenderingLayers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData, ___m_ShadowRenderingLayers) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData) == 0x68, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
