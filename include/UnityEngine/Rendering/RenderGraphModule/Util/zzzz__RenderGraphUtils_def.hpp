#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtils)
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtils_BlitFilterMode;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtils_BlitMaterialParameters;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils_BlitMaterialPassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils_BlitPassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils_CopyPassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtils_FullScreenGeometryType;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils___c;
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
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtils_BlitFilterMode;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtils_FullScreenGeometryType;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils_BlitMaterialPassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils_BlitPassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils_CopyPassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtils___c;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtils_BlitMaterialParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters);
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/CopyPassData
class CORDL_TYPE RenderGraphUtils_CopyPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field isMSAA, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isMSAA, put = __cordl_internal_set_isMSAA)) bool isMSAA;

  static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* New_ctor();

  constexpr bool const& __cordl_internal_get_isMSAA() const;

  constexpr bool& __cordl_internal_get_isMSAA();

  constexpr void __cordl_internal_set_isMSAA(bool value);

  /// @brief Method .ctor, addr 0x65ce4b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_CopyPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_CopyPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils_CopyPassData(RenderGraphUtils_CopyPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_CopyPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils_CopyPassData(RenderGraphUtils_CopyPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12439 };

  /// @brief Field isMSAA, offset: 0x10, size: 0x1, def value: None
  bool ___isMSAA;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData, ___isMSAA) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/BlitFilterMode
