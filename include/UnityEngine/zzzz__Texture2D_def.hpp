#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
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
struct MipmapLimitDescriptor;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Texture2D_EXRFlags;
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct Texture2D_EXRFlags;
}
namespace UnityEngine {
class Texture2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Texture2D_EXRFlags);
MARK_REF_PTR_T(::UnityEngine::Texture2D);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Texture2D/EXRFlags
struct CORDL_TYPE Texture2D_EXRFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Texture2D_EXRFlags_Unwrapped
enum struct __Texture2D_EXRFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OutputAsFloat = static_cast<int32_t>(0x1),
__E_CompressZIP = static_cast<int32_t>(0x2),
__E_CompressRLE = static_cast<int32_t>(0x4),
__E_CompressPIZ = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Texture2D_EXRFlags_Unwrapped () const noexcept {
return static_cast<__Texture2D_EXRFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Texture2D_EXRFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Texture2D_EXRFlags(int32_t  value__) noexcept;

/// @brief Field CompressPIZ value: I32(8)
static ::UnityEngine::Texture2D_EXRFlags const CompressPIZ;

/// @brief Field CompressRLE value: I32(4)
static ::UnityEngine::Texture2D_EXRFlags const CompressRLE;

/// @brief Field CompressZIP value: I32(2)
static ::UnityEngine::Texture2D_EXRFlags const CompressZIP;

/// @brief Field None value: I32(0)
static ::UnityEngine::Texture2D_EXRFlags const None;

/// @brief Field OutputAsFloat value: I32(1)
static ::UnityEngine::Texture2D_EXRFlags const OutputAsFloat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Texture2D_EXRFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2D_EXRFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2D
class CORDL_TYPE Texture2D : public ::UnityEngine::Texture {
public:
// Declarations
using EXRFlags = ::UnityEngine::Texture2D_EXRFlags;

 __declspec(property(get=get_activeMipmapLimit)) int32_t  activeMipmapLimit;

 __declspec(property(get=get_calculatedMipmapLevel)) int32_t  calculatedMipmapLevel;

 __declspec(property(get=get_desiredMipmapLevel)) int32_t  desiredMipmapLevel;

 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_ignoreMipmapLimit, put=set_ignoreMipmapLimit)) bool  ignoreMipmapLimit;

 __declspec(property(get=get_isPreProcessed)) bool  isPreProcessed;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_loadAllMips, put=set_loadAllMips)) bool  loadAllMips;

 __declspec(property(get=get_loadedMipmapLevel)) int32_t  loadedMipmapLevel;

 __declspec(property(get=get_loadingMipmapLevel)) int32_t  loadingMipmapLevel;

 __declspec(property(get=get_minimumMipmapLevel, put=set_minimumMipmapLevel)) int32_t  minimumMipmapLevel;

 __declspec(property(get=get_mipmapLimitGroup)) ::StringW  mipmapLimitGroup;

 __declspec(property(get=get_requestedMipmapLevel, put=set_requestedMipmapLevel)) int32_t  requestedMipmapLevel;

 __declspec(property(get=get_streamingMipmaps)) bool  streamingMipmaps;

 __declspec(property(get=get_streamingMipmapsPriority)) int32_t  streamingMipmapsPriority;

 __declspec(property(get=get_vtOnly)) bool  vtOnly;

/// @brief Method Apply, addr 0x68f1ee0, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x68f1ed8, size 0x8, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0x68f1e74, size 0x64, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x68edec4, size 0x98, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0x68edf5c, size 0x54, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ClearMinimumMipmapLevel, addr 0x68efd28, size 0x80, virtual false, abstract: false, final false
inline void ClearMinimumMipmapLevel() ;

/// @brief Method ClearMinimumMipmapLevel_Injected, addr 0x68efda8, size 0x3c, virtual false, abstract: false, final false
static inline void ClearMinimumMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ClearRequestedMipmapLevel, addr 0x68efbb0, size 0x80, virtual false, abstract: false, final false
inline void ClearRequestedMipmapLevel() ;

