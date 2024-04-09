#pragma once
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
// Type: System.Data::Nodes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::Nodes
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Binop value: static_cast<int32_t>(0x3)
  static ::System::Data::Nodes const Binop;

  /// @brief Field BinopSpec value: static_cast<int32_t>(0x4)
  static ::System::Data::Nodes const BinopSpec;

  /// @brief Field Call value: static_cast<int32_t>(0x6)
  static ::System::Data::Nodes const Call;

  /// @brief Field Const value: static_cast<int32_t>(0x7)
  static ::System::Data::Nodes const Const;

  /// @brief Field Conv value: static_cast<int32_t>(0xa)
  static ::System::Data::Nodes const Conv;

  /// @brief Field Name value: static_cast<int32_t>(0x8)
  static ::System::Data::Nodes const Name;

  /// @brief Field Noop value: static_cast<int32_t>(0x0)
  static ::System::Data::Nodes const Noop;

  /// @brief Field Paren value: static_cast<int32_t>(0x9)
  static ::System::Data::Nodes const Paren;

  /// @brief Field Unop value: static_cast<int32_t>(0x1)
  static ::System::Data::Nodes const Unop;

  /// @brief Field UnopSpec value: static_cast<int32_t>(0x2)
  static ::System::Data::Nodes const UnopSpec;

  /// @brief Field Zop value: static_cast<int32_t>(0x5)
  static ::System::Data::Nodes const Zop;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Nodes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::Nodes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Nodes, "System.Data", "Nodes");