struct CORDL_TYPE RenderGraphUtils_BlitFilterMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphUtils_BlitFilterMode_Unwrapped
  enum struct __RenderGraphUtils_BlitFilterMode_Unwrapped : int32_t {
    __E_ClampNearest = static_cast<int32_t>(0x0),
    __E_ClampBilinear = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphUtils_BlitFilterMode_Unwrapped() const noexcept {
    return static_cast<__RenderGraphUtils_BlitFilterMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_BlitFilterMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphUtils_BlitFilterMode(int32_t value__) noexcept;

  /// @brief Field ClampBilinear value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode const ClampBilinear;

  /// @brief Field ClampNearest value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode const ClampNearest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12440 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils::BlitFilterMode, UnityEngine.Vector2
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/BlitPassData
class CORDL_TYPE RenderGraphUtils_BlitPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field destination, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field destinationMip, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_destinationMip, put = __cordl_internal_set_destinationMip)) int32_t destinationMip;

  /// @brief Field destinationSlice, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_destinationSlice, put = __cordl_internal_set_destinationSlice)) int32_t destinationSlice;

  /// @brief Field filterMode, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_filterMode, put = __cordl_internal_set_filterMode)) ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode filterMode;

  /// @brief Field numMips, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_numMips, put = __cordl_internal_set_numMips)) int32_t numMips;

  /// @brief Field numSlices, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_numSlices, put = __cordl_internal_set_numSlices)) int32_t numSlices;

  /// @brief Field offset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) ::UnityEngine::Vector2 offset;

  /// @brief Field scale, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) ::UnityEngine::Vector2 scale;

  /// @brief Field source, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field sourceMip, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceMip, put = __cordl_internal_set_sourceMip)) int32_t sourceMip;

  /// @brief Field sourceSlice, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceSlice, put = __cordl_internal_set_sourceSlice)) int32_t sourceSlice;

  static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr int32_t const& __cordl_internal_get_destinationMip() const;

  constexpr int32_t& __cordl_internal_get_destinationMip();

  constexpr int32_t const& __cordl_internal_get_destinationSlice() const;

  constexpr int32_t& __cordl_internal_get_destinationSlice();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode const& __cordl_internal_get_filterMode() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode& __cordl_internal_get_filterMode();

  constexpr int32_t const& __cordl_internal_get_numMips() const;

  constexpr int32_t& __cordl_internal_get_numMips();

  constexpr int32_t const& __cordl_internal_get_numSlices() const;

  constexpr int32_t& __cordl_internal_get_numSlices();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_offset();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scale();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr int32_t const& __cordl_internal_get_sourceMip() const;

  constexpr int32_t& __cordl_internal_get_sourceMip();

  constexpr int32_t const& __cordl_internal_get_sourceSlice() const;

  constexpr int32_t& __cordl_internal_get_sourceSlice();

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destinationMip(int32_t value);

  constexpr void __cordl_internal_set_destinationSlice(int32_t value);

  constexpr void __cordl_internal_set_filterMode(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode value);

  constexpr void __cordl_internal_set_numMips(int32_t value);

  constexpr void __cordl_internal_set_numSlices(int32_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_scale(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceMip(int32_t value);

  constexpr void __cordl_internal_set_sourceSlice(int32_t value);

  /// @brief Method .ctor, addr 0x65ce4bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_BlitPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_BlitPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils_BlitPassData(RenderGraphUtils_BlitPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_BlitPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils_BlitPassData(RenderGraphUtils_BlitPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12441 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field destination, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  /// @brief Field scale, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scale;

  /// @brief Field offset, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___offset;

  /// @brief Field sourceSlice, offset: 0x40, size: 0x4, def value: None
  int32_t ___sourceSlice;

  /// @brief Field destinationSlice, offset: 0x44, size: 0x4, def value: None
  int32_t ___destinationSlice;

  /// @brief Field numSlices, offset: 0x48, size: 0x4, def value: None
  int32_t ___numSlices;

  /// @brief Field sourceMip, offset: 0x4c, size: 0x4, def value: None
  int32_t ___sourceMip;

  /// @brief Field destinationMip, offset: 0x50, size: 0x4, def value: None
  int32_t ___destinationMip;

  /// @brief Field numMips, offset: 0x54, size: 0x4, def value: None
  int32_t ___numMips;

  /// @brief Field filterMode, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode ___filterMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___sourceSlice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___destinationSlice) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___numSlices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___sourceMip) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___destinationMip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___numMips) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, ___filterMode) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/FullScreenGeometryType
struct CORDL_TYPE RenderGraphUtils_FullScreenGeometryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphUtils_FullScreenGeometryType_Unwrapped
  enum struct __RenderGraphUtils_FullScreenGeometryType_Unwrapped : int32_t {
    __E_Mesh = static_cast<int32_t>(0x0),
    __E_ProceduralTriangle = static_cast<int32_t>(0x1),
    __E_ProceduralQuad = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphUtils_FullScreenGeometryType_Unwrapped() const noexcept {
    return static_cast<__RenderGraphUtils_FullScreenGeometryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_FullScreenGeometryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphUtils_FullScreenGeometryType(int32_t value__) noexcept;

  /// @brief Field Mesh value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType const Mesh;

  /// @brief Field ProceduralQuad value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType const ProceduralQuad;

  /// @brief Field ProceduralTriangle value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType const ProceduralTriangle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12442 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils::FullScreenGeometryType, UnityEngine.Vector2
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/BlitMaterialParameters
struct CORDL_TYPE RenderGraphUtils_BlitMaterialParameters {
public:
  // Declarations
  /// @brief Field blitMipProperty, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_blitMipProperty, put = setStaticF_blitMipProperty)) int32_t blitMipProperty;

  /// @brief Field blitScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_blitScaleBias, put = setStaticF_blitScaleBias)) int32_t blitScaleBias;

  /// @brief Field blitSliceProperty, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_blitSliceProperty, put = setStaticF_blitSliceProperty)) int32_t blitSliceProperty;

  /// @brief Field blitTextureProperty, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_blitTextureProperty, put = setStaticF_blitTextureProperty)) int32_t blitTextureProperty;

  /// @brief Method .ctor, addr 0x65ce4c0, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Material* material,
                    int32_t shaderPass);

  /// @brief Method .ctor, addr 0x65ce6e8, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Material* material,
                    int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* mpb, int32_t destinationSlice, int32_t destinationMip, int32_t numSlices, int32_t numMips, int32_t sourceSlice,
                    int32_t sourceMip, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry, int32_t sourceTexturePropertyID,
                    int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID);

  /// @brief Method .ctor, addr 0x65cea00, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Material* material,
                    int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry,
                    int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID);

  /// @brief Method .ctor, addr 0x65ce5f8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
                    ::UnityEngine::Vector2 offset, ::UnityEngine::Material* material, int32_t shaderPass);

  /// @brief Method .ctor, addr 0x65ce87c, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
                    ::UnityEngine::Vector2 offset, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* mpb, int32_t destinationSlice, int32_t destinationMip,
                    int32_t numSlices, int32_t numMips, int32_t sourceSlice, int32_t sourceMip, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry,
                    int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID, int32_t scaleBiasPropertyID);

  /// @brief Method .ctor, addr 0x65ceb74, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale,
                    ::UnityEngine::Vector2 offset, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* mpb,
                    ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry, int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID,
                    int32_t sourceMipPropertyID, int32_t scaleBiasPropertyID);

  static inline int32_t getStaticF_blitMipProperty();

  static inline int32_t getStaticF_blitScaleBias();

  static inline int32_t getStaticF_blitSliceProperty();

  static inline int32_t getStaticF_blitTextureProperty();

  static inline void setStaticF_blitMipProperty(int32_t value);

  static inline void setStaticF_blitScaleBias(int32_t value);

  static inline void setStaticF_blitSliceProperty(int32_t value);

  static inline void setStaticF_blitTextureProperty(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_BlitMaterialParameters();

  // Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "destination", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam
  // { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "sourceSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "destinationSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numSlices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sourceMip", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "destinationMip", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numMips", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "shaderPass", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "propertyBlock", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam { name: "sourceTexturePropertyID", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "sourceSlicePropertyID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sourceMipPropertyID", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "scaleBiasPropertyID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "geometry", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType", modifiers: "", def_value: None }]
  constexpr RenderGraphUtils_BlitMaterialParameters(::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                    ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, int32_t sourceSlice, int32_t destinationSlice, int32_t numSlices, int32_t sourceMip,
                                                    int32_t destinationMip, int32_t numMips, ::UnityW<::UnityEngine::Material> material, int32_t shaderPass,
                                                    ::UnityEngine::MaterialPropertyBlock* propertyBlock, int32_t sourceTexturePropertyID, int32_t sourceSlicePropertyID, int32_t sourceMipPropertyID,
                                                    int32_t scaleBiasPropertyID, ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field source, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field destination, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field scale, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 scale;

  /// @brief Field offset, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 offset;

  /// @brief Field sourceSlice, offset: 0x30, size: 0x4, def value: None
  int32_t sourceSlice;

  /// @brief Field destinationSlice, offset: 0x34, size: 0x4, def value: None
  int32_t destinationSlice;

  /// @brief Field numSlices, offset: 0x38, size: 0x4, def value: None
  int32_t numSlices;

  /// @brief Field sourceMip, offset: 0x3c, size: 0x4, def value: None
  int32_t sourceMip;

  /// @brief Field destinationMip, offset: 0x40, size: 0x4, def value: None
  int32_t destinationMip;

  /// @brief Field numMips, offset: 0x44, size: 0x4, def value: None
  int32_t numMips;

  /// @brief Field material, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field shaderPass, offset: 0x50, size: 0x4, def value: None
  int32_t shaderPass;

  /// @brief Field propertyBlock, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* propertyBlock;

  /// @brief Field sourceTexturePropertyID, offset: 0x60, size: 0x4, def value: None
  int32_t sourceTexturePropertyID;

  /// @brief Field sourceSlicePropertyID, offset: 0x64, size: 0x4, def value: None
  int32_t sourceSlicePropertyID;

  /// @brief Field sourceMipPropertyID, offset: 0x68, size: 0x4, def value: None
  int32_t sourceMipPropertyID;

  /// @brief Field scaleBiasPropertyID, offset: 0x6c, size: 0x4, def value: None
  int32_t scaleBiasPropertyID;

  /// @brief Field geometry, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, sourceSlice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, destinationSlice) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, numSlices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, sourceMip) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, destinationMip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, numMips) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, shaderPass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, propertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, sourceTexturePropertyID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, sourceSlicePropertyID) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, sourceMipPropertyID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, scaleBiasPropertyID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, geometry) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils::FullScreenGeometryType, UnityEngine.Vector2
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/BlitMaterialPassData
class CORDL_TYPE RenderGraphUtils_BlitMaterialPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field destination, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field destinationMip, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_destinationMip, put = __cordl_internal_set_destinationMip)) int32_t destinationMip;

  /// @brief Field destinationSlice, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_destinationSlice, put = __cordl_internal_set_destinationSlice)) int32_t destinationSlice;

  /// @brief Field geometry, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_geometry, put = __cordl_internal_set_geometry)) ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType geometry;

  /// @brief Field material, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field numMips, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_numMips, put = __cordl_internal_set_numMips)) int32_t numMips;

  /// @brief Field numSlices, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_numSlices, put = __cordl_internal_set_numSlices)) int32_t numSlices;

  /// @brief Field offset, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) ::UnityEngine::Vector2 offset;

  /// @brief Field propertyBlock, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyBlock, put = __cordl_internal_set_propertyBlock)) ::UnityEngine::MaterialPropertyBlock* propertyBlock;

  /// @brief Field scale, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) ::UnityEngine::Vector2 scale;

  /// @brief Field scaleBiasPropertyID, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleBiasPropertyID, put = __cordl_internal_set_scaleBiasPropertyID)) int32_t scaleBiasPropertyID;

  /// @brief Field shaderPass, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_shaderPass, put = __cordl_internal_set_shaderPass)) int32_t shaderPass;

  /// @brief Field source, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field sourceMip, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceMip, put = __cordl_internal_set_sourceMip)) int32_t sourceMip;

  /// @brief Field sourceMipPropertyID, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceMipPropertyID, put = __cordl_internal_set_sourceMipPropertyID)) int32_t sourceMipPropertyID;

  /// @brief Field sourceSlice, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceSlice, put = __cordl_internal_set_sourceSlice)) int32_t sourceSlice;

  /// @brief Field sourceSlicePropertyID, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceSlicePropertyID, put = __cordl_internal_set_sourceSlicePropertyID)) int32_t sourceSlicePropertyID;

  /// @brief Field sourceTexturePropertyID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceTexturePropertyID, put = __cordl_internal_set_sourceTexturePropertyID)) int32_t sourceTexturePropertyID;

  static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr int32_t const& __cordl_internal_get_destinationMip() const;

  constexpr int32_t& __cordl_internal_get_destinationMip();

  constexpr int32_t const& __cordl_internal_get_destinationSlice() const;

  constexpr int32_t& __cordl_internal_get_destinationSlice();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType const& __cordl_internal_get_geometry() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType& __cordl_internal_get_geometry();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_numMips() const;

  constexpr int32_t& __cordl_internal_get_numMips();

  constexpr int32_t const& __cordl_internal_get_numSlices() const;

  constexpr int32_t& __cordl_internal_get_numSlices();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_offset();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_propertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_propertyBlock();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scale();

  constexpr int32_t const& __cordl_internal_get_scaleBiasPropertyID() const;

  constexpr int32_t& __cordl_internal_get_scaleBiasPropertyID();

  constexpr int32_t const& __cordl_internal_get_shaderPass() const;

  constexpr int32_t& __cordl_internal_get_shaderPass();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr int32_t const& __cordl_internal_get_sourceMip() const;

  constexpr int32_t& __cordl_internal_get_sourceMip();

  constexpr int32_t const& __cordl_internal_get_sourceMipPropertyID() const;

  constexpr int32_t& __cordl_internal_get_sourceMipPropertyID();

  constexpr int32_t const& __cordl_internal_get_sourceSlice() const;

  constexpr int32_t& __cordl_internal_get_sourceSlice();

  constexpr int32_t const& __cordl_internal_get_sourceSlicePropertyID() const;

  constexpr int32_t& __cordl_internal_get_sourceSlicePropertyID();

  constexpr int32_t const& __cordl_internal_get_sourceTexturePropertyID() const;

  constexpr int32_t& __cordl_internal_get_sourceTexturePropertyID();

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destinationMip(int32_t value);

  constexpr void __cordl_internal_set_destinationSlice(int32_t value);

  constexpr void __cordl_internal_set_geometry(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_numMips(int32_t value);

  constexpr void __cordl_internal_set_numSlices(int32_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_scale(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_scaleBiasPropertyID(int32_t value);

  constexpr void __cordl_internal_set_shaderPass(int32_t value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceMip(int32_t value);

  constexpr void __cordl_internal_set_sourceMipPropertyID(int32_t value);

  constexpr void __cordl_internal_set_sourceSlice(int32_t value);

  constexpr void __cordl_internal_set_sourceSlicePropertyID(int32_t value);

  constexpr void __cordl_internal_set_sourceTexturePropertyID(int32_t value);

  /// @brief Method .ctor, addr 0x65cedac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_BlitMaterialPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_BlitMaterialPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils_BlitMaterialPassData(RenderGraphUtils_BlitMaterialPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_BlitMaterialPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils_BlitMaterialPassData(RenderGraphUtils_BlitMaterialPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12444 };

  /// @brief Field sourceTexturePropertyID, offset: 0x10, size: 0x4, def value: None
  int32_t ___sourceTexturePropertyID;

  /// @brief Field source, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field destination, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  /// @brief Field scale, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scale;

  /// @brief Field offset, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___offset;

  /// @brief Field material, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field shaderPass, offset: 0x50, size: 0x4, def value: None
  int32_t ___shaderPass;

  /// @brief Field propertyBlock, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___propertyBlock;

  /// @brief Field sourceSlice, offset: 0x60, size: 0x4, def value: None
  int32_t ___sourceSlice;

  /// @brief Field destinationSlice, offset: 0x64, size: 0x4, def value: None
  int32_t ___destinationSlice;

  /// @brief Field numSlices, offset: 0x68, size: 0x4, def value: None
  int32_t ___numSlices;

  /// @brief Field sourceMip, offset: 0x6c, size: 0x4, def value: None
  int32_t ___sourceMip;

  /// @brief Field destinationMip, offset: 0x70, size: 0x4, def value: None
  int32_t ___destinationMip;

  /// @brief Field numMips, offset: 0x74, size: 0x4, def value: None
  int32_t ___numMips;

  /// @brief Field geometry, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType ___geometry;

  /// @brief Field sourceSlicePropertyID, offset: 0x7c, size: 0x4, def value: None
  int32_t ___sourceSlicePropertyID;

  /// @brief Field sourceMipPropertyID, offset: 0x80, size: 0x4, def value: None
  int32_t ___sourceMipPropertyID;

  /// @brief Field scaleBiasPropertyID, offset: 0x84, size: 0x4, def value: None
  int32_t ___scaleBiasPropertyID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___sourceTexturePropertyID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___source) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___destination) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___scale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___offset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___shaderPass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___propertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___sourceSlice) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___destinationSlice) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___numSlices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___sourceMip) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___destinationMip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___numMips) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___geometry) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___sourceSlicePropertyID) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___sourceMipPropertyID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, ___scaleBiasPropertyID) == 0x84, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/<>c
