#pragma once
// IWYU pragma private; include "GlobalNamespace/PyramidBloomRendererSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PyramidBloomRendererSO)
namespace GlobalNamespace {
struct PyramidBloomRendererSO_Pass;
}
namespace GlobalNamespace {
struct PyramidBloomRendererSO_TextureType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
struct PyramidBloomRendererSO_Pass;
}
namespace GlobalNamespace {
struct PyramidBloomRendererSO_TextureType;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PyramidBloomRendererSO_Pass);
MARK_VAL_T(::GlobalNamespace::PyramidBloomRendererSO_TextureType);
MARK_REF_T(::GlobalNamespace::PyramidBloomRendererSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PyramidBloomRendererSO_Pass, "", "PyramidBloomRendererSO/Pass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PyramidBloomRendererSO_TextureType, "", "PyramidBloomRendererSO/TextureType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PyramidBloomRendererSO*, "", "PyramidBloomRendererSO");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PyramidBloomRendererSO/Pass
struct CORDL_TYPE PyramidBloomRendererSO_Pass {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PyramidBloomRendererSO_Pass_Unwrapped
  enum struct __PyramidBloomRendererSO_Pass_Unwrapped : int32_t {
    __E_Prefilter13 = static_cast<int32_t>(0x0),
    __E_Prefilter4 = static_cast<int32_t>(0x1),
    __E_Downsample13 = static_cast<int32_t>(0x2),
    __E_Downsample4 = static_cast<int32_t>(0x3),
    __E_DownsampleBilinearGamma = static_cast<int32_t>(0x4),
    __E_UpsampleTent = static_cast<int32_t>(0x5),
    __E_UpsampleBox = static_cast<int32_t>(0x6),
    __E_UpsampleTentGamma = static_cast<int32_t>(0x7),
    __E_UpsampleBoxGamma = static_cast<int32_t>(0x8),
    __E_Bilinear = static_cast<int32_t>(0x9),
    __E_BilinearGamma = static_cast<int32_t>(0xa),
    __E_UpsampleTentAndReinhardToneMapping = static_cast<int32_t>(0xb),
    __E_UpsampleTentAndACESToneMapping = static_cast<int32_t>(0xc),
    __E_UpsampleTentAndACESToneMappingGlobalIntensity = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PyramidBloomRendererSO_Pass_Unwrapped() const noexcept {
    return static_cast<__PyramidBloomRendererSO_Pass_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomRendererSO_Pass();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PyramidBloomRendererSO_Pass(int32_t value__) noexcept;

  /// @brief Field Bilinear value: I32(9)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const Bilinear;

  /// @brief Field BilinearGamma value: I32(10)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const BilinearGamma;

  /// @brief Field Downsample13 value: I32(2)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const Downsample13;

  /// @brief Field Downsample4 value: I32(3)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const Downsample4;

  /// @brief Field DownsampleBilinearGamma value: I32(4)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const DownsampleBilinearGamma;

  /// @brief Field Prefilter13 value: I32(0)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const Prefilter13;

  /// @brief Field Prefilter4 value: I32(1)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const Prefilter4;

  /// @brief Field UpsampleBox value: I32(6)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleBox;

  /// @brief Field UpsampleBoxGamma value: I32(8)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleBoxGamma;

  /// @brief Field UpsampleTent value: I32(5)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleTent;

  /// @brief Field UpsampleTentAndACESToneMapping value: I32(12)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleTentAndACESToneMapping;

  /// @brief Field UpsampleTentAndACESToneMappingGlobalIntensity value: I32(13)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleTentAndACESToneMappingGlobalIntensity;

  /// @brief Field UpsampleTentAndReinhardToneMapping value: I32(11)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleTentAndReinhardToneMapping;

  /// @brief Field UpsampleTentGamma value: I32(7)
  static ::GlobalNamespace::PyramidBloomRendererSO_Pass const UpsampleTentGamma;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO_Pass, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO_Pass) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PyramidBloomRendererSO/TextureType
struct CORDL_TYPE PyramidBloomRendererSO_TextureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PyramidBloomRendererSO_TextureType_Unwrapped
  enum struct __PyramidBloomRendererSO_TextureType_Unwrapped : int32_t {
    __E_BloomPrePass = static_cast<int32_t>(0x0),
    __E_MainEffect = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PyramidBloomRendererSO_TextureType_Unwrapped() const noexcept {
    return static_cast<__PyramidBloomRendererSO_TextureType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomRendererSO_TextureType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PyramidBloomRendererSO_TextureType(int32_t value__) noexcept;

  /// @brief Field BloomPrePass value: I32(0)
  static ::GlobalNamespace::PyramidBloomRendererSO_TextureType const BloomPrePass;

  /// @brief Field MainEffect value: I32(1)
  static ::GlobalNamespace::PyramidBloomRendererSO_TextureType const MainEffect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO_TextureType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO_TextureType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject, UnityEngine.Rendering.GlobalKeyword, UnityEngine.Rendering.LocalKeyword
namespace GlobalNamespace {
// Is value type: false
// CS Name: PyramidBloomRendererSO
class CORDL_TYPE PyramidBloomRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Pass = ::GlobalNamespace::PyramidBloomRendererSO_Pass;

  using TextureType = ::GlobalNamespace::PyramidBloomRendererSO_TextureType;

  /// @brief Field _bloomParamsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__bloomParamsID, put = setStaticF__bloomParamsID)) int32_t _bloomParamsID;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _combineParamsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__combineParamsID, put = setStaticF__combineParamsID)) int32_t _combineParamsID;

  /// @brief Field _globalIntensityTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__globalIntensityTex, put = setStaticF__globalIntensityTex)) int32_t _globalIntensityTex;

  /// @brief Field _initialized, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _isScreenspaceEffectGlobalKeyword, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__isScreenspaceEffectGlobalKeyword,
                      put = __cordl_internal_set__isScreenspaceEffectGlobalKeyword)) ::UnityEngine::Rendering::GlobalKeyword _isScreenspaceEffectGlobalKeyword;

