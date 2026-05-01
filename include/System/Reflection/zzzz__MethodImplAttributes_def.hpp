#pragma once
// IWYU pragma private; include "System/Reflection/MethodImplAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MethodImplAttributes)
// Forward declare root types
namespace System::Reflection {
struct MethodImplAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MethodImplAttributes);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.MethodImplAttributes
struct CORDL_TYPE MethodImplAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MethodImplAttributes_Unwrapped
  enum struct __MethodImplAttributes_Unwrapped : int32_t {
    __E_CodeTypeMask = static_cast<int32_t>(0x3),
    __E_IL = static_cast<int32_t>(0x0),
    __E_Native = static_cast<int32_t>(0x1),
    __E_OPTIL = static_cast<int32_t>(0x2),
    __E_Runtime = static_cast<int32_t>(0x3),
    __E_ManagedMask = static_cast<int32_t>(0x4),
    __E_Unmanaged = static_cast<int32_t>(0x4),
    __E_Managed = static_cast<int32_t>(0x0),
    __E_ForwardRef = static_cast<int32_t>(0x10),
    __E_PreserveSig = static_cast<int32_t>(0x80),
    __E_InternalCall = static_cast<int32_t>(0x1000),
    __E_Synchronized = static_cast<int32_t>(0x20),
    __E_NoInlining = static_cast<int32_t>(0x8),
    __E_AggressiveInlining = static_cast<int32_t>(0x100),
    __E_NoOptimization = static_cast<int32_t>(0x40),
    __E_MaxMethodImplVal = static_cast<int32_t>(0xffff),
    __E_SecurityMitigations = static_cast<int32_t>(0x400),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MethodImplAttributes_Unwrapped() const noexcept {
    return static_cast<__MethodImplAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodImplAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MethodImplAttributes(int32_t value__) noexcept;

  /// @brief Field AggressiveInlining value: I32(256)
  static ::System::Reflection::MethodImplAttributes const AggressiveInlining;

  /// @brief Field CodeTypeMask value: I32(3)
  static ::System::Reflection::MethodImplAttributes const CodeTypeMask;

  /// @brief Field ForwardRef value: I32(16)
  static ::System::Reflection::MethodImplAttributes const ForwardRef;

  /// @brief Field IL value: I32(0)
  static ::System::Reflection::MethodImplAttributes const IL;

  /// @brief Field InternalCall value: I32(4096)
  static ::System::Reflection::MethodImplAttributes const InternalCall;

  /// @brief Field Managed value: I32(0)
  static ::System::Reflection::MethodImplAttributes const Managed;

  /// @brief Field ManagedMask value: I32(4)
  static ::System::Reflection::MethodImplAttributes const ManagedMask;

  /// @brief Field MaxMethodImplVal value: I32(65535)
  static ::System::Reflection::MethodImplAttributes const MaxMethodImplVal;

  /// @brief Field Native value: I32(1)
  static ::System::Reflection::MethodImplAttributes const Native;

  /// @brief Field NoInlining value: I32(8)
  static ::System::Reflection::MethodImplAttributes const NoInlining;

  /// @brief Field NoOptimization value: I32(64)
  static ::System::Reflection::MethodImplAttributes const NoOptimization;

  /// @brief Field OPTIL value: I32(2)
  static ::System::Reflection::MethodImplAttributes const OPTIL;

  /// @brief Field PreserveSig value: I32(128)
  static ::System::Reflection::MethodImplAttributes const PreserveSig;

  /// @brief Field Runtime value: I32(3)
  static ::System::Reflection::MethodImplAttributes const Runtime;

  /// @brief Field SecurityMitigations value: I32(1024)
  static ::System::Reflection::MethodImplAttributes const SecurityMitigations;

  /// @brief Field Synchronized value: I32(32)
  static ::System::Reflection::MethodImplAttributes const Synchronized;

  /// @brief Field Unmanaged value: I32(4)
  static ::System::Reflection::MethodImplAttributes const Unmanaged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3502 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::MethodImplAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodImplAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodImplAttributes, "System.Reflection", "MethodImplAttributes");
