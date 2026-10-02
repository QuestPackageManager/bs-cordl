#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/MarginDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarginDirection)
// Forward declare root types
namespace UnityEngine::TextCore {
struct MarginDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::MarginDirection);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::MarginDirection, "UnityEngine.TextCore", "MarginDirection");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.MarginDirection
struct CORDL_TYPE MarginDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MarginDirection_Unwrapped
  enum struct __MarginDirection_Unwrapped : int32_t {
    __E_Both = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MarginDirection_Unwrapped() const noexcept {
    return static_cast<__MarginDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarginDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr MarginDirection(int32_t value__) noexcept;

  /// @brief Field Both value: I32(0)
  static ::UnityEngine::TextCore::MarginDirection const Both;

  /// @brief Field Left value: I32(1)
  static ::UnityEngine::TextCore::MarginDirection const Left;

  /// @brief Field Right value: I32(2)
  static ::UnityEngine::TextCore::MarginDirection const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::MarginDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::MarginDirection) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore
