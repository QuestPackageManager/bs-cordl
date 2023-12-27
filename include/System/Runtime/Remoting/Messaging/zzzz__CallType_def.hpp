#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallType)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
struct CallType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::Messaging::CallType);
// Type: System.Runtime.Remoting.Messaging::CallType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3181))
// CS Name: ::System.Runtime.Remoting.Messaging::CallType
struct CORDL_TYPE CallType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CallType_Unwrapped
  enum struct __CallType_Unwrapped : int32_t {
    __E_Sync = static_cast<int32_t>(0x0),
    __E_BeginInvoke = static_cast<int32_t>(0x1),
    __E_EndInvoke = static_cast<int32_t>(0x2),
    __E_OneWay = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CallType_Unwrapped() const noexcept {
    return static_cast<__CallType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CallType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CallType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Sync value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Remoting::Messaging::CallType const Sync;

  /// @brief Field BeginInvoke value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Remoting::Messaging::CallType const BeginInvoke;

  /// @brief Field EndInvoke value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Remoting::Messaging::CallType const EndInvoke;

  /// @brief Field OneWay value: static_cast<int32_t>(0x3)
  static ::System::Runtime::Remoting::Messaging::CallType const OneWay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CallType, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallType, "System.Runtime.Remoting.Messaging", "CallType");
