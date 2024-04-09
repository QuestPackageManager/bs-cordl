#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture3D)
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
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture3D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture3D);
// Type: UnityEngine::Texture3D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Texture3D*
class CORDL_TYPE Texture3D : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method Apply, addr 0x31e0ee0, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x31e0e54, size 0x8c, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x31e088c, size 0x54, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method Internal_Create, addr 0x31e07ac, size 0xe0, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  /// @brief Method Internal_CreateImpl, addr 0x31e0720, size 0x8c, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, void* nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                   ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, void* nativeTex);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  static inline ::UnityEngine::Texture3D* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, void* nativeTex);

  /// @brief Method SetPixels32, addr 0x31e0934, size 0x48, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method SetPixels32, addr 0x31e08e0, size 0x54, virtual false, abstract: false, final false
  inline void SetPixels32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, int32_t miplevel);

  /// @brief Method ValidateIsNotCrunched, addr 0x31e0b5c, size 0x58, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x31e097c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x31e09d0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x31e0a70, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x31e0e34, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x31e0e44, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, void* nativeTex);

  /// @brief Method .ctor, addr 0x31e0bb4, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount);

  /// @brief Method .ctor, addr 0x31e0d00, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, void* nativeTex);

  /// @brief Method get_isReadable, addr 0x31e06e4, size 0x3c, virtual true, abstract: false, final false
  inline bool get_isReadable();

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture3D, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Texture3D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
