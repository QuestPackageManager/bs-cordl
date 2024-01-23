#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MethodAttributes)
// Forward declare root types
namespace System::Reflection {
struct MethodAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MethodAttributes);
// Type: System.Reflection::MethodAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3476))
// CS Name: ::System.Reflection::MethodAttributes
struct CORDL_TYPE MethodAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MethodAttributes_Unwrapped
  enum struct __MethodAttributes_Unwrapped : int32_t {
    __E_MemberAccessMask = static_cast<int32_t>(0x7),
    __E_PrivateScope = static_cast<int32_t>(0x0),
    __E_Private = static_cast<int32_t>(0x1),
    __E_FamANDAssem = static_cast<int32_t>(0x2),
    __E_Assembly = static_cast<int32_t>(0x3),
    __E_Family = static_cast<int32_t>(0x4),
    __E_FamORAssem = static_cast<int32_t>(0x5),
    __E_Public = static_cast<int32_t>(0x6),
    __E_Static = static_cast<int32_t>(0x10),
    __E_Final = static_cast<int32_t>(0x20),
    __E_Virtual = static_cast<int32_t>(0x40),
    __E_HideBySig = static_cast<int32_t>(0x80),
    __E_CheckAccessOnOverride = static_cast<int32_t>(0x200),
    __E_VtableLayoutMask = static_cast<int32_t>(0x100),
    __E_ReuseSlot = static_cast<int32_t>(0x0),
    __E_NewSlot = static_cast<int32_t>(0x100),
    __E_Abstract = static_cast<int32_t>(0x400),
    __E_SpecialName = static_cast<int32_t>(0x800),
    __E_PinvokeImpl = static_cast<int32_t>(0x2000),
    __E_UnmanagedExport = static_cast<int32_t>(0x8),
    __E_RTSpecialName = static_cast<int32_t>(0x1000),
    __E_HasSecurity = static_cast<int32_t>(0x4000),
    __E_RequireSecObject = static_cast<int32_t>(0x8000),
    __E_ReservedMask = static_cast<int32_t>(0xd000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MethodAttributes_Unwrapped() const noexcept {
    return static_cast<__MethodAttributes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MethodAttributes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodAttributes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MemberAccessMask value: static_cast<int32_t>(0x7)
  static ::System::Reflection::MethodAttributes const MemberAccessMask;

  /// @brief Field PrivateScope value: static_cast<int32_t>(0x0)
  static ::System::Reflection::MethodAttributes const PrivateScope;

  /// @brief Field Private value: static_cast<int32_t>(0x1)
  static ::System::Reflection::MethodAttributes const Private;

  /// @brief Field FamANDAssem value: static_cast<int32_t>(0x2)
  static ::System::Reflection::MethodAttributes const FamANDAssem;

  /// @brief Field Assembly value: static_cast<int32_t>(0x3)
  static ::System::Reflection::MethodAttributes const Assembly;

  /// @brief Field Family value: static_cast<int32_t>(0x4)
  static ::System::Reflection::MethodAttributes const Family;

  /// @brief Field FamORAssem value: static_cast<int32_t>(0x5)
  static ::System::Reflection::MethodAttributes const FamORAssem;

  /// @brief Field Public value: static_cast<int32_t>(0x6)
  static ::System::Reflection::MethodAttributes const Public;

  /// @brief Field Static value: static_cast<int32_t>(0x10)
  static ::System::Reflection::MethodAttributes const Static;

  /// @brief Field Final value: static_cast<int32_t>(0x20)
  static ::System::Reflection::MethodAttributes const Final;

  /// @brief Field Virtual value: static_cast<int32_t>(0x40)
  static ::System::Reflection::MethodAttributes const Virtual;

  /// @brief Field HideBySig value: static_cast<int32_t>(0x80)
  static ::System::Reflection::MethodAttributes const HideBySig;

  /// @brief Field CheckAccessOnOverride value: static_cast<int32_t>(0x200)
  static ::System::Reflection::MethodAttributes const CheckAccessOnOverride;

  /// @brief Field VtableLayoutMask value: static_cast<int32_t>(0x100)
  static ::System::Reflection::MethodAttributes const VtableLayoutMask;

  /// @brief Field ReuseSlot value: static_cast<int32_t>(0x0)
  static ::System::Reflection::MethodAttributes const ReuseSlot;

  /// @brief Field NewSlot value: static_cast<int32_t>(0x100)
  static ::System::Reflection::MethodAttributes const NewSlot;

  /// @brief Field Abstract value: static_cast<int32_t>(0x400)
  static ::System::Reflection::MethodAttributes const Abstract;

  /// @brief Field SpecialName value: static_cast<int32_t>(0x800)
  static ::System::Reflection::MethodAttributes const SpecialName;

  /// @brief Field PinvokeImpl value: static_cast<int32_t>(0x2000)
  static ::System::Reflection::MethodAttributes const PinvokeImpl;

  /// @brief Field UnmanagedExport value: static_cast<int32_t>(0x8)
  static ::System::Reflection::MethodAttributes const UnmanagedExport;

  /// @brief Field RTSpecialName value: static_cast<int32_t>(0x1000)
  static ::System::Reflection::MethodAttributes const RTSpecialName;

  /// @brief Field HasSecurity value: static_cast<int32_t>(0x4000)
  static ::System::Reflection::MethodAttributes const HasSecurity;

  /// @brief Field RequireSecObject value: static_cast<int32_t>(0x8000)
  static ::System::Reflection::MethodAttributes const RequireSecObject;

  /// @brief Field ReservedMask value: static_cast<int32_t>(0xd000)
  static ::System::Reflection::MethodAttributes const ReservedMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodAttributes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::MethodAttributes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodAttributes, "System.Reflection", "MethodAttributes");