/// @brief Method ClearRequestedMipmapLevel_Injected, addr 0x68efc30, size 0x3c, virtual false, abstract: false, final false
static inline void ClearRequestedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Compress, addr 0x68ed980, size 0x90, virtual false, abstract: false, final false
inline void Compress(bool  highQuality) ;

/// @brief Method Compress_Injected, addr 0x68eda10, size 0x44, virtual false, abstract: false, final false
static inline void Compress_Injected(::System::IntPtr  _unity_self, bool  highQuality) ;

/// @brief Method CopyPixels, addr 0x68f22c4, size 0x80, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels, addr 0x68f2344, size 0xa0, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstMip) ;

/// @brief Method CopyPixels, addr 0x68f23e4, size 0xe8, virtual false, abstract: false, final false
inline void CopyPixels(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyPixels_Full, addr 0x68f05dc, size 0xc0, virtual false, abstract: false, final false
inline void CopyPixels_Full(::UnityEngine::Texture*  src) ;

/// @brief Method CopyPixels_Full_Injected, addr 0x68f069c, size 0x44, virtual false, abstract: false, final false
static inline void CopyPixels_Full_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src) ;

/// @brief Method CopyPixels_Region, addr 0x68f082c, size 0x128, virtual false, abstract: false, final false
inline void CopyPixels_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyPixels_Region_Injected, addr 0x68f0954, size 0xb0, virtual false, abstract: false, final false
static inline void CopyPixels_Region_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyPixels_Slice, addr 0x68f06e0, size 0xe0, virtual false, abstract: false, final false
inline void CopyPixels_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstMip) ;

/// @brief Method CopyPixels_Slice_Injected, addr 0x68f07c0, size 0x6c, virtual false, abstract: false, final false
static inline void CopyPixels_Slice_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  dstMip) ;

/// @brief Method CreateExternalTexture, addr 0x68f16ac, size 0x104, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateExternalTexture(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  mipChain, bool  linear, ::System::IntPtr  nativeTex) ;

/// @brief Method GenerateAtlas, addr 0x68f2084, size 0x1b4, virtual false, abstract: false, final false
static inline bool GenerateAtlas(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  sizes, int32_t  padding, int32_t  atlasSize, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*  results) ;

/// @brief Method GenerateAtlasImpl, addr 0x68eefc4, size 0x1bc, virtual false, abstract: false, final false
static inline void GenerateAtlasImpl(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  sizes, int32_t  padding, int32_t  atlasSize, ::ByRef<::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>>  rect) ;

/// @brief Method GenerateAtlasImpl_Injected, addr 0x68ef180, size 0x5c, virtual false, abstract: false, final false
static inline void GenerateAtlasImpl_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  sizes, int32_t  padding, int32_t  atlasSize, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  rect) ;

/// @brief Method GetImageDataSize, addr 0x68eef08, size 0x80, virtual false, abstract: false, final false
inline uint64_t GetImageDataSize() ;

/// @brief Method GetImageDataSize_Injected, addr 0x68eef88, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t GetImageDataSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPixel, addr 0x68f1a78, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y) ;

/// @brief Method GetPixel, addr 0x68f1ae4, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y, int32_t  mipLevel) ;

/// @brief Method GetPixelBilinear, addr 0x68f1b5c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinear, addr 0x68f1bc4, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v, int32_t  mipLevel) ;

/// @brief Method GetPixelBilinearImpl, addr 0x68ee318, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t  image, int32_t  mip, float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl_Injected, addr 0x68ee3e4, size 0x74, virtual false, abstract: false, final false
static inline void GetPixelBilinearImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, float_t  u, float_t  v, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel) ;

/// @brief Method GetPixelImpl, addr 0x68ee1d8, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y) ;

/// @brief Method GetPixelImpl_Injected, addr 0x68ee2a4, size 0x74, virtual false, abstract: false, final false
static inline void GetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixels, addr 0x68f22bc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels() ;

/// @brief Method GetPixels, addr 0x68f2250, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  miplevel) ;

