#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerAvatarType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerAvatarType)
// Forward declare root types
namespace GlobalNamespace {
struct MockPlayerAvatarType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MockPlayerAvatarType);
// Type: ::MockPlayerAvatarType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockPlayerAvatarType
struct CORDL_TYPE MockPlayerAvatarType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MockPlayerAvatarType_Unwrapped
  enum struct __MockPlayerAvatarType_Unwrapped : int32_t {
    __E_Beat = static_cast<int32_t>(0x0),
    __E_Meta = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MockPlayerAvatarType_Unwrapped() const noexcept {
    return static_cast<__MockPlayerAvatarType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerAvatarType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MockPlayerAvatarType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Beat value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::MockPlayerAvatarType const Beat;

  /// @brief Field Meta value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::MockPlayerAvatarType const Meta;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4524 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerAvatarType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerAvatarType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerAvatarType, "", "MockPlayerAvatarType");
