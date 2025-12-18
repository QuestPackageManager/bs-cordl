#pragma once
// IWYU pragma private; include "UnityEngine/TextGeneratorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGeneratorType)
// Forward declare root types
namespace UnityEngine {
struct TextGeneratorType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextGeneratorType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextGeneratorType
struct CORDL_TYPE TextGeneratorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextGeneratorType_Unwrapped
  enum struct __TextGeneratorType_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_Advanced = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextGeneratorType_Unwrapped() const noexcept {
    return static_cast<__TextGeneratorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGeneratorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextGeneratorType(int32_t value__) noexcept;

  /// @brief Field Advanced value: I32(1)
  static ::UnityEngine::TextGeneratorType const Advanced;

  /// @brief Field Standard value: I32(0)
  static ::UnityEngine::TextGeneratorType const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextGeneratorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextGeneratorType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGeneratorType, "UnityEngine", "TextGeneratorType");
