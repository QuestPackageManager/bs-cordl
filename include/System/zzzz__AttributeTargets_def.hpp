#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeTargets)
// Forward declare root types
namespace System {
struct AttributeTargets;
}
// Write type traits
MARK_VAL_T(::System::AttributeTargets);
// Type: System::AttributeTargets
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2354))
// CS Name: ::System::AttributeTargets
struct CORDL_TYPE AttributeTargets {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AttributeTargets_Unwrapped
  enum struct __AttributeTargets_Unwrapped : int32_t {
    __E_Assembly = static_cast<int32_t>(0x1),
    __E_Module = static_cast<int32_t>(0x2),
    __E_Class = static_cast<int32_t>(0x4),
    __E_Struct = static_cast<int32_t>(0x8),
    __E_Enum = static_cast<int32_t>(0x10),
    __E_Constructor = static_cast<int32_t>(0x20),
    __E_Method = static_cast<int32_t>(0x40),
    __E_Property = static_cast<int32_t>(0x80),
    __E_Field = static_cast<int32_t>(0x100),
    __E_Event = static_cast<int32_t>(0x200),
    __E_Interface = static_cast<int32_t>(0x400),
    __E_Parameter = static_cast<int32_t>(0x800),
    __E_Delegate = static_cast<int32_t>(0x1000),
    __E_ReturnValue = static_cast<int32_t>(0x2000),
    __E_GenericParameter = static_cast<int32_t>(0x4000),
    __E_All = static_cast<int32_t>(0x7fff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AttributeTargets_Unwrapped() const noexcept {
    return static_cast<__AttributeTargets_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AttributeTargets(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTargets();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Assembly value: static_cast<int32_t>(0x1)
  static ::System::AttributeTargets const Assembly;

  /// @brief Field Module value: static_cast<int32_t>(0x2)
  static ::System::AttributeTargets const Module;

  /// @brief Field Class value: static_cast<int32_t>(0x4)
  static ::System::AttributeTargets const Class;

  /// @brief Field Struct value: static_cast<int32_t>(0x8)
  static ::System::AttributeTargets const Struct;

  /// @brief Field Enum value: static_cast<int32_t>(0x10)
  static ::System::AttributeTargets const Enum;

  /// @brief Field Constructor value: static_cast<int32_t>(0x20)
  static ::System::AttributeTargets const Constructor;

  /// @brief Field Method value: static_cast<int32_t>(0x40)
  static ::System::AttributeTargets const Method;

  /// @brief Field Property value: static_cast<int32_t>(0x80)
  static ::System::AttributeTargets const Property;

  /// @brief Field Field value: static_cast<int32_t>(0x100)
  static ::System::AttributeTargets const Field;

  /// @brief Field Event value: static_cast<int32_t>(0x200)
  static ::System::AttributeTargets const Event;

  /// @brief Field Interface value: static_cast<int32_t>(0x400)
  static ::System::AttributeTargets const Interface;

  /// @brief Field Parameter value: static_cast<int32_t>(0x800)
  static ::System::AttributeTargets const Parameter;

  /// @brief Field Delegate value: static_cast<int32_t>(0x1000)
  static ::System::AttributeTargets const Delegate;

  /// @brief Field ReturnValue value: static_cast<int32_t>(0x2000)
  static ::System::AttributeTargets const ReturnValue;

  /// @brief Field GenericParameter value: static_cast<int32_t>(0x4000)
  static ::System::AttributeTargets const GenericParameter;

  /// @brief Field All value: static_cast<int32_t>(0x7fff)
  static ::System::AttributeTargets const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AttributeTargets, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::AttributeTargets, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::AttributeTargets, "System", "AttributeTargets");