/// @brief Method GetPixels, addr 0x68f03c8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight) ;

/// @brief Method GetPixels, addr 0x68f0294, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, int32_t  miplevel) ;

/// @brief Method GetPixels32, addr 0x68f04a4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32() ;

/// @brief Method GetPixels32, addr 0x68f03d0, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32(int32_t  miplevel) ;

/// @brief Method GetPixels32_Injected, addr 0x68f0460, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32_Injected(::System::IntPtr  _unity_self, int32_t  miplevel) ;

/// @brief Method GetPixels_Injected, addr 0x68f0354, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, int32_t  miplevel) ;

/// @brief Method GetRawTextureData, addr 0x68f01d8, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetRawTextureData() ;

/// @brief Method GetRawTextureData_Injected, addr 0x68f0258, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetRawTextureData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetWritableImageData, addr 0x68eee34, size 0x90, virtual false, abstract: false, final false
inline ::System::IntPtr GetWritableImageData(int32_t  frame) ;

/// @brief Method GetWritableImageData_Injected, addr 0x68eeec4, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWritableImageData_Injected(::System::IntPtr  _unity_self, int32_t  frame) ;

/// @brief Method IgnoreMipmapLimit, addr 0x68ece54, size 0x80, virtual false, abstract: false, final false
inline bool IgnoreMipmapLimit() ;

/// @brief Method IgnoreMipmapLimit_Injected, addr 0x68eced4, size 0x3c, virtual false, abstract: false, final false
static inline bool IgnoreMipmapLimit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_Create, addr 0x68edcd8, size 0x74, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateEmptyImpl, addr 0x68eda54, size 0x3c, virtual false, abstract: false, final false
static inline bool Internal_CreateEmptyImpl(::UnityEngine::Texture2D*  mono) ;

/// @brief Method Internal_CreateImpl, addr 0x68eda90, size 0x1a0, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl_Injected, addr 0x68edc30, size 0xa8, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl_Injected(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName) ;

/// @brief Method IsRequestedMipmapLevelLoaded, addr 0x68efc6c, size 0x80, virtual false, abstract: false, final false
inline bool IsRequestedMipmapLevelLoaded() ;

/// @brief Method IsRequestedMipmapLevelLoaded_Injected, addr 0x68efcec, size 0x3c, virtual false, abstract: false, final false
static inline bool IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method LoadRawTextureData, addr 0x68f1d58, size 0x11c, virtual false, abstract: false, final false
inline void LoadRawTextureData(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method LoadRawTextureData, addr 0x68f1c38, size 0x120, virtual false, abstract: false, final false
inline void LoadRawTextureData(::System::IntPtr  data, int32_t  size) ;

/// @brief Method LoadRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void LoadRawTextureData(::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method LoadRawTextureDataImpl, addr 0x68ee994, size 0x98, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImpl(::System::IntPtr  data, uint64_t  size) ;

/// @brief Method LoadRawTextureDataImplArray, addr 0x68eea80, size 0x108, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImplArray(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method LoadRawTextureDataImplArray_Injected, addr 0x68eeb88, size 0x44, virtual false, abstract: false, final false
static inline bool LoadRawTextureDataImplArray_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  data) ;

/// @brief Method LoadRawTextureDataImpl_Injected, addr 0x68eea2c, size 0x54, virtual false, abstract: false, final false
static inline bool LoadRawTextureDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, uint64_t  size) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method PackTextures, addr 0x68f05d0, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding) ;

/// @brief Method PackTextures, addr 0x68f05c8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding, int32_t  maximumAtlasSize) ;

/// @brief Method PackTextures, addr 0x68f04ac, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding, int32_t  maximumAtlasSize, bool  makeNoLongerReadable) ;

/// @brief Method PackTextures_Injected, addr 0x68f055c, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding, int32_t  maximumAtlasSize, bool  makeNoLongerReadable) ;

/// @brief Method ReadPixels, addr 0x68f207c, size 0x8, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY) ;

