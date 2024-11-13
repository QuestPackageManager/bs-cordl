#pragma once
// IWYU pragma private; include "System/Data/AcceptRejectRule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AcceptRejectRule)
// Forward declare root types
namespace System::Data {
struct AcceptRejectRule;
}
// Write type traits
MARK_VAL_T(::System::Data::AcceptRejectRule);
// Type: System.Data::AcceptRejectRule
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::AcceptRejectRule
struct CORDL_TYPE AcceptRejectRule {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AcceptRejectRule_Unwrapped
  enum struct __AcceptRejectRule_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Cascade = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AcceptRejectRule_Unwrapped() const noexcept {
    return static_cast<__AcceptRejectRule_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AcceptRejectRule();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AcceptRejectRule(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cascade value: static_cast<int32_t>(0x1)
  static ::System::Data::AcceptRejectRule const Cascade;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Data::AcceptRejectRule const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11326 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::AcceptRejectRule, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::AcceptRejectRule, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AcceptRejectRule, "System.Data", "AcceptRejectRule");
