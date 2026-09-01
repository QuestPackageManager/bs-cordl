#pragma once
// IWYU pragma private; include "GlobalNamespace\NullAllowedContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NullAllowedContext)
// Forward declare root types
namespace GlobalNamespace {
struct NullAllowedContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NullAllowedContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NullAllowedContext, "", "NullAllowedContext");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NullAllowedContext
struct CORDL_TYPE NullAllowedContext {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NullAllowedContext_Unwrapped
  enum struct __NullAllowedContext_Unwrapped : int32_t {
    __E_Everywhere = static_cast<int32_t>(0x0),
    __E_Prefab = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NullAllowedContext_Unwrapped() const noexcept {
    return static_cast<__NullAllowedContext_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowedContext();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NullAllowedContext(int32_t value__) noexcept;

  /// @brief Field Everywhere value: I32(0)
  static ::GlobalNamespace::NullAllowedContext const Everywhere;

  /// @brief Field Prefab value: I32(1)
  static ::GlobalNamespace::NullAllowedContext const Prefab;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23511 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullAllowedContext, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NullAllowedContext) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
