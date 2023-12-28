#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10074))
// CS Name: ::UnityEngine::Cubemap*
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_format))::UnityEngine::TextureFormat format;

  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method get_format addr 0x2cb0b30 size 0x3c virtual false final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method Internal_CreateImpl addr 0x2cb0b6c size 0x74 virtual false final false
  static inline bool Internal_CreateImpl(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method Internal_Create addr 0x2cb0be0 size 0xc8 virtual false final false
  static inline void Internal_Create(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method get_isReadable addr 0x2cb0ca8 size 0x3c virtual true final false
  inline bool get_isReadable();

  /// @brief Method SmoothEdges addr 0x2cb0ce4 size 0x44 virtual false final false
  inline void SmoothEdges(int32_t smoothRegionWidthInPixels);

  /// @brief Method SmoothEdges addr 0x2cb0d28 size 0x40 virtual false final false
  inline void SmoothEdges();

  /// @brief Method GetPixels addr 0x2cb0d68 size 0x54 virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetPixels addr 0x2cb0dbc size 0x48 virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face);

  /// @brief Method SetPixels addr 0x2cb0e04 size 0x5c virtual false final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SetPixels addr 0x2cb0e60 size 0x58 virtual false final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face);

  /// @brief Method ValidateFormat addr 0x2cb0eb8 size 0xd4 virtual false final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width);

  /// @brief Method ValidateFormat addr 0x2cb0f8c size 0x128 virtual false final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor addr 0x2cb10b4 size 0x3c virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor addr 0x2cb10f0 size 0xe8 virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  /// @brief Method .ctor addr 0x2cb11d8 size 0x78 virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  /// @brief Method .ctor addr 0x2cb1378 size 0xdc virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, void* nativeTex);

  /// @brief Method .ctor addr 0x2cb1250 size 0x128 virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, void* nativeTex);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, void* nativeTex);

  /// @brief Method .ctor addr 0x2cb14ac size 0x10 virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, void* nativeTex);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor addr 0x2cb14bc size 0x80 virtual false final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method CreateExternalTexture addr 0x2cb153c size 0x10c virtual false final false
  static inline ::UnityEngine::Cubemap* CreateExternalTexture(int32_t width, ::UnityEngine::TextureFormat format, bool mipmap, void* nativeTex);

  /// @brief Method ValidateIsNotCrunched addr 0x2cb1454 size 0x58 virtual false final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

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
