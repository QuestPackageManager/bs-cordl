#pragma once
// IWYU pragma private; include "UnityEngine/Cubemap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::UnityEngine::Cubemap*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
// [NativeHeader("Runtime/Graphics/CubemapTexture.h")]
// [ExcludeFromPreset]
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

  /// [ExcludeFromDocs]
  /// @brief Method Apply, addr 0x6f55984, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// [ExcludeFromDocs]
  /// @brief Method Apply, addr 0x6f5597c, size 0x8, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x6f55918, size 0x64, virtual false, abstract: false, final false
  inline void Apply(/* [DefaultValue("true")] */ bool updateMipmaps, /* [DefaultValue("false")] */ bool makeNoLongerReadable);

  /// [FreeFunction(Name = "CubemapScripting::Apply", HasExplicitThis = true)]
  /// @brief Method ApplyImpl, addr 0x6f53640, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x6f536d8, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// [FreeFunction(Name = "GetTextureStreamingManager().ClearRequestedMipmapLevel", HasExplicitThis = true)]
  /// @brief Method ClearRequestedMipmapLevel, addr 0x6f54dcc, size 0x80, virtual false, abstract: false, final false
  inline void ClearRequestedMipmapLevel();

  /// @brief Method ClearRequestedMipmapLevel_Injected, addr 0x6f54e4c, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearRequestedMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method CopyPixels, addr 0x6f55990, size 0x80, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels, addr 0x6f55a10, size 0xb0, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::CubemapFace dstFace, int32_t dstMip);

  /// @brief Method CopyPixels, addr 0x6f55ac0, size 0xf8, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::UnityEngine::CubemapFace dstFace,
                         int32_t dstMip, int32_t dstX, int32_t dstY);

  /// [FreeFunction(Name = "CubemapScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CopyPixels_Full, addr 0x6f54120, size 0xc0, virtual false, abstract: false, final false
  inline void CopyPixels_Full(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels_Full_Injected, addr 0x6f541e0, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src);

  /// [FreeFunction(Name = "CubemapScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CopyPixels_Region, addr 0x6f54388, size 0x128, virtual false, abstract: false, final false
  inline void CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstFace, int32_t dstMip,
                                int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Region_Injected, addr 0x6f544b0, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                                int32_t dstFace, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// [FreeFunction(Name = "CubemapScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CopyPixels_Slice, addr 0x6f54224, size 0xf0, virtual false, abstract: false, final false
  inline void CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstFace, int32_t dstMip);

  /// @brief Method CopyPixels_Slice_Injected, addr 0x6f54314, size 0x74, virtual false, abstract: false, final false
  static inline void CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstFace, int32_t dstMip);

  /// @brief Method CreateExternalTexture, addr 0x6f556cc, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> CreateExternalTexture(int32_t width, ::UnityEngine::TextureFormat format, bool mipmap, ::System::IntPtr nativeTex);

  /// [ExcludeFromDocs]
  /// @brief Method GetPixel, addr 0x6f55894, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y);

  /// @brief Method GetPixel, addr 0x6f5589c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, /* [DefaultValue("0")] */ int32_t mip);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// [NativeName("GetPixel")]
  /// @brief Method GetPixelImpl, addr 0x6f539f8, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y);

  /// @brief Method GetPixelImpl_Injected, addr 0x6f53ac4, size 0x74, virtual false, abstract: false, final false
  static inline void GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetPixels, addr 0x6f53d00, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetPixels(::UnityEngine::CubemapFace face);

  /// [FreeFunction(Name = "CubemapScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetPixels, addr 0x6f53c14, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetPixels(::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetPixels_Injected, addr 0x6f53cac, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr _unity_self, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetWritableImageData, addr 0x6f54570, size 0x90, virtual false, abstract: false, final false
  inline ::System::IntPtr GetWritableImageData(int32_t frame);

  /// @brief Method GetWritableImageData_Injected, addr 0x6f54600, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetWritableImageData_Injected(::System::IntPtr _unity_self, int32_t frame);

  /// @brief Method Internal_Create, addr 0x6f5356c, size 0xd4, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// [FreeFunction("CubemapScripting::Create")]
  /// @brief Method Internal_CreateImpl, addr 0x6f534e8, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// [FreeFunction(Name = "GetTextureStreamingManager().IsRequestedMipmapLevelLoaded", HasExplicitThis = true)]
  /// @brief Method IsRequestedMipmapLevelLoaded, addr 0x6f54e88, size 0x80, virtual false, abstract: false, final false
  inline bool IsRequestedMipmapLevelLoaded();

  /// @brief Method IsRequestedMipmapLevelLoaded_Injected, addr 0x6f54f08, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr _unity_self);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  /// [RequiredByNativeCode]
  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, /* [DefaultValue("false")] */ bool createUninitialized);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, /* [DefaultValue("false")] */ bool createUninitialized);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// [ExcludeFromDocs]
  /// @brief Method SetPixel, addr 0x6f557e0, size 0x8, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x6f557e8, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color, /* [DefaultValue("0")] */ int32_t mip);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, /* [DefaultValue("0")] */ int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, /* [DefaultValue("0")] */ int32_t sourceDataStartIndex);

  /// [FreeFunction(Name = "CubemapScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixelDataImpl, addr 0x6f53fcc, size 0xc8, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// [FreeFunction(Name = "CubemapScripting::SetPixelDataArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixelDataImplArray, addr 0x6f53e80, size 0xc8, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray_Injected, addr 0x6f53f48, size 0x84, virtual false, abstract: false, final false
  static inline bool SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize,
                                                    int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl_Injected, addr 0x6f54094, size 0x84, virtual false, abstract: false, final false
  static inline bool SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize,
                                               int32_t sourceDataStartIndex);

  /// [NativeName("SetPixel")]
  /// @brief Method SetPixelImpl, addr 0x6f538bc, size 0xc8, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixelImpl_Injected, addr 0x6f53984, size 0x74, virtual false, abstract: false, final false
  static inline void SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::by_ref<::UnityEngine::Color const> color);

  /// @brief Method SetPixels, addr 0x6f54118, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face);

  /// [FreeFunction(Name = "CubemapScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixels, addr 0x6f53d08, size 0x11c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x6f53e24, size 0x5c, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SmoothEdges, addr 0x6f53c0c, size 0x8, virtual false, abstract: false, final false
  inline void SmoothEdges();

  /// [NativeName("FixupEdges")]
  /// @brief Method SmoothEdges, addr 0x6f53b38, size 0x90, virtual false, abstract: false, final false
  inline void SmoothEdges(/* [DefaultValue("1")] */ int32_t smoothRegionWidthInPixels);

  /// @brief Method SmoothEdges_Injected, addr 0x6f53bc8, size 0x44, virtual false, abstract: false, final false
  static inline void SmoothEdges_Injected(::System::IntPtr _unity_self, /* [DefaultValue("1")] */ int32_t smoothRegionWidthInPixels);

  /// [FreeFunction("CubemapScripting::UpdateExternalTexture", HasExplicitThis = true)]
  /// @brief Method UpdateExternalTexture, addr 0x6f5372c, size 0x90, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(::System::IntPtr nativeTexture);

  /// @brief Method UpdateExternalTexture_Injected, addr 0x6f537bc, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTexture);

  /// @brief Method ValidateFormat, addr 0x6f55014, size 0x148, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width);

  /// @brief Method ValidateFormat, addr 0x6f54f44, size 0xd0, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width);

  /// @brief Method ValidateIsNotCrunched, addr 0x6f5539c, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5515c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5524c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// [RequiredByNativeCode]
  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f551c0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f552c0, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6f556b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6f556c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, /* [DefaultValue("false")] */ bool createUninitialized);

  /// @brief Method .ctor, addr 0x6f55578, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x6f55614, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, /* [DefaultValue("false")] */ bool createUninitialized);

  /// @brief Method .ctor, addr 0x6f553f0, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// [FreeFunction(Name = "GetTextureStreamingManager().GetDesiredMipmapLevel", HasExplicitThis = true)]
  /// @brief Method get_desiredMipmapLevel, addr 0x6f54b98, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_desiredMipmapLevel();

  /// @brief Method get_desiredMipmapLevel_Injected, addr 0x6f54c18, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_desiredMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetTextureFormat")]
  /// @brief Method get_format, addr 0x6f5342c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_format_Injected, addr 0x6f534ac, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPreProcessed, addr 0x6f54644, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPreProcessed();

  /// @brief Method get_isPreProcessed_Injected, addr 0x6f546c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPreProcessed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x6f53800, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6f53880, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadAllMips", HasExplicitThis = true)]
  /// @brief Method get_loadAllMips, addr 0x6f54a08, size 0x80, virtual false, abstract: false, final false
  inline bool get_loadAllMips();

  /// @brief Method get_loadAllMips_Injected, addr 0x6f54a88, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loadAllMips_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadedMipmapLevel", HasExplicitThis = true)]
  /// @brief Method get_loadedMipmapLevel, addr 0x6f54d10, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loadedMipmapLevel();

  /// @brief Method get_loadedMipmapLevel_Injected, addr 0x6f54d90, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loadedMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GetTextureStreamingManager().GetLoadingMipmapLevel", HasExplicitThis = true)]
  /// @brief Method get_loadingMipmapLevel, addr 0x6f54c54, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loadingMipmapLevel();

  /// @brief Method get_loadingMipmapLevel_Injected, addr 0x6f54cd4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loadingMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GetTextureStreamingManager().GetRequestedMipmapLevel", HasExplicitThis = true)]
  /// @brief Method get_requestedMipmapLevel, addr 0x6f54878, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_requestedMipmapLevel();

  /// @brief Method get_requestedMipmapLevel_Injected, addr 0x6f548f8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_requestedMipmapLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_streamingMipmaps, addr 0x6f54700, size 0x80, virtual false, abstract: false, final false
  inline bool get_streamingMipmaps();

  /// @brief Method get_streamingMipmapsPriority, addr 0x6f547bc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_streamingMipmapsPriority();

  /// @brief Method get_streamingMipmapsPriority_Injected, addr 0x6f5483c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_streamingMipmapsPriority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_streamingMipmaps_Injected, addr 0x6f54780, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_streamingMipmaps_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GetTextureStreamingManager().SetLoadAllMips", HasExplicitThis = true)]
  /// @brief Method set_loadAllMips, addr 0x6f54ac4, size 0x90, virtual false, abstract: false, final false
  inline void set_loadAllMips(bool value);

  /// @brief Method set_loadAllMips_Injected, addr 0x6f54b54, size 0x44, virtual false, abstract: false, final false
  static inline void set_loadAllMips_Injected(::System::IntPtr _unity_self, bool value);

  /// [FreeFunction(Name = "GetTextureStreamingManager().SetRequestedMipmapLevel", HasExplicitThis = true)]
  /// @brief Method set_requestedMipmapLevel, addr 0x6f54934, size 0x90, virtual false, abstract: false, final false
  inline void set_requestedMipmapLevel(int32_t value);

  /// @brief Method set_requestedMipmapLevel_Injected, addr 0x6f549c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_requestedMipmapLevel_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cubemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cubemap(Cubemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cubemap(Cubemap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Cubemap) == 0x18, "Size mismatch!");

} // namespace UnityEngine
