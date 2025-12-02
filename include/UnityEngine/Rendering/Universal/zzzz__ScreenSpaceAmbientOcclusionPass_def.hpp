#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionPass)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionPass_BlurTypes;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionPass_SSAOPassData;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionPass_ShaderPasses;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionPass___c;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionPass_BlurTypes;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionPass_ShaderPasses;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionPass;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionPass_SSAOPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/BlurTypes
struct CORDL_TYPE ScreenSpaceAmbientOcclusionPass_BlurTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped : int32_t {
    __E_Bilateral = static_cast<int32_t>(0x0),
    __E_Gaussian = static_cast<int32_t>(0x1),
    __E_Kawase = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPass_BlurTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionPass_BlurTypes(int32_t value__) noexcept;

  /// @brief Field Bilateral value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes const Bilateral;

  /// @brief Field Gaussian value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes const Gaussian;

  /// @brief Field Kawase value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes const Kawase;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12847 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/ShaderPasses
struct CORDL_TYPE ScreenSpaceAmbientOcclusionPass_ShaderPasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped : int32_t {
    __E_AmbientOcclusion = static_cast<int32_t>(0x0),
    __E_BilateralBlurHorizontal = static_cast<int32_t>(0x1),
    __E_BilateralBlurVertical = static_cast<int32_t>(0x2),
    __E_BilateralBlurFinal = static_cast<int32_t>(0x3),
    __E_BilateralAfterOpaque = static_cast<int32_t>(0x4),
    __E_GaussianBlurHorizontal = static_cast<int32_t>(0x5),
    __E_GaussianBlurVertical = static_cast<int32_t>(0x6),
    __E_GaussianAfterOpaque = static_cast<int32_t>(0x7),
    __E_KawaseBlur = static_cast<int32_t>(0x8),
    __E_KawaseAfterOpaque = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPass_ShaderPasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionPass_ShaderPasses(int32_t value__) noexcept;

  /// @brief Field AmbientOcclusion value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const AmbientOcclusion;

  /// @brief Field BilateralAfterOpaque value: I32(4)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralAfterOpaque;

  /// @brief Field BilateralBlurFinal value: I32(3)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralBlurFinal;

  /// @brief Field BilateralBlurHorizontal value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralBlurHorizontal;

  /// @brief Field BilateralBlurVertical value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralBlurVertical;

  /// @brief Field GaussianAfterOpaque value: I32(7)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const GaussianAfterOpaque;

  /// @brief Field GaussianBlurHorizontal value: I32(5)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const GaussianBlurHorizontal;

  /// @brief Field GaussianBlurVertical value: I32(6)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const GaussianBlurVertical;

  /// @brief Field KawaseAfterOpaque value: I32(9)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const KawaseAfterOpaque;

  /// @brief Field KawaseBlur value: I32(8)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses const KawaseBlur;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12848 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/SSAOMaterialParams
struct CORDL_TYPE ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams {
public:
  // Declarations
  /// @brief Method Equals, addr 0x6685ca4, size 0xf0, virtual false, abstract: false, final false
  inline bool Equals(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams> other);

  /// @brief Method .ctor, addr 0x6685bc4, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> settings, bool isOrthographic);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams();

  // Ctor Parameters [CppParam { name: "orthographicCamera", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "aoBlueNoise", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "aoInterleavedGradient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sampleCountHigh", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "sampleCountMedium", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sampleCountLow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sourceDepthNormals", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "sourceDepthHigh", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sourceDepthMedium", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "sourceDepthLow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ssaoParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams(bool orthographicCamera, bool aoBlueNoise, bool aoInterleavedGradient, bool sampleCountHigh, bool sampleCountMedium, bool sampleCountLow,
                                                               bool sourceDepthNormals, bool sourceDepthHigh, bool sourceDepthMedium, bool sourceDepthLow, ::UnityEngine::Vector4 ssaoParams) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12849 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field orthographicCamera, offset: 0x0, size: 0x1, def value: None
  bool orthographicCamera;

  /// @brief Field aoBlueNoise, offset: 0x1, size: 0x1, def value: None
  bool aoBlueNoise;