  /// @brief Field _isScreenspaceEffectKeyword, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get__isScreenspaceEffectKeyword,
                      put = __cordl_internal_set__isScreenspaceEffectKeyword)) ::UnityEngine::Rendering::LocalKeyword _isScreenspaceEffectKeyword;

  /// @brief Field _legacyAutoExposureGlobalKeyword, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__legacyAutoExposureGlobalKeyword,
                      put = __cordl_internal_set__legacyAutoExposureGlobalKeyword)) ::UnityEngine::Rendering::GlobalKeyword _legacyAutoExposureGlobalKeyword;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _mipDownNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mipDownNames, put = __cordl_internal_set__mipDownNames)) ::ArrayW<::StringW> _mipDownNames;

  /// @brief Field _mipUpNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mipUpNames, put = __cordl_internal_set__mipUpNames)) ::ArrayW<::StringW> _mipUpNames;

  /// @brief Field _shader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shader, put = __cordl_internal_set__shader)) ::UnityW<::UnityEngine::Shader> _shader;

  /// @brief Field kIsScreenspaceEffectKeyword, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_kIsScreenspaceEffectKeyword, put = __cordl_internal_set_kIsScreenspaceEffectKeyword)) ::StringW kIsScreenspaceEffectKeyword;

  /// @brief Field kLegacyAutoExposureKeyword, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_kLegacyAutoExposureKeyword, put = __cordl_internal_set_kLegacyAutoExposureKeyword)) ::StringW kLegacyAutoExposureKeyword;

  static inline ::GlobalNamespace::PyramidBloomRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x5860748, size 0x14, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x58603d4, size 0x374, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RenderBloom, addr 0x5860bec, size 0x694, virtual false, abstract: false, final false
  inline void RenderBloom(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                          ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempRTHandles, float_t radius, float_t intensity, float_t autoExposureLimit, float_t downIntensityOffset,
                          bool uniformPyramidWeights, bool downsampleOnFirstPass, float_t pyramidWeightsParam, float_t alphaWeights, float_t firstUpsampleBrightness, float_t finalUpsampleBrightness,
                          ::GlobalNamespace::PyramidBloomRendererSO_Pass preFilterPass, ::GlobalNamespace::PyramidBloomRendererSO_Pass downsamplePass,
                          ::GlobalNamespace::PyramidBloomRendererSO_Pass upsamplePass, ::GlobalNamespace::PyramidBloomRendererSO_Pass finalUpsamplePass, bool legacyAutoExposure,
                          bool isScreenspaceEffect);

  /// @brief Method SetupTempTextureHandles, addr 0x586075c, size 0x490, virtual false, abstract: false, final false
  inline void SetupTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                      ::UnityEngine::RenderTextureDescriptor destDesc, ::GlobalNamespace::PyramidBloomRendererSO_TextureType textureType, float_t radius, bool downsampleOnFirstPass,
                                      ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles);

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityEngine::Rendering::GlobalKeyword const& __cordl_internal_get__isScreenspaceEffectGlobalKeyword() const;

  constexpr ::UnityEngine::Rendering::GlobalKeyword& __cordl_internal_get__isScreenspaceEffectGlobalKeyword();

  constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__isScreenspaceEffectKeyword() const;

  constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__isScreenspaceEffectKeyword();

  constexpr ::UnityEngine::Rendering::GlobalKeyword const& __cordl_internal_get__legacyAutoExposureGlobalKeyword() const;

  constexpr ::UnityEngine::Rendering::GlobalKeyword& __cordl_internal_get__legacyAutoExposureGlobalKeyword();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__mipDownNames() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__mipDownNames();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__mipUpNames() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__mipUpNames();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__shader();

  constexpr ::StringW const& __cordl_internal_get_kIsScreenspaceEffectKeyword() const;

  constexpr ::StringW& __cordl_internal_get_kIsScreenspaceEffectKeyword();

  constexpr ::StringW const& __cordl_internal_get_kLegacyAutoExposureKeyword() const;

  constexpr ::StringW& __cordl_internal_get_kLegacyAutoExposureKeyword();

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__isScreenspaceEffectGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword value);

  constexpr void __cordl_internal_set__isScreenspaceEffectKeyword(::UnityEngine::Rendering::LocalKeyword value);

  constexpr void __cordl_internal_set__legacyAutoExposureGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__mipDownNames(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set__mipUpNames(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_kIsScreenspaceEffectKeyword(::StringW value);

  constexpr void __cordl_internal_set_kLegacyAutoExposureKeyword(::StringW value);

  /// @brief Method .ctor, addr 0x5861280, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__bloomParamsID();

  static inline int32_t getStaticF__bloomTexID();

  static inline int32_t getStaticF__combineParamsID();

  static inline int32_t getStaticF__globalIntensityTex();

  static inline void setStaticF__bloomParamsID(int32_t value);

  static inline void setStaticF__bloomTexID(int32_t value);

  static inline void setStaticF__combineParamsID(int32_t value);

  static inline void setStaticF__globalIntensityTex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomRendererSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PyramidBloomRendererSO(PyramidBloomRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PyramidBloomRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PyramidBloomRendererSO(PyramidBloomRendererSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19407 };

  /// @brief Field kMaxPyramidSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPyramidSize{ static_cast<int32_t>(0x10) };

  /// @brief Field _shader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____shader;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _mipDownNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW> ____mipDownNames;

  /// @brief Field _mipUpNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW> ____mipUpNames;

  /// @brief Field kIsScreenspaceEffectKeyword, offset: 0x38, size: 0x8, def value: None
  ::StringW ___kIsScreenspaceEffectKeyword;

  /// @brief Field kLegacyAutoExposureKeyword, offset: 0x40, size: 0x8, def value: None
  ::StringW ___kLegacyAutoExposureKeyword;

  /// @brief Field _isScreenspaceEffectKeyword, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::Rendering::LocalKeyword ____isScreenspaceEffectKeyword;

  /// @brief Field _isScreenspaceEffectGlobalKeyword, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rendering::GlobalKeyword ____isScreenspaceEffectGlobalKeyword;

  /// @brief Field _legacyAutoExposureGlobalKeyword, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Rendering::GlobalKeyword ____legacyAutoExposureGlobalKeyword;

  /// @brief Field _initialized, offset: 0x80, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____shader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____mipDownNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____mipUpNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ___kIsScreenspaceEffectKeyword) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ___kLegacyAutoExposureKeyword) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____isScreenspaceEffectKeyword) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____isScreenspaceEffectGlobalKeyword) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____legacyAutoExposureGlobalKeyword) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____initialized) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO) == 0x88, "Size mismatch!");

} // namespace GlobalNamespace