/// @brief Method ReadPixels, addr 0x68f1fdc, size 0xa0, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl, addr 0x68ee690, size 0xc0, virtual false, abstract: false, final false
inline void ReadPixelsImpl(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl_Injected, addr 0x68ee750, size 0x6c, virtual false, abstract: false, final false
static inline void ReadPixelsImpl_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Rect>  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method Reinitialize, addr 0x68f1eec, size 0x64, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height) ;

/// @brief Method Reinitialize, addr 0x68f1f54, size 0x7c, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method Reinitialize, addr 0x68f1f50, size 0x4, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeImpl, addr 0x68edfb0, size 0x98, virtual false, abstract: false, final false
inline bool ReinitializeImpl(int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeImpl_Injected, addr 0x68ee048, size 0x54, virtual false, abstract: false, final false
static inline bool ReinitializeImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeWithFormatImpl, addr 0x68ee458, size 0xb0, virtual false, abstract: false, final false
inline bool ReinitializeWithFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeWithFormatImpl_Injected, addr 0x68ee508, size 0x6c, virtual false, abstract: false, final false
static inline bool ReinitializeWithFormatImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeWithTextureFormatImpl, addr 0x68ee574, size 0xb0, virtual false, abstract: false, final false
inline bool ReinitializeWithTextureFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method ReinitializeWithTextureFormatImpl_Injected, addr 0x68ee624, size 0x6c, virtual false, abstract: false, final false
static inline bool ReinitializeWithTextureFormatImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method Resize, addr 0x68f1fd0, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height) ;

/// @brief Method Resize, addr 0x68f1fd8, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method Resize, addr 0x68f1fd4, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method SetAllPixels32, addr 0x68efeb8, size 0x10c, virtual false, abstract: false, final false
inline void SetAllPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetAllPixels32_Injected, addr 0x68effc4, size 0x54, virtual false, abstract: false, final false
static inline void SetAllPixels32_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// @brief Method SetBlockOfPixels32, addr 0x68f0018, size 0x13c, virtual false, abstract: false, final false
inline void SetBlockOfPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetBlockOfPixels32_Injected, addr 0x68f0154, size 0x84, virtual false, abstract: false, final false
static inline void SetBlockOfPixels32_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// @brief Method SetIgnoreMipmapLimitAndReload, addr 0x68ecf10, size 0x90, virtual false, abstract: false, final false
inline void SetIgnoreMipmapLimitAndReload(bool  value) ;

/// @brief Method SetIgnoreMipmapLimitAndReload_Injected, addr 0x68ecfa0, size 0x44, virtual false, abstract: false, final false
static inline void SetIgnoreMipmapLimitAndReload_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method SetPixel, addr 0x68f17b0, size 0x9c, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixel, addr 0x68f184c, size 0xa8, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color, int32_t  mipLevel) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::ArrayW<T,::Array<T>*>  data, int32_t  mipLevel, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl, addr 0x68eed00, size 0xc0, virtual false, abstract: false, final false
inline bool SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImplArray, addr 0x68eebcc, size 0xc0, virtual false, abstract: false, final false
inline bool SetPixelDataImplArray(::System::Array*  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImplArray_Injected, addr 0x68eec8c, size 0x74, virtual false, abstract: false, final false
static inline bool SetPixelDataImplArray_Injected(::System::IntPtr  _unity_self, ::System::Array*  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl_Injected, addr 0x68eedc0, size 0x74, virtual false, abstract: false, final false
static inline bool SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelImpl, addr 0x68ee09c, size 0xc8, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0x68ee164, size 0x74, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::ByRef<::UnityEngine::Color>  color) ;

/// @brief Method SetPixels, addr 0x68f1a1c, size 0x5c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method SetPixels, addr 0x68f19a0, size 0x7c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels, addr 0x68f1998, size 0x8, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method SetPixels, addr 0x68f18f4, size 0xa4, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0x68f223c, size 0x8, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors) ;

/// @brief Method SetPixels32, addr 0x68f2238, size 0x4, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0x68f2248, size 0x8, virtual false, abstract: false, final false
inline void SetPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors) ;

