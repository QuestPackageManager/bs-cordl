#pragma once
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
// Type: UnityEngine.Experimental.Rendering::TextureCreationFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10403))
// CS Name: ::UnityEngine.Experimental.Rendering::TextureCreationFlags
struct CORDL_TYPE TextureCreationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureCreationFlags_Unwrapped
  enum struct __TextureCreationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MipChain = static_cast<int32_t>(0x1),
    __E_Crunch = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureCreationFlags_Unwrapped() const noexcept {
    return static_cast<__TextureCreationFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureCreationFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureCreationFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const None;

  /// @brief Field MipChain value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const MipChain;

  /// @brief Field Crunch value: static_cast<int32_t>(0x40)
  static ::UnityEngine::Experimental::Rendering::TextureCreationFlags const Crunch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::TextureCreationFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::TextureCreationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::TextureCreationFlags, "UnityEngine.Experimental.Rendering", "TextureCreationFlags");