  /// @brief Field aoInterleavedGradient, offset: 0x2, size: 0x1, def value: None
  bool aoInterleavedGradient;

  /// @brief Field sampleCountHigh, offset: 0x3, size: 0x1, def value: None
  bool sampleCountHigh;

  /// @brief Field sampleCountMedium, offset: 0x4, size: 0x1, def value: None
  bool sampleCountMedium;

  /// @brief Field sampleCountLow, offset: 0x5, size: 0x1, def value: None
  bool sampleCountLow;

  /// @brief Field sourceDepthNormals, offset: 0x6, size: 0x1, def value: None
  bool sourceDepthNormals;

  /// @brief Field sourceDepthHigh, offset: 0x7, size: 0x1, def value: None
  bool sourceDepthHigh;

  /// @brief Field sourceDepthMedium, offset: 0x8, size: 0x1, def value: None
  bool sourceDepthMedium;

  /// @brief Field sourceDepthLow, offset: 0x9, size: 0x1, def value: None
  bool sourceDepthLow;

  /// @brief Field ssaoParams, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Vector4 ssaoParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, orthographicCamera) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, aoBlueNoise) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, aoInterleavedGradient) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sampleCountHigh) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sampleCountMedium) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sampleCountLow) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthNormals) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthHigh) == 0x7, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthMedium) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, sourceDepthLow) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, ssaoParams) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/SSAOPassData
class CORDL_TYPE ScreenSpaceAmbientOcclusionPass_SSAOPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field AOTexture, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_AOTexture, put = __cordl_internal_set_AOTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle AOTexture;

  /// @brief Field BlurQuality, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_BlurQuality,
                      put = __cordl_internal_set_BlurQuality)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions BlurQuality;

  /// @brief Field afterOpaque, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_afterOpaque, put = __cordl_internal_set_afterOpaque)) bool afterOpaque;

  /// @brief Field blurTexture, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get_blurTexture, put = __cordl_internal_set_blurTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blurTexture;

  /// @brief Field cameraColor, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraColor, put = __cordl_internal_set_cameraColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraColor;

  /// @brief Field cameraNormalsTexture, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraNormalsTexture,
                      put = __cordl_internal_set_cameraNormalsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraNormalsTexture;

  /// @brief Field directLightingStrength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_directLightingStrength, put = __cordl_internal_set_directLightingStrength)) float_t directLightingStrength;

  /// @brief Field finalTexture, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_finalTexture, put = __cordl_internal_set_finalTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle finalTexture;

  /// @brief Field material, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_AOTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_AOTexture();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const& __cordl_internal_get_BlurQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions& __cordl_internal_get_BlurQuality();

  constexpr bool const& __cordl_internal_get_afterOpaque() const;

  constexpr bool& __cordl_internal_get_afterOpaque();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_blurTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_blurTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraNormalsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraNormalsTexture();

  constexpr float_t const& __cordl_internal_get_directLightingStrength() const;

  constexpr float_t& __cordl_internal_get_directLightingStrength();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_finalTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_finalTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr void __cordl_internal_set_AOTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_BlurQuality(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions value);

  constexpr void __cordl_internal_set_afterOpaque(bool value);

  constexpr void __cordl_internal_set_blurTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cameraColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_directLightingStrength(float_t value);

