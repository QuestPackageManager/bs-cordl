#pragma once
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
// Type: System.Reflection::MethodImplAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::MethodImplAttributes
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AggressiveInlining value: static_cast<int32_t>(0x100)
  static ::System::Reflection::MethodImplAttributes const AggressiveInlining;

  /// @brief Field CodeTypeMask value: static_cast<int32_t>(0x3)
  static ::System::Reflection::MethodImplAttributes const CodeTypeMask;

  /// @brief Field ForwardRef value: static_cast<int32_t>(0x10)
  static ::System::Reflection::MethodImplAttributes const ForwardRef;

  /// @brief Field IL value: static_cast<int32_t>(0x0)
  static ::System::Reflection::MethodImplAttributes const IL;

  /// @brief Field InternalCall value: static_cast<int32_t>(0x1000)
  static ::System::Reflection::MethodImplAttributes const InternalCall;

  /// @brief Field Managed value: static_cast<int32_t>(0x0)
  static ::System::Reflection::MethodImplAttributes const Managed;

  /// @brief Field ManagedMask value: static_cast<int32_t>(0x4)
  static ::System::Reflection::MethodImplAttributes const ManagedMask;

  /// @brief Field MaxMethodImplVal value: static_cast<int32_t>(0xffff)
  static ::System::Reflection::MethodImplAttributes const MaxMethodImplVal;

  /// @brief Field Native value: static_cast<int32_t>(0x1)
  static ::System::Reflection::MethodImplAttributes const Native;

  /// @brief Field NoInlining value: static_cast<int32_t>(0x8)
  static ::System::Reflection::MethodImplAttributes const NoInlining;

  /// @brief Field NoOptimization value: static_cast<int32_t>(0x40)
  static ::System::Reflection::MethodImplAttributes const NoOptimization;

  /// @brief Field OPTIL value: static_cast<int32_t>(0x2)
  static ::System::Reflection::MethodImplAttributes const OPTIL;

  /// @brief Field PreserveSig value: static_cast<int32_t>(0x80)
  static ::System::Reflection::MethodImplAttributes const PreserveSig;

  /// @brief Field Runtime value: static_cast<int32_t>(0x3)
  static ::System::Reflection::MethodImplAttributes const Runtime;

  /// @brief Field SecurityMitigations value: static_cast<int32_t>(0x400)
  static ::System::Reflection::MethodImplAttributes const SecurityMitigations;

  /// @brief Field Synchronized value: static_cast<int32_t>(0x20)
  static ::System::Reflection::MethodImplAttributes const Synchronized;

  /// @brief Field Unmanaged value: static_cast<int32_t>(0x4)
  static ::System::Reflection::MethodImplAttributes const Unmanaged;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MethodImplAttributes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::MethodImplAttributes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodImplAttributes, "System.Reflection", "MethodImplAttributes");
