#pragma once
// IWYU pragma private; include "System/Reflection/FieldAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FieldAttributes)
// Forward declare root types
namespace System::Reflection {
struct FieldAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::FieldAttributes);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.FieldAttributes
struct CORDL_TYPE FieldAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FieldAttributes_Unwrapped
  enum struct __FieldAttributes_Unwrapped : int32_t {
    __E_FieldAccessMask = static_cast<int32_t>(0x7),
    __E_PrivateScope = static_cast<int32_t>(0x0),
    __E_Private = static_cast<int32_t>(0x1),
    __E_FamANDAssem = static_cast<int32_t>(0x2),
    __E_Assembly = static_cast<int32_t>(0x3),
    __E_Family = static_cast<int32_t>(0x4),
    __E_FamORAssem = static_cast<int32_t>(0x5),
    __E_Public = static_cast<int32_t>(0x6),
    __E_Static = static_cast<int32_t>(0x10),
    __E_InitOnly = static_cast<int32_t>(0x20),
    __E_Literal = static_cast<int32_t>(0x40),
    __E_NotSerialized = static_cast<int32_t>(0x80),
    __E_SpecialName = static_cast<int32_t>(0x200),
    __E_PinvokeImpl = static_cast<int32_t>(0x2000),
    __E_RTSpecialName = static_cast<int32_t>(0x400),
    __E_HasFieldMarshal = static_cast<int32_t>(0x1000),
    __E_HasDefault = static_cast<int32_t>(0x8000),
    __E_HasFieldRVA = static_cast<int32_t>(0x100),
    __E_ReservedMask = static_cast<int32_t>(0x9500),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FieldAttributes_Unwrapped() const noexcept {
    return static_cast<__FieldAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FieldAttributes(int32_t value__) noexcept;

  /// @brief Field Assembly value: I32(3)
  static ::System::Reflection::FieldAttributes const Assembly;

  /// @brief Field FamANDAssem value: I32(2)
  static ::System::Reflection::FieldAttributes const FamANDAssem;

  /// @brief Field FamORAssem value: I32(5)
  static ::System::Reflection::FieldAttributes const FamORAssem;

  /// @brief Field Family value: I32(4)
  static ::System::Reflection::FieldAttributes const Family;

  /// @brief Field FieldAccessMask value: I32(7)
  static ::System::Reflection::FieldAttributes const FieldAccessMask;

  /// @brief Field HasDefault value: I32(32768)
  static ::System::Reflection::FieldAttributes const HasDefault;

  /// @brief Field HasFieldMarshal value: I32(4096)
  static ::System::Reflection::FieldAttributes const HasFieldMarshal;

  /// @brief Field HasFieldRVA value: I32(256)
  static ::System::Reflection::FieldAttributes const HasFieldRVA;

  /// @brief Field InitOnly value: I32(32)
  static ::System::Reflection::FieldAttributes const InitOnly;

  /// @brief Field Literal value: I32(64)
  static ::System::Reflection::FieldAttributes const Literal;

  /// @brief Field NotSerialized value: I32(128)
  static ::System::Reflection::FieldAttributes const NotSerialized;

  /// @brief Field PinvokeImpl value: I32(8192)
  static ::System::Reflection::FieldAttributes const PinvokeImpl;

  /// @brief Field Private value: I32(1)
  static ::System::Reflection::FieldAttributes const Private;

  /// @brief Field PrivateScope value: I32(0)
  static ::System::Reflection::FieldAttributes const PrivateScope;

  /// @brief Field Public value: I32(6)
  static ::System::Reflection::FieldAttributes const Public;

  /// @brief Field RTSpecialName value: I32(1024)
  static ::System::Reflection::FieldAttributes const RTSpecialName;

  /// @brief Field ReservedMask value: I32(38144)
  static ::System::Reflection::FieldAttributes const ReservedMask;

  /// @brief Field SpecialName value: I32(512)
  static ::System::Reflection::FieldAttributes const SpecialName;

  /// @brief Field Static value: I32(16)
  static ::System::Reflection::FieldAttributes const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3488 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::FieldAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::FieldAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::FieldAttributes, "System.Reflection", "FieldAttributes");
