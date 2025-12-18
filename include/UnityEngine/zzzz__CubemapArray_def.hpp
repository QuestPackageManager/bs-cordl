#pragma once
// IWYU pragma private; include "UnityEngine/CubemapArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
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
MARK_REF_PTR_T(::UnityEngine::CubemapArray);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CubemapArray
class CORDL_TYPE CubemapArray : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method Apply, addr 0x68f82a4, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x68f8240, size 0x64, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x68f795c, size 0x98, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl_Injected, addr 0x68f79f4, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method Internal_Create, addr 0x68f7888, size 0xd4, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method Internal_CreateImpl, addr 0x68f7804, size 0x84, virtual false, abstract: false, final false
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

  /// @brief Method SetPixels, addr 0x68f7bd8, size 0x8, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement);

  /// @brief Method SetPixels, addr 0x68f7a48, size 0x124, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement, int32_t miplevel);

  /// @brief Method SetPixels_Injected, addr 0x68f7b6c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetPixels_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors, ::UnityEngine::CubemapFace face, int32_t arrayElement,
                                        int32_t miplevel);

  /// @brief Method ValidateIsNotCrunched, addr 0x68f7e50, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f7be0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f7ce8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f7c54, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x68f7d64, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// @brief Method .ctor, addr 0x68f819c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x68f80ec, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  /// @brief Method .ctor, addr 0x68f8038, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized);

  /// @brief Method .ctor, addr 0x68f8030, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  /// @brief Method .ctor, addr 0x68f7ea4, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized);

  /// @brief Method get_isReadable, addr 0x68f7748, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x68f77c8, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CubemapArray, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CubemapArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CubemapArray*, "UnityEngine", "CubemapArray");