/// @brief Method SetPixels32, addr 0x68f2244, size 0x4, virtual false, abstract: false, final false
inline void SetPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixelsImpl, addr 0x68ee7bc, size 0x14c, virtual false, abstract: false, final false
inline void SetPixelsImpl(int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method SetPixelsImpl_Injected, addr 0x68ee908, size 0x8c, virtual false, abstract: false, final false
static inline void SetPixelsImpl_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method UpdateExternalTexture, addr 0x68efde4, size 0x90, virtual false, abstract: false, final false
inline void UpdateExternalTexture(::System::IntPtr  nativeTex) ;

/// @brief Method UpdateExternalTexture_Injected, addr 0x68efe74, size 0x44, virtual false, abstract: false, final false
static inline void UpdateExternalTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  nativeTex) ;

/// @brief Method ValidateFormat, addr 0x68f0ae0, size 0x15c, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0x68f0a04, size 0xdc, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x68f1564, size 0x148, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x68f0d50, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x68f0e6c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x68f0f9c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x68f0efc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x68f0dc4, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x68f0c3c, size 0x114, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x68f103c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x68f109c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x68f1068, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x68f14ac, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x68f1320, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

/// @brief Method .ctor, addr 0x68f13e4, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x68f1290, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0x68f12b4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x68f12ec, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method .ctor, addr 0x68f12d8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x68f10cc, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method get_activeMipmapLimit, addr 0x68ed15c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_activeMipmapLimit() ;

/// @brief Method get_activeMipmapLimit_Injected, addr 0x68ed1dc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_activeMipmapLimit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_blackTexture, addr 0x68ed354, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_blackTexture() ;

/// @brief Method get_blackTexture_Injected, addr 0x68ed468, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_blackTexture_Injected() ;

/// @brief Method get_calculatedMipmapLevel, addr 0x68ef8c0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_calculatedMipmapLevel() ;

/// @brief Method get_calculatedMipmapLevel_Injected, addr 0x68ef940, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_calculatedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_desiredMipmapLevel, addr 0x68ef97c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_desiredMipmapLevel() ;

/// @brief Method get_desiredMipmapLevel_Injected, addr 0x68ef9fc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_desiredMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_format, addr 0x68ecd98, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_format_Injected, addr 0x68ece18, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_grayTexture, addr 0x68ed5cc, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_grayTexture() ;

/// @brief Method get_grayTexture_Injected, addr 0x68ed6e0, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_grayTexture_Injected() ;

/// @brief Method get_ignoreMipmapLimit, addr 0x68f24cc, size 0x4, virtual false, abstract: false, final false
inline bool get_ignoreMipmapLimit() ;

/// @brief Method get_isPreProcessed, addr 0x68ef1dc, size 0x80, virtual false, abstract: false, final false
inline bool get_isPreProcessed() ;

/// @brief Method get_isPreProcessed_Injected, addr 0x68ef25c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPreProcessed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0x68edd4c, size 0x80, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x68eddcc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearGrayTexture, addr 0x68ed708, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_linearGrayTexture() ;

/// @brief Method get_linearGrayTexture_Injected, addr 0x68ed81c, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_linearGrayTexture_Injected() ;

/// @brief Method get_loadAllMips, addr 0x68ef730, size 0x80, virtual false, abstract: false, final false
inline bool get_loadAllMips() ;

/// @brief Method get_loadAllMips_Injected, addr 0x68ef7b0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loadAllMips_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loadedMipmapLevel, addr 0x68efaf4, size 0x80, virtual false, abstract: false, final false
inline int32_t get_loadedMipmapLevel() ;

/// @brief Method get_loadedMipmapLevel_Injected, addr 0x68efb74, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_loadedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loadingMipmapLevel, addr 0x68efa38, size 0x80, virtual false, abstract: false, final false
inline int32_t get_loadingMipmapLevel() ;

