#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleAllocInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandleAllocInfo)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
struct VRTextureUsage;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RTHandleAllocInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RTHandleAllocInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandleAllocInfo, "UnityEngine.Rendering", "RTHandleAllocInfo");
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.FilterMode, UnityEngine.RenderTextureMemoryless, UnityEngine.Rendering.MSAASamples,
// UnityEngine.Rendering.TextureDimension, UnityEngine.TextureWrapMode, UnityEngine.VRTextureUsage
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RTHandleAllocInfo
struct CORDL_TYPE RTHandleAllocInfo {
public:
  // Declarations
  __declspec(property(get = get_anisoLevel, put = set_anisoLevel)) int32_t anisoLevel;

  __declspec(property(get = get_autoGenerateMips, put = set_autoGenerateMips)) bool autoGenerateMips;

  __declspec(property(get = get_bindTextureMS, put = set_bindTextureMS)) bool bindTextureMS;

  __declspec(property(get = get_dimension, put = set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_enableRandomWrite, put = set_enableRandomWrite)) bool enableRandomWrite;

  __declspec(property(get = get_enableShadingRate, put = set_enableShadingRate)) bool enableShadingRate;

  __declspec(property(get = get_filterMode, put = set_filterMode)) ::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_format, put = set_format)) ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  __declspec(property(get = get_isShadowMap, put = set_isShadowMap)) bool isShadowMap;

  __declspec(property(get = get_memoryless, put = set_memoryless)) ::UnityEngine::RenderTextureMemoryless memoryless;

  __declspec(property(get = get_mipMapBias, put = set_mipMapBias)) float_t mipMapBias;

  __declspec(property(get = get_msaaSamples, put = set_msaaSamples)) ::UnityEngine::Rendering::MSAASamples msaaSamples;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_slices, put = set_slices)) int32_t slices;

  __declspec(property(get = get_useDynamicScale, put = set_useDynamicScale)) bool useDynamicScale;

  __declspec(property(get = get_useDynamicScaleExplicit, put = set_useDynamicScaleExplicit)) bool useDynamicScaleExplicit;

  __declspec(property(get = get_useMipMap, put = set_useMipMap)) bool useMipMap;

  __declspec(property(get = get_vrUsage, put = set_vrUsage)) ::UnityEngine::VRTextureUsage vrUsage;

  __declspec(property(get = get_wrapModeU, put = set_wrapModeU)) ::UnityEngine::TextureWrapMode wrapModeU;

  __declspec(property(get = get_wrapModeV, put = set_wrapModeV)) ::UnityEngine::TextureWrapMode wrapModeV;

  __declspec(property(get = get_wrapModeW, put = set_wrapModeW)) ::UnityEngine::TextureWrapMode wrapModeW;

  /// @brief Method .ctor, addr 0x6bc8394, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_anisoLevel, addr 0x6bc82f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_anisoLevel();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_autoGenerateMips, addr 0x6bc82d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoGenerateMips();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_bindTextureMS, addr 0x6bc8324, size 0x8, virtual false, abstract: false, final false
  inline bool get_bindTextureMS();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_dimension, addr 0x6bc82a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_enableRandomWrite, addr 0x6bc82b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRandomWrite();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_enableShadingRate, addr 0x6bc8374, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableShadingRate();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_filterMode, addr 0x6bc8264, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::FilterMode get_filterMode();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_format, addr 0x6bc8254, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_format();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_isShadowMap, addr 0x6bc82e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isShadowMap();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_memoryless, addr 0x6bc8354, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureMemoryless get_memoryless();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_mipMapBias, addr 0x6bc8304, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mipMapBias();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_msaaSamples, addr 0x6bc8314, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::MSAASamples get_msaaSamples();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_name, addr 0x6bc8384, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_slices, addr 0x6bc8244, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_slices();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_useDynamicScale, addr 0x6bc8334, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDynamicScale();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_useDynamicScaleExplicit, addr 0x6bc8344, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDynamicScaleExplicit();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_useMipMap, addr 0x6bc82c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_useMipMap();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_vrUsage, addr 0x6bc8364, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::VRTextureUsage get_vrUsage();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_wrapModeU, addr 0x6bc8274, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureWrapMode get_wrapModeU();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_wrapModeV, addr 0x6bc8284, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureWrapMode get_wrapModeV();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_wrapModeW, addr 0x6bc8294, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureWrapMode get_wrapModeW();

  /// [CompilerGenerated]
  /// @brief Method set_anisoLevel, addr 0x6bc82fc, size 0x8, virtual false, abstract: false, final false
  inline void set_anisoLevel(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_autoGenerateMips, addr 0x6bc82dc, size 0x8, virtual false, abstract: false, final false
  inline void set_autoGenerateMips(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_bindTextureMS, addr 0x6bc832c, size 0x8, virtual false, abstract: false, final false
  inline void set_bindTextureMS(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_dimension, addr 0x6bc82ac, size 0x8, virtual false, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// [CompilerGenerated]
  /// @brief Method set_enableRandomWrite, addr 0x6bc82bc, size 0x8, virtual false, abstract: false, final false
  inline void set_enableRandomWrite(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_enableShadingRate, addr 0x6bc837c, size 0x8, virtual false, abstract: false, final false
  inline void set_enableShadingRate(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_filterMode, addr 0x6bc826c, size 0x8, virtual false, abstract: false, final false
  inline void set_filterMode(::UnityEngine::FilterMode value);

  /// [CompilerGenerated]
  /// @brief Method set_format, addr 0x6bc825c, size 0x8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// [CompilerGenerated]
  /// @brief Method set_isShadowMap, addr 0x6bc82ec, size 0x8, virtual false, abstract: false, final false
  inline void set_isShadowMap(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_memoryless, addr 0x6bc835c, size 0x8, virtual false, abstract: false, final false
  inline void set_memoryless(::UnityEngine::RenderTextureMemoryless value);

  /// [CompilerGenerated]
  /// @brief Method set_mipMapBias, addr 0x6bc830c, size 0x8, virtual false, abstract: false, final false
  inline void set_mipMapBias(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_msaaSamples, addr 0x6bc831c, size 0x8, virtual false, abstract: false, final false
  inline void set_msaaSamples(::UnityEngine::Rendering::MSAASamples value);

  /// [CompilerGenerated]
  /// @brief Method set_name, addr 0x6bc838c, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method set_slices, addr 0x6bc824c, size 0x8, virtual false, abstract: false, final false
  inline void set_slices(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_useDynamicScale, addr 0x6bc833c, size 0x8, virtual false, abstract: false, final false
  inline void set_useDynamicScale(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_useDynamicScaleExplicit, addr 0x6bc834c, size 0x8, virtual false, abstract: false, final false
  inline void set_useDynamicScaleExplicit(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_useMipMap, addr 0x6bc82cc, size 0x8, virtual false, abstract: false, final false
  inline void set_useMipMap(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_vrUsage, addr 0x6bc836c, size 0x8, virtual false, abstract: false, final false
  inline void set_vrUsage(::UnityEngine::VRTextureUsage value);

  /// [CompilerGenerated]
  /// @brief Method set_wrapModeU, addr 0x6bc827c, size 0x8, virtual false, abstract: false, final false
  inline void set_wrapModeU(::UnityEngine::TextureWrapMode value);

  /// [CompilerGenerated]
  /// @brief Method set_wrapModeV, addr 0x6bc828c, size 0x8, virtual false, abstract: false, final false
  inline void set_wrapModeV(::UnityEngine::TextureWrapMode value);

  /// [CompilerGenerated]
  /// @brief Method set_wrapModeW, addr 0x6bc829c, size 0x8, virtual false, abstract: false, final false
  inline void set_wrapModeW(::UnityEngine::TextureWrapMode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleAllocInfo();

  // Ctor Parameters [CppParam { name: "_slices_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_format_k__BackingField", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "_filterMode_k__BackingField", ty: "::UnityEngine::FilterMode",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_wrapModeU_k__BackingField", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "_wrapModeV_k__BackingField", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_wrapModeW_k__BackingField", ty:
  // "::UnityEngine::TextureWrapMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dimension_k__BackingField", ty: "::UnityEngine::Rendering::TextureDimension", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "_enableRandomWrite_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_useMipMap_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_autoGenerateMips_k__BackingField", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_isShadowMap_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_anisoLevel_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_mipMapBias_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_msaaSamples_k__BackingField", ty: "::UnityEngine::Rendering::MSAASamples", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bindTextureMS_k__BackingField", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_useDynamicScale_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_useDynamicScaleExplicit_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_memoryless_k__BackingField", ty:
  // "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: None, comment: None }, CppParam { name: "_vrUsage_k__BackingField", ty: "::UnityEngine::VRTextureUsage", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "_enableShadingRate_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_name_k__BackingField", ty:
  // "::StringW", modifiers: "", def_value: None, comment: None }]
  constexpr RTHandleAllocInfo(int32_t _slices_k__BackingField, ::UnityEngine::Experimental::Rendering::GraphicsFormat _format_k__BackingField, ::UnityEngine::FilterMode _filterMode_k__BackingField,
                              ::UnityEngine::TextureWrapMode _wrapModeU_k__BackingField, ::UnityEngine::TextureWrapMode _wrapModeV_k__BackingField,
                              ::UnityEngine::TextureWrapMode _wrapModeW_k__BackingField, ::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField, bool _enableRandomWrite_k__BackingField,
                              bool _useMipMap_k__BackingField, bool _autoGenerateMips_k__BackingField, bool _isShadowMap_k__BackingField, int32_t _anisoLevel_k__BackingField,
                              float_t _mipMapBias_k__BackingField, ::UnityEngine::Rendering::MSAASamples _msaaSamples_k__BackingField, bool _bindTextureMS_k__BackingField,
                              bool _useDynamicScale_k__BackingField, bool _useDynamicScaleExplicit_k__BackingField, ::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField,
                              ::UnityEngine::VRTextureUsage _vrUsage_k__BackingField, bool _enableShadingRate_k__BackingField, ::StringW _name_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9119 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// [CompilerGenerated]
  /// @brief Field <slices>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _slices_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <format>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat _format_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <filterMode>k__BackingField, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::FilterMode _filterMode_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <wrapModeU>k__BackingField, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::TextureWrapMode _wrapModeU_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <wrapModeV>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::TextureWrapMode _wrapModeV_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <wrapModeW>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::TextureWrapMode _wrapModeW_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <dimension>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <enableRandomWrite>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool _enableRandomWrite_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <useMipMap>k__BackingField, offset: 0x1d, size: 0x1, def value: None
  bool _useMipMap_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <autoGenerateMips>k__BackingField, offset: 0x1e, size: 0x1, def value: None
  bool _autoGenerateMips_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <isShadowMap>k__BackingField, offset: 0x1f, size: 0x1, def value: None
  bool _isShadowMap_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <anisoLevel>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t _anisoLevel_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <mipMapBias>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t _mipMapBias_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <msaaSamples>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::MSAASamples _msaaSamples_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <bindTextureMS>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool _bindTextureMS_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <useDynamicScale>k__BackingField, offset: 0x2d, size: 0x1, def value: None
  bool _useDynamicScale_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <useDynamicScaleExplicit>k__BackingField, offset: 0x2e, size: 0x1, def value: None
  bool _useDynamicScaleExplicit_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <memoryless>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <vrUsage>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::VRTextureUsage _vrUsage_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <enableShadingRate>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool _enableShadingRate_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <name>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _slices_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _format_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _filterMode_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _wrapModeU_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _wrapModeV_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _wrapModeW_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _dimension_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _enableRandomWrite_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _useMipMap_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _autoGenerateMips_k__BackingField) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _isShadowMap_k__BackingField) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _anisoLevel_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _mipMapBias_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _msaaSamples_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _bindTextureMS_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _useDynamicScale_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _useDynamicScaleExplicit_k__BackingField) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _memoryless_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _vrUsage_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _enableShadingRate_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleAllocInfo, _name_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RTHandleAllocInfo) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering
