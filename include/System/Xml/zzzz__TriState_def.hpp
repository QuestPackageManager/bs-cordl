#pragma once
// IWYU pragma private; include "System/Xml/TriState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriState)
// Forward declare root types
namespace System::Xml {
struct TriState;
}
// Write type traits
MARK_VAL_T(::System::Xml::TriState);
// Type: System.Xml::TriState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::TriState
struct CORDL_TYPE TriState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TriState_Unwrapped
  enum struct __TriState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_False = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TriState_Unwrapped() const noexcept {
    return static_cast<__TriState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TriState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field False value: static_cast<int32_t>(0x0)
  static ::System::Xml::TriState const False;

  /// @brief Field True value: static_cast<int32_t>(0x1)
  static ::System::Xml::TriState const True;

  /// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
  static ::System::Xml::TriState const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TriState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::TriState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TriState, "System.Xml", "TriState");
