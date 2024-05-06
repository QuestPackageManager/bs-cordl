#pragma once
// IWYU pragma private; include "System/Reflection/CallingConventions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallingConventions)
// Forward declare root types
namespace System::Reflection {
struct CallingConventions;
}
// Write type traits
MARK_VAL_T(::System::Reflection::CallingConventions);
// Type: System.Reflection::CallingConventions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::CallingConventions
struct CORDL_TYPE CallingConventions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CallingConventions_Unwrapped
  enum struct __CallingConventions_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x1),
    __E_VarArgs = static_cast<int32_t>(0x2),
    __E_Any = static_cast<int32_t>(0x3),
    __E_HasThis = static_cast<int32_t>(0x20),
    __E_ExplicitThis = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CallingConventions_Unwrapped() const noexcept {
    return static_cast<__CallingConventions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CallingConventions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CallingConventions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0x3)
  static ::System::Reflection::CallingConventions const Any;

  /// @brief Field ExplicitThis value: static_cast<int32_t>(0x40)
  static ::System::Reflection::CallingConventions const ExplicitThis;

  /// @brief Field HasThis value: static_cast<int32_t>(0x20)
  static ::System::Reflection::CallingConventions const HasThis;

  /// @brief Field Standard value: static_cast<int32_t>(0x1)
  static ::System::Reflection::CallingConventions const Standard;

  /// @brief Field VarArgs value: static_cast<int32_t>(0x2)
  static ::System::Reflection::CallingConventions const VarArgs;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CallingConventions, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::CallingConventions, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CallingConventions, "System.Reflection", "CallingConventions");