class CORDL_TYPE RenderGraphUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__13_0;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0,
                      put = setStaticF___9__3_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__3_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0,
                      put = setStaticF___9__7_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__7_0;

  static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* New_ctor();

  /// @brief Method <AddBlitPass>b__13_0, addr 0x65ceee0, size 0x68, virtual false, abstract: false, final false
  inline void _AddBlitPass_b__13_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* data,
                                   ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <AddBlitPass>b__7_0, addr 0x65cee78, size 0x68, virtual false, abstract: false, final false
  inline void _AddBlitPass_b__7_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <AddCopyPass>b__3_0, addr 0x65cee08, size 0x70, virtual false, abstract: false, final false
  inline void _AddCopyPass_b__3_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x65cee04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__13_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__3_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* value);

  static inline void setStaticF___9__13_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__3_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__7_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils___c(RenderGraphUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils___c(RenderGraphUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies System.Object, UnityEngine.Vector4
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils
class CORDL_TYPE RenderGraphUtils : public ::System::Object {
public:
  // Declarations
  using BlitFilterMode = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode;

  using BlitMaterialParameters = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters;

  using BlitMaterialPassData = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData;

  using BlitPassData = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData;

  using CopyPassData = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData;

  using FullScreenGeometryType = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType;

  using __c = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c;

  /// @brief Field s_BlitScaleBias, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_BlitScaleBias, put = setStaticF_s_BlitScaleBias)) ::UnityEngine::Vector4 s_BlitScaleBias;

  /// @brief Field s_PropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PropertyBlock, put = setStaticF_s_PropertyBlock)) ::UnityEngine::MaterialPropertyBlock* s_PropertyBlock;

  /// @brief Method AddBlitPass, addr 0x65cd9ec, size 0x6a0, virtual false, abstract: false, final false
  static inline void AddBlitPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                 ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters blitParameters, ::StringW passName, ::StringW file, int32_t line);

  /// @brief Method AddBlitPass, addr 0x65cd18c, size 0x62c, virtual false, abstract: false, final false
  static inline void AddBlitPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, int32_t sourceSlice,
                                 int32_t destinationSlice, int32_t numSlices, int32_t sourceMip, int32_t destinationMip, int32_t numMips,
                                 ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode filterMode, ::StringW passName, ::StringW file, int32_t line);

  /// @brief Method AddCopyPass, addr 0x65cca60, size 0x6b0, virtual false, abstract: false, final false
  static inline void AddCopyPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, int32_t sourceSlice, int32_t destinationSlice, int32_t sourceMip, int32_t destinationMip,
                                 ::StringW passName, ::StringW file, int32_t line);

  /// @brief Method BlitMaterialRenderFunc, addr 0x65ce08c, size 0x388, virtual false, abstract: false, final false
  static inline void BlitMaterialRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* data,
                                            ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method BlitRenderFunc, addr 0x65cd7b8, size 0x234, virtual false, abstract: false, final false
  static inline void BlitRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method CanAddCopyPassMSAA, addr 0x65cca0c, size 0x54, virtual false, abstract: false, final false
  static inline bool CanAddCopyPassMSAA();

  /// @brief Method CopyRenderFunc, addr 0x65cd110, size 0x7c, virtual false, abstract: false, final false
  static inline void CopyRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  static inline ::UnityEngine::Vector4 getStaticF_s_BlitScaleBias();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_PropertyBlock();

  static inline void setStaticF_s_BlitScaleBias(::UnityEngine::Vector4 value);

  static inline void setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils(RenderGraphUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils(RenderGraphUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12446 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitFilterMode, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/BlitFilterMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_FullScreenGeometryType, "UnityEngine.Rendering.RenderGraphModule.Util",
                       "RenderGraphUtils/FullScreenGeometryType");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*, "UnityEngine.Rendering.RenderGraphModule.Util",
                       "RenderGraphUtils/BlitMaterialPassData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/BlitPassData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/CopyPassData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialParameters, "UnityEngine.Rendering.RenderGraphModule.Util",
                       "RenderGraphUtils/BlitMaterialParameters");
