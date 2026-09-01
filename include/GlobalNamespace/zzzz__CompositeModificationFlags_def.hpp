#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeModificationFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeModificationFlags)
// Forward declare root types
namespace GlobalNamespace {
struct CompositeModificationFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CompositeModificationFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeModificationFlags, "", "CompositeModificationFlags");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: CompositeModificationFlags
struct CORDL_TYPE CompositeModificationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompositeModificationFlags_Unwrapped
  enum struct __CompositeModificationFlags_Unwrapped : int32_t {
    __E_RotationX = static_cast<int32_t>(0x2),
    __E_RotationY = static_cast<int32_t>(0x4),
    __E_RotationZ = static_cast<int32_t>(0x8),
    __E_TranslationX = static_cast<int32_t>(0x10),
    __E_TranslationY = static_cast<int32_t>(0x20),
    __E_TranslationZ = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompositeModificationFlags_Unwrapped() const noexcept {
    return static_cast<__CompositeModificationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeModificationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompositeModificationFlags(int32_t value__) noexcept;

  /// @brief Field RotationX value: I32(2)
  static ::GlobalNamespace::CompositeModificationFlags const RotationX;

  /// @brief Field RotationY value: I32(4)
  static ::GlobalNamespace::CompositeModificationFlags const RotationY;

  /// @brief Field RotationZ value: I32(8)
  static ::GlobalNamespace::CompositeModificationFlags const RotationZ;

  /// @brief Field TranslationX value: I32(16)
  static ::GlobalNamespace::CompositeModificationFlags const TranslationX;

  /// @brief Field TranslationY value: I32(32)
  static ::GlobalNamespace::CompositeModificationFlags const TranslationY;

  /// @brief Field TranslationZ value: I32(64)
  static ::GlobalNamespace::CompositeModificationFlags const TranslationZ;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeModificationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeModificationFlags) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
