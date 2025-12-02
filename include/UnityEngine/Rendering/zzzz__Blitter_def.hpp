#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Blitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Blitter)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Rendering {
struct Blitter_BlitColorAndDepthPassNames;
}
namespace UnityEngine::Rendering {
class Blitter_BlitShaderIDs;
}
namespace UnityEngine::Rendering {
struct Blitter_BlitShaderPassNames;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct Blitter_BlitColorAndDepthPassNames;
}
namespace UnityEngine::Rendering {
struct Blitter_BlitShaderPassNames;
}
namespace UnityEngine::Rendering {
class Blitter;
}
namespace UnityEngine::Rendering {
class Blitter_BlitShaderIDs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames);
MARK_VAL_T(::UnityEngine::Rendering::Blitter_BlitShaderPassNames);
MARK_REF_PTR_T(::UnityEngine::Rendering::Blitter);
MARK_REF_PTR_T(::UnityEngine::Rendering::Blitter_BlitShaderIDs);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Blitter/BlitShaderIDs
class CORDL_TYPE Blitter_BlitShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _BlitCubeTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitCubeTexture, put = setStaticF__BlitCubeTexture)) int32_t _BlitCubeTexture;

  /// @brief Field _BlitDecodeInstructions, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitDecodeInstructions, put = setStaticF__BlitDecodeInstructions)) int32_t _BlitDecodeInstructions;

  /// @brief Field _BlitMipLevel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitMipLevel, put = setStaticF__BlitMipLevel)) int32_t _BlitMipLevel;

  /// @brief Field _BlitPaddingSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitPaddingSize, put = setStaticF__BlitPaddingSize)) int32_t _BlitPaddingSize;

  /// @brief Field _BlitScaleBias, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitScaleBias, put = setStaticF__BlitScaleBias)) int32_t _BlitScaleBias;

  /// @brief Field _BlitScaleBiasRt, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitScaleBiasRt, put = setStaticF__BlitScaleBiasRt)) int32_t _BlitScaleBiasRt;

  /// @brief Field _BlitTexArraySlice, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitTexArraySlice, put = setStaticF__BlitTexArraySlice)) int32_t _BlitTexArraySlice;

  /// @brief Field _BlitTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitTexture, put = setStaticF__BlitTexture)) int32_t _BlitTexture;

  /// @brief Field _BlitTextureSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlitTextureSize, put = setStaticF__BlitTextureSize)) int32_t _BlitTextureSize;

  /// @brief Field _InputDepth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputDepth, put = setStaticF__InputDepth)) int32_t _InputDepth;

  static inline int32_t getStaticF__BlitCubeTexture();

  static inline int32_t getStaticF__BlitDecodeInstructions();

  static inline int32_t getStaticF__BlitMipLevel();

  static inline int32_t getStaticF__BlitPaddingSize();

  static inline int32_t getStaticF__BlitScaleBias();

  static inline int32_t getStaticF__BlitScaleBiasRt();

  static inline int32_t getStaticF__BlitTexArraySlice();

  static inline int32_t getStaticF__BlitTexture();

  static inline int32_t getStaticF__BlitTextureSize();

  static inline int32_t getStaticF__InputDepth();

  static inline void setStaticF__BlitCubeTexture(int32_t value);

  static inline void setStaticF__BlitDecodeInstructions(int32_t value);

  static inline void setStaticF__BlitMipLevel(int32_t value);

  static inline void setStaticF__BlitPaddingSize(int32_t value);

  static inline void setStaticF__BlitScaleBias(int32_t value);

  static inline void setStaticF__BlitScaleBiasRt(int32_t value);

  static inline void setStaticF__BlitTexArraySlice(int32_t value);

  static inline void setStaticF__BlitTexture(int32_t value);

  static inline void setStaticF__BlitTextureSize(int32_t value);

  static inline void setStaticF__InputDepth(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Blitter_BlitShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Blitter_BlitShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Blitter_BlitShaderIDs(Blitter_BlitShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Blitter_BlitShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Blitter_BlitShaderIDs(Blitter_BlitShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12236 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Blitter_BlitShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Blitter/BlitShaderPassNames
struct CORDL_TYPE Blitter_BlitShaderPassNames {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Blitter_BlitShaderPassNames_Unwrapped
  enum struct __Blitter_BlitShaderPassNames_Unwrapped : int32_t {
    __E_Nearest = static_cast<int32_t>(0x0),
    __E_Bilinear = static_cast<int32_t>(0x1),
    __E_NearestQuad = static_cast<int32_t>(0x2),
    __E_BilinearQuad = static_cast<int32_t>(0x3),
    __E_NearestQuadPadding = static_cast<int32_t>(0x4),
    __E_BilinearQuadPadding = static_cast<int32_t>(0x5),
    __E_NearestQuadPaddingRepeat = static_cast<int32_t>(0x6),
    __E_BilinearQuadPaddingRepeat = static_cast<int32_t>(0x7),
    __E_BilinearQuadPaddingOctahedral = static_cast<int32_t>(0x8),
    __E_NearestQuadPaddingAlphaBlend = static_cast<int32_t>(0x9),
    __E_BilinearQuadPaddingAlphaBlend = static_cast<int32_t>(0xa),
    __E_NearestQuadPaddingAlphaBlendRepeat = static_cast<int32_t>(0xb),
    __E_BilinearQuadPaddingAlphaBlendRepeat = static_cast<int32_t>(0xc),
    __E_BilinearQuadPaddingAlphaBlendOctahedral = static_cast<int32_t>(0xd),
    __E_CubeToOctahedral = static_cast<int32_t>(0xe),
    __E_CubeToOctahedralLuminance = static_cast<int32_t>(0xf),
    __E_CubeToOctahedralAlpha = static_cast<int32_t>(0x10),
    __E_CubeToOctahedralRed = static_cast<int32_t>(0x11),
    __E_BilinearQuadLuminance = static_cast<int32_t>(0x12),
    __E_BilinearQuadAlpha = static_cast<int32_t>(0x13),
    __E_BilinearQuadRed = static_cast<int32_t>(0x14),
    __E_NearestCubeToOctahedralPadding = static_cast<int32_t>(0x15),
    __E_BilinearCubeToOctahedralPadding = static_cast<int32_t>(0x16),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Blitter_BlitShaderPassNames_Unwrapped() const noexcept {
    return static_cast<__Blitter_BlitShaderPassNames_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Blitter_BlitShaderPassNames();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Blitter_BlitShaderPassNames(int32_t value__) noexcept;

  /// @brief Field Bilinear value: I32(1)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const Bilinear;

  /// @brief Field BilinearCubeToOctahedralPadding value: I32(22)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearCubeToOctahedralPadding;

  /// @brief Field BilinearQuad value: I32(3)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuad;

  /// @brief Field BilinearQuadAlpha value: I32(19)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadAlpha;

  /// @brief Field BilinearQuadLuminance value: I32(18)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadLuminance;

  /// @brief Field BilinearQuadPadding value: I32(5)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadPadding;

  /// @brief Field BilinearQuadPaddingAlphaBlend value: I32(10)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadPaddingAlphaBlend;

  /// @brief Field BilinearQuadPaddingAlphaBlendOctahedral value: I32(13)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadPaddingAlphaBlendOctahedral;

  /// @brief Field BilinearQuadPaddingAlphaBlendRepeat value: I32(12)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadPaddingAlphaBlendRepeat;

  /// @brief Field BilinearQuadPaddingOctahedral value: I32(8)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadPaddingOctahedral;

  /// @brief Field BilinearQuadPaddingRepeat value: I32(7)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadPaddingRepeat;

  /// @brief Field BilinearQuadRed value: I32(20)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const BilinearQuadRed;

  /// @brief Field CubeToOctahedral value: I32(14)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const CubeToOctahedral;

  /// @brief Field CubeToOctahedralAlpha value: I32(16)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const CubeToOctahedralAlpha;

  /// @brief Field CubeToOctahedralLuminance value: I32(15)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const CubeToOctahedralLuminance;

  /// @brief Field CubeToOctahedralRed value: I32(17)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const CubeToOctahedralRed;

  /// @brief Field Nearest value: I32(0)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const Nearest;

  /// @brief Field NearestCubeToOctahedralPadding value: I32(21)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const NearestCubeToOctahedralPadding;

  /// @brief Field NearestQuad value: I32(2)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const NearestQuad;

  /// @brief Field NearestQuadPadding value: I32(4)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const NearestQuadPadding;

  /// @brief Field NearestQuadPaddingAlphaBlend value: I32(9)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const NearestQuadPaddingAlphaBlend;

  /// @brief Field NearestQuadPaddingAlphaBlendRepeat value: I32(11)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const NearestQuadPaddingAlphaBlendRepeat;

  /// @brief Field NearestQuadPaddingRepeat value: I32(6)
  static ::UnityEngine::Rendering::Blitter_BlitShaderPassNames const NearestQuadPaddingRepeat;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12237 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Blitter_BlitShaderPassNames, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Blitter_BlitShaderPassNames, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Blitter/BlitColorAndDepthPassNames
struct CORDL_TYPE Blitter_BlitColorAndDepthPassNames {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Blitter_BlitColorAndDepthPassNames_Unwrapped
  enum struct __Blitter_BlitColorAndDepthPassNames_Unwrapped : int32_t {
    __E_ColorOnly = static_cast<int32_t>(0x0),
    __E_ColorAndDepth = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Blitter_BlitColorAndDepthPassNames_Unwrapped() const noexcept {
    return static_cast<__Blitter_BlitColorAndDepthPassNames_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Blitter_BlitColorAndDepthPassNames();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Blitter_BlitColorAndDepthPassNames(int32_t value__) noexcept;

  /// @brief Field ColorAndDepth value: I32(1)
  static ::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames const ColorAndDepth;

  /// @brief Field ColorOnly value: I32(0)
  static ::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames const ColorOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Blitter
class CORDL_TYPE Blitter : public ::System::Object {
public:
  // Declarations
  using BlitColorAndDepthPassNames = ::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames;

  using BlitShaderIDs = ::UnityEngine::Rendering::Blitter_BlitShaderIDs;

  using BlitShaderPassNames = ::UnityEngine::Rendering::Blitter_BlitShaderPassNames;

  /// @brief Field s_Blit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Blit, put = setStaticF_s_Blit)) ::UnityW<::UnityEngine::Material> s_Blit;

  /// @brief Field s_BlitColorAndDepth, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlitColorAndDepth, put = setStaticF_s_BlitColorAndDepth)) ::UnityW<::UnityEngine::Material> s_BlitColorAndDepth;

  /// @brief Field s_BlitColorAndDepthShaderPassIndicesMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlitColorAndDepthShaderPassIndicesMap, put = setStaticF_s_BlitColorAndDepthShaderPassIndicesMap)) ::ArrayW<int32_t, ::Array<int32_t>*>
      s_BlitColorAndDepthShaderPassIndicesMap;

  /// @brief Field s_BlitShaderPassIndicesMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlitShaderPassIndicesMap, put = setStaticF_s_BlitShaderPassIndicesMap)) ::ArrayW<int32_t, ::Array<int32_t>*> s_BlitShaderPassIndicesMap;

  /// @brief Field s_BlitTexArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlitTexArray, put = setStaticF_s_BlitTexArray)) ::UnityW<::UnityEngine::Material> s_BlitTexArray;

  /// @brief Field s_BlitTexArraySingleSlice, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlitTexArraySingleSlice, put = setStaticF_s_BlitTexArraySingleSlice)) ::UnityW<::UnityEngine::Material> s_BlitTexArraySingleSlice;

  /// @brief Field s_Copy, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Copy, put = setStaticF_s_Copy)) ::UnityW<::UnityEngine::Material> s_Copy;

  /// @brief Field s_DecodeHdrKeyword, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_DecodeHdrKeyword, put = setStaticF_s_DecodeHdrKeyword)) ::UnityEngine::Rendering::LocalKeyword s_DecodeHdrKeyword;

  /// @brief Field s_PropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PropertyBlock, put = setStaticF_s_PropertyBlock)) ::UnityEngine::MaterialPropertyBlock* s_PropertyBlock;

  /// @brief Field s_QuadMesh, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_QuadMesh, put = setStaticF_s_QuadMesh)) ::UnityW<::UnityEngine::Mesh> s_QuadMesh;

  /// @brief Field s_TriangleMesh, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TriangleMesh, put = setStaticF_s_TriangleMesh)) ::UnityW<::UnityEngine::Mesh> s_TriangleMesh;

  /// @brief Method BlitCameraTexture, addr 0x659c7c0, size 0x1a4, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Rect destViewport, float_t mipLevel, bool bilinear);

  /// @brief Method BlitCameraTexture, addr 0x659c424, size 0x18c, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Material* material,
                                       int32_t pass);

  /// @brief Method BlitCameraTexture, addr 0x659c2c8, size 0x15c, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitCameraTexture, addr 0x659bf58, size 0x164, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, float_t mipLevel,
                                       bool bilinear);

  /// @brief Method BlitCameraTexture, addr 0x659c6c0, size 0x100, virtual false, abstract: false, final false
  static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                       ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method BlitCameraTexture2D, addr 0x659c164, size 0x164, virtual false, abstract: false, final false
  static inline void BlitCameraTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, float_t mipLevel,
                                         bool bilinear);

  /// @brief Method BlitColorAndDepth, addr 0x659b554, size 0x1f8, virtual false, abstract: false, final false
  static inline void BlitColorAndDepth(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* sourceColor, ::UnityEngine::RenderTexture* sourceDepth, ::UnityEngine::Vector4 scaleBias,
                                       float_t mipLevel, bool blitDepth);

  /// @brief Method BlitColorAndDepth, addr 0x659b488, size 0xcc, virtual false, abstract: false, final false
  static inline void BlitColorAndDepth(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Texture* sourceColor, ::UnityEngine::RenderTexture* sourceDepth,
                                       ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool blitDepth);

  /// @brief Method BlitCubeToOctahedral2DQuad, addr 0x659317c, size 0x1b0, virtual false, abstract: false, final false
  static inline void BlitCubeToOctahedral2DQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex);

  /// @brief Method BlitCubeToOctahedral2DQuadSingleChannel, addr 0x6593630, size 0x2e4, virtual false, abstract: false, final false
  static inline void BlitCubeToOctahedral2DQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex);

  /// @brief Method BlitCubeToOctahedral2DQuadWithPadding, addr 0x659d30c, size 0x364, virtual false, abstract: false, final false
  static inline void BlitCubeToOctahedral2DQuadWithPadding(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize,
                                                           ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels,
                                                           ::System::Nullable_1<::UnityEngine::Vector4> decodeInstructions);

  /// @brief Method BlitOctahedralWithPadding, addr 0x659cebc, size 0x228, virtual false, abstract: false, final false
  static inline void BlitOctahedralWithPadding(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector4 scaleBiasTex,
                                               ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitOctahedralWithPaddingMultiply, addr 0x659d0e4, size 0x228, virtual false, abstract: false, final false
  static inline void BlitOctahedralWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize,
                                                       ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitQuad, addr 0x65927cc, size 0x1f8, virtual false, abstract: false, final false
  static inline void BlitQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT,
                              int32_t mipLevelTex, bool bilinear);

  /// @brief Method BlitQuadSingleChannel, addr 0x659332c, size 0x304, virtual false, abstract: false, final false
  static inline void BlitQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT,
                                           int32_t mipLevelTex);

  /// @brief Method BlitQuadWithPadding, addr 0x659c964, size 0x2ac, virtual false, abstract: false, final false
  static inline void BlitQuadWithPadding(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector4 scaleBiasTex,
                                         ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitQuadWithPaddingMultiply, addr 0x659cc10, size 0x2ac, virtual false, abstract: false, final false
  static inline void BlitQuadWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector4 scaleBiasTex,
                                                 ::UnityEngine::Vector4 scaleBiasRT, int32_t mipLevelTex, bool bilinear, int32_t paddingInPixels);

  /// @brief Method BlitTexture, addr 0x659bd70, size 0xf4, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleBias, ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitTexture, addr 0x659aef4, size 0x134, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, ::UnityEngine::Material* material,
                                 int32_t pass);

  /// @brief Method BlitTexture, addr 0x659adb0, size 0x144, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, ::UnityEngine::Material* material,
                                 int32_t pass, float_t sourceMipLevel, int32_t sourceDepthSlice);

  /// @brief Method BlitTexture, addr 0x659b0e4, size 0x188, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method BlitTexture, addr 0x659ac98, size 0x118, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t sourceMipLevel,
                                 int32_t sourceDepthSlice, bool bilinear);

  /// @brief Method BlitTexture, addr 0x659bbc8, size 0x1a8, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                                 ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Material* material,
                                 int32_t pass);

  /// @brief Method BlitTexture, addr 0x659ba30, size 0x198, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                                 ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitTexture, addr 0x659b8e0, size 0x150, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Vector4 scaleBias,
                                 ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitTexture, addr 0x659be64, size 0xf4, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Vector4 scaleBias, ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitTexture, addr 0x659b74c, size 0xbc, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, ::UnityEngine::Material* material,
                                 int32_t pass);

  /// @brief Method BlitTexture, addr 0x659b028, size 0xbc, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method BlitTexture, addr 0x659b808, size 0xd8, virtual false, abstract: false, final false
  static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Vector4 scaleBias,
                                 ::UnityEngine::Material* material, int32_t pass);

  /// @brief Method BlitTexture2D, addr 0x659b328, size 0x160, virtual false, abstract: false, final false
  static inline void BlitTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method BlitTexture2D, addr 0x659b26c, size 0xbc, virtual false, abstract: false, final false
  static inline void BlitTexture2D(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Vector4 scaleBias, float_t mipLevel, bool bilinear);

  /// @brief Method CanCopyMSAA, addr 0x659ab94, size 0x74, virtual false, abstract: false, final false
  static inline bool CanCopyMSAA();

  /// @brief Method Cleanup, addr 0x659a36c, size 0x11c, virtual false, abstract: false, final false
  static inline void Cleanup();

  /// @brief Method CopyTexture, addr 0x659ac08, size 0x90, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool isMSAA);

  /// @brief Method DrawQuad, addr 0x659ab18, size 0x7c, virtual false, abstract: false, final false
  static inline void DrawQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass);

  /// @brief Method DrawQuad, addr 0x659a988, size 0x190, virtual false, abstract: false, final false
  static inline void DrawQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* propertyBlock);

  /// @brief Method DrawQuad, addr 0x659a8fc, size 0x8c, virtual false, abstract: false, final false
  static inline void DrawQuad(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* propertyBlock);

  /// @brief Method DrawQuadMesh, addr 0x659a808, size 0xf4, virtual false, abstract: false, final false
  static inline void DrawQuadMesh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* propertyBlock);

  /// @brief Method DrawTriangle, addr 0x659a5fc, size 0x7c, virtual false, abstract: false, final false
  static inline void DrawTriangle(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass);

  /// @brief Method DrawTriangle, addr 0x659a678, size 0x190, virtual false, abstract: false, final false
  static inline void DrawTriangle(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* propertyBlock);

  /// @brief Method DrawTriangle, addr 0x659a580, size 0x7c, virtual false, abstract: false, final false
  static inline void DrawTriangle(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Material* material, int32_t shaderPass);

  /// @brief Method GetBlitMaterial, addr 0x659a488, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBlitMaterial(::UnityEngine::Rendering::TextureDimension dimension, bool singleSlice);

  /// @brief Method Initialize, addr 0x6599764, size 0x7c8, virtual false, abstract: false, final false
  static inline void Initialize(::UnityEngine::Shader* blitPS, ::UnityEngine::Shader* blitColorAndDepthPS);

  /// @brief Method <Initialize>g__GetFullScreenTriangleTexCoord|14_1, addr 0x659a0e8, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _Initialize_g__GetFullScreenTriangleTexCoord_14_1();

  /// @brief Method <Initialize>g__GetFullScreenTriangleVertexPosition|14_0, addr 0x659a034, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _Initialize_g__GetFullScreenTriangleVertexPosition_14_0(float_t z);

  /// @brief Method <Initialize>g__GetQuadTexCoord|14_3, addr 0x659a28c, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _Initialize_g__GetQuadTexCoord_14_3();

  /// @brief Method <Initialize>g__GetQuadVertexPosition|14_2, addr 0x659a1e4, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _Initialize_g__GetQuadVertexPosition_14_2(float_t z);

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_Blit();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitColorAndDepth();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_BlitColorAndDepthShaderPassIndicesMap();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_BlitShaderPassIndicesMap();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitTexArray();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitTexArraySingleSlice();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_Copy();

  static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DecodeHdrKeyword();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_PropertyBlock();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_QuadMesh();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_TriangleMesh();

  static inline void setStaticF_s_Blit(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_BlitColorAndDepth(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_BlitColorAndDepthShaderPassIndicesMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_BlitShaderPassIndicesMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_BlitTexArray(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_BlitTexArraySingleSlice(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_Copy(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_DecodeHdrKeyword(::UnityEngine::Rendering::LocalKeyword value);

  static inline void setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF_s_QuadMesh(::UnityW<::UnityEngine::Mesh> value);

  static inline void setStaticF_s_TriangleMesh(::UnityW<::UnityEngine::Mesh> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Blitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Blitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Blitter(Blitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Blitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Blitter(Blitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Blitter, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Blitter_BlitColorAndDepthPassNames, "UnityEngine.Rendering", "Blitter/BlitColorAndDepthPassNames");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Blitter_BlitShaderPassNames, "UnityEngine.Rendering", "Blitter/BlitShaderPassNames");
NEED_NO_BOX(::UnityEngine::Rendering::Blitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Blitter*, "UnityEngine.Rendering", "Blitter");
NEED_NO_BOX(::UnityEngine::Rendering::Blitter_BlitShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Blitter_BlitShaderIDs*, "UnityEngine.Rendering", "Blitter/BlitShaderIDs");
