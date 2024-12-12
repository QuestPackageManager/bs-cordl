#pragma once
// IWYU pragma private; include "System/Data/Nodes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Nodes)
// Forward declare root types
namespace System::Data {
struct Nodes;
}
// Write type traits
MARK_VAL_T(::System::Data::Nodes);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.Nodes
struct CORDL_TYPE Nodes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Nodes_Unwrapped
  enum struct __Nodes_Unwrapped : int32_t {
    __E_Noop = static_cast<int32_t>(0x0),
    __E_Unop = static_cast<int32_t>(0x1),
    __E_UnopSpec = static_cast<int32_t>(0x2),
    __E_Binop = static_cast<int32_t>(0x3),
    __E_BinopSpec = static_cast<int32_t>(0x4),
    __E_Zop = static_cast<int32_t>(0x5),
    __E_Call = static_cast<int32_t>(0x6),
    __E_Const = static_cast<int32_t>(0x7),
    __E_Name = static_cast<int32_t>(0x8),
    __E_Paren = static_cast<int32_t>(0x9),
    __E_Conv = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Nodes_Unwrapped() const noexcept {
    return static_cast<__Nodes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Nodes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Nodes(int32_t value__) noexcept;

  /// @brief Field Binop value: I32(3)
  static ::System::Data::Nodes const Binop;

  /// @brief Field BinopSpec value: I32(4)
  static ::System::Data::Nodes const BinopSpec;

  /// @brief Field Call value: I32(6)
  static ::System::Data::Nodes const Call;

  /// @brief Field Const value: I32(7)
  static ::System::Data::Nodes const Const;

  /// @brief Field Conv value: I32(10)
  static ::System::Data::Nodes const Conv;

  /// @brief Field Name value: I32(8)
  static ::System::Data::Nodes const Name;

  /// @brief Field Noop value: I32(0)
  static ::System::Data::Nodes const Noop;

  /// @brief Field Paren value: I32(9)
  static ::System::Data::Nodes const Paren;

  /// @brief Field Unop value: I32(1)
  static ::System::Data::Nodes const Unop;

  /// @brief Field UnopSpec value: I32(2)
  static ::System::Data::Nodes const UnopSpec;

  /// @brief Field Zop value: I32(5)
  static ::System::Data::Nodes const Zop;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11422 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Nodes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Nodes, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Nodes, "System.Data", "Nodes");
