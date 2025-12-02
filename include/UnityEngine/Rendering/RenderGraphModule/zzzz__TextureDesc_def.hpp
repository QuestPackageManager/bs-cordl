#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__FastMemoryDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureSizeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureDesc)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct DepthBits;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::TextureDesc);
// Dependencies UnityEngine.Color, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.FilterMode, UnityEngine.RenderTextureMemoryless, UnityEngine.Rendering.MSAASamples,
// UnityEngine.Rendering.RenderGraphModule.FastMemoryDesc, UnityEngine.Rendering.RenderGraphModule.TextureSizeMode, UnityEngine.Rendering.TextureDimension, UnityEngine.TextureWrapMode,
// UnityEngine.VRTextureUsage, UnityEngine.Vector2
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureDesc
struct CORDL_TYPE TextureDesc {
public:
  // Declarations
  __declspec(property(get = get_colorFormat, put = set_colorFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat;

  __declspec(property(get = get_depthBufferBits, put = set_depthBufferBits)) ::UnityEngine::Rendering::DepthBits depthBufferBits;

  /// @brief Method CalculateFinalDimensions, addr 0x65c8abc, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int CalculateFinalDimensions();

  /// @brief Method GetHashCode, addr 0x65cc024, size 0x1e0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InitDefaultValues, addr 0x65cbd50, size 0xd8, virtual false, abstract: false, final false
  inline void InitDefaultValues(bool dynamicResolution, bool xrReady);

  /// @brief Method .ctor, addr 0x65cbe94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ScaleFunc* func, bool dynamicResolution, bool xrReady);

  /// @brief Method .ctor, addr 0x65c824c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTexture* input);

  /// @brief Method .ctor, addr 0x65cbee4, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTextureDescriptor input);

  /// @brief Method .ctor, addr 0x65cbedc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc input);

  /// @brief Method .ctor, addr 0x65cbe54, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 scale, bool dynamicResolution, bool xrReady);

  /// @brief Method .ctor, addr 0x65cbe28, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, bool dynamicResolution, bool xrReady);

  /// @brief Method get_colorFormat, addr 0x65cbcb8, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_colorFormat();

  /// @brief Method get_depthBufferBits, addr 0x65cbb80, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DepthBits get_depthBufferBits();

  /// @brief Method set_colorFormat, addr 0x65cbd48, size 0x8, virtual false, abstract: false, final false
  inline void set_colorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depthBufferBits, addr 0x65cbbfc, size 0xbc, virtual false, abstract: false, final false
  inline void set_depthBufferBits(::UnityEngine::Rendering::DepthBits value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureDesc();

  // Ctor Parameters [CppParam { name: "sizeMode", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "slices", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "func", ty: "::UnityEngine::Rendering::ScaleFunc*", modifiers: "", def_value: None }, CppParam {
  // name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "filterMode", ty: "::UnityEngine::FilterMode", modifiers: "",
  // def_value: None }, CppParam { name: "wrapMode", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: None }, CppParam { name: "dimension", ty:
  // "::UnityEngine::Rendering::TextureDimension", modifiers: "", def_value: None }, CppParam { name: "enableRandomWrite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useMipMap",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "autoGenerateMips", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isShadowMap", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "anisoLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mipMapBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "msaaSamples", ty: "::UnityEngine::Rendering::MSAASamples", modifiers: "", def_value: None }, CppParam { name: "bindTextureMS", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "useDynamicScale", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useDynamicScaleExplicit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "memoryless", ty:
  // "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: None }, CppParam { name: "vrUsage", ty: "::UnityEngine::VRTextureUsage", modifiers: "", def_value: None }, CppParam { name:
  // "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fastMemoryDesc", ty: "::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc", modifiers: "", def_value: None },
  // CppParam { name: "fallBackToBlackTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disableFallBackToImportedTexture", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "clearBuffer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name:
  // "discardBuffer", ty: "bool", modifiers: "", def_value: None }]
  constexpr TextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode sizeMode, int32_t width, int32_t height, int32_t slices, ::UnityEngine::Vector2 scale,
                        ::UnityEngine::Rendering::ScaleFunc* func, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                        ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                        int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                        ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name,
                        ::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc, bool fallBackToBlackTexture, bool disableFallBackToImportedTexture, bool clearBuffer,
                        ::UnityEngine::Color clearColor, bool discardBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12436 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field sizeMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode sizeMode;

  /// @brief Field width, offset: 0x4, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x8, size: 0x4, def value: None
  int32_t height;

  /// @brief Field slices, offset: 0xc, size: 0x4, def value: None
  int32_t slices;

  /// @brief Field scale, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 scale;

  /// @brief Field func, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScaleFunc* func;

  /// @brief Field format, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  /// @brief Field filterMode, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::FilterMode filterMode;

  /// @brief Field wrapMode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TextureWrapMode wrapMode;

  /// @brief Field dimension, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension dimension;

  /// @brief Field enableRandomWrite, offset: 0x30, size: 0x1, def value: None
  bool enableRandomWrite;

  /// @brief Field useMipMap, offset: 0x31, size: 0x1, def value: None
  bool useMipMap;

  /// @brief Field autoGenerateMips, offset: 0x32, size: 0x1, def value: None
  bool autoGenerateMips;

  /// @brief Field isShadowMap, offset: 0x33, size: 0x1, def value: None
  bool isShadowMap;

  /// @brief Field anisoLevel, offset: 0x34, size: 0x4, def value: None
  int32_t anisoLevel;

  /// @brief Field mipMapBias, offset: 0x38, size: 0x4, def value: None
  float_t mipMapBias;

  /// @brief Field msaaSamples, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::MSAASamples msaaSamples;

  /// @brief Field bindTextureMS, offset: 0x40, size: 0x1, def value: None
  bool bindTextureMS;

  /// @brief Field useDynamicScale, offset: 0x41, size: 0x1, def value: None
  bool useDynamicScale;

  /// @brief Field useDynamicScaleExplicit, offset: 0x42, size: 0x1, def value: None
  bool useDynamicScaleExplicit;

  /// @brief Field memoryless, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::RenderTextureMemoryless memoryless;

  /// @brief Field vrUsage, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::VRTextureUsage vrUsage;

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field fastMemoryDesc, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc;

  /// @brief Field fallBackToBlackTexture, offset: 0x64, size: 0x1, def value: None
  bool fallBackToBlackTexture;

  /// @brief Field disableFallBackToImportedTexture, offset: 0x65, size: 0x1, def value: None
  bool disableFallBackToImportedTexture;

  /// @brief Field clearBuffer, offset: 0x66, size: 0x1, def value: None
  bool clearBuffer;

  /// @brief Field clearColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color clearColor;

  /// @brief Field discardBuffer, offset: 0x78, size: 0x1, def value: None
  bool discardBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, sizeMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, width) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, height) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, slices) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, func) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, filterMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, wrapMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, dimension) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, enableRandomWrite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, useMipMap) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, autoGenerateMips) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, isShadowMap) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, anisoLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, mipMapBias) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, msaaSamples) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, bindTextureMS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, useDynamicScale) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, useDynamicScaleExplicit) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, memoryless) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, vrUsage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, fastMemoryDesc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, fallBackToBlackTexture) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, disableFallBackToImportedTexture) == 0x65, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, clearBuffer) == 0x66, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, clearColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, discardBuffer) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::TextureDesc, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, "UnityEngine.Rendering.RenderGraphModule", "TextureDesc");
