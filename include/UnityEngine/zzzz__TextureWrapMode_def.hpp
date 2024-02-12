#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureWrapMode)
// Forward declare root types
namespace UnityEngine {
struct TextureWrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextureWrapMode);
// Type: UnityEngine::TextureWrapMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8850))
// CS Name: ::UnityEngine::TextureWrapMode
struct CORDL_TYPE TextureWrapMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureWrapMode_Unwrapped
  enum struct __TextureWrapMode_Unwrapped : int32_t {
    __E_Repeat = static_cast<int32_t>(0x0),
    __E_Clamp = static_cast<int32_t>(0x1),
    __E_Mirror = static_cast<int32_t>(0x2),
    __E_MirrorOnce = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureWrapMode_Unwrapped() const noexcept {
    return static_cast<__TextureWrapMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureWrapMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureWrapMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Repeat value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextureWrapMode const Repeat;

  /// @brief Field Clamp value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextureWrapMode const Clamp;

  /// @brief Field Mirror value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextureWrapMode const Mirror;

  /// @brief Field MirrorOnce value: static_cast<int32_t>(0x3)
  static ::UnityEngine::TextureWrapMode const MirrorOnce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextureWrapMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextureWrapMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextureWrapMode, "UnityEngine", "TextureWrapMode");
