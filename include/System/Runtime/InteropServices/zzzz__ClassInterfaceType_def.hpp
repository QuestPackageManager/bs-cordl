#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClassInterfaceType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct ClassInterfaceType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::ClassInterfaceType);
// Type: System.Runtime.InteropServices::ClassInterfaceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3317))
// CS Name: ::System.Runtime.InteropServices::ClassInterfaceType
struct CORDL_TYPE ClassInterfaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClassInterfaceType_Unwrapped
  enum struct __ClassInterfaceType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AutoDispatch = static_cast<int32_t>(0x1),
    __E_AutoDual = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClassInterfaceType_Unwrapped() const noexcept {
    return static_cast<__ClassInterfaceType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClassInterfaceType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassInterfaceType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Runtime::InteropServices::ClassInterfaceType const None;

  /// @brief Field AutoDispatch value: static_cast<int32_t>(0x1)
  static ::System::Runtime::InteropServices::ClassInterfaceType const AutoDispatch;

  /// @brief Field AutoDual value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::ClassInterfaceType const AutoDual;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ClassInterfaceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ClassInterfaceType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ClassInterfaceType, "System.Runtime.InteropServices", "ClassInterfaceType");