/// @brief Method get_loadingMipmapLevel_Injected, addr 0x68efab8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_loadingMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_minimumMipmapLevel, addr 0x68ef5a0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_minimumMipmapLevel() ;

/// @brief Method get_minimumMipmapLevel_Injected, addr 0x68ef620, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_minimumMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mipmapLimitGroup, addr 0x68ecfe4, size 0x134, virtual false, abstract: false, final false
inline ::StringW get_mipmapLimitGroup() ;

/// @brief Method get_mipmapLimitGroup_Injected, addr 0x68ed118, size 0x44, virtual false, abstract: false, final false
static inline void get_mipmapLimitGroup_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_normalTexture, addr 0x68ed844, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_normalTexture() ;

/// @brief Method get_normalTexture_Injected, addr 0x68ed958, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_normalTexture_Injected() ;

/// @brief Method get_redTexture, addr 0x68ed490, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_redTexture() ;

/// @brief Method get_redTexture_Injected, addr 0x68ed5a4, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_redTexture_Injected() ;

/// @brief Method get_requestedMipmapLevel, addr 0x68ef410, size 0x80, virtual false, abstract: false, final false
inline int32_t get_requestedMipmapLevel() ;

/// @brief Method get_requestedMipmapLevel_Injected, addr 0x68ef490, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_requestedMipmapLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingMipmaps, addr 0x68ef298, size 0x80, virtual false, abstract: false, final false
inline bool get_streamingMipmaps() ;

/// @brief Method get_streamingMipmapsPriority, addr 0x68ef354, size 0x80, virtual false, abstract: false, final false
inline int32_t get_streamingMipmapsPriority() ;

/// @brief Method get_streamingMipmapsPriority_Injected, addr 0x68ef3d4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_streamingMipmapsPriority_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingMipmaps_Injected, addr 0x68ef318, size 0x3c, virtual false, abstract: false, final false
static inline bool get_streamingMipmaps_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vtOnly, addr 0x68ede08, size 0x80, virtual false, abstract: false, final false
inline bool get_vtOnly() ;

/// @brief Method get_vtOnly_Injected, addr 0x68ede88, size 0x3c, virtual false, abstract: false, final false
static inline bool get_vtOnly_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_whiteTexture, addr 0x68ed218, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_whiteTexture() ;

/// @brief Method get_whiteTexture_Injected, addr 0x68ed32c, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_whiteTexture_Injected() ;

/// @brief Method set_ignoreMipmapLimit, addr 0x68f24d0, size 0x5c, virtual false, abstract: false, final false
inline void set_ignoreMipmapLimit(bool  value) ;

/// @brief Method set_loadAllMips, addr 0x68ef7ec, size 0x90, virtual false, abstract: false, final false
inline void set_loadAllMips(bool  value) ;

/// @brief Method set_loadAllMips_Injected, addr 0x68ef87c, size 0x44, virtual false, abstract: false, final false
static inline void set_loadAllMips_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_minimumMipmapLevel, addr 0x68ef65c, size 0x90, virtual false, abstract: false, final false
inline void set_minimumMipmapLevel(int32_t  value) ;

/// @brief Method set_minimumMipmapLevel_Injected, addr 0x68ef6ec, size 0x44, virtual false, abstract: false, final false
static inline void set_minimumMipmapLevel_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_requestedMipmapLevel, addr 0x68ef4cc, size 0x90, virtual false, abstract: false, final false
inline void set_requestedMipmapLevel(int32_t  value) ;

/// @brief Method set_requestedMipmapLevel_Injected, addr 0x68ef55c, size 0x44, virtual false, abstract: false, final false
static inline void set_requestedMipmapLevel_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2D(Texture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2D(Texture2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10208};

/// @brief Field streamingMipmapsPriorityMax offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMax{static_cast<int32_t>(0x7f)};

/// @brief Field streamingMipmapsPriorityMin offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMin{static_cast<int32_t>(0xffffff80)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2D, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2D_EXRFlags, "UnityEngine", "Texture2D/EXRFlags");
NEED_NO_BOX(::UnityEngine::Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
