#pragma once
// IWYU pragma private; include "GlobalNamespace/OnTilePostProcessPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnTilePostProcessPass)
namespace GlobalNamespace {
class OnTilePostProcessPass_PassData;
}
namespace GlobalNamespace {
class OnTilePostProcessPass_ShaderConstants;
}
namespace GlobalNamespace {
struct OnTilePostProcessPass_UberShaderPasses;
}
namespace GlobalNamespace {
class OnTilePostProcessPass___c;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class ColorAdjustments;
}
namespace UnityEngine::Rendering::Universal {
class ColorLookup;
}
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class Vignette;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct OnTilePostProcessPass_UberShaderPasses;
}
namespace GlobalNamespace {
class OnTilePostProcessPass;
}
namespace GlobalNamespace {
class OnTilePostProcessPass_PassData;
}
namespace GlobalNamespace {
class OnTilePostProcessPass_ShaderConstants;
}
namespace GlobalNamespace {
class OnTilePostProcessPass___c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses);
MARK_REF_T(::GlobalNamespace::OnTilePostProcessPass*);
MARK_REF_T(::GlobalNamespace::OnTilePostProcessPass_PassData*);
MARK_REF_T(::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*);
MARK_REF_T(::GlobalNamespace::OnTilePostProcessPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses, "", "OnTilePostProcessPass/UberShaderPasses");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTilePostProcessPass*, "", "OnTilePostProcessPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTilePostProcessPass_PassData*, "", "OnTilePostProcessPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*, "", "OnTilePostProcessPass/ShaderConstants");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTilePostProcessPass___c*, "", "OnTilePostProcessPass/<>c");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OnTilePostProcessPass/UberShaderPasses
struct CORDL_TYPE OnTilePostProcessPass_UberShaderPasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OnTilePostProcessPass_UberShaderPasses_Unwrapped
  enum struct __OnTilePostProcessPass_UberShaderPasses_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_MSAASoftwareResolve = static_cast<int32_t>(0x1),
    __E_TextureRead = static_cast<int32_t>(0x2),
    __E_NormalVisMesh = static_cast<int32_t>(0x3),
    __E_MSAASoftwareResolveVisMesh = static_cast<int32_t>(0x4),
    __E_TextureReadVisMesh = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OnTilePostProcessPass_UberShaderPasses_Unwrapped() const noexcept {
    return static_cast<__OnTilePostProcessPass_UberShaderPasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessPass_UberShaderPasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OnTilePostProcessPass_UberShaderPasses(int32_t value__) noexcept;

  /// @brief Field MSAASoftwareResolve value: I32(1)
  static ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const MSAASoftwareResolve;

  /// @brief Field MSAASoftwareResolveVisMesh value: I32(4)
  static ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const MSAASoftwareResolveVisMesh;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const Normal;

  /// @brief Field NormalVisMesh value: I32(3)
  static ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const NormalVisMesh;

  /// @brief Field TextureRead value: I32(2)
  static ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const TextureRead;

  /// @brief Field TextureReadVisMesh value: I32(5)
  static ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const TextureReadVisMesh;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OnTilePostProcessPass::UberShaderPasses, System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnTilePostProcessPass/PassData
class CORDL_TYPE OnTilePostProcessPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field destination, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field lutTexture, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_lutTexture, put = __cordl_internal_set_lutTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle lutTexture;

  /// @brief Field material, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field msaaSamples, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_msaaSamples, put = __cordl_internal_set_msaaSamples)) int32_t msaaSamples;

  /// @brief Field scaleBias, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_scaleBias, put = __cordl_internal_set_scaleBias)) ::UnityEngine::Vector4 scaleBias;

  /// @brief Field shaderPass, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_shaderPass, put = __cordl_internal_set_shaderPass)) ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses shaderPass;

  /// @brief Field source, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field useXRVisibilityMesh, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_useXRVisibilityMesh, put = __cordl_internal_set_useXRVisibilityMesh)) bool useXRVisibilityMesh;

  /// @brief Field userLutTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_userLutTexture, put = __cordl_internal_set_userLutTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle userLutTexture;

  /// @brief Field xr, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::GlobalNamespace::OnTilePostProcessPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_lutTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_lutTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_msaaSamples() const;

  constexpr int32_t& __cordl_internal_get_msaaSamples();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_scaleBias() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_scaleBias();

  constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const& __cordl_internal_get_shaderPass() const;

  constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses& __cordl_internal_get_shaderPass();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr bool const& __cordl_internal_get_useXRVisibilityMesh() const;

  constexpr bool& __cordl_internal_get_useXRVisibilityMesh();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_userLutTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_userLutTexture();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_lutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_msaaSamples(int32_t value);

  constexpr void __cordl_internal_set_scaleBias(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_shaderPass(::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_useXRVisibilityMesh(bool value);

  constexpr void __cordl_internal_set_userLutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x6c73f74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnTilePostProcessPass_PassData(OnTilePostProcessPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnTilePostProcessPass_PassData(OnTilePostProcessPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12781 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field destination, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  /// @brief Field lutTexture, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___lutTexture;

  /// @brief Field userLutTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___userLutTexture;

  /// @brief Field material, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field shaderPass, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses ___shaderPass;

  /// @brief Field scaleBias, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___scaleBias;

  /// @brief Field useXRVisibilityMesh, offset: 0x6c, size: 0x1, def value: None
  bool ___useXRVisibilityMesh;

  /// @brief Field xr, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field msaaSamples, offset: 0x78, size: 0x4, def value: None
  int32_t ___msaaSamples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___lutTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___userLutTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___material) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___shaderPass) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___scaleBias) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___useXRVisibilityMesh) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___xr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass_PassData, ___msaaSamples) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnTilePostProcessPass_PassData) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnTilePostProcessPass/ShaderConstants
