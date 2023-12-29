#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DArray)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2DArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture2DArray);
// Type: UnityEngine::Texture2DArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10004))
// CS Name: ::UnityEngine::Texture2DArray*
class CORDL_TYPE Texture2DArray : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method get_allSlices addr 0x2b4ca40 size 0x28 virtual false final false
  static inline int32_t get_allSlices();

  /// @brief Method get_isReadable addr 0x2b4ca68 size 0x3c virtual true final false
  inline bool get_isReadable();

  /// @brief Method Internal_CreateImpl addr 0x2b4caa4 size 0x84 virtual false final false
  static inline bool Internal_CreateImpl(::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method Internal_Create addr 0x2b4cb28 size 0xd8 virtual false final false
  static inline void Internal_Create(::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method ValidateFormat addr 0x2b4cc00 size 0xe8 virtual false final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width, int32_t height);

  /// @brief Method ValidateFormat addr 0x2b4cce8 size 0x134 virtual false final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor addr 0x2b4ce1c size 0x54 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor addr 0x2b4ce70 size 0xa0 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor addr 0x2b4cf10 size 0xdc virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  /// @brief Method .ctor addr 0x2b4d044 size 0x148 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  /// @brief Method .ctor addr 0x2b4d18c size 0x14 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor addr 0x2b4d1a0 size 0x14 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method ValidateIsNotCrunched addr 0x2b4cfec size 0x58 virtual false final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2DArray(Texture2DArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2DArray(Texture2DArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DArray();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2DArray, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Texture2DArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
