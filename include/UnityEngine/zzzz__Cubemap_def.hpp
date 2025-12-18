#pragma once
// IWYU pragma private; include "UnityEngine/Cubemap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cubemap);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cubemap
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_desiredMipmapLevel)) int32_t desiredMipmapLevel;

  __declspec(property(get = get_format)) ::UnityEngine::TextureFormat format;

  __declspec(property(get = get_isPreProcessed)) bool isPreProcessed;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_loadAllMips, put = set_loadAllMips)) bool loadAllMips;

  __declspec(property(get = get_loadedMipmapLevel)) int32_t loadedMipmapLevel;

  __declspec(property(get = get_loadingMipmapLevel)) int32_t loadingMipmapLevel;

  __declspec(property(get = get_requestedMipmapLevel, put = set_requestedMipmapLevel)) int32_t requestedMipmapLevel;

  __declspec(property(get = get_streamingMipmaps)) bool streamingMipmaps;

  __declspec(property(get = get_streamingMipmapsPriority)) int32_t streamingMipmapsPriority;

  /// @brief Method Apply, addr 0x68f43c4, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x68f43bc, size 0x8, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x68f4358, size 0x64, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x68f2080, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x68f2118, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ClearRequestedMipmapLevel, addr 0x68f380c, size 0x80, virtual false, abstract: false, final false
  inline void ClearRequestedMipmapLevel();

  /// @brief Method ClearRequestedMipmapLevel_Injected, addr 0x68f388c, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearRequestedMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method CopyPixels, addr 0x68f43d0, size 0x80, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels, addr 0x68f4450, size 0xb0, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::CubemapFace dstFace, int32_t dstMip);

  /// @brief Method CopyPixels, addr 0x68f4500, size 0xf8, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::UnityEngine::CubemapFace dstFace,
                         int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Full, addr 0x68f2b60, size 0xc0, virtual false, abstract: false, final false
  inline void CopyPixels_Full(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels_Full_Injected, addr 0x68f2c20, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src);

  /// @brief Method CopyPixels_Region, addr 0x68f2dc8, size 0x128, virtual false, abstract: false, final false
  inline void CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstFace, int32_t dstMip,
                                int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Region_Injected, addr 0x68f2ef0, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                                int32_t dstFace, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Slice, addr 0x68f2c64, size 0xf0, virtual false, abstract: false, final false
  inline void CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstFace, int32_t dstMip);

  /// @brief Method CopyPixels_Slice_Injected, addr 0x68f2d54, size 0x74, virtual false, abstract: false, final false
  static inline void CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstFace, int32_t dstMip);

  /// @brief Method CreateExternalTexture, addr 0x68f410c, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> CreateExternalTexture(int32_t width, ::UnityEngine::TextureFormat format, bool mipmap, ::System::IntPtr nativeTex);

  /// @brief Method GetPixel, addr 0x68f42d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y);

  /// @brief Method GetPixel, addr 0x68f42dc, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, int32_t mip);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// @brief Method GetPixelImpl, addr 0x68f2438, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y);

  /// @brief Method GetPixelImpl_Injected, addr 0x68f2504, size 0x74, virtual false, abstract: false, final false
  static inline void GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetPixels, addr 0x68f2740, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face);

  /// @brief Method GetPixels, addr 0x68f2654, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetPixels_Injected, addr 0x68f26ec, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels_Injected(::System::IntPtr _unity_self, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetWritableImageData, addr 0x68f2fb0, size 0x90, virtual false, abstract: false, final false
  inline ::System::IntPtr GetWritableImageData(int32_t frame);

  /// @brief Method GetWritableImageData_Injected, addr 0x68f3040, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetWritableImageData_Injected(::System::IntPtr _unity_self, int32_t frame);

  /// @brief Method Internal_Create, addr 0x68f1fac, size 0xd4, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief Method Internal_CreateImpl, addr 0x68f1f28, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief Method IsRequestedMipmapLevelLoaded, addr 0x68f38c8, size 0x80, virtual false, abstract: false, final false
  inline bool IsRequestedMipmapLevelLoaded();

  /// @brief Method IsRequestedMipmapLevelLoaded_Injected, addr 0x68f3948, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, bool createUninitialized);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// @brief Method SetPixel, addr 0x68f4220, size 0x8, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x68f4228, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color, int32_t mip);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T, ::Array<T>*> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl, addr 0x68f2a0c, size 0xc8, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray, addr 0x68f28c0, size 0xc8, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray_Injected, addr 0x68f2988, size 0x84, virtual false, abstract: false, final false
  static inline bool SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize,
                                                    int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl_Injected, addr 0x68f2ad4, size 0x84, virtual false, abstract: false, final false
  static inline bool SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize,
                                               int32_t sourceDataStartIndex);

  /// @brief Method SetPixelImpl, addr 0x68f22fc, size 0xc8, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixelImpl_Injected, addr 0x68f23c4, size 0x74, virtual false, abstract: false, final false
  static inline void SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::ByRef<::UnityEngine::Color> color);

  /// @brief Method SetPixels, addr 0x68f2b58, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face);

  /// @brief Method SetPixels, addr 0x68f2748, size 0x11c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x68f2864, size 0x5c, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SmoothEdges, addr 0x68f264c, size 0x8, virtual false, abstract: false, final false
  inline void SmoothEdges();

  /// @brief Method SmoothEdges, addr 0x68f2578, size 0x90, virtual false, abstract: false, final false
  inline void SmoothEdges(int32_t smoothRegionWidthInPixels);

  /// @brief Method SmoothEdges_Injected, addr 0x68f2608, size 0x44, virtual false, abstract: false, final false
  static inline void SmoothEdges_Injected(::System::IntPtr _unity_self, int32_t smoothRegionWidthInPixels);

  /// @brief Method UpdateExternalTexture, addr 0x68f216c, size 0x90, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(::System::IntPtr nativeTexture);

  /// @brief Method UpdateExternalTexture_Injected, addr 0x68f21fc, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTexture);

  /// @brief Method ValidateFormat, addr 0x68f3a54, size 0x148, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width);

  /// @brief Method ValidateFormat, addr 0x68f3984, size 0xd0, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width);

  /// @brief Method ValidateIsNotCrunched, addr 0x68f3ddc, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f3b9c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f3c8c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f3c00, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f3d00, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f40f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f4100, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, bool createUninitialized);

  /// @brief Method .ctor, addr 0x68f3fb8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x68f4054, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  /// @brief Method .ctor, addr 0x68f3e30, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// @brief Method get_desiredMipmapLevel, addr 0x68f35d8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_desiredMipmapLevel();

  /// @brief Method get_desiredMipmapLevel_Injected, addr 0x68f3658, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_desiredMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_format, addr 0x68f1e6c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_format_Injected, addr 0x68f1eec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPreProcessed, addr 0x68f3084, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPreProcessed();

  /// @brief Method get_isPreProcessed_Injected, addr 0x68f3104, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPreProcessed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x68f2240, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x68f22c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadAllMips, addr 0x68f3448, size 0x80, virtual false, abstract: false, final false
  inline bool get_loadAllMips();

  /// @brief Method get_loadAllMips_Injected, addr 0x68f34c8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loadAllMips_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadedMipmapLevel, addr 0x68f3750, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loadedMipmapLevel();

  /// @brief Method get_loadedMipmapLevel_Injected, addr 0x68f37d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loadedMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadingMipmapLevel, addr 0x68f3694, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loadingMipmapLevel();

  /// @brief Method get_loadingMipmapLevel_Injected, addr 0x68f3714, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loadingMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_requestedMipmapLevel, addr 0x68f32b8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_requestedMipmapLevel();

  /// @brief Method get_requestedMipmapLevel_Injected, addr 0x68f3338, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_requestedMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_streamingMipmaps, addr 0x68f3140, size 0x80, virtual false, abstract: false, final false
  inline bool get_streamingMipmaps();

  /// @brief Method get_streamingMipmapsPriority, addr 0x68f31fc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_streamingMipmapsPriority();

  /// @brief Method get_streamingMipmapsPriority_Injected, addr 0x68f327c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_streamingMipmapsPriority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_streamingMipmaps_Injected, addr 0x68f31c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_streamingMipmaps_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_loadAllMips, addr 0x68f3504, size 0x90, virtual false, abstract: false, final false
  inline void set_loadAllMips(bool value);

  /// @brief Method set_loadAllMips_Injected, addr 0x68f3594, size 0x44, virtual false, abstract: false, final false
  static inline void set_loadAllMips_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_requestedMipmapLevel, addr 0x68f3374, size 0x90, virtual false, abstract: false, final false
  inline void set_requestedMipmapLevel(int32_t value);

  /// @brief Method set_requestedMipmapLevel_Injected, addr 0x68f3404, size 0x44, virtual false, abstract: false, final false
  static inline void set_requestedMipmapLevel_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cubemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cubemap(Cubemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cubemap(Cubemap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10205 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cubemap, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Cubemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
