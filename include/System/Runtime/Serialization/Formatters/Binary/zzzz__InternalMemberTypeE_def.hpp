#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalMemberTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
struct CORDL_TYPE InternalMemberTypeE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InternalMemberTypeE_Unwrapped
  enum struct __InternalMemberTypeE_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Header = static_cast<int32_t>(0x1),
    __E_Field = static_cast<int32_t>(0x2),
    __E_Item = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InternalMemberTypeE_Unwrapped() const noexcept {
    return static_cast<__InternalMemberTypeE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalMemberTypeE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InternalMemberTypeE(int32_t value__) noexcept;

  /// @brief Field Empty value: I32(0)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Empty;

  /// @brief Field Field value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Field;

  /// @brief Field Header value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Header;

  /// @brief Field Item value: I32(3)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Item;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3251 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberTypeE");
