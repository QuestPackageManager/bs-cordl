#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace System {
class Array;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cubemap);
// Type: UnityEngine::Cubemap
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8803))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8806))
// CS Name: ::UnityEngine::Cubemap*
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_format))::UnityEngine::TextureFormat format;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_isPreProcessed)) bool isPreProcessed;

  __declspec(property(get = get_streamingMipmaps)) bool streamingMipmaps;

  __declspec(property(get = get_streamingMipmapsPriority)) int32_t streamingMipmapsPriority;

  __declspec(property(get = get_requestedMipmapLevel, put = set_requestedMipmapLevel)) int32_t requestedMipmapLevel;

  __declspec(property(get = get_loadAllMips, put = set_loadAllMips)) bool loadAllMips;

  __declspec(property(get = get_desiredMipmapLevel)) int32_t desiredMipmapLevel;

  __declspec(property(get = get_loadingMipmapLevel)) int32_t loadingMipmapLevel;

  __declspec(property(get = get_loadedMipmapLevel)) int32_t loadedMipmapLevel;

  /// @brief Method get_format, addr 0x2cb2038, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method Internal_CreateImpl, addr 0x2cb2074, size 0x74, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method Internal_Create, addr 0x2cb20e8, size 0xc8, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method ApplyImpl, addr 0x2cb21b0, size 0x54, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method UpdateExternalTexture, addr 0x2cb2204, size 0x44, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(void* nativeTexture);

  /// @brief Method get_isReadable, addr 0x2cb2248, size 0x3c, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method SetPixelImpl, addr 0x2cb2284, size 0x84, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method GetPixelImpl, addr 0x2cb237c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y);

  /// @brief Method SmoothEdges, addr 0x2cb2478, size 0x44, virtual false, abstract: false, final false
  inline void SmoothEdges(int32_t smoothRegionWidthInPixels);

  /// @brief Method SmoothEdges, addr 0x2cb24bc, size 0x40, virtual false, abstract: false, final false
  inline void SmoothEdges();

  /// @brief Method GetPixels, addr 0x2cb24fc, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetPixels, addr 0x2cb2550, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face);

  /// @brief Method SetPixels, addr 0x2cb2598, size 0x5c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SetPixelDataImplArray, addr 0x2cb25f4, size 0x84, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl, addr 0x2cb2678, size 0x84, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(void* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixels, addr 0x2cb26fc, size 0x58, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face);

  /// @brief Method GetWritableImageData, addr 0x2cb2754, size 0x44, virtual false, abstract: false, final false
  inline void* GetWritableImageData(int32_t frame);

  /// @brief Method get_isPreProcessed, addr 0x2cb2798, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPreProcessed();

  /// @brief Method get_streamingMipmaps, addr 0x2cb27d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_streamingMipmaps();

  /// @brief Method get_streamingMipmapsPriority, addr 0x2cb2810, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_streamingMipmapsPriority();

  /// @brief Method get_requestedMipmapLevel, addr 0x2cb284c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_requestedMipmapLevel();

  /// @brief Method set_requestedMipmapLevel, addr 0x2cb2888, size 0x44, virtual false, abstract: false, final false
  inline void set_requestedMipmapLevel(int32_t value);

  /// @brief Method get_loadAllMips, addr 0x2cb28cc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loadAllMips();

  /// @brief Method set_loadAllMips, addr 0x2cb2908, size 0x44, virtual false, abstract: false, final false
  inline void set_loadAllMips(bool value);

  /// @brief Method get_desiredMipmapLevel, addr 0x2cb294c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_desiredMipmapLevel();

  /// @brief Method get_loadingMipmapLevel, addr 0x2cb2988, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_loadingMipmapLevel();

  /// @brief Method get_loadedMipmapLevel, addr 0x2cb29c4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_loadedMipmapLevel();

  /// @brief Method ClearRequestedMipmapLevel, addr 0x2cb2a00, size 0x3c, virtual false, abstract: false, final false
  inline void ClearRequestedMipmapLevel();

  /// @brief Method IsRequestedMipmapLevelLoaded, addr 0x2cb2a3c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsRequestedMipmapLevelLoaded();

  /// @brief Method ValidateFormat, addr 0x2cb2a78, size 0xd4, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width);

  /// @brief Method ValidateFormat, addr 0x2cb2b4c, size 0x128, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x2cb2c74, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x2cb2cb0, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x2cb2d98, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  /// @brief Method .ctor, addr 0x2cb2f38, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, void* nativeTex);

  /// @brief Method .ctor, addr 0x2cb2e10, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, void* nativeTex);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, void* nativeTex);

  /// @brief Method .ctor, addr 0x2cb306c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, void* nativeTex);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x2cb307c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method CreateExternalTexture, addr 0x2cb30fc, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> CreateExternalTexture(int32_t width, ::UnityEngine::TextureFormat format, bool mipmap, void* nativeTex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T, ::Array<T>*> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// @brief Method SetPixel, addr 0x2cb3208, size 0x8, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x2cb3210, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color, int32_t mip);

  /// @brief Method GetPixel, addr 0x2cb32bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y);

  /// @brief Method GetPixel, addr 0x2cb32c4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, int32_t mip);

  /// @brief Method Apply, addr 0x2cb3340, size 0x8c, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method Apply, addr 0x2cb33cc, size 0xc, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x2cb33d8, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method ValidateIsNotCrunched, addr 0x2cb3014, size 0x58, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method SetPixelImpl_Injected, addr 0x2cb2308, size 0x74, virtual false, abstract: false, final false
  inline void SetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<::UnityEngine::Color> color);

  /// @brief Method GetPixelImpl_Injected, addr 0x2cb2404, size 0x74, virtual false, abstract: false, final false
  inline void GetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<::UnityEngine::Color> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cubemap(Cubemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cubemap(Cubemap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cubemap();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cubemap, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Cubemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
