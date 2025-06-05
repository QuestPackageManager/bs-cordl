#pragma once
// IWYU pragma private; include "UnityEngine/Texture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
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
MARK_REF_PTR_T(::UnityEngine::Texture);
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

  __declspec(property(put = set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_filterMode, put = set_filterMode)) ::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_mipmapCount)) int32_t mipmapCount;

  __declspec(property(get = get_texelSize)) ::UnityEngine::Vector2 texelSize;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_wrapMode, put = set_wrapMode)) ::UnityEngine::TextureWrapMode wrapMode;

  /// @brief Method CreateNativeArrayLengthOverflowException, addr 0x4891e50, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException();

  /// @brief Method CreateNonReadableException, addr 0x4891db0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* t);

  /// @brief Method GetDataHeight, addr 0x48914ac, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetDataHeight();

  /// @brief Method GetDataWidth, addr 0x4891470, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetDataWidth();

  /// @brief Method GetNativeTexturePtr, addr 0x4891854, size 0x3c, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeTexturePtr();

  /// @brief Method GetPixelDataOffset, addr 0x4891968, size 0x54, virtual false, abstract: false, final false
  inline uint64_t GetPixelDataOffset(int32_t mipLevel, int32_t element);

  /// @brief Method GetPixelDataSize, addr 0x4891914, size 0x54, virtual false, abstract: false, final false
  inline uint64_t GetPixelDataSize(int32_t mipLevel, int32_t element);

  /// @brief Method GetTextureColorSpace, addr 0x48919c8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetTextureColorSpace, addr 0x48919bc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(bool linear);

  /// @brief Method Internal_GetActiveTextureColorSpace, addr 0x4891890, size 0x3c, virtual false, abstract: false, final false
  inline int32_t Internal_GetActiveTextureColorSpace();

  static inline ::UnityEngine::Texture* New_ctor();

  /// @brief Method ValidateFormat, addr 0x4891bf0, size 0x1c0, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method ValidateFormat, addr 0x4891a28, size 0x1c8, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format);

  /// @brief Method .ctor, addr 0x48913dc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_GenerateAllMips();

  /// @brief Method get_activeTextureColorSpace, addr 0x48918cc, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorSpace get_activeTextureColorSpace();

  /// @brief Method get_anisoLevel, addr 0x4891744, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_anisoLevel();

  /// @brief Method get_filterMode, addr 0x48916c4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::FilterMode get_filterMode();

  /// @brief Method get_height, addr 0x489155c, size 0x3c, virtual true, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_isReadable, addr 0x4891608, size 0x3c, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_mipmapCount, addr 0x4891434, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_mipmapCount();

  /// @brief Method get_texelSize, addr 0x48917c4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_texelSize();

  /// @brief Method get_texelSize_Injected, addr 0x4891810, size 0x44, virtual false, abstract: false, final false
  inline void get_texelSize_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_width, addr 0x48914e8, size 0x3c, virtual true, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method get_wrapMode, addr 0x4891644, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureWrapMode get_wrapMode();

  static inline void setStaticF_GenerateAllMips(int32_t value);

  /// @brief Method set_anisoLevel, addr 0x4891780, size 0x44, virtual false, abstract: false, final false
  inline void set_anisoLevel(int32_t value);

  /// @brief Method set_dimension, addr 0x48915d0, size 0x38, virtual true, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_filterMode, addr 0x4891700, size 0x44, virtual false, abstract: false, final false
  inline void set_filterMode(::UnityEngine::FilterMode value);

  /// @brief Method set_height, addr 0x4891598, size 0x38, virtual true, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_width, addr 0x4891524, size 0x38, virtual true, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_wrapMode, addr 0x4891680, size 0x44, virtual false, abstract: false, final false
  inline void set_wrapMode(::UnityEngine::TextureWrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture(Texture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture(Texture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10791 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Texture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture*, "UnityEngine", "Texture");
