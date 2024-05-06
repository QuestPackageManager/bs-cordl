#pragma once
// IWYU pragma private; include "System/Xml/ReadState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadState)
// Forward declare root types
namespace System::Xml {
struct ReadState;
}
// Write type traits
MARK_VAL_T(::System::Xml::ReadState);
// Type: System.Xml::ReadState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::ReadState
struct CORDL_TYPE ReadState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReadState_Unwrapped
  enum struct __ReadState_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Interactive = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
    __E_EndOfFile = static_cast<int32_t>(0x3),
    __E_Closed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReadState_Unwrapped() const noexcept {
    return static_cast<__ReadState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReadState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Closed value: static_cast<int32_t>(0x4)
  static ::System::Xml::ReadState const Closed;

  /// @brief Field EndOfFile value: static_cast<int32_t>(0x3)
  static ::System::Xml::ReadState const EndOfFile;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::System::Xml::ReadState const Error;

  /// @brief Field Initial value: static_cast<int32_t>(0x0)
  static ::System::Xml::ReadState const Initial;

  /// @brief Field Interactive value: static_cast<int32_t>(0x1)
  static ::System::Xml::ReadState const Interactive;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ReadState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::ReadState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ReadState, "System.Xml", "ReadState");
