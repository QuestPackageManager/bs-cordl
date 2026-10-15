#pragma once
// IWYU pragma private; include "UnityEngine/Texture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class UnityException;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Texture;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture*, "UnityEngine", "Texture");
// [NativeHeader("Runtime/Graphics/Texture.h")]
// [NativeHeader("Runtime/Streaming/TextureStreamingManager.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture
class CORDL_TYPE Texture : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field GenerateAllMips, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_GenerateAllMips, put = setStaticF_GenerateAllMips)) int32_t GenerateAllMips;

  __declspec(property(get = get_activeTextureColorSpace)) ::UnityEngine::ColorSpace activeTextureColorSpace;

  __declspec(property(get = get_anisoLevel, put = set_anisoLevel)) int32_t anisoLevel;

  __declspec(property(get = get_dimension, put = set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_filterMode, put = set_filterMode)) ::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_mipMapBias, put = set_mipMapBias)) float_t mipMapBias;

  __declspec(property(get = get_mipmapCount)) int32_t mipmapCount;

  __declspec(property(get = get_texelSize)) ::UnityEngine::Vector2 texelSize;

  __declspec(property(get = get_updateCount)) uint32_t updateCount;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_wrapMode, put = set_wrapMode)) ::UnityEngine::TextureWrapMode wrapMode;

  __declspec(property(put = set_wrapModeU)) ::UnityEngine::TextureWrapMode wrapModeU;

  __declspec(property(put = set_wrapModeV)) ::UnityEngine::TextureWrapMode wrapModeV;

  __declspec(property(put = set_wrapModeW)) ::UnityEngine::TextureWrapMode wrapModeW;

  /// @brief Method CreateNativeArrayLengthOverflowException, addr 0x6f4caf4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException();

  /// @brief Method CreateNonReadableException, addr 0x6f4c95c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* t);

  /// [ThreadSafe]
  /// @brief Method GetDataHeight, addr 0x6f4af78, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetDataHeight();

  /// @brief Method GetDataHeight_Injected, addr 0x6f4b020, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetDataHeight_Injected(::System::IntPtr _unity_self);

  /// [ThreadSafe]
  /// @brief Method GetDataWidth, addr 0x6f4ae94, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetDataWidth();

  /// @brief Method GetDataWidth_Injected, addr 0x6f4af3c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetDataWidth_Injected(::System::IntPtr _unity_self);

  /// [ThreadSafe]
  /// @brief Method GetDimension, addr 0x6f4b05c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension GetDimension();

  /// @brief Method GetDimension_Injected, addr 0x6f4b104, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension GetDimension_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetNativeTexturePtr, addr 0x6f4be58, size 0xa8, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeTexturePtr();

  /// @brief Method GetNativeTexturePtr_Injected, addr 0x6f4bf00, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeTexturePtr_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPixelDataOffset, addr 0x6f4c42c, size 0xc0, virtual false, abstract: false, final false
  inline uint64_t GetPixelDataOffset(int32_t mipLevel, int32_t element);

  /// @brief Method GetPixelDataOffset_Injected, addr 0x6f4c4ec, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t GetPixelDataOffset_Injected(::System::IntPtr _unity_self, int32_t mipLevel, int32_t element);

  /// @brief Method GetPixelDataSize, addr 0x6f4c318, size 0xc0, virtual false, abstract: false, final false
  inline uint64_t GetPixelDataSize(int32_t mipLevel, int32_t element);

  /// @brief Method GetPixelDataSize_Injected, addr 0x6f4c3d8, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t GetPixelDataSize_Injected(::System::IntPtr _unity_self, int32_t mipLevel, int32_t element);

  /// @brief Method GetTextureColorSpace, addr 0x6f4c54c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetTextureColorSpace, addr 0x6f4c540, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(bool linear);

  /// @brief Method IgnoreMipmapLimitCannotBeToggledException, addr 0x6f4ca28, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* IgnoreMipmapLimitCannotBeToggledException(::UnityEngine::Texture* t);

  /// @brief Method IncrementUpdateCount, addr 0x6f4c020, size 0xa8, virtual false, abstract: false, final false
  inline void IncrementUpdateCount();

  /// @brief Method IncrementUpdateCount_Injected, addr 0x6f4c0c8, size 0x3c, virtual false, abstract: false, final false
  static inline void IncrementUpdateCount_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetActiveTextureColorSpace")]
  /// @brief Method Internal_GetActiveTextureColorSpace, addr 0x6f4c104, size 0xa8, virtual false, abstract: false, final false
  inline int32_t Internal_GetActiveTextureColorSpace();

  /// @brief Method Internal_GetActiveTextureColorSpace_Injected, addr 0x6f4c1ac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Internal_GetActiveTextureColorSpace_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Texture* New_ctor();

  /// @brief Method SetStreamingTextureMaterialDebugProperties, addr 0x6f4c23c, size 0x78, virtual false, abstract: false, final false
  static inline void SetStreamingTextureMaterialDebugProperties(int32_t materialTextureSlot);

  /// [FreeFunction("GetTextureStreamingManager().SetStreamingTextureMaterialDebugPropertiesWithSlot")]
  /// @brief Method SetStreamingTextureMaterialDebugPropertiesWithSlot, addr 0x6f4c200, size 0x3c, virtual false, abstract: false, final false
  static inline void SetStreamingTextureMaterialDebugPropertiesWithSlot(int32_t materialTextureSlot);

  /// @brief Method ValidateFormat, addr 0x6f4c7e8, size 0x174, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage usage);

  /// @brief Method ValidateFormat, addr 0x6f4c5cc, size 0x21c, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format);

  /// @brief Method .ctor, addr 0x6f4acfc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_GenerateAllMips();

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "Unity.UIElements" })]
  /// @brief Method get_activeTextureColorSpace, addr 0x6f4c1e8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorSpace get_activeTextureColorSpace();

  /// @brief Method get_anisoLevel, addr 0x6f4b98c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_anisoLevel();

  /// @brief Method get_anisoLevel_Injected, addr 0x6f4ba34, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_anisoLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_dimension, addr 0x6f4b1b8, size 0x4, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_filterMode, addr 0x6f4b7ac, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::FilterMode get_filterMode();

  /// @brief Method get_filterMode_Injected, addr 0x6f4b854, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::FilterMode get_filterMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_graphicsFormat, addr 0x6f4ae38, size 0x5c, virtual true, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_height, addr 0x6f4b17c, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_isReadable, addr 0x6f4b1f4, size 0xa8, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6f4b29c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mipMapBias, addr 0x6f4bb6c, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_mipMapBias();

  /// @brief Method get_mipMapBias_Injected, addr 0x6f4bc14, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_mipMapBias_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetMipmapCount")]
  /// @brief Method get_mipmapCount, addr 0x6f4ad54, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_mipmapCount();

  /// @brief Method get_mipmapCount_Injected, addr 0x6f4adfc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_mipmapCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "GetTextureStreamingManager().GetDiscardUnusedMips")]
  /// @brief Method get_streamingTextureDiscardUnusedMips, addr 0x6f4c2b4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_streamingTextureDiscardUnusedMips();

  /// [NativeName("GetTexelSize")]
  /// @brief Method get_texelSize, addr 0x6f4bd54, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_texelSize();

  /// @brief Method get_texelSize_Injected, addr 0x6f4be14, size 0x44, virtual false, abstract: false, final false
  static inline void get_texelSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_updateCount, addr 0x6f4bf3c, size 0xa8, virtual false, abstract: false, final false
  inline uint32_t get_updateCount();

  /// @brief Method get_updateCount_Injected, addr 0x6f4bfe4, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_updateCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_width, addr 0x6f4b140, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_width();

  /// [NativeName("GetWrapModeU")]
  /// @brief Method get_wrapMode, addr 0x6f4b2d8, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureWrapMode get_wrapMode();

  /// @brief Method get_wrapMode_Injected, addr 0x6f4b380, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextureWrapMode get_wrapMode_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_GenerateAllMips(int32_t value);

  /// @brief Method set_anisoLevel, addr 0x6f4ba70, size 0xb8, virtual false, abstract: false, final false
  inline void set_anisoLevel(int32_t value);

  /// @brief Method set_anisoLevel_Injected, addr 0x6f4bb28, size 0x44, virtual false, abstract: false, final false
  static inline void set_anisoLevel_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_dimension, addr 0x6f4b1bc, size 0x38, virtual true, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_filterMode, addr 0x6f4b890, size 0xb8, virtual false, abstract: false, final false
  inline void set_filterMode(::UnityEngine::FilterMode value);

  /// @brief Method set_filterMode_Injected, addr 0x6f4b948, size 0x44, virtual false, abstract: false, final false
  static inline void set_filterMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::FilterMode value);

  /// @brief Method set_height, addr 0x6f4b180, size 0x38, virtual true, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_mipMapBias, addr 0x6f4bc50, size 0xb8, virtual false, abstract: false, final false
  inline void set_mipMapBias(float_t value);

  /// @brief Method set_mipMapBias_Injected, addr 0x6f4bd08, size 0x4c, virtual false, abstract: false, final false
  static inline void set_mipMapBias_Injected(::System::IntPtr _unity_self, float_t value);

  /// [FreeFunction(Name = "GetTextureStreamingManager().SetDiscardUnusedMips")]
  /// @brief Method set_streamingTextureDiscardUnusedMips, addr 0x6f4c2dc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_streamingTextureDiscardUnusedMips(bool value);

  /// @brief Method set_width, addr 0x6f4b144, size 0x38, virtual true, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_wrapMode, addr 0x6f4b3bc, size 0xb8, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeU, addr 0x6f4b4b8, size 0xb8, virtual false, abstract: false, final false
  inline void set_wrapModeU(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeU_Injected, addr 0x6f4b570, size 0x44, virtual false, abstract: false, final false
  static inline void set_wrapModeU_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeV, addr 0x6f4b5b4, size 0xb8, virtual false, abstract: false, final false
  inline void set_wrapModeV(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeV_Injected, addr 0x6f4b66c, size 0x44, virtual false, abstract: false, final false
  static inline void set_wrapModeV_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeW, addr 0x6f4b6b0, size 0xb8, virtual false, abstract: false, final false
  inline void set_wrapModeW(::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapModeW_Injected, addr 0x6f4b768, size 0x44, virtual false, abstract: false, final false
  static inline void set_wrapModeW_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextureWrapMode value);

  /// @brief Method set_wrapMode_Injected, addr 0x6f4b474, size 0x44, virtual false, abstract: false, final false
  static inline void set_wrapMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextureWrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture(Texture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture(Texture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture) == 0x18, "Size mismatch!");

} // namespace UnityEngine
