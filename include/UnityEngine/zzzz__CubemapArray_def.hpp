#pragma once
// IWYU pragma private; include "UnityEngine\CubemapArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapArray)
namespace System {
struct IntPtr;
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
// Forward declare root types
namespace UnityEngine {
class CubemapArray;
}
// Write type traits
MARK_REF_T(::UnityEngine::CubemapArray*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CubemapArray*, "UnityEngine", "CubemapArray");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CubemapArray
class CORDL_TYPE CubemapArray : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method Apply, addr 0x6ac2e58, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x6ac2df4, size 0x64, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x6ac2510, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x6ac25a8, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method Internal_Create, addr 0x6ac243c, size 0xd4, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method Internal_CreateImpl, addr 0x6ac23b8, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized);

  /// @brief Method SetPixels, addr 0x6ac278c, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement);

  /// @brief Method SetPixels, addr 0x6ac25fc, size 0x124, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x6ac2720, size 0x6c, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement,
                                        int32_t miplevel);

  /// @brief Method ValidateIsNotCrunched, addr 0x6ac2a04, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x6ac2794, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x6ac289c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x6ac2808, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x6ac2918, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x6ac2d50, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x6ac2ca0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  /// @brief Method .ctor, addr 0x6ac2bec, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized);

  /// @brief Method .ctor, addr 0x6ac2be4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  /// @brief Method .ctor, addr 0x6ac2a58, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized);

  /// @brief Method get_isReadable, addr 0x6ac22fc, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6ac237c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CubemapArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapArray(CubemapArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapArray(CubemapArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10228 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CubemapArray) == 0x18, "Size mismatch!");

} // namespace UnityEngine
