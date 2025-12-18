#pragma once
// IWYU pragma private; include "UnityEngine/Texture3D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture3D)
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
struct Color32;
}
namespace UnityEngine {
struct Color;
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
class Texture3D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture3D);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture3D
class CORDL_TYPE Texture3D : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_format)) ::UnityEngine::TextureFormat format;

  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method Apply, addr 0x68f63ac, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x68f63a4, size 0x8, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x68f6340, size 0x64, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x68f4e5c, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x68f4ef4, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method CopyPixels, addr 0x68f66f4, size 0x80, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels, addr 0x68f6774, size 0xb0, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyPixels, addr 0x68f6824, size 0xf8, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstElement, int32_t dstMip,
                         int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Full, addr 0x68f5638, size 0xc0, virtual false, abstract: false, final false
  inline void CopyPixels_Full(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels_Full_Injected, addr 0x68f56f8, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src);

  /// @brief Method CopyPixels_Region, addr 0x68f58a0, size 0x128, virtual false, abstract: false, final false
  inline void CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstElement, int32_t dstMip,
                                int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Region_Injected, addr 0x68f59c8, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                                int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Slice, addr 0x68f573c, size 0xf0, virtual false, abstract: false, final false
  inline void CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyPixels_Slice_Injected, addr 0x68f582c, size 0x74, virtual false, abstract: false, final false
  static inline void CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CreateExternalTexture, addr 0x68f6240, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> CreateExternalTexture(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat format, bool mipChain, ::System::IntPtr nativeTex);

  /// @brief Method GetImageData, addr 0x68f5a88, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetImageData();

  /// @brief Method GetImageData_Injected, addr 0x68f5b08, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetImageData_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPixel, addr 0x68f650c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t z);

  /// @brief Method GetPixel, addr 0x68f6584, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t z, int32_t mipLevel);

  /// @brief Method GetPixelBilinear, addr 0x68f6600, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, float_t w);

  /// @brief Method GetPixelBilinear, addr 0x68f6674, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, float_t w, int32_t mipLevel);

  /// @brief Method GetPixelBilinearImpl, addr 0x68f4aa8, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t mip, float_t u, float_t v, float_t w);

  /// @brief Method GetPixelBilinearImpl_Injected, addr 0x68f4b7c, size 0x7c, virtual false, abstract: false, final false
  static inline void GetPixelBilinearImpl_Injected(::System::IntPtr _unity_self, int32_t mip, float_t u, float_t v, float_t w, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel);

  /// @brief Method GetPixelImpl, addr 0x68f4968, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t mip, int32_t x, int32_t y, int32_t z);

  /// @brief Method GetPixelImpl_Injected, addr 0x68f4a34, size 0x74, virtual false, abstract: false, final false
  static inline void GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t mip, int32_t x, int32_t y, int32_t z, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetPixels, addr 0x68f501c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels();

  /// @brief Method GetPixels, addr 0x68f4f48, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(int32_t miplevel);

  /// @brief Method GetPixels32, addr 0x68f50f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> GetPixels32();

  /// @brief Method GetPixels32, addr 0x68f5024, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> GetPixels32(int32_t miplevel);

  /// @brief Method GetPixels32_Injected, addr 0x68f50b4, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> GetPixels32_Injected(::System::IntPtr _unity_self, int32_t miplevel);

  /// @brief Method GetPixels_Injected, addr 0x68f4fd8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels_Injected(::System::IntPtr _unity_self, int32_t miplevel);

  /// @brief Method Internal_Create, addr 0x68f4c94, size 0xf4, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief Method Internal_CreateImpl, addr 0x68f4bf8, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex,
                                                   bool createUninitialized);

  /// @brief Method SetPixel, addr 0x68f63b8, size 0xa8, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x68f6460, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color, int32_t mipLevel);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T, ::Array<T>*> data, int32_t mipLevel, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl, addr 0x68f5504, size 0xc0, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray, addr 0x68f53d0, size 0xc0, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray_Injected, addr 0x68f5490, size 0x74, virtual false, abstract: false, final false
  static inline bool SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl_Injected, addr 0x68f55c4, size 0x74, virtual false, abstract: false, final false
  static inline bool SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelImpl, addr 0x68f482c, size 0xc8, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t mip, int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color);

  /// @brief Method SetPixelImpl_Injected, addr 0x68f48f4, size 0x74, virtual false, abstract: false, final false
  static inline void SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t mip, int32_t x, int32_t y, int32_t z, ::ByRef<::UnityEngine::Color> color);

  /// @brief Method SetPixels, addr 0x68f5260, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method SetPixels, addr 0x68f5100, size 0x10c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, int32_t miplevel);

  /// @brief Method SetPixels32, addr 0x68f53c8, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method SetPixels32, addr 0x68f5268, size 0x10c, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel);

  /// @brief Method SetPixels32_Injected, addr 0x68f5374, size 0x54, virtual false, abstract: false, final false
  static inline void SetPixels32_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x68f520c, size 0x54, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel);

  /// @brief Method UpdateExternalTexture, addr 0x68f4d88, size 0x90, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(::System::IntPtr nativeTex);

  /// @brief Method UpdateExternalTexture_Injected, addr 0x68f4e18, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTex);

  /// @brief Method ValidateIsNotCrunched, addr 0x68f5ddc, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f5b44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f5c64, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f5bc0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f5cf0, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f5ff8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x68f60b8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  /// @brief Method .ctor, addr 0x68f617c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, ::System::IntPtr nativeTex);

  /// @brief Method .ctor, addr 0x68f5e30, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f5e50, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex);

  /// @brief Method .ctor, addr 0x68f5e6c, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// @brief Method get_depth, addr 0x68f45f8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_depth_Injected, addr 0x68f4678, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_depth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_format, addr 0x68f46b4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_format_Injected, addr 0x68f4734, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x68f4770, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x68f47f0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture3D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture3D(Texture3D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture3D(Texture3D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture3D, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Texture3D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
