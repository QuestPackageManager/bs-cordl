#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Rect;
}
namespace System {
class Array;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Forward declare root types
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
namespace UnityEngine {
class Texture2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__Texture2D__EXRFlags);
MARK_REF_PTR_T(::UnityEngine::Texture2D);
// Type: ::EXRFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10072))
// CS Name: ::Texture2D::EXRFlags
struct CORDL_TYPE __Texture2D__EXRFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Texture2D__EXRFlags_Unwrapped
  enum struct ____Texture2D__EXRFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OutputAsFloat = static_cast<int32_t>(0x1),
    __E_CompressZIP = static_cast<int32_t>(0x2),
    __E_CompressRLE = static_cast<int32_t>(0x4),
    __E_CompressPIZ = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Texture2D__EXRFlags_Unwrapped() const noexcept {
    return static_cast<____Texture2D__EXRFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Texture2D__EXRFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Texture2D__EXRFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__Texture2D__EXRFlags const None;

  /// @brief Field OutputAsFloat value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__Texture2D__EXRFlags const OutputAsFloat;

  /// @brief Field CompressZIP value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__Texture2D__EXRFlags const CompressZIP;

  /// @brief Field CompressRLE value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__Texture2D__EXRFlags const CompressRLE;

  /// @brief Field CompressPIZ value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__Texture2D__EXRFlags const CompressPIZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Texture2D__EXRFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Texture2D__EXRFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Texture2D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10073))
// CS Name: ::UnityEngine::Texture2D*
class CORDL_TYPE Texture2D : public ::UnityEngine::Texture {
public:
  // Declarations
  using EXRFlags = ::UnityEngine::__Texture2D__EXRFlags;

  __declspec(property(get = get_format))::UnityEngine::TextureFormat format;

  __declspec(property(get = get_ignoreMipmapLimit, put = set_ignoreMipmapLimit)) bool ignoreMipmapLimit;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_vtOnly)) bool vtOnly;

  __declspec(property(get = get_isPreProcessed)) bool isPreProcessed;

  __declspec(property(get = get_streamingMipmaps)) bool streamingMipmaps;

  __declspec(property(get = get_streamingMipmapsPriority)) int32_t streamingMipmapsPriority;

  __declspec(property(get = get_requestedMipmapLevel, put = set_requestedMipmapLevel)) int32_t requestedMipmapLevel;

  __declspec(property(get = get_minimumMipmapLevel, put = set_minimumMipmapLevel)) int32_t minimumMipmapLevel;

  __declspec(property(get = get_loadAllMips, put = set_loadAllMips)) bool loadAllMips;

  __declspec(property(get = get_calculatedMipmapLevel)) int32_t calculatedMipmapLevel;

  __declspec(property(get = get_desiredMipmapLevel)) int32_t desiredMipmapLevel;

  __declspec(property(get = get_loadingMipmapLevel)) int32_t loadingMipmapLevel;

  __declspec(property(get = get_loadedMipmapLevel)) int32_t loadedMipmapLevel;

  /// @brief Method get_format, addr 0x2cae004, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_ignoreMipmapLimit, addr 0x2cae040, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ignoreMipmapLimit();

  /// @brief Method set_ignoreMipmapLimit, addr 0x2cae07c, size 0x44, virtual false, abstract: false, final false
  inline void set_ignoreMipmapLimit(bool value);

  /// @brief Method get_whiteTexture, addr 0x2cae0c0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* get_whiteTexture();

  /// @brief Method get_blackTexture, addr 0x2cae0e8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* get_blackTexture();

  /// @brief Method get_redTexture, addr 0x2cae110, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* get_redTexture();

  /// @brief Method get_grayTexture, addr 0x2cae138, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* get_grayTexture();

  /// @brief Method get_linearGrayTexture, addr 0x2cae160, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* get_linearGrayTexture();

  /// @brief Method get_normalTexture, addr 0x2cae188, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* get_normalTexture();

  /// @brief Method Compress, addr 0x2cae1b0, size 0x44, virtual false, abstract: false, final false
  inline void Compress(bool highQuality);

  /// @brief Method Internal_CreateImpl, addr 0x2cae1f4, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method Internal_Create, addr 0x2cae278, size 0xd8, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method get_isReadable, addr 0x2cae350, size 0x3c, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_vtOnly, addr 0x2cae38c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_vtOnly();