  constexpr void __cordl_internal_set_finalTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66850e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPass_SSAOPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPass_SSAOPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionPass_SSAOPassData(ScreenSpaceAmbientOcclusionPass_SSAOPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPass_SSAOPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionPass_SSAOPassData(ScreenSpaceAmbientOcclusionPass_SSAOPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12850 };

  /// @brief Field afterOpaque, offset: 0x10, size: 0x1, def value: None
  bool ___afterOpaque;

  /// @brief Field BlurQuality, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions ___BlurQuality;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field directLightingStrength, offset: 0x20, size: 0x4, def value: None
  float_t ___directLightingStrength;

  /// @brief Field cameraColor, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraColor;

  /// @brief Field AOTexture, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___AOTexture;

  /// @brief Field finalTexture, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___finalTexture;

  /// @brief Field blurTexture, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___blurTexture;

  /// @brief Field cameraNormalsTexture, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraNormalsTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___afterOpaque) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___BlurQuality) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___directLightingStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___cameraColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___AOTexture) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___finalTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___blurTexture) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, ___cameraNormalsTexture) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/<>c
class CORDL_TYPE ScreenSpaceAmbientOcclusionPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* __9;

  /// @brief Field <>9__52_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__52_0,
                      put = setStaticF___9__52_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__52_0;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__52_0, addr 0x6688514, size 0x6cc, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__52_0(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* data,
                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext);

  /// @brief Method .ctor, addr 0x6688510, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__52_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* value);

  static inline void setStaticF___9__52_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionPass___c(ScreenSpaceAmbientOcclusionPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionPass___c(ScreenSpaceAmbientOcclusionPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass::BlurTypes,
// UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass::SSAOMaterialParams, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass
class CORDL_TYPE ScreenSpaceAmbientOcclusionPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using BlurTypes = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes;

  using SSAOMaterialParams = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams;

  using SSAOPassData = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData;

  using ShaderPasses = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses;

  using __c = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c;

  __declspec(property(get = get_isRendererDeferred)) bool isRendererDeferred;

  /// @brief Field m_AOPassDescriptor, offset 0x120, size 0x34
  __declspec(property(get = __cordl_internal_get_m_AOPassDescriptor, put = __cordl_internal_set_m_AOPassDescriptor)) ::UnityEngine::RenderTextureDescriptor m_AOPassDescriptor;

  /// @brief Field m_BilateralAfterOpaquePasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BilateralAfterOpaquePasses,
                      put = setStaticF_m_BilateralAfterOpaquePasses)) ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                               ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
      m_BilateralAfterOpaquePasses;

  /// @brief Field m_BilateralPasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BilateralPasses, put = setStaticF_m_BilateralPasses)) ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                                                        ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
      m_BilateralPasses;

  /// @brief Field m_BilateralTexturesIndices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BilateralTexturesIndices, put = setStaticF_m_BilateralTexturesIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> m_BilateralTexturesIndices;

  /// @brief Field m_BlueNoiseTextureIndex, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlueNoiseTextureIndex, put = __cordl_internal_set_m_BlueNoiseTextureIndex)) int32_t m_BlueNoiseTextureIndex;

  /// @brief Field m_BlueNoiseTextures, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlueNoiseTextures,
                      put = __cordl_internal_set_m_BlueNoiseTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      m_BlueNoiseTextures;

  /// @brief Field m_BlurType, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlurType, put = __cordl_internal_set_m_BlurType)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes m_BlurType;

  /// @brief Field m_CameraTopLeftCorner, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraTopLeftCorner, put = __cordl_internal_set_m_CameraTopLeftCorner)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_CameraTopLeftCorner;

  /// @brief Field m_CameraViewProjections, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraViewProjections, put = __cordl_internal_set_m_CameraViewProjections)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_CameraViewProjections;

  /// @brief Field m_CameraXExtent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraXExtent, put = __cordl_internal_set_m_CameraXExtent)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraXExtent;

  /// @brief Field m_CameraYExtent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraYExtent, put = __cordl_internal_set_m_CameraYExtent)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraYExtent;

  /// @brief Field m_CameraZExtent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraZExtent, put = __cordl_internal_set_m_CameraZExtent)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraZExtent;

  /// @brief Field m_CurrentSettings, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSettings,
                      put = __cordl_internal_set_m_CurrentSettings)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_CurrentSettings;

