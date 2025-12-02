#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct LightCookieManager_LightCookieMapping;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_LightCookieShaderData;
}
namespace UnityEngine::Rendering::Universal {
struct LightCookieManager_LightCookieShaderFormat;
}
namespace UnityEngine::Rendering::Universal {
struct LightCookieManager_Settings;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_ShaderProperty;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_WorkMemory;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> struct LightCookieManager_WorkSlice_1;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieMapping_LightCookieManager___c;
}
namespace UnityEngine::Rendering::Universal {
struct Settings_LightCookieManager_AtlasSettings;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderBitArray;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class Texture2DAtlas;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightCookieManager_LightCookieShaderFormat;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_LightCookieShaderData;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_ShaderProperty;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_WorkMemory;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieMapping_LightCookieManager___c;
}
namespace UnityEngine::Rendering::Universal {
struct LightCookieManager_LightCookieMapping;
}
namespace UnityEngine::Rendering::Universal {
struct LightCookieManager_Settings;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> struct LightCookieManager_WorkSlice_1;
}
namespace UnityEngine::Rendering::Universal {
struct Settings_LightCookieManager_AtlasSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightCookieManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping);
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightCookieManager_Settings);
MARK_GEN_VAL_T(::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/ShaderProperty
class CORDL_TYPE LightCookieManager_ShaderProperty : public ::System::Object {
public:
  // Declarations
  /// @brief Field additionalLightsCookieAtlasTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsCookieAtlasTexture, put = setStaticF_additionalLightsCookieAtlasTexture)) int32_t additionalLightsCookieAtlasTexture;

  /// @brief Field additionalLightsCookieAtlasTextureFormat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsCookieAtlasTextureFormat, put = setStaticF_additionalLightsCookieAtlasTextureFormat)) int32_t additionalLightsCookieAtlasTextureFormat;

  /// @brief Field additionalLightsCookieAtlasUVRectBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsCookieAtlasUVRectBuffer, put = setStaticF_additionalLightsCookieAtlasUVRectBuffer)) int32_t additionalLightsCookieAtlasUVRectBuffer;

  /// @brief Field additionalLightsCookieAtlasUVRects, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsCookieAtlasUVRects, put = setStaticF_additionalLightsCookieAtlasUVRects)) int32_t additionalLightsCookieAtlasUVRects;

  /// @brief Field additionalLightsCookieEnableBits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsCookieEnableBits, put = setStaticF_additionalLightsCookieEnableBits)) int32_t additionalLightsCookieEnableBits;

  /// @brief Field additionalLightsLightTypeBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsLightTypeBuffer, put = setStaticF_additionalLightsLightTypeBuffer)) int32_t additionalLightsLightTypeBuffer;

  /// @brief Field additionalLightsLightTypes, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsLightTypes, put = setStaticF_additionalLightsLightTypes)) int32_t additionalLightsLightTypes;

  /// @brief Field additionalLightsWorldToLightBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsWorldToLightBuffer, put = setStaticF_additionalLightsWorldToLightBuffer)) int32_t additionalLightsWorldToLightBuffer;

  /// @brief Field additionalLightsWorldToLights, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_additionalLightsWorldToLights, put = setStaticF_additionalLightsWorldToLights)) int32_t additionalLightsWorldToLights;

  /// @brief Field mainLightCookieTextureFormat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_mainLightCookieTextureFormat, put = setStaticF_mainLightCookieTextureFormat)) int32_t mainLightCookieTextureFormat;

  /// @brief Field mainLightTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_mainLightTexture, put = setStaticF_mainLightTexture)) int32_t mainLightTexture;

  /// @brief Field mainLightWorldToLight, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_mainLightWorldToLight, put = setStaticF_mainLightWorldToLight)) int32_t mainLightWorldToLight;

  static inline int32_t getStaticF_additionalLightsCookieAtlasTexture();

  static inline int32_t getStaticF_additionalLightsCookieAtlasTextureFormat();

  static inline int32_t getStaticF_additionalLightsCookieAtlasUVRectBuffer();

  static inline int32_t getStaticF_additionalLightsCookieAtlasUVRects();

  static inline int32_t getStaticF_additionalLightsCookieEnableBits();

  static inline int32_t getStaticF_additionalLightsLightTypeBuffer();

  static inline int32_t getStaticF_additionalLightsLightTypes();

  static inline int32_t getStaticF_additionalLightsWorldToLightBuffer();

  static inline int32_t getStaticF_additionalLightsWorldToLights();

  static inline int32_t getStaticF_mainLightCookieTextureFormat();

  static inline int32_t getStaticF_mainLightTexture();

  static inline int32_t getStaticF_mainLightWorldToLight();

  static inline void setStaticF_additionalLightsCookieAtlasTexture(int32_t value);

  static inline void setStaticF_additionalLightsCookieAtlasTextureFormat(int32_t value);

  static inline void setStaticF_additionalLightsCookieAtlasUVRectBuffer(int32_t value);

  static inline void setStaticF_additionalLightsCookieAtlasUVRects(int32_t value);

  static inline void setStaticF_additionalLightsCookieEnableBits(int32_t value);

  static inline void setStaticF_additionalLightsLightTypeBuffer(int32_t value);

  static inline void setStaticF_additionalLightsLightTypes(int32_t value);

  static inline void setStaticF_additionalLightsWorldToLightBuffer(int32_t value);

  static inline void setStaticF_additionalLightsWorldToLights(int32_t value);

  static inline void setStaticF_mainLightCookieTextureFormat(int32_t value);

  static inline void setStaticF_mainLightTexture(int32_t value);

  static inline void setStaticF_mainLightWorldToLight(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_ShaderProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_ShaderProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightCookieManager_ShaderProperty(LightCookieManager_ShaderProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_ShaderProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightCookieManager_ShaderProperty(LightCookieManager_ShaderProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat
struct CORDL_TYPE LightCookieManager_LightCookieShaderFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightCookieManager_LightCookieShaderFormat_Unwrapped
  enum struct __LightCookieManager_LightCookieShaderFormat_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_RGB = static_cast<int32_t>(0x0),
    __E_Alpha = static_cast<int32_t>(0x1),
    __E_Red = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightCookieManager_LightCookieShaderFormat_Unwrapped() const noexcept {
    return static_cast<__LightCookieManager_LightCookieShaderFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_LightCookieShaderFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightCookieManager_LightCookieShaderFormat(int32_t value__) noexcept;

  /// @brief Field Alpha value: I32(1)
  static ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat const Alpha;

  /// @brief Field None value: I32(-1)
  static ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat const None;

  /// @brief Field RGB value: I32(0)
  static ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat const RGB;

  /// @brief Field Red value: I32(2)
  static ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat const Red;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12738 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/Settings/AtlasSettings
struct CORDL_TYPE Settings_LightCookieManager_AtlasSettings {
public:
  // Declarations
  __declspec(property(get = get_isPow2)) bool isPow2;

  __declspec(property(get = get_isSquare)) bool isSquare;

  /// @brief Method get_isPow2, addr 0x665b718, size 0x2c, virtual false, abstract: false, final false
  inline bool get_isPow2();

  /// @brief Method get_isSquare, addr 0x665bfa4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isSquare();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Settings_LightCookieManager_AtlasSettings();

  // Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "format", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }]
  constexpr Settings_LightCookieManager_AtlasSettings(::UnityEngine::Vector2Int resolution, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12739 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field resolution, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int resolution;

  /// @brief Field format, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings, resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings, format) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.LightCookieManager::Settings::AtlasSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/Settings
struct CORDL_TYPE LightCookieManager_Settings {
public:
  // Declarations
  using AtlasSettings = ::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings;

  /// @brief Method Create, addr 0x665bf00, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::LightCookieManager_Settings Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_Settings();

  // Ctor Parameters [CppParam { name: "atlas", ty: "::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings", modifiers: "", def_value: None }, CppParam { name:
  // "maxAdditionalLights", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubeOctahedralSizeScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "useStructuredBuffer", ty: "bool", modifiers: "", def_value: None }]
  constexpr LightCookieManager_Settings(::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings atlas, int32_t maxAdditionalLights, float_t cubeOctahedralSizeScale,
                                        bool useStructuredBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field atlas, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings atlas;

  /// @brief Field maxAdditionalLights, offset: 0xc, size: 0x4, def value: None
  int32_t maxAdditionalLights;

  /// @brief Field cubeOctahedralSizeScale, offset: 0x10, size: 0x4, def value: None
  float_t cubeOctahedralSizeScale;

  /// @brief Field useStructuredBuffer, offset: 0x14, size: 0x1, def value: None
  bool useStructuredBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_Settings, atlas) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_Settings, maxAdditionalLights) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_Settings, cubeOctahedralSizeScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_Settings, useStructuredBuffer) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager_Settings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping/<>c
class CORDL_TYPE LightCookieMapping_LightCookieManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* __9;

  static inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* New_ctor();

  /// @brief Method <.cctor>b__6_0, addr 0x665c12c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t __cctor_b__6_0(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping a, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping b);

  /// @brief Method <.cctor>b__6_1, addr 0x665c1f8, size 0xc, virtual false, abstract: false, final false
  inline int32_t __cctor_b__6_1(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping a, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping b);

  /// @brief Method .ctor, addr 0x665c128, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieMapping_LightCookieManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightCookieMapping_LightCookieManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightCookieMapping_LightCookieManager___c(LightCookieMapping_LightCookieManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightCookieMapping_LightCookieManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightCookieMapping_LightCookieManager___c(LightCookieMapping_LightCookieManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct CORDL_TYPE LightCookieManager_LightCookieMapping {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c;

  /// @brief Field s_CompareByBufferIndex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CompareByBufferIndex,
                      put = setStaticF_s_CompareByBufferIndex)) ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping,
                                                                                 ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>* s_CompareByBufferIndex;

  /// @brief Field s_CompareByCookieSize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CompareByCookieSize,
                      put = setStaticF_s_CompareByCookieSize)) ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping,
                                                                                ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>* s_CompareByCookieSize;

  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*
  getStaticF_s_CompareByBufferIndex();

  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*
  getStaticF_s_CompareByCookieSize();

  static inline void setStaticF_s_CompareByBufferIndex(
      ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>* value);

  static inline void setStaticF_s_CompareByCookieSize(
      ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_LightCookieMapping();

  // Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lightBufferIndex", ty: "uint16_t", modifiers: "", def_value: None },
  // CppParam { name: "light", ty: "::UnityW<::UnityEngine::Light>", modifiers: "", def_value: None }]
  constexpr LightCookieManager_LightCookieMapping(uint16_t visibleLightIndex, uint16_t lightBufferIndex, ::UnityW<::UnityEngine::Light> light) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12742 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field visibleLightIndex, offset: 0x0, size: 0x2, def value: None
  uint16_t visibleLightIndex;

  /// @brief Field lightBufferIndex, offset: 0x2, size: 0x2, def value: None
  uint16_t lightBufferIndex;

  /// @brief Field light, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> light;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, visibleLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, lightBufferIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, light) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<T>
struct CORDL_TYPE LightCookieManager_WorkSlice_1 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_capacity)) int32_t capacity;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> src, int32_t srcLen);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> src, int32_t srcStart, int32_t srcLen);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_WorkSlice_1();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightCookieManager_WorkSlice_1(::ArrayW<T, ::Array<T>*> m_Data, int32_t m_Start, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12743 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> m_Data;

  /// @brief Field m_Start, offset: 0x8, size: 0x4, def value: None
  int32_t m_Start;

  /// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
  int32_t m_Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/WorkMemory
class CORDL_TYPE LightCookieManager_WorkMemory : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightMappings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightMappings,
                      put = __cordl_internal_set_lightMappings)) ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping,
                                                                          ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*>
      lightMappings;

  /// @brief Field uvRects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uvRects, put = __cordl_internal_set_uvRects)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvRects;

  static inline ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* New_ctor();

  /// @brief Method Resize, addr 0x665a07c, size 0x120, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> const&
  __cordl_internal_get_lightMappings() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*>&
  __cordl_internal_get_lightMappings();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_uvRects() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_uvRects();

  constexpr void __cordl_internal_set_lightMappings(
      ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> value);

  constexpr void __cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method .ctor, addr 0x6659514, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_WorkMemory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_WorkMemory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightCookieManager_WorkMemory(LightCookieManager_WorkMemory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_WorkMemory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightCookieManager_WorkMemory(LightCookieManager_WorkMemory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12744 };

  /// @brief Field lightMappings, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> ___lightMappings;

  /// @brief Field uvRects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___uvRects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory, ___lightMappings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory, ___uvRects) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.ShaderBitArray
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderData
class CORDL_TYPE LightCookieManager_LightCookieShaderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isUploaded>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isUploaded_k__BackingField, put = __cordl_internal_set__isUploaded_k__BackingField)) bool _isUploaded_k__BackingField;

  __declspec(property(get = get_atlasUVRects)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> atlasUVRects;

  __declspec(property(get = get_cookieEnableBits)) ::UnityEngine::Rendering::Universal::ShaderBitArray cookieEnableBits;

  __declspec(property(get = get_isUploaded, put = set_isUploaded)) bool isUploaded;

  __declspec(property(get = get_lightTypes)) ::ArrayW<float_t, ::Array<float_t>*> lightTypes;

  /// @brief Field m_AtlasUVRectBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasUVRectBuffer, put = __cordl_internal_set_m_AtlasUVRectBuffer)) ::UnityEngine::ComputeBuffer* m_AtlasUVRectBuffer;

  /// @brief Field m_AtlasUVRectCpuData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasUVRectCpuData, put = __cordl_internal_set_m_AtlasUVRectCpuData)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      m_AtlasUVRectCpuData;

  /// @brief Field m_CookieEnableBitsCpuData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CookieEnableBitsCpuData,
                      put = __cordl_internal_set_m_CookieEnableBitsCpuData)) ::UnityEngine::Rendering::Universal::ShaderBitArray m_CookieEnableBitsCpuData;

  /// @brief Field m_LightTypeBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightTypeBuffer, put = __cordl_internal_set_m_LightTypeBuffer)) ::UnityEngine::ComputeBuffer* m_LightTypeBuffer;

  /// @brief Field m_LightTypeCpuData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightTypeCpuData, put = __cordl_internal_set_m_LightTypeCpuData)) ::ArrayW<float_t, ::Array<float_t>*> m_LightTypeCpuData;

  /// @brief Field m_Size, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) int32_t m_Size;

  /// @brief Field m_UseStructuredBuffer, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStructuredBuffer, put = __cordl_internal_set_m_UseStructuredBuffer)) bool m_UseStructuredBuffer;

  /// @brief Field m_WorldToLightBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToLightBuffer, put = __cordl_internal_set_m_WorldToLightBuffer)) ::UnityEngine::ComputeBuffer* m_WorldToLightBuffer;

  /// @brief Field m_WorldToLightCpuData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToLightCpuData, put = __cordl_internal_set_m_WorldToLightCpuData)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      m_WorldToLightCpuData;

  __declspec(property(get = get_worldToLights)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> worldToLights;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x6659e44, size 0x9c, virtual false, abstract: false, final false
  inline void Clear(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Dispose, addr 0x6659694, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* New_ctor(int32_t size, bool useStructuredBuffer);

  /// @brief Method Resize, addr 0x665b7f4, size 0x218, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  /// @brief Method Upload, addr 0x665ba0c, size 0x194, virtual false, abstract: false, final false
  inline void Upload(::UnityEngine::Rendering::CommandBuffer* cmd);

  constexpr bool const& __cordl_internal_get__isUploaded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isUploaded_k__BackingField();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_AtlasUVRectBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_AtlasUVRectBuffer();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AtlasUVRectCpuData() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AtlasUVRectCpuData();

  constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray const& __cordl_internal_get_m_CookieEnableBitsCpuData() const;

  constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray& __cordl_internal_get_m_CookieEnableBitsCpuData();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_LightTypeBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_LightTypeBuffer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_LightTypeCpuData() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_LightTypeCpuData();

  constexpr int32_t const& __cordl_internal_get_m_Size() const;

  constexpr int32_t& __cordl_internal_get_m_Size();

  constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseStructuredBuffer();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_WorldToLightBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_WorldToLightBuffer();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_WorldToLightCpuData() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_WorldToLightCpuData();

  constexpr void __cordl_internal_set__isUploaded_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AtlasUVRectBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_AtlasUVRectCpuData(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CookieEnableBitsCpuData(::UnityEngine::Rendering::Universal::ShaderBitArray value);

  constexpr void __cordl_internal_set_m_LightTypeBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_LightTypeCpuData(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_Size(int32_t value);

  constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_m_WorldToLightBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_WorldToLightCpuData(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method .ctor, addr 0x665963c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, bool useStructuredBuffer);

  /// @brief Method get_atlasUVRects, addr 0x665c214, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_atlasUVRects();

  /// @brief Method get_cookieEnableBits, addr 0x665c20c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ShaderBitArray get_cookieEnableBits();

  /// @brief Method get_isUploaded, addr 0x665c224, size 0x8, virtual false, abstract: false, final false
  inline bool get_isUploaded();

  /// @brief Method get_lightTypes, addr 0x665c21c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_lightTypes();

  /// @brief Method get_worldToLights, addr 0x665c204, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_worldToLights();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_isUploaded, addr 0x665c22c, size 0x8, virtual false, abstract: false, final false
  inline void set_isUploaded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager_LightCookieShaderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_LightCookieShaderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightCookieManager_LightCookieShaderData(LightCookieManager_LightCookieShaderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_LightCookieShaderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightCookieManager_LightCookieShaderData(LightCookieManager_LightCookieShaderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12745 };

  /// @brief Field m_Size, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Size;

  /// @brief Field m_UseStructuredBuffer, offset: 0x14, size: 0x1, def value: None
  bool ___m_UseStructuredBuffer;

  /// @brief Field m_WorldToLightCpuData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_WorldToLightCpuData;

  /// @brief Field m_AtlasUVRectCpuData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AtlasUVRectCpuData;

  /// @brief Field m_LightTypeCpuData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_LightTypeCpuData;

  /// @brief Field m_CookieEnableBitsCpuData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ShaderBitArray ___m_CookieEnableBitsCpuData;

  /// @brief Field m_WorldToLightBuffer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_WorldToLightBuffer;

  /// @brief Field m_AtlasUVRectBuffer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_AtlasUVRectBuffer;

  /// @brief Field m_LightTypeBuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_LightTypeBuffer;

  /// @brief Field <isUploaded>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____isUploaded_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_UseStructuredBuffer) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_WorldToLightCpuData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_AtlasUVRectCpuData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_LightTypeCpuData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_CookieEnableBitsCpuData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_WorldToLightBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_AtlasUVRectBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_LightTypeBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ____isUploaded_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rendering.Universal.LightCookieManager::Settings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager
class CORDL_TYPE LightCookieManager : public ::System::Object {
public:
  // Declarations
  using LightCookieMapping = ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping;

  using LightCookieShaderData = ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData;

  using LightCookieShaderFormat = ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat;

  using Settings = ::UnityEngine::Rendering::Universal::LightCookieManager_Settings;

  using ShaderProperty = ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty;

  using WorkMemory = ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory;

  template <typename T> using WorkSlice_1 = ::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>;

  __declspec(property(get = get_AdditionalLightsCookieAtlasTexture)) ::UnityEngine::Rendering::RTHandle* AdditionalLightsCookieAtlasTexture;

  __declspec(property(get = get_IsKeywordLightCookieEnabled, put = set_IsKeywordLightCookieEnabled)) bool IsKeywordLightCookieEnabled;

  /// @brief Field <IsKeywordLightCookieEnabled>k__BackingField, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField,
                      put = __cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField)) bool _IsKeywordLightCookieEnabled_k__BackingField;

  /// @brief Field m_AdditionalLightsCookieAtlas, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieAtlas,
                      put = __cordl_internal_set_m_AdditionalLightsCookieAtlas)) ::UnityEngine::Rendering::Texture2DAtlas* m_AdditionalLightsCookieAtlas;

  /// @brief Field m_AdditionalLightsCookieShaderData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieShaderData,
                      put = __cordl_internal_set_m_AdditionalLightsCookieShaderData)) ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* m_AdditionalLightsCookieShaderData;

  /// @brief Field m_CookieSizeDivisor, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CookieSizeDivisor, put = __cordl_internal_set_m_CookieSizeDivisor)) int32_t m_CookieSizeDivisor;

  /// @brief Field m_PrevCookieRequestPixelCount, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevCookieRequestPixelCount, put = __cordl_internal_set_m_PrevCookieRequestPixelCount)) uint32_t m_PrevCookieRequestPixelCount;

  /// @brief Field m_PrevWarnFrame, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevWarnFrame, put = __cordl_internal_set_m_PrevWarnFrame)) int32_t m_PrevWarnFrame;

  /// @brief Field m_Settings, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::LightCookieManager_Settings m_Settings;

  /// @brief Field m_VisibleLightIndexToShaderDataIndex, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex, put = __cordl_internal_set_m_VisibleLightIndexToShaderDataIndex)) ::ArrayW<int32_t, ::Array<int32_t>*>
      m_VisibleLightIndexToShaderDataIndex;

  /// @brief Field m_WorkMem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorkMem, put = __cordl_internal_set_m_WorkMem)) ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* m_WorkMem;

  /// @brief Field s_DirLightProj, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_s_DirLightProj, put = setStaticF_s_DirLightProj)) ::UnityEngine::Matrix4x4 s_DirLightProj;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AdjustUVRect, addr 0x665b538, size 0xbc, virtual false, abstract: false, final false
  inline void AdjustUVRect(::ByRef<::UnityEngine::Vector4> uvScaleOffset, ::UnityEngine::Texture* cookie, ::ByRef<::UnityEngine::Vector2> cookieSize);

  /// @brief Method ApproximateCookieSizeDivisor, addr 0x665af9c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t ApproximateCookieSizeDivisor(float_t requestAtlasRatio);

  /// @brief Method ComputeCookieRequestPixelCount, addr 0x665ae94, size 0x108, virtual false, abstract: false, final false
  inline uint32_t ComputeCookieRequestPixelCount(
      ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings);

  /// @brief Method ComputeOctahedralCookieSize, addr 0x665b5f4, size 0x124, virtual false, abstract: false, final false
  inline int32_t ComputeOctahedralCookieSize(::UnityEngine::Texture* cookie);

  /// @brief Method Dispose, addr 0x6659664, size 0x30, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Fetch2D, addr 0x665b3d0, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 Fetch2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* cookie, int32_t cookieSizeDivisor);

  /// @brief Method FetchCube, addr 0x665b260, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 FetchCube(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* cookie, int32_t cookieSizeDivisor);

  /// @brief Method FetchUVRects, addr 0x665afc8, size 0x298, virtual false, abstract: false, final false
  inline int32_t
  FetchUVRects(::UnityEngine::Rendering::CommandBuffer* cmd,
               ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings,
               ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> textureAtlasUVRects, int32_t cookieSizeDivisor);

  /// @brief Method FilterAndValidateAdditionalLights, addr 0x665a19c, size 0x468, virtual false, abstract: false, final false
  inline int32_t FilterAndValidateAdditionalLights(
      ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
      ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> validLightMappings);

  /// @brief Method GetLightCookieShaderDataIndex, addr 0x66596dc, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetLightCookieShaderDataIndex(int32_t visibleLightIndex);

  /// @brief Method GetLightCookieShaderFormat, addr 0x6659ee0, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat GetLightCookieShaderFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat cookieFormat);

  /// @brief Method GetLightUVScaleOffset, addr 0x6659fc0, size 0xbc, virtual false, abstract: false, final false
  inline void GetLightUVScaleOffset(::ByRef<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*> additionalLightData, ::ByRef<::UnityEngine::Matrix4x4> uvTransform);

  /// @brief Method InitAdditionalLights, addr 0x6659518, size 0x124, virtual false, abstract: false, final false
  inline void InitAdditionalLights(int32_t size);

  static inline ::UnityEngine::Rendering::Universal::LightCookieManager* New_ctor(::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings> settings);

  /// @brief Method Setup, addr 0x6659724, size 0x198, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupAdditionalLights, addr 0x6659ca8, size 0x19c, virtual false, abstract: false, final false
  inline bool SetupAdditionalLights(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupMainLight, addr 0x66598bc, size 0x3ec, virtual false, abstract: false, final false
  inline bool SetupMainLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::VisibleLight> visibleMainLight);

  /// @brief Method ShrinkUVRect, addr 0x665b744, size 0xb0, virtual false, abstract: false, final false
  inline void ShrinkUVRect(::ByRef<::UnityEngine::Vector4> uvScaleOffset, float_t amountPixels, ::ByRef<::UnityEngine::Vector2> cookieSize);

  /// @brief Method UpdateAdditionalLightsAtlas, addr 0x665a604, size 0x184, virtual false, abstract: false, final false
  inline int32_t UpdateAdditionalLightsAtlas(
      ::UnityEngine::Rendering::CommandBuffer* cmd,
      ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings,
      ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> textureAtlasUVRects);

  /// @brief Method UploadAdditionalLights, addr 0x665a788, size 0x70c, virtual false, abstract: false, final false
  inline void
  UploadAdditionalLights(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                         ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings,
                         ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>> validUvRects);

  constexpr bool const& __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField();

  constexpr ::UnityEngine::Rendering::Texture2DAtlas* const& __cordl_internal_get_m_AdditionalLightsCookieAtlas() const;

  constexpr ::UnityEngine::Rendering::Texture2DAtlas*& __cordl_internal_get_m_AdditionalLightsCookieAtlas();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* const& __cordl_internal_get_m_AdditionalLightsCookieShaderData() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*& __cordl_internal_get_m_AdditionalLightsCookieShaderData();

  constexpr int32_t const& __cordl_internal_get_m_CookieSizeDivisor() const;

  constexpr int32_t& __cordl_internal_get_m_CookieSizeDivisor();

  constexpr uint32_t const& __cordl_internal_get_m_PrevCookieRequestPixelCount() const;

  constexpr uint32_t& __cordl_internal_get_m_PrevCookieRequestPixelCount();

  constexpr int32_t const& __cordl_internal_get_m_PrevWarnFrame() const;

  constexpr int32_t& __cordl_internal_get_m_PrevWarnFrame();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_Settings const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_Settings& __cordl_internal_get_m_Settings();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* const& __cordl_internal_get_m_WorkMem() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*& __cordl_internal_get_m_WorkMem();

  constexpr void __cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieAtlas(::UnityEngine::Rendering::Texture2DAtlas* value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieShaderData(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* value);

  constexpr void __cordl_internal_set_m_CookieSizeDivisor(int32_t value);

  constexpr void __cordl_internal_set_m_PrevCookieRequestPixelCount(uint32_t value);

  constexpr void __cordl_internal_set_m_PrevWarnFrame(int32_t value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::LightCookieManager_Settings value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToShaderDataIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_WorkMem(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* value);

  /// @brief Method .ctor, addr 0x6659494, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings> settings);

  static inline ::UnityEngine::Matrix4x4 getStaticF_s_DirLightProj();

  /// @brief Method get_AdditionalLightsCookieAtlasTexture, addr 0x665947c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_AdditionalLightsCookieAtlasTexture();

  /// @brief Method get_IsKeywordLightCookieEnabled, addr 0x665946c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsKeywordLightCookieEnabled();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method isInitialized, addr 0x6659644, size 0x20, virtual false, abstract: false, final false
  inline bool isInitialized();

  static inline void setStaticF_s_DirLightProj(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_IsKeywordLightCookieEnabled, addr 0x6659474, size 0x8, virtual false, abstract: false, final false
  inline void set_IsKeywordLightCookieEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightCookieManager(LightCookieManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightCookieManager(LightCookieManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12746 };

  /// @brief Field k_MaxCookieSizeDivisor offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxCookieSizeDivisor{ static_cast<int32_t>(0x10) };

  /// @brief Field m_AdditionalLightsCookieAtlas, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Texture2DAtlas* ___m_AdditionalLightsCookieAtlas;

  /// @brief Field m_AdditionalLightsCookieShaderData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* ___m_AdditionalLightsCookieShaderData;

  /// @brief Field m_Settings, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager_Settings ___m_Settings;

  /// @brief Field m_WorkMem, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* ___m_WorkMem;

  /// @brief Field m_VisibleLightIndexToShaderDataIndex, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_VisibleLightIndexToShaderDataIndex;

  /// @brief Field m_CookieSizeDivisor, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_CookieSizeDivisor;

  /// @brief Field m_PrevCookieRequestPixelCount, offset: 0x4c, size: 0x4, def value: None
  uint32_t ___m_PrevCookieRequestPixelCount;

  /// @brief Field m_PrevWarnFrame, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_PrevWarnFrame;

  /// @brief Field <IsKeywordLightCookieEnabled>k__BackingField, offset: 0x54, size: 0x1, def value: None
  bool ____IsKeywordLightCookieEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_AdditionalLightsCookieAtlas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_AdditionalLightsCookieShaderData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_WorkMem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_VisibleLightIndexToShaderDataIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_CookieSizeDivisor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_PrevCookieRequestPixelCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_PrevWarnFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ____IsKeywordLightCookieEnabled_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderFormat");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager*, "UnityEngine.Rendering.Universal", "LightCookieManager");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*, "UnityEngine.Rendering.Universal", "LightCookieManager/ShaderProperty");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkMemory");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieMapping/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieMapping");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager_Settings, "UnityEngine.Rendering.Universal", "LightCookieManager/Settings");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkSlice`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings, "UnityEngine.Rendering.Universal", "LightCookieManager/Settings/AtlasSettings");
