#pragma once
// IWYU pragma private; include "System/Reflection/MethodAttributes.hpp"
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
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.MethodAttributes
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MethodAttributes(int32_t value__) noexcept;

  /// @brief Field Abstract value: I32(1024)
  static ::System::Reflection::MethodAttributes const Abstract;

  /// @brief Field Assembly value: I32(3)
  static ::System::Reflection::MethodAttributes const Assembly;

  /// @brief Field CheckAccessOnOverride value: I32(512)
  static ::System::Reflection::MethodAttributes const CheckAccessOnOverride;

  /// @brief Field FamANDAssem value: I32(2)
  static ::System::Reflection::MethodAttributes const FamANDAssem;

  /// @brief Field FamORAssem value: I32(5)
  static ::System::Reflection::MethodAttributes const FamORAssem;

  /// @brief Field Family value: I32(4)
  static ::System::Reflection::MethodAttributes const Family;

  /// @brief Field Final value: I32(32)
  static ::System::Reflection::MethodAttributes const Final;

  /// @brief Field HasSecurity value: I32(16384)
  static ::System::Reflection::MethodAttributes const HasSecurity;

  /// @brief Field HideBySig value: I32(128)
  static ::System::Reflection::MethodAttributes const HideBySig;

  /// @brief Field MemberAccessMask value: I32(7)
  static ::System::Reflection::MethodAttributes const MemberAccessMask;

  /// @brief Field NewSlot value: I32(256)
  static ::System::Reflection::MethodAttributes const NewSlot;

  /// @brief Field PinvokeImpl value: I32(8192)
  static ::System::Reflection::MethodAttributes const PinvokeImpl;

  /// @brief Field Private value: I32(1)
  static ::System::Reflection::MethodAttributes const Private;

  /// @brief Field PrivateScope value: I32(0)
  static ::System::Reflection::MethodAttributes const PrivateScope;

  /// @brief Field Public value: I32(6)
  static ::System::Reflection::MethodAttributes const Public;

  /// @brief Field RTSpecialName value: I32(4096)
  static ::System::Reflection::MethodAttributes const RTSpecialName;

  /// @brief Field RequireSecObject value: I32(32768)
  static ::System::Reflection::MethodAttributes const RequireSecObject;

  /// @brief Field ReservedMask value: I32(53248)
  static ::System::Reflection::MethodAttributes const ReservedMask;

  /// @brief Field ReuseSlot value: I32(0)
  static ::System::Reflection::MethodAttributes const ReuseSlot;

  /// @brief Field SpecialName value: I32(2048)
  static ::System::Reflection::MethodAttributes const SpecialName;

  /// @brief Field Static value: I32(16)
  static ::System::Reflection::MethodAttributes const Static;

  /// @brief Field UnmanagedExport value: I32(8)
  static ::System::Reflection::MethodAttributes const UnmanagedExport;

  /// @brief Field Virtual value: I32(64)
  static ::System::Reflection::MethodAttributes const Virtual;

  /// @brief Field VtableLayoutMask value: I32(256)
  static ::System::Reflection::MethodAttributes const VtableLayoutMask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3478 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::MethodAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodAttributes, "System.Reflection", "MethodAttributes");
