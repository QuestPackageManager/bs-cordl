#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerDlcOwnership.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerDlcOwnership)
// Forward declare root types
namespace GlobalNamespace {
struct MockPlayerDlcOwnership;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MockPlayerDlcOwnership);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlayerDlcOwnership, "", "MockPlayerDlcOwnership");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerDlcOwnership
struct CORDL_TYPE MockPlayerDlcOwnership {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MockPlayerDlcOwnership_Unwrapped
  enum struct __MockPlayerDlcOwnership_Unwrapped : int32_t {
    __E_SameAsLocalPlayer = static_cast<int32_t>(0x0),
    __E_FreeSongsOnly = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MockPlayerDlcOwnership_Unwrapped() const noexcept {
    return static_cast<__MockPlayerDlcOwnership_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerDlcOwnership();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlayerDlcOwnership(int32_t value__) noexcept;

  /// @brief Field FreeSongsOnly value: I32(1)
  static ::GlobalNamespace::MockPlayerDlcOwnership const FreeSongsOnly;

  /// @brief Field SameAsLocalPlayer value: I32(0)
  static ::GlobalNamespace::MockPlayerDlcOwnership const SameAsLocalPlayer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6237 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerDlcOwnership, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlayerDlcOwnership) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