  /// @brief Method ApplyImpl, addr 0x2cae3c8, size 0x54, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ReinitializeImpl, addr 0x2cae41c, size 0x54, virtual false, abstract: false, final false
  inline bool ReinitializeImpl(int32_t width, int32_t height);

  /// @brief Method SetPixelImpl, addr 0x2cae470, size 0x84, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method GetPixelImpl, addr 0x2cae568, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y);

  /// @brief Method GetPixelBilinearImpl, addr 0x2cae664, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t image, int32_t mip, float_t u, float_t v);

  /// @brief Method ReinitializeWithFormatImpl, addr 0x2cae760, size 0x6c, virtual false, abstract: false, final false
  inline bool ReinitializeWithFormatImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap);

  /// @brief Method ReadPixelsImpl, addr 0x2cae7cc, size 0x74, virtual false, abstract: false, final false
  inline void ReadPixelsImpl(::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps);

  /// @brief Method SetPixelsImpl, addr 0x2cae8ac, size 0x8c, virtual false, abstract: false, final false
  inline void SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> pixel, int32_t miplevel, int32_t frame);

  /// @brief Method LoadRawTextureDataImpl, addr 0x2cae938, size 0x54, virtual false, abstract: false, final false
  inline bool LoadRawTextureDataImpl(void* data, uint64_t size);

  /// @brief Method LoadRawTextureDataImplArray, addr 0x2cae98c, size 0x44, virtual false, abstract: false, final false
  inline bool LoadRawTextureDataImplArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method SetPixelDataImplArray, addr 0x2cae9d0, size 0x74, virtual false, abstract: false, final false
  /// @param sourceDataStartIndex: int32_t (default: static_cast<int32_t>(0x0))
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex = static_cast<int32_t>(0x0));

  /// @brief Method SetPixelDataImpl, addr 0x2caea44, size 0x74, virtual false, abstract: false, final false
  /// @param sourceDataStartIndex: int32_t (default: static_cast<int32_t>(0x0))
  inline bool SetPixelDataImpl(void* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex = static_cast<int32_t>(0x0));

  /// @brief Method GetWritableImageData, addr 0x2caeab8, size 0x44, virtual false, abstract: false, final false
  inline void* GetWritableImageData(int32_t frame);

  /// @brief Method GetRawImageDataSize, addr 0x2caeafc, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t GetRawImageDataSize();

  /// @brief Method GenerateAtlasImpl, addr 0x2caeb38, size 0x5c, virtual false, abstract: false, final false
  static inline void GenerateAtlasImpl(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> sizes, int32_t padding, int32_t atlasSize,
                                       ByRef<::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*>> rect);

  /// @brief Method get_isPreProcessed, addr 0x2caeb94, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPreProcessed();

  /// @brief Method get_streamingMipmaps, addr 0x2caebd0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_streamingMipmaps();

  /// @brief Method get_streamingMipmapsPriority, addr 0x2caec0c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_streamingMipmapsPriority();

  /// @brief Method get_requestedMipmapLevel, addr 0x2caec48, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_requestedMipmapLevel();

  /// @brief Method set_requestedMipmapLevel, addr 0x2caec84, size 0x44, virtual false, abstract: false, final false
  inline void set_requestedMipmapLevel(int32_t value);

  /// @brief Method get_minimumMipmapLevel, addr 0x2caecc8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_minimumMipmapLevel();

  /// @brief Method set_minimumMipmapLevel, addr 0x2caed04, size 0x44, virtual false, abstract: false, final false
  inline void set_minimumMipmapLevel(int32_t value);

  /// @brief Method get_loadAllMips, addr 0x2caed48, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loadAllMips();

  /// @brief Method set_loadAllMips, addr 0x2caed84, size 0x44, virtual false, abstract: false, final false
  inline void set_loadAllMips(bool value);

  /// @brief Method get_calculatedMipmapLevel, addr 0x2caedc8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_calculatedMipmapLevel();

  /// @brief Method get_desiredMipmapLevel, addr 0x2caee04, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_desiredMipmapLevel();

  /// @brief Method get_loadingMipmapLevel, addr 0x2caee40, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_loadingMipmapLevel();

  /// @brief Method get_loadedMipmapLevel, addr 0x2caee7c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_loadedMipmapLevel();

  /// @brief Method ClearRequestedMipmapLevel, addr 0x2caeeb8, size 0x3c, virtual false, abstract: false, final false
  inline void ClearRequestedMipmapLevel();

  /// @brief Method IsRequestedMipmapLevelLoaded, addr 0x2caeef4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsRequestedMipmapLevelLoaded();

  /// @brief Method ClearMinimumMipmapLevel, addr 0x2caef30, size 0x3c, virtual false, abstract: false, final false
  inline void ClearMinimumMipmapLevel();

  /// @brief Method UpdateExternalTexture, addr 0x2caef6c, size 0x44, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(void* nativeTex);

  /// @brief Method SetAllPixels32, addr 0x2caefb0, size 0x54, virtual false, abstract: false, final false
  inline void SetAllPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel);

  /// @brief Method SetBlockOfPixels32, addr 0x2caf004, size 0x84, virtual false, abstract: false, final false
  inline void SetBlockOfPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel);

  /// @brief Method GetRawTextureData, addr 0x2caf088, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawTextureData();

  /// @brief Method GetPixels, addr 0x2caf0c4, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel);

  /// @brief Method GetPixels, addr 0x2caf138, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight);

  /// @brief Method GetPixels32, addr 0x2caf1a8, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> GetPixels32(int32_t miplevel);

  /// @brief Method GetPixels32, addr 0x2caf1ec, size 0x40, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> GetPixels32();

  /// @brief Method PackTextures, addr 0x2caf22c, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> textures, int32_t padding,
                                                                                   int32_t maximumAtlasSize, bool makeNoLongerReadable);

  /// @brief Method PackTextures, addr 0x2caf298, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> textures, int32_t padding,
                                                                                   int32_t maximumAtlasSize);

  /// @brief Method PackTextures, addr 0x2caf2f8, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> textures, int32_t padding);

  /// @brief Method ValidateFormat, addr 0x2caf354, size 0xe8, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width, int32_t height);

  /// @brief Method ValidateFormat, addr 0x2caf43c, size 0x134, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, void* nativeTex);

  /// @brief Method .ctor, addr 0x2caf570, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount,
                    void* nativeTex);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x2caf644, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x2caf690, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x2caf740, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, void* nativeTex);

  /// @brief Method .ctor, addr 0x2caf7d0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, void* nativeTex);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  /// @brief Method .ctor, addr 0x2caf90c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  /// @brief Method .ctor, addr 0x2caf99c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x2cafa34, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Texture2D* New_ctor(int32_t width, int32_t height);

  /// @brief Method .ctor, addr 0x2cafac0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height);

  /// @brief Method CreateExternalTexture, addr 0x2cafb60, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* CreateExternalTexture(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool mipChain, bool linear, void* nativeTex);

  /// @brief Method SetPixel, addr 0x2cafc84, size 0x9c, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x2cafd20, size 0xa8, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, ::UnityEngine::Color color, int32_t mipLevel);

  /// @brief Method SetPixels, addr 0x2cafdc8, size 0xc0, virtual false, abstract: false, final false
  inline void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, int32_t miplevel);

  /// @brief Method SetPixels, addr 0x2cafe88, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method SetPixels, addr 0x2cafe90, size 0x78, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, int32_t miplevel);

  /// @brief Method SetPixels, addr 0x2caff08, size 0x5c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method GetPixel, addr 0x2caff64, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y);

  /// @brief Method GetPixel, addr 0x2caffd0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t mipLevel);

  /// @brief Method GetPixelBilinear, addr 0x2cb0048, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v);

  /// @brief Method GetPixelBilinear, addr 0x2cb00b0, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, int32_t mipLevel);

  /// @brief Method LoadRawTextureData, addr 0x2cb0124, size 0x168, virtual false, abstract: false, final false
  inline void LoadRawTextureData(void* data, int32_t size);

  /// @brief Method LoadRawTextureData, addr 0x2cb028c, size 0x128, virtual false, abstract: false, final false
  inline void LoadRawTextureData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method LoadRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void LoadRawTextureData(::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param sourceDataStartIndex: int32_t (default: static_cast<int32_t>(0x0))
  template <typename T> inline void SetPixelData(::ArrayW<T, ::Array<T>*> data, int32_t mipLevel, int32_t sourceDataStartIndex = static_cast<int32_t>(0x0));

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param sourceDataStartIndex: int32_t (default: static_cast<int32_t>(0x0))
  template <typename T> inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, int32_t sourceDataStartIndex = static_cast<int32_t>(0x0));

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel);

  /// @brief Method GetRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetRawTextureData();

  /// @brief Method Apply, addr 0x2cb03b4, size 0x8c, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method Apply, addr 0x2cb0440, size 0xc, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x2cb044c, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Reinitialize, addr 0x2cb0458, size 0x8c, virtual false, abstract: false, final false
  inline bool Reinitialize(int32_t width, int32_t height);

  /// @brief Method Reinitialize, addr 0x2cb04e4, size 0xec, virtual false, abstract: false, final false
  inline bool Reinitialize(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool hasMipMap);

  /// @brief Method Reinitialize, addr 0x2cb05d0, size 0xa4, virtual false, abstract: false, final false
  inline bool Reinitialize(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap);

  /// @brief Method Resize, addr 0x2cb0674, size 0x4, virtual false, abstract: false, final false
  inline bool Resize(int32_t width, int32_t height);

  /// @brief Method Resize, addr 0x2cb0678, size 0x8, virtual false, abstract: false, final false
  inline bool Resize(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, bool hasMipMap);

  /// @brief Method Resize, addr 0x2cb0680, size 0x8, virtual false, abstract: false, final false
  inline bool Resize(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap);

  /// @brief Method ReadPixels, addr 0x2cb0688, size 0xa0, virtual false, abstract: false, final false
  inline void ReadPixels(::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps);

  /// @brief Method ReadPixels, addr 0x2cb0728, size 0x8, virtual false, abstract: false, final false
  inline void ReadPixels(::UnityEngine::Rect source, int32_t destX, int32_t destY);

  /// @brief Method GenerateAtlas, addr 0x2cb0730, size 0x1cc, virtual false, abstract: false, final false
  static inline bool GenerateAtlas(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> sizes, int32_t padding, int32_t atlasSize,
                                   ::System::Collections::Generic::List_1<::UnityEngine::Rect>* results);

  /// @brief Method SetPixels32, addr 0x2cb08fc, size 0x54, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel);

  /// @brief Method SetPixels32, addr 0x2cb0950, size 0x48, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method SetPixels32, addr 0x2cb0998, size 0x84, virtual false, abstract: false, final false
  inline void SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel);

  /// @brief Method SetPixels32, addr 0x2cb0a1c, size 0x78, virtual false, abstract: false, final false
  inline void SetPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method GetPixels, addr 0x2cb0a94, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(int32_t miplevel);

  /// @brief Method GetPixels, addr 0x2cb0b28, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels();

  /// @brief Method SetPixelImpl_Injected, addr 0x2cae4f4, size 0x74, virtual false, abstract: false, final false
  inline void SetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<::UnityEngine::Color> color);

  /// @brief Method GetPixelImpl_Injected, addr 0x2cae5f0, size 0x74, virtual false, abstract: false, final false
  inline void GetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetPixelBilinearImpl_Injected, addr 0x2cae6ec, size 0x74, virtual false, abstract: false, final false
  inline void GetPixelBilinearImpl_Injected(int32_t image, int32_t mip, float_t u, float_t v, ByRef<::UnityEngine::Color> ret);

  /// @brief Method ReadPixelsImpl_Injected, addr 0x2cae840, size 0x6c, virtual false, abstract: false, final false
  inline void ReadPixelsImpl_Injected(ByRef<::UnityEngine::Rect> source, int32_t destX, int32_t destY, bool recalculateMipMaps);

  // Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2D(Texture2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2D(Texture2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2D();

public:
  /// @brief Field streamingMipmapsPriorityMin offset 0xffffffff size 0x4
  static constexpr int32_t streamingMipmapsPriorityMin{ static_cast<int32_t>(0xffffff80) };

  /// @brief Field streamingMipmapsPriorityMax offset 0xffffffff size 0x4
  static constexpr int32_t streamingMipmapsPriorityMax{ static_cast<int32_t>(0x7f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2D, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Texture2D__EXRFlags, "UnityEngine", "Texture2D/EXRFlags");
NEED_NO_BOX(::UnityEngine::Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
