#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CausalityRelation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CausalityRelation)
// Forward declare root types
namespace System::Threading::Tasks {
struct CausalityRelation;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::CausalityRelation);
// Dependencies
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: System.Threading.Tasks.CausalityRelation
struct CORDL_TYPE CausalityRelation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CausalityRelation_Unwrapped
  enum struct __CausalityRelation_Unwrapped : int32_t {
    __E_AssignDelegate = static_cast<int32_t>(0x0),
    __E_Join = static_cast<int32_t>(0x1),
    __E_Choice = static_cast<int32_t>(0x2),
    __E_Cancel = static_cast<int32_t>(0x3),
    __E_Error = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CausalityRelation_Unwrapped() const noexcept {
    return static_cast<__CausalityRelation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CausalityRelation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CausalityRelation(int32_t value__) noexcept;

  /// @brief Field AssignDelegate value: I32(0)
  static ::System::Threading::Tasks::CausalityRelation const AssignDelegate;

  /// @brief Field Cancel value: I32(3)
  static ::System::Threading::Tasks::CausalityRelation const Cancel;

  /// @brief Field Choice value: I32(2)
  static ::System::Threading::Tasks::CausalityRelation const Choice;

  /// @brief Field Error value: I32(4)
  static ::System::Threading::Tasks::CausalityRelation const Error;

  /// @brief Field Join value: I32(1)
  static ::System::Threading::Tasks::CausalityRelation const Join;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2834 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::CausalityRelation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::CausalityRelation, 0x4>, "Size mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CausalityRelation, "System.Threading.Tasks", "CausalityRelation");
