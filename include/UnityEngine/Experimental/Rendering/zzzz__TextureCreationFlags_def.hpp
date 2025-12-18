#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureCreationFlags)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::TextureCreationFlags);
// Dependencies
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.TextureCreationFlags
struct CORDL_TYPE TextureCreationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureCreationFlags_Unwrapped
  enum struct __TextureCreationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MipChain = static_cast<int32_t>(0x1),
    __E_DontInitializePixels = static_cast<int32_t>(0x4),
    __E_Crunch = static_cast<int32_t>(0x40),
    __E_DontUploadUponCreate = static_cast<int32_t>(0x400),
    __E_IgnoreMipmapLimit = static_cast<int32_t>(0x800),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureCreationFlags_Unwrapped() const noexcept {
    return static_cast<__TextureCreationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureCreationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureCreationFlags(int32_t value__) noexcept;

  /// @brief Field Crunch value: I32(64)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const Crunch;

  /// @brief Field DontInitializePixels value: I32(4)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const DontInitializePixels;

  /// @brief Field DontUploadUponCreate value: I32(1024)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const DontUploadUponCreate;

  /// @brief Field IgnoreMipmapLimit value: I32(2048)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const IgnoreMipmapLimit;

  /// @brief Field MipChain value: I32(1)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const MipChain;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::TextureCreationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::TextureCreationFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::TextureCreationFlags, "UnityEngine.Experimental.Rendering", "TextureCreationFlags");
