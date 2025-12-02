#pragma once
// IWYU pragma private; include "GlobalNamespace/IDType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IDType)
// Forward declare root types
namespace GlobalNamespace {
struct IDType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IDType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: IDType
struct CORDL_TYPE IDType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IDType_Unwrapped
  enum struct __IDType_Unwrapped : int32_t {
    __E_NO_ID_NEEDED = static_cast<int32_t>(0x0),
    __E_GAME_SPECIFIC_RID = static_cast<int32_t>(0x1),
    __E_OCULUS_PLATFORM = static_cast<int32_t>(0x2),
    __E_GAME_SPECIFIC_ID = static_cast<int32_t>(0x3),
    __E_PLATFORM_ACCOUNT_ID = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IDType_Unwrapped() const noexcept {
    return static_cast<__IDType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IDType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IDType(int32_t value__) noexcept;

  /// @brief Field GAME_SPECIFIC_ID value: I32(3)
  static ::GlobalNamespace::IDType const GAME_SPECIFIC_ID;

  /// @brief Field GAME_SPECIFIC_RID value: I32(1)
  static ::GlobalNamespace::IDType const GAME_SPECIFIC_RID;

  /// @brief Field NO_ID_NEEDED value: I32(0)
  static ::GlobalNamespace::IDType const NO_ID_NEEDED;

  /// @brief Field OCULUS_PLATFORM value: I32(2)
  static ::GlobalNamespace::IDType const OCULUS_PLATFORM;

  /// @brief Field PLATFORM_ACCOUNT_ID value: I32(4)
  static ::GlobalNamespace::IDType const PLATFORM_ACCOUNT_ID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IDType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IDType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDType, "", "IDType");