class CORDL_TYPE OnTilePostProcessPass_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _InternalLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InternalLut, put = setStaticF__InternalLut)) int32_t _InternalLut;

  /// @brief Field _Lut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Lut_Params, put = setStaticF__Lut_Params)) int32_t _Lut_Params;

  /// @brief Field _UserLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UserLut, put = setStaticF__UserLut)) int32_t _UserLut;

  /// @brief Field _UserLut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UserLut_Params, put = setStaticF__UserLut_Params)) int32_t _UserLut_Params;

  /// @brief Field _Vignette_Params1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_Params1, put = setStaticF__Vignette_Params1)) int32_t _Vignette_Params1;

  /// @brief Field _Vignette_Params2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_Params2, put = setStaticF__Vignette_Params2)) int32_t _Vignette_Params2;

  /// @brief Field _Vignette_ParamsXR, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_ParamsXR, put = setStaticF__Vignette_ParamsXR)) int32_t _Vignette_ParamsXR;

  static inline int32_t getStaticF__InternalLut();

  static inline int32_t getStaticF__Lut_Params();

  static inline int32_t getStaticF__UserLut();

  static inline int32_t getStaticF__UserLut_Params();

  static inline int32_t getStaticF__Vignette_Params1();

  static inline int32_t getStaticF__Vignette_Params2();

  static inline int32_t getStaticF__Vignette_ParamsXR();

  static inline void setStaticF__InternalLut(int32_t value);

  static inline void setStaticF__Lut_Params(int32_t value);

  static inline void setStaticF__UserLut(int32_t value);

  static inline void setStaticF__UserLut_Params(int32_t value);

  static inline void setStaticF__Vignette_Params1(int32_t value);

  static inline void setStaticF__Vignette_Params2(int32_t value);

  static inline void setStaticF__Vignette_ParamsXR(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessPass_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass_ShaderConstants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnTilePostProcessPass_ShaderConstants(OnTilePostProcessPass_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass_ShaderConstants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnTilePostProcessPass_ShaderConstants(OnTilePostProcessPass_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12782 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnTilePostProcessPass_ShaderConstants) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnTilePostProcessPass/<>c
class CORDL_TYPE OnTilePostProcessPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OnTilePostProcessPass___c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0,
                      put = setStaticF___9__13_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__13_0;

  static inline ::GlobalNamespace::OnTilePostProcessPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__13_0, addr 0x6c74178, size 0x70, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__13_0(::GlobalNamespace::OnTilePostProcessPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6c74174, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OnTilePostProcessPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__13_0();

  static inline void setStaticF___9(::GlobalNamespace::OnTilePostProcessPass___c* value);

  static inline void setStaticF___9__13_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnTilePostProcessPass___c(OnTilePostProcessPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnTilePostProcessPass___c(OnTilePostProcessPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12783 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnTilePostProcessPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnTilePostProcessPass
class CORDL_TYPE OnTilePostProcessPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::OnTilePostProcessPass_PassData;

  using ShaderConstants = ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants;

  using UberShaderPasses = ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses;

  using __c = ::GlobalNamespace::OnTilePostProcessPass___c;

  /// @brief Field m_DitheringTextureIndex, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DitheringTextureIndex, put = __cordl_internal_set_m_DitheringTextureIndex)) int32_t m_DitheringTextureIndex;

  /// @brief Field m_OnTileUberMaterial, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTileUberMaterial, put = __cordl_internal_set_m_OnTileUberMaterial)) ::UnityW<::UnityEngine::Material> m_OnTileUberMaterial;

  /// @brief Field m_PostProcessData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PostProcessData, put = __cordl_internal_set_m_PostProcessData)) ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_PostProcessData;

  /// @brief Field m_UseMultisampleShaderResolve, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseMultisampleShaderResolve, put = __cordl_internal_set_m_UseMultisampleShaderResolve)) bool m_UseMultisampleShaderResolve;

  /// @brief Field m_UseTextureReadFallback, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseTextureReadFallback, put = __cordl_internal_set_m_UseTextureReadFallback)) bool m_UseTextureReadFallback;

  /// @brief Field m_UserLut, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UserLut, put = __cordl_internal_set_m_UserLut)) ::UnityEngine::Rendering::RTHandle* m_UserLut;

  /// @brief Field s_BlitScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_BlitScaleBias, put = setStaticF_s_BlitScaleBias)) int32_t s_BlitScaleBias;

  /// @brief Field s_BlitTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_BlitTexture, put = setStaticF_s_BlitTexture)) int32_t s_BlitTexture;

  /// @brief Method Dispose, addr 0x6c720e8, size 0x70, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method ExecuteFBFetchPass, addr 0x6c739a0, size 0x530, virtual false, abstract: false, final false
  static inline void ExecuteFBFetchPass(::GlobalNamespace::OnTilePostProcessPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  static inline ::GlobalNamespace::OnTilePostProcessPass* New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* postProcessData);

  /// @brief Method RecordRenderGraph, addr 0x6c72158, size 0xf20, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Setup, addr 0x6c720b0, size 0xc, virtual false, abstract: false, final false
  inline void Setup(::by_ref<::UnityEngine::Material*> onTileUberMaterial);

  /// @brief Method SetupDithering, addr 0x6c736fc, size 0xa4, virtual false, abstract: false, final false
  inline void SetupDithering(::UnityEngine::Material* onTileUberMaterial, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                             ::UnityEngine::Rendering::Universal::PostProcessData* data);

  /// @brief Method SetupGrain, addr 0x6c73640, size 0xbc, virtual false, abstract: false, final false
  inline void SetupGrain(::UnityEngine::Material* onTileUberMaterial, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::FilmGrain* filmgrain,
                         ::UnityEngine::Rendering::Universal::PostProcessData* data);

  /// @brief Method SetupLut, addr 0x6c732a0, size 0x248, virtual false, abstract: false, final false
  inline void SetupLut(::UnityEngine::Material* material, ::UnityEngine::Rendering::Universal::ColorLookup* colorLookup, ::UnityEngine::Rendering::Universal::ColorAdjustments* colorAdjustments,
                       int32_t lutSize);

  /// @brief Method SetupTonemapping, addr 0x6c734e8, size 0x158, virtual false, abstract: false, final false
  inline void SetupTonemapping(::UnityEngine::Material* onTileUberMaterial, ::UnityEngine::Rendering::Universal::Tonemapping* tonemapping, bool isHdrGrading);

  /// @brief Method SetupVignette, addr 0x6c73078, size 0x228, virtual false, abstract: false, final false
  inline void SetupVignette(::UnityEngine::Material* material, ::UnityEngine::Experimental::Rendering::XRPass* xrPass, int32_t width, int32_t height,
                            ::UnityEngine::Rendering::Universal::Vignette* vignette);

  /// @brief Method TryGetCachedUserLutTextureHandle, addr 0x6c737a0, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle TryGetCachedUserLutTextureHandle(::UnityEngine::Rendering::Universal::ColorLookup* colorLookup,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  constexpr int32_t const& __cordl_internal_get_m_DitheringTextureIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DitheringTextureIndex();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_OnTileUberMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_OnTileUberMaterial();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_m_PostProcessData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_m_PostProcessData();

  constexpr bool const& __cordl_internal_get_m_UseMultisampleShaderResolve() const;

  constexpr bool& __cordl_internal_get_m_UseMultisampleShaderResolve();

  constexpr bool const& __cordl_internal_get_m_UseTextureReadFallback() const;

  constexpr bool& __cordl_internal_get_m_UseTextureReadFallback();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_UserLut() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_UserLut();

  constexpr void __cordl_internal_set_m_DitheringTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_OnTileUberMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_PostProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_m_UseMultisampleShaderResolve(bool value);

  constexpr void __cordl_internal_set_m_UseTextureReadFallback(bool value);

  constexpr void __cordl_internal_set_m_UserLut(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method .ctor, addr 0x6c71d1c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* postProcessData);

  static inline int32_t getStaticF_s_BlitScaleBias();

  static inline int32_t getStaticF_s_BlitTexture();

  static inline void setStaticF_s_BlitScaleBias(int32_t value);

  static inline void setStaticF_s_BlitTexture(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnTilePostProcessPass(OnTilePostProcessPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnTilePostProcessPass(OnTilePostProcessPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12784 };

  /// @brief Field m_FallbackPassName offset 0xffffffff size 0x8
  static constexpr ::ConstString m_FallbackPassName{ u"On Tile Post Processing (sampling fallback) " };

  /// @brief Field m_PassName offset 0xffffffff size 0x8
  static constexpr ::ConstString m_PassName{ u"On Tile Post Processing" };

  /// @brief Field m_UseMultisampleShaderResolve, offset: 0x5c, size: 0x1, def value: None
  bool ___m_UseMultisampleShaderResolve;

  /// @brief Field m_UseTextureReadFallback, offset: 0x5d, size: 0x1, def value: None
  bool ___m_UseTextureReadFallback;

  /// @brief Field m_UserLut, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_UserLut;

  /// @brief Field m_OnTileUberMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_OnTileUberMaterial;

  /// @brief Field m_DitheringTextureIndex, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_DitheringTextureIndex;

  /// @brief Field m_PostProcessData, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___m_PostProcessData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass, ___m_UseMultisampleShaderResolve) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass, ___m_UseTextureReadFallback) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass, ___m_UserLut) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass, ___m_OnTileUberMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass, ___m_DitheringTextureIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessPass, ___m_PostProcessData) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnTilePostProcessPass) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
