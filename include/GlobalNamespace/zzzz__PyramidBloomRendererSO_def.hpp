#pragma once
// IWYU pragma private; include "GlobalNamespace/PyramidBloomRendererSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PyramidBloomRendererSO)
namespace GlobalNamespace {
struct PyramidBloomRendererSO_Level;
}
namespace GlobalNamespace {
struct PyramidBloomRendererSO_Pass;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
struct PyramidBloomRendererSO_Pass;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace GlobalNamespace {
struct PyramidBloomRendererSO_Level;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PyramidBloomRendererSO_Pass);
MARK_REF_PTR_T(::GlobalNamespace::PyramidBloomRendererSO);
MARK_VAL_T(::GlobalNamespace::PyramidBloomRendererSO_Level);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16233 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO_Pass, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomRendererSO_Pass, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PyramidBloomRendererSO/Level
struct CORDL_TYPE PyramidBloomRendererSO_Level {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PyramidBloomRendererSO_Level();

  // Ctor Parameters [CppParam { name: "down", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "up", ty: "::UnityW<::UnityEngine::RenderTexture>",
  // modifiers: "", def_value: None }]
  constexpr PyramidBloomRendererSO_Level(::UnityW<::UnityEngine::RenderTexture> down, ::UnityW<::UnityEngine::RenderTexture> up) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16234 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field down, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> down;

  /// @brief Field up, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> up;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO_Level, down) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO_Level, up) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomRendererSO_Level, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PyramidBloomRendererSO
class CORDL_TYPE PyramidBloomRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Level = ::GlobalNamespace::PyramidBloomRendererSO_Level;

  using Pass = ::GlobalNamespace::PyramidBloomRendererSO_Pass;

  /// @brief Field _alphaWeightsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__alphaWeightsID, put = setStaticF__alphaWeightsID)) int32_t _alphaWeightsID;

  /// @brief Field _autoExposureLimitID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__autoExposureLimitID, put = setStaticF__autoExposureLimitID)) int32_t _autoExposureLimitID;

  /// @brief Field _bloomTexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__bloomTexID, put = setStaticF__bloomTexID)) int32_t _bloomTexID;

  /// @brief Field _combineDstID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__combineDstID, put = setStaticF__combineDstID)) int32_t _combineDstID;

  /// @brief Field _combineSrcID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__combineSrcID, put = setStaticF__combineSrcID)) int32_t _combineSrcID;

  /// @brief Field _globalIntensityTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__globalIntensityTex, put = setStaticF__globalIntensityTex)) int32_t _globalIntensityTex;

  /// @brief Field _initialized, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _pyramid, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pyramid,
                      put = __cordl_internal_set__pyramid)) ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*>
      _pyramid;

  /// @brief Field _sampleScaleID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__sampleScaleID, put = setStaticF__sampleScaleID)) int32_t _sampleScaleID;

  /// @brief Field _shader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shader, put = __cordl_internal_set__shader)) ::UnityW<::UnityEngine::Shader> _shader;

  /// @brief Field kIsScreenspaceEffectKeyword, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_kIsScreenspaceEffectKeyword, put = __cordl_internal_set_kIsScreenspaceEffectKeyword)) ::StringW kIsScreenspaceEffectKeyword;

  /// @brief Field kLegacyAutoExposureKeyword, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_kLegacyAutoExposureKeyword, put = __cordl_internal_set_kLegacyAutoExposureKeyword)) ::StringW kLegacyAutoExposureKeyword;

  static inline ::GlobalNamespace::PyramidBloomRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x39d34f8, size 0x24, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39d33f0, size 0x108, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RenderBloom, addr 0x39d351c, size 0x90, virtual false, abstract: false, final false
  inline void RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t radius, bool alphaWeights, bool betterQuality, bool gammaCorrection, bool legacyAutoExposure);

  /// @brief Method RenderBloom, addr 0x39d35ac, size 0x834, virtual false, abstract: false, final false
  inline void RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t radius, float_t intensity, float_t autoExposureLimit, float_t downIntensityOffset,
                          bool uniformPyramidWeights, bool downsampleOnFirstPass, float_t pyramidWeightsParam, float_t alphaWeights, float_t firstUpsampleBrightness, float_t finalUpsampleBrightness,
                          ::GlobalNamespace::PyramidBloomRendererSO_Pass preFilterPass, ::GlobalNamespace::PyramidBloomRendererSO_Pass downsamplePass,
                          ::GlobalNamespace::PyramidBloomRendererSO_Pass upsamplePass, ::GlobalNamespace::PyramidBloomRendererSO_Pass finalUpsamplePass, bool legacyAutoExposure,
                          bool isScreenspaceEffect);

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*> const& __cordl_internal_get__pyramid() const;

  constexpr ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*>& __cordl_internal_get__pyramid();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__shader();

  constexpr ::StringW const& __cordl_internal_get_kIsScreenspaceEffectKeyword() const;

  constexpr ::StringW& __cordl_internal_get_kIsScreenspaceEffectKeyword();

  constexpr ::StringW const& __cordl_internal_get_kLegacyAutoExposureKeyword() const;

  constexpr ::StringW& __cordl_internal_get_kLegacyAutoExposureKeyword();

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__pyramid(::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*> value);

  constexpr void __cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_kIsScreenspaceEffectKeyword(::StringW value);

  constexpr void __cordl_internal_set_kLegacyAutoExposureKeyword(::StringW value);

  /// @brief Method .ctor, addr 0x39d3de0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__alphaWeightsID();

  static inline int32_t getStaticF__autoExposureLimitID();

  static inline int32_t getStaticF__bloomTexID();

  static inline int32_t getStaticF__combineDstID();

  static inline int32_t getStaticF__combineSrcID();

  static inline int32_t getStaticF__globalIntensityTex();

  static inline int32_t getStaticF__sampleScaleID();

  static inline void setStaticF__alphaWeightsID(int32_t value);

  static inline void setStaticF__autoExposureLimitID(int32_t value);

  static inline void setStaticF__bloomTexID(int32_t value);

  static inline void setStaticF__combineDstID(int32_t value);

  static inline void setStaticF__combineSrcID(int32_t value);

  static inline void setStaticF__globalIntensityTex(int32_t value);

  static inline void setStaticF__sampleScaleID(int32_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16235 };

  /// @brief Field kMaxPyramidSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPyramidSize{ static_cast<int32_t>(0x10) };

  /// @brief Field _shader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____shader;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _pyramid, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*> ____pyramid;

  /// @brief Field kIsScreenspaceEffectKeyword, offset: 0x30, size: 0x8, def value: None
  ::StringW ___kIsScreenspaceEffectKeyword;

  /// @brief Field kLegacyAutoExposureKeyword, offset: 0x38, size: 0x8, def value: None
  ::StringW ___kLegacyAutoExposureKeyword;

  /// @brief Field _initialized, offset: 0x40, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____shader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____pyramid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ___kIsScreenspaceEffectKeyword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ___kLegacyAutoExposureKeyword) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PyramidBloomRendererSO, ____initialized) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomRendererSO, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomRendererSO_Pass, "", "PyramidBloomRendererSO/Pass");
NEED_NO_BOX(::GlobalNamespace::PyramidBloomRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomRendererSO*, "", "PyramidBloomRendererSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomRendererSO_Level, "", "PyramidBloomRendererSO/Level");
