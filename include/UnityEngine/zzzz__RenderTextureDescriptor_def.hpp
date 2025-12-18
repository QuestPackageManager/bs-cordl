#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSamplingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__RenderTextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTextureDescriptor)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct RenderTextureCreationFlags;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
struct VRTextureUsage;
}
// Forward declare root types
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTextureDescriptor);
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.RenderTextureCreationFlags, UnityEngine.RenderTextureMemoryless, UnityEngine.Rendering.ShadowSamplingMode,
// UnityEngine.Rendering.TextureDimension, UnityEngine.VRTextureUsage
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderTextureDescriptor
struct CORDL_TYPE RenderTextureDescriptor {
public:
  // Declarations
  __declspec(property(get = get_autoGenerateMips, put = set_autoGenerateMips)) bool autoGenerateMips;

  __declspec(property(get = get_bindMS, put = set_bindMS)) bool bindMS;

  __declspec(property(get = get_colorFormat, put = set_colorFormat)) ::UnityEngine::RenderTextureFormat colorFormat;

  __declspec(property(put = set_createdFromScript)) bool createdFromScript;

  __declspec(property(get = get_depthBufferBits, put = set_depthBufferBits)) int32_t depthBufferBits;

  __declspec(property(get = get_depthStencilFormat, put = set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat;

  __declspec(property(get = get_dimension, put = set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_enableRandomWrite, put = set_enableRandomWrite)) bool enableRandomWrite;

  __declspec(property(get = get_graphicsFormat, put = set_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_memoryless, put = set_memoryless)) ::UnityEngine::RenderTextureMemoryless memoryless;

  __declspec(property(get = get_mipCount, put = set_mipCount)) int32_t mipCount;

  __declspec(property(get = get_msaaSamples, put = set_msaaSamples)) int32_t msaaSamples;

  __declspec(property(get = get_sRGB, put = set_sRGB)) bool sRGB;

  __declspec(property(get = get_shadowSamplingMode, put = set_shadowSamplingMode)) ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode;

  __declspec(property(put = set_stencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat stencilFormat;

  __declspec(property(get = get_useDynamicScale, put = set_useDynamicScale)) bool useDynamicScale;

  __declspec(property(get = get_useDynamicScaleExplicit, put = set_useDynamicScaleExplicit)) bool useDynamicScaleExplicit;

  __declspec(property(get = get_useMipMap, put = set_useMipMap)) bool useMipMap;

  __declspec(property(get = get_volumeDepth, put = set_volumeDepth)) int32_t volumeDepth;

  __declspec(property(get = get_vrUsage, put = set_vrUsage)) ::UnityEngine::VRTextureUsage vrUsage;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  /// @brief Method SetOrClearRenderTextureCreationFlag, addr 0x68fc520, size 0x1c, virtual false, abstract: false, final false
  inline void SetOrClearRenderTextureCreationFlag(bool value, ::UnityEngine::RenderTextureCreationFlags flag);

  /// @brief Method .ctor, addr 0x68fc938, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height);

  /// @brief Method .ctor, addr 0x68fc9ec, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits);

  /// @brief Method .ctor, addr 0x68fca80, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits, int32_t mipCount);

  /// @brief Method .ctor, addr 0x68fcc24, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method .ctor, addr 0x68fcbc8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x68fc944, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::RenderTextureFormat colorFormat);

  /// @brief Method .ctor, addr 0x68fc94c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::RenderTextureFormat colorFormat, int32_t depthBufferBits);

  /// @brief Method .ctor, addr 0x68fc9e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::RenderTextureFormat colorFormat, int32_t depthBufferBits, int32_t mipCount);

  /// @brief Method .ctor, addr 0x68fcae8, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::RenderTextureFormat colorFormat, int32_t depthBufferBits, int32_t mipCount, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method get_autoGenerateMips, addr 0x68fcd00, size 0xc, virtual false, abstract: false, final false
  inline bool get_autoGenerateMips();

  /// @brief Method get_bindMS, addr 0x68fcd58, size 0xc, virtual false, abstract: false, final false
  inline bool get_bindMS();

  /// @brief Method get_colorFormat, addr 0x68fc554, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureFormat get_colorFormat();

  /// @brief Method get_depthBufferBits, addr 0x68fc754, size 0x7c, virtual false, abstract: false, final false
  inline int32_t get_depthBufferBits();

  /// @brief Method get_depthStencilFormat, addr 0x68fc544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat();

  /// @brief Method get_dimension, addr 0x68fc8f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_enableRandomWrite, addr 0x68fcd2c, size 0xc, virtual false, abstract: false, final false
  inline bool get_enableRandomWrite();

  /// @brief Method get_graphicsFormat, addr 0x68fc470, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_height, addr 0x68fc430, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_memoryless, addr 0x68fc928, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureMemoryless get_memoryless();

  /// @brief Method get_mipCount, addr 0x68fc460, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mipCount();

  /// @brief Method get_msaaSamples, addr 0x68fc440, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_msaaSamples();

  /// @brief Method get_sRGB, addr 0x68fc6d8, size 0x7c, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_shadowSamplingMode, addr 0x68fc908, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShadowSamplingMode get_shadowSamplingMode();

  /// @brief Method get_useDynamicScale, addr 0x68fcda4, size 0xc, virtual false, abstract: false, final false
  inline bool get_useDynamicScale();

  /// @brief Method get_useDynamicScaleExplicit, addr 0x68fcdd0, size 0xc, virtual false, abstract: false, final false
  inline bool get_useDynamicScaleExplicit();

  /// @brief Method get_useMipMap, addr 0x68fcce4, size 0xc, virtual false, abstract: false, final false
  inline bool get_useMipMap();

  /// @brief Method get_volumeDepth, addr 0x68fc450, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_volumeDepth();

  /// @brief Method get_vrUsage, addr 0x68fc918, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::VRTextureUsage get_vrUsage();

  /// @brief Method get_width, addr 0x68fc420, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method set_autoGenerateMips, addr 0x68fcd0c, size 0x20, virtual false, abstract: false, final false
  inline void set_autoGenerateMips(bool value);

  /// @brief Method set_bindMS, addr 0x68fcd64, size 0x20, virtual false, abstract: false, final false
  inline void set_bindMS(bool value);

  /// @brief Method set_colorFormat, addr 0x68fc5f0, size 0xe8, virtual false, abstract: false, final false
  inline void set_colorFormat(::UnityEngine::RenderTextureFormat value);

  /// @brief Method set_createdFromScript, addr 0x68fcd84, size 0x20, virtual false, abstract: false, final false
  inline void set_createdFromScript(bool value);

  /// @brief Method set_depthBufferBits, addr 0x68fc8cc, size 0x2c, virtual false, abstract: false, final false
  inline void set_depthBufferBits(int32_t value);

  /// @brief Method set_depthStencilFormat, addr 0x68fc54c, size 0x8, virtual false, abstract: false, final false
  inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_dimension, addr 0x68fc900, size 0x8, virtual false, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_enableRandomWrite, addr 0x68fcd38, size 0x20, virtual false, abstract: false, final false
  inline void set_enableRandomWrite(bool value);

  /// @brief Method set_graphicsFormat, addr 0x68fc478, size 0xa8, virtual false, abstract: false, final false
  inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_height, addr 0x68fc438, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_memoryless, addr 0x68fc930, size 0x8, virtual false, abstract: false, final false
  inline void set_memoryless(::UnityEngine::RenderTextureMemoryless value);

  /// @brief Method set_mipCount, addr 0x68fc468, size 0x8, virtual false, abstract: false, final false
  inline void set_mipCount(int32_t value);

  /// @brief Method set_msaaSamples, addr 0x68fc448, size 0x8, virtual false, abstract: false, final false
  inline void set_msaaSamples(int32_t value);

  /// @brief Method set_sRGB, addr 0x68fc7d0, size 0xfc, virtual false, abstract: false, final false
  inline void set_sRGB(bool value);

  /// @brief Method set_shadowSamplingMode, addr 0x68fc910, size 0x8, virtual false, abstract: false, final false
  inline void set_shadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode value);

  /// @brief Method set_stencilFormat, addr 0x68fc53c, size 0x8, virtual false, abstract: false, final false
  inline void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_useDynamicScale, addr 0x68fcdb0, size 0x20, virtual false, abstract: false, final false
  inline void set_useDynamicScale(bool value);

  /// @brief Method set_useDynamicScaleExplicit, addr 0x68fcddc, size 0x20, virtual false, abstract: false, final false
  inline void set_useDynamicScaleExplicit(bool value);

  /// @brief Method set_useMipMap, addr 0x68fccf0, size 0x10, virtual false, abstract: false, final false
  inline void set_useMipMap(bool value);

  /// @brief Method set_volumeDepth, addr 0x68fc458, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeDepth(int32_t value);

  /// @brief Method set_vrUsage, addr 0x68fc920, size 0x8, virtual false, abstract: false, final false
  inline void set_vrUsage(::UnityEngine::VRTextureUsage value);

  /// @brief Method set_width, addr 0x68fc428, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureDescriptor();

  // Ctor Parameters [CppParam { name: "_width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_height_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_msaaSamples_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_volumeDepth_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_mipCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_graphicsFormat", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "_stencilFormat_k__BackingField", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "_depthStencilFormat_k__BackingField", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "_dimension_k__BackingField", ty: "::UnityEngine::Rendering::TextureDimension",
  // modifiers: "", def_value: None }, CppParam { name: "_shadowSamplingMode_k__BackingField", ty: "::UnityEngine::Rendering::ShadowSamplingMode", modifiers: "", def_value: None }, CppParam { name:
  // "_vrUsage_k__BackingField", ty: "::UnityEngine::VRTextureUsage", modifiers: "", def_value: None }, CppParam { name: "_flags", ty: "::UnityEngine::RenderTextureCreationFlags", modifiers: "",
  // def_value: None }, CppParam { name: "_memoryless_k__BackingField", ty: "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: None }]
  constexpr RenderTextureDescriptor(int32_t _width_k__BackingField, int32_t _height_k__BackingField, int32_t _msaaSamples_k__BackingField, int32_t _volumeDepth_k__BackingField,
                                    int32_t _mipCount_k__BackingField, ::UnityEngine::Experimental::Rendering::GraphicsFormat _graphicsFormat,
                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat _stencilFormat_k__BackingField,
                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat _depthStencilFormat_k__BackingField, ::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField,
                                    ::UnityEngine::Rendering::ShadowSamplingMode _shadowSamplingMode_k__BackingField, ::UnityEngine::VRTextureUsage _vrUsage_k__BackingField,
                                    ::UnityEngine::RenderTextureCreationFlags _flags, ::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10211 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field <width>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _height_k__BackingField;

  /// @brief Field <msaaSamples>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _msaaSamples_k__BackingField;

  /// @brief Field <volumeDepth>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _volumeDepth_k__BackingField;

  /// @brief Field <mipCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _mipCount_k__BackingField;

  /// @brief Field _graphicsFormat, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat _graphicsFormat;

  /// @brief Field <stencilFormat>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat _stencilFormat_k__BackingField;

  /// @brief Field <depthStencilFormat>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat _depthStencilFormat_k__BackingField;

  /// @brief Field <dimension>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField;

  /// @brief Field <shadowSamplingMode>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShadowSamplingMode _shadowSamplingMode_k__BackingField;

  /// @brief Field <vrUsage>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::VRTextureUsage _vrUsage_k__BackingField;

  /// @brief Field _flags, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::RenderTextureCreationFlags _flags;

  /// @brief Field <memoryless>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _width_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _height_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _msaaSamples_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _volumeDepth_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _mipCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _graphicsFormat) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _stencilFormat_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _depthStencilFormat_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _dimension_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _shadowSamplingMode_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _vrUsage_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _flags) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureDescriptor, _memoryless_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureDescriptor, 0x34>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureDescriptor, "UnityEngine", "RenderTextureDescriptor");
