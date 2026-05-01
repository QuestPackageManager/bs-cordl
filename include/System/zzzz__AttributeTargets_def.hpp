#pragma once
// IWYU pragma private; include "System/AttributeTargets.hpp"
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
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.AttributeTargets
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTargets();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AttributeTargets(int32_t value__) noexcept;

  /// @brief Field All value: I32(32767)
  static ::System::AttributeTargets const All;

  /// @brief Field Assembly value: I32(1)
  static ::System::AttributeTargets const Assembly;

  /// @brief Field Class value: I32(4)
  static ::System::AttributeTargets const Class;

  /// @brief Field Constructor value: I32(32)
  static ::System::AttributeTargets const Constructor;

  /// @brief Field Delegate value: I32(4096)
  static ::System::AttributeTargets const Delegate;

  /// @brief Field Enum value: I32(16)
  static ::System::AttributeTargets const Enum;

  /// @brief Field Event value: I32(512)
  static ::System::AttributeTargets const Event;

  /// @brief Field Field value: I32(256)
  static ::System::AttributeTargets const Field;

  /// @brief Field GenericParameter value: I32(16384)
  static ::System::AttributeTargets const GenericParameter;

  /// @brief Field Interface value: I32(1024)
  static ::System::AttributeTargets const Interface;

  /// @brief Field Method value: I32(64)
  static ::System::AttributeTargets const Method;

  /// @brief Field Module value: I32(2)
  static ::System::AttributeTargets const Module;

  /// @brief Field Parameter value: I32(2048)
  static ::System::AttributeTargets const Parameter;

  /// @brief Field Property value: I32(128)
  static ::System::AttributeTargets const Property;

  /// @brief Field ReturnValue value: I32(8192)
  static ::System::AttributeTargets const ReturnValue;

  /// @brief Field Struct value: I32(8)
  static ::System::AttributeTargets const Struct;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2356 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::AttributeTargets, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::AttributeTargets, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::AttributeTargets, "System", "AttributeTargets");