  /// @brief Field m_GaussianAfterOpaquePasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_GaussianAfterOpaquePasses,
                      put = setStaticF_m_GaussianAfterOpaquePasses)) ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                              ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
      m_GaussianAfterOpaquePasses;

  /// @brief Field m_GaussianPasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_GaussianPasses, put = setStaticF_m_GaussianPasses)) ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                                                      ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
      m_GaussianPasses;

  /// @brief Field m_GaussianTexturesIndices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_GaussianTexturesIndices, put = setStaticF_m_GaussianTexturesIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> m_GaussianTexturesIndices;

  /// @brief Field m_KawaseAfterOpaquePasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_KawaseAfterOpaquePasses,
                      put = setStaticF_m_KawaseAfterOpaquePasses)) ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                            ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
      m_KawaseAfterOpaquePasses;

  /// @brief Field m_KawasePasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_KawasePasses, put = setStaticF_m_KawasePasses)) ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                                                  ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
      m_KawasePasses;

  /// @brief Field m_KawaseTexturesIndices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_KawaseTexturesIndices, put = setStaticF_m_KawaseTexturesIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> m_KawaseTexturesIndices;

  /// @brief Field m_Material, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_PassData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* m_PassData;

  /// @brief Field m_ProfilingSampler, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_Renderer, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderer, put = __cordl_internal_set_m_Renderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* m_Renderer;

  /// @brief Field m_SSAOParamsPrev, offset 0x160, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_SSAOParamsPrev,
                      put = __cordl_internal_set_m_SSAOParamsPrev)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams m_SSAOParamsPrev;

  /// @brief Field m_SSAOTextures, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSAOTextures,
                      put = __cordl_internal_set_m_SSAOTextures)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_SSAOTextures;

  /// @brief Field m_SupportsR8RenderTextureFormat, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsR8RenderTextureFormat, put = __cordl_internal_set_m_SupportsR8RenderTextureFormat)) bool m_SupportsR8RenderTextureFormat;

  /// @brief Field s_AmbientOcclusionParamID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_AmbientOcclusionParamID, put = setStaticF_s_AmbientOcclusionParamID)) int32_t s_AmbientOcclusionParamID;

  /// @brief Field s_BlueNoiseTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_BlueNoiseTextureID, put = setStaticF_s_BlueNoiseTextureID)) int32_t s_BlueNoiseTextureID;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  /// @brief Field s_CameraNormalsTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraNormalsTextureID, put = setStaticF_s_CameraNormalsTextureID)) int32_t s_CameraNormalsTextureID;

  /// @brief Field s_CameraViewProjectionsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraViewProjectionsID, put = setStaticF_s_CameraViewProjectionsID)) int32_t s_CameraViewProjectionsID;

  /// @brief Field s_CameraViewTopLeftCornerID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraViewTopLeftCornerID, put = setStaticF_s_CameraViewTopLeftCornerID)) int32_t s_CameraViewTopLeftCornerID;

  /// @brief Field s_CameraViewXExtentID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraViewXExtentID, put = setStaticF_s_CameraViewXExtentID)) int32_t s_CameraViewXExtentID;

  /// @brief Field s_CameraViewYExtentID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraViewYExtentID, put = setStaticF_s_CameraViewYExtentID)) int32_t s_CameraViewYExtentID;

  /// @brief Field s_CameraViewZExtentID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraViewZExtentID, put = setStaticF_s_CameraViewZExtentID)) int32_t s_CameraViewZExtentID;

  /// @brief Field s_ProjectionParams2ID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ProjectionParams2ID, put = setStaticF_s_ProjectionParams2ID)) int32_t s_ProjectionParams2ID;

  /// @brief Field s_SSAOBlueNoiseParamsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SSAOBlueNoiseParamsID, put = setStaticF_s_SSAOBlueNoiseParamsID)) int32_t s_SSAOBlueNoiseParamsID;

  /// @brief Field s_SSAOFinalTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SSAOFinalTextureID, put = setStaticF_s_SSAOFinalTextureID)) int32_t s_SSAOFinalTextureID;

  /// @brief Field s_SSAOParamsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SSAOParamsID, put = setStaticF_s_SSAOParamsID)) int32_t s_SSAOParamsID;

  /// @brief Method CreateRenderTextureHandles, addr 0x668687c, size 0x344, virtual false, abstract: false, final false
  inline void CreateRenderTextureHandles(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> aoTexture,
                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> blurTexture,
                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> finalTexture);

  /// @brief Method Dispose, addr 0x6687ed8, size 0xb0, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x66872d0, size 0x65c, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetPassOrder, addr 0x668792c, size 0x1c8, virtual false, abstract: false, final false
  static inline void GetPassOrder(
      ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes blurType, bool isAfterOpaque, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> textureIndices,
      ::ByRef<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>
          shaderPasses);

  /// @brief Method InitSSAOPassData, addr 0x6685d94, size 0x48, virtual false, abstract: false, final false
  inline void InitSSAOPassData(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*> data);

  /// @brief Method IsAfterOpaquePass, addr 0x6685290, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsAfterOpaquePass(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> pass);

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* New_ctor();

  /// @brief Method OnCameraCleanup, addr 0x6687e00, size 0xd8, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x6686bc0, size 0x324, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RecordRenderGraph, addr 0x6685ddc, size 0xaa0, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method RenderAndSetBaseMap, addr 0x6687af4, size 0x30c, virtual false, abstract: false, final false
  static inline void RenderAndSetBaseMap(::ByRef<::UnityEngine::Rendering::CommandBuffer*> cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                         ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer, ::ByRef<::UnityEngine::Material*> mat,
                                         ::ByRef<::UnityEngine::Rendering::RTHandle*> baseMap, ::ByRef<::UnityEngine::Rendering::RTHandle*> target,
                                         ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses pass);

  /// @brief Method Setup, addr 0x66850e8, size 0x1a8, virtual false, abstract: false, final false
  inline bool Setup(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> featureSettings, ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer,
                    ::ByRef<::UnityEngine::Material*> material, ::ByRef<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>> blueNoiseTextures);

  /// @brief Method SetupKeywordsAndParameters, addr 0x66852ac, size 0x918, virtual false, abstract: false, final false
  inline void SetupKeywordsAndParameters(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> settings,
                                         ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData);

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_AOPassDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_AOPassDescriptor();

  constexpr int32_t const& __cordl_internal_get_m_BlueNoiseTextureIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BlueNoiseTextureIndex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_m_BlueNoiseTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_m_BlueNoiseTextures();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes const& __cordl_internal_get_m_BlurType() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes& __cordl_internal_get_m_BlurType();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraTopLeftCorner() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraTopLeftCorner();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_CameraViewProjections() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_CameraViewProjections();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraXExtent() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraXExtent();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraYExtent() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraYExtent();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraZExtent() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraZExtent();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* const& __cordl_internal_get_m_CurrentSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*& __cordl_internal_get_m_CurrentSettings();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& __cordl_internal_get_m_Renderer() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get_m_Renderer();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams const& __cordl_internal_get_m_SSAOParamsPrev() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams& __cordl_internal_get_m_SSAOParamsPrev();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_SSAOTextures() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_SSAOTextures();

  constexpr bool const& __cordl_internal_get_m_SupportsR8RenderTextureFormat() const;

  constexpr bool& __cordl_internal_get_m_SupportsR8RenderTextureFormat();

  constexpr void __cordl_internal_set_m_AOPassDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_BlueNoiseTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_BlueNoiseTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_m_BlurType(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes value);

  constexpr void __cordl_internal_set_m_CameraTopLeftCorner(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CameraViewProjections(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_CameraXExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CameraYExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CameraZExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CurrentSettings(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_Renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  constexpr void __cordl_internal_set_m_SSAOParamsPrev(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams value);

  constexpr void __cordl_internal_set_m_SSAOTextures(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_SupportsR8RenderTextureFormat(bool value);

  /// @brief Method .ctor, addr 0x6684ef4, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
  getStaticF_m_BilateralAfterOpaquePasses();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
  getStaticF_m_BilateralPasses();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_m_BilateralTexturesIndices();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
  getStaticF_m_GaussianAfterOpaquePasses();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
  getStaticF_m_GaussianPasses();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_m_GaussianTexturesIndices();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
  getStaticF_m_KawaseAfterOpaquePasses();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
  getStaticF_m_KawasePasses();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_m_KawaseTexturesIndices();

  static inline int32_t getStaticF_s_AmbientOcclusionParamID();

  static inline int32_t getStaticF_s_BlueNoiseTextureID();

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  static inline int32_t getStaticF_s_CameraNormalsTextureID();

  static inline int32_t getStaticF_s_CameraViewProjectionsID();

  static inline int32_t getStaticF_s_CameraViewTopLeftCornerID();

  static inline int32_t getStaticF_s_CameraViewXExtentID();

  static inline int32_t getStaticF_s_CameraViewYExtentID();

  static inline int32_t getStaticF_s_CameraViewZExtentID();

  static inline int32_t getStaticF_s_ProjectionParams2ID();

  static inline int32_t getStaticF_s_SSAOBlueNoiseParamsID();

  static inline int32_t getStaticF_s_SSAOFinalTextureID();

  static inline int32_t getStaticF_s_SSAOParamsID();

  /// @brief Method get_isRendererDeferred, addr 0x6684e80, size 0x74, virtual false, abstract: false, final false
  inline bool get_isRendererDeferred();

  static inline void setStaticF_m_BilateralAfterOpaquePasses(
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value);

  static inline void setStaticF_m_BilateralPasses(
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value);

  static inline void setStaticF_m_BilateralTexturesIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_m_GaussianAfterOpaquePasses(
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value);

  static inline void setStaticF_m_GaussianPasses(
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value);

  static inline void setStaticF_m_GaussianTexturesIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_m_KawaseAfterOpaquePasses(
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value);

  static inline void setStaticF_m_KawasePasses(
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value);

  static inline void setStaticF_m_KawaseTexturesIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_AmbientOcclusionParamID(int32_t value);

  static inline void setStaticF_s_BlueNoiseTextureID(int32_t value);

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

  static inline void setStaticF_s_CameraNormalsTextureID(int32_t value);

  static inline void setStaticF_s_CameraViewProjectionsID(int32_t value);

  static inline void setStaticF_s_CameraViewTopLeftCornerID(int32_t value);

  static inline void setStaticF_s_CameraViewXExtentID(int32_t value);

  static inline void setStaticF_s_CameraViewYExtentID(int32_t value);

  static inline void setStaticF_s_CameraViewZExtentID(int32_t value);

  static inline void setStaticF_s_ProjectionParams2ID(int32_t value);

  static inline void setStaticF_s_SSAOBlueNoiseParamsID(int32_t value);

  static inline void setStaticF_s_SSAOFinalTextureID(int32_t value);

  static inline void setStaticF_s_SSAOParamsID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionPass(ScreenSpaceAmbientOcclusionPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionPass(ScreenSpaceAmbientOcclusionPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12852 };

  /// @brief Field k_AmbientOcclusionParamName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AmbientOcclusionParamName{ u"_AmbientOcclusionParam" };

  /// @brief Field k_SSAOTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SSAOTextureName{ u"_ScreenSpaceOcclusionTexture" };

  /// @brief Field m_SupportsR8RenderTextureFormat, offset: 0xb8, size: 0x1, def value: None
  bool ___m_SupportsR8RenderTextureFormat;

  /// @brief Field m_BlueNoiseTextureIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t ___m_BlueNoiseTextureIndex;

  /// @brief Field m_Material, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_PassData, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* ___m_PassData;

  /// @brief Field m_BlueNoiseTextures, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___m_BlueNoiseTextures;

  /// @brief Field m_CameraTopLeftCorner, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraTopLeftCorner;

  /// @brief Field m_CameraXExtent, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraXExtent;

  /// @brief Field m_CameraYExtent, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraYExtent;

  /// @brief Field m_CameraZExtent, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraZExtent;

  /// @brief Field m_SSAOTextures, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_SSAOTextures;

  /// @brief Field m_BlurType, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes ___m_BlurType;

  /// @brief Field m_CameraViewProjections, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_CameraViewProjections;

  /// @brief Field m_ProfilingSampler, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_Renderer, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer* ___m_Renderer;

  /// @brief Field m_AOPassDescriptor, offset: 0x120, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_AOPassDescriptor;

  /// @brief Field m_CurrentSettings, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* ___m_CurrentSettings;

  /// @brief Field m_SSAOParamsPrev, offset: 0x160, size: 0x1c, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams ___m_SSAOParamsPrev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_SupportsR8RenderTextureFormat) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_BlueNoiseTextureIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_Material) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_PassData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_BlueNoiseTextures) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_CameraTopLeftCorner) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_CameraXExtent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_CameraYExtent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_CameraZExtent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_SSAOTextures) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_BlurType) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_CameraViewProjections) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_ProfilingSampler) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_Renderer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_AOPassDescriptor) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_CurrentSettings) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, ___m_SSAOParamsPrev) == 0x160, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass, 0x180>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/BlurTypes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/ShaderPasses");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/SSAOPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusionPass/SSAOMaterialParams");
