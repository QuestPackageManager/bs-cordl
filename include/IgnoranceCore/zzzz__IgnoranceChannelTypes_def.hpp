#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceChannelTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceChannelTypes)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceChannelTypes);
// Dependencies
namespace IgnoranceCore {
// Is value type: true
// CS Name: IgnoranceCore.IgnoranceChannelTypes
struct CORDL_TYPE IgnoranceChannelTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IgnoranceChannelTypes_Unwrapped
  enum struct __IgnoranceChannelTypes_Unwrapped : int32_t {
    __E_Reliable = static_cast<int32_t>(0x1),
    __E_ReliableUnsequenced = static_cast<int32_t>(0x3),
    __E_Unreliable = static_cast<int32_t>(0x2),
    __E_UnreliableFragmented = static_cast<int32_t>(0x8),
    __E_UnreliableSequenced = static_cast<int32_t>(0x0),
    __E_Unthrottled = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IgnoranceChannelTypes_Unwrapped() const noexcept {
    return static_cast<__IgnoranceChannelTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceChannelTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IgnoranceChannelTypes(int32_t value__) noexcept;

  /// @brief Field Reliable value: I32(1)
  static ::IgnoranceCore::IgnoranceChannelTypes const Reliable;

  /// @brief Field ReliableUnsequenced value: I32(3)
  static ::IgnoranceCore::IgnoranceChannelTypes const ReliableUnsequenced;

  /// @brief Field Unreliable value: I32(2)
  static ::IgnoranceCore::IgnoranceChannelTypes const Unreliable;

  /// @brief Field UnreliableFragmented value: I32(8)
  static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableFragmented;

  /// @brief Field UnreliableSequenced value: I32(0)
  static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableSequenced;

  /// @brief Field Unthrottled value: I32(32)
  static ::IgnoranceCore::IgnoranceChannelTypes const Unthrottled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17759 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::IgnoranceCore::IgnoranceChannelTypes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceChannelTypes, 0x4>, "Size mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceChannelTypes, "IgnoranceCore", "IgnoranceChannelTypes");
