#pragma once
// IWYU pragma private; include "UnityEngine/Texture3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::UnityEngine::Texture3D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
// [NativeHeader("Runtime/Graphics/Texture3D.h")]
// [ExcludeFromPreset]
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

  /// [ExcludeFromDocs]
  /// @brief Method Apply, addr 0x6f19bf0, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// [ExcludeFromDocs]
  /// @brief Method Apply, addr 0x6f19be8, size 0x8, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x6f19b84, size 0x64, virtual false, abstract: false, final false
  inline void Apply(/* [DefaultValue("true")] */ bool updateMipmaps, /* [DefaultValue("false")] */ bool makeNoLongerReadable);

  /// [FreeFunction(Name = "Texture3DScripting::Apply", HasExplicitThis = true)]
  /// @brief Method ApplyImpl, addr 0x6f186a0, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x6f18738, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method CopyPixels, addr 0x6f19f38, size 0x80, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels, addr 0x6f19fb8, size 0xb0, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyPixels, addr 0x6f1a068, size 0x828, virtual false, abstract: false, final false
  inline void CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstElement, int32_t dstMip,
                         int32_t dstX, int32_t dstY);

  /// [FreeFunction(Name = "Texture3DScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CopyPixels_Full, addr 0x6f18e7c, size 0xc0, virtual false, abstract: false, final false
  inline void CopyPixels_Full(::UnityEngine::Texture* src);

  /// @brief Method CopyPixels_Full_Injected, addr 0x6f18f3c, size 0x44, virtual false, abstract: false, final false
  static inline void CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src);

  /// [FreeFunction(Name = "Texture3DScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CopyPixels_Region, addr 0x6f190e4, size 0x128, virtual false, abstract: false, final false
  inline void CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstElement, int32_t dstMip,
                                int32_t dstX, int32_t dstY);

  /// @brief Method CopyPixels_Region_Injected, addr 0x6f1920c, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                                int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// [FreeFunction(Name = "Texture3DScripting::CopyPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CopyPixels_Slice, addr 0x6f18f80, size 0xf0, virtual false, abstract: false, final false
  inline void CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyPixels_Slice_Injected, addr 0x6f19070, size 0x74, virtual false, abstract: false, final false
  static inline void CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstElement, int32_t dstMip);

  /// @brief Method CreateExternalTexture, addr 0x6f19a84, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> CreateExternalTexture(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat format, bool mipChain, ::System::IntPtr nativeTex);

  /// @brief Method GetImageData, addr 0x6f192cc, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetImageData();

  /// @brief Method GetImageData_Injected, addr 0x6f1934c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetImageData_Injected(::System::IntPtr _unity_self);

  /// [ExcludeFromDocs]
  /// @brief Method GetPixel, addr 0x6f19d50, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t z);

  /// @brief Method GetPixel, addr 0x6f19dc8, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(int32_t x, int32_t y, int32_t z, /* [DefaultValue("0")] */ int32_t mipLevel);

  /// [ExcludeFromDocs]
  /// @brief Method GetPixelBilinear, addr 0x6f19e44, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, float_t w);

  /// @brief Method GetPixelBilinear, addr 0x6f19eb8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinear(float_t u, float_t v, float_t w, /* [DefaultValue("0")] */ int32_t mipLevel);

  /// [NativeName("GetPixelBilinear")]
  /// @brief Method GetPixelBilinearImpl, addr 0x6f182ec, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t mip, float_t u, float_t v, float_t w);

  /// @brief Method GetPixelBilinearImpl_Injected, addr 0x6f183c0, size 0x7c, virtual false, abstract: false, final false
  static inline void GetPixelBilinearImpl_Injected(::System::IntPtr _unity_self, int32_t mip, float_t u, float_t v, float_t w, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel);

  /// [NativeName("GetPixel")]
  /// @brief Method GetPixelImpl, addr 0x6f181ac, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t mip, int32_t x, int32_t y, int32_t z);

  /// @brief Method GetPixelImpl_Injected, addr 0x6f18278, size 0x74, virtual false, abstract: false, final false
  static inline void GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t mip, int32_t x, int32_t y, int32_t z, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method GetPixels, addr 0x6f18860, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetPixels();

  /// [FreeFunction(Name = "Texture3DScripting::GetPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetPixels, addr 0x6f1878c, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t miplevel);

  /// @brief Method GetPixels32, addr 0x6f1893c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> GetPixels32();

  /// [FreeFunction(Name = "Texture3DScripting::GetPixels32", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetPixels32, addr 0x6f18868, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> GetPixels32(int32_t miplevel);

  /// @brief Method GetPixels32_Injected, addr 0x6f188f8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color32> GetPixels32_Injected(::System::IntPtr _unity_self, int32_t miplevel);

  /// @brief Method GetPixels_Injected, addr 0x6f1881c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr _unity_self, int32_t miplevel);

  /// @brief Method Internal_Create, addr 0x6f184d8, size 0xf4, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// [FreeFunction("Texture3DScripting::Create")]
  /// @brief Method Internal_CreateImpl, addr 0x6f1843c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount,
                                         ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// [RequiredByNativeCode]
  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, /* [DefaultValue("Texture.GenerateAllMips")] */ int32_t mipCount);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain,
                                                   /* [DefaultValue("false")] */ bool createUninitialized);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain,
                                                   /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr nativeTex);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount,
                                                   /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount,
                                                   /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr nativeTex, /* [DefaultValue("false")] */ bool createUninitialized);

  /// [ExcludeFromDocs]
  /// @brief Method SetPixel, addr 0x6f19bfc, size 0xa8, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x6f19ca4, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color, /* [DefaultValue("0")] */ int32_t mipLevel);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T> data, int32_t mipLevel, /* [DefaultValue("0")] */ int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, /* [DefaultValue("0")] */ int32_t sourceDataStartIndex);

  /// [FreeFunction(Name = "Texture3DScripting::SetPixelData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixelDataImpl, addr 0x6f18d48, size 0xc0, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// [FreeFunction(Name = "Texture3DScripting::SetPixelDataArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixelDataImplArray, addr 0x6f18c14, size 0xc0, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray_Injected, addr 0x6f18cd4, size 0x74, virtual false, abstract: false, final false
  static inline bool SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl_Injected, addr 0x6f18e08, size 0x74, virtual false, abstract: false, final false
  static inline bool SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// [NativeName("SetPixel")]
  /// @brief Method SetPixelImpl, addr 0x6f18070, size 0xc8, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t mip, int32_t x, int32_t y, int32_t z, ::UnityEngine::Color color);

  /// @brief Method SetPixelImpl_Injected, addr 0x6f18138, size 0x74, virtual false, abstract: false, final false
  static inline void SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t mip, int32_t x, int32_t y, int32_t z, ::by_ref<::UnityEngine::Color> color);

  /// @brief Method SetPixels, addr 0x6f18aa4, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors);

  /// [FreeFunction(Name = "Texture3DScripting::SetPixels", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixels, addr 0x6f18944, size 0x10c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors, int32_t miplevel);

  /// @brief Method SetPixels32, addr 0x6f18c0c, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32> colors);

  /// [FreeFunction(Name = "Texture3DScripting::SetPixels32", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPixels32, addr 0x6f18aac, size 0x10c, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32> colors, int32_t miplevel);

  /// @brief Method SetPixels32_Injected, addr 0x6f18bb8, size 0x54, virtual false, abstract: false, final false
  static inline void SetPixels32_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x6f18a50, size 0x54, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, int32_t miplevel);

  /// [FreeFunction("Texture3DScripting::UpdateExternalTexture", HasExplicitThis = true)]
  /// @brief Method UpdateExternalTexture, addr 0x6f185cc, size 0x90, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(::System::IntPtr nativeTex);

  /// @brief Method UpdateExternalTexture_Injected, addr 0x6f1865c, size 0x44, virtual false, abstract: false, final false
  static inline void UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTex);

  /// @brief Method ValidateIsNotCrunched, addr 0x6f19620, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f19388, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f194a8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// [RequiredByNativeCode]
  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f19404, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f19534, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    /* [DefaultValue("Texture.GenerateAllMips")] */ int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1983c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x6f198fc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, /* [DefaultValue("false")] */ bool createUninitialized);

  /// @brief Method .ctor, addr 0x6f199c0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr nativeTex);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f19674, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6f19694, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr nativeTex);

  /// @brief Method .ctor, addr 0x6f196b0, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, /* [DefaultValue("IntPtr.Zero")] */ ::System::IntPtr nativeTex,
                    /* [DefaultValue("false")] */ bool createUninitialized);

  /// [NativeName("GetTextureLayerCount")]
  /// @brief Method get_depth, addr 0x6f17e3c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_depth_Injected, addr 0x6f17ebc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_depth_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetTextureFormat")]
  /// @brief Method get_format, addr 0x6f17ef8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_format_Injected, addr 0x6f17f78, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x6f17fb4, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6f18034, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture3D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture3D(Texture3D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture3D(Texture3D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture3D) == 0x18, "Size mismatch!");

} // namespace UnityEngine
