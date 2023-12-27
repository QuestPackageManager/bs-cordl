#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgInfoType)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
struct ArgInfoType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::Messaging::ArgInfoType);
// Type: System.Runtime.Remoting.Messaging::ArgInfoType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3149))
// CS Name: ::System.Runtime.Remoting.Messaging::ArgInfoType
struct CORDL_TYPE ArgInfoType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ArgInfoType_Unwrapped
  enum struct __ArgInfoType_Unwrapped : uint8_t {
    __E_In = static_cast<uint8_t>(0x0u),
    __E_Out = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ArgInfoType_Unwrapped() const noexcept {
    return static_cast<__ArgInfoType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ArgInfoType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgInfoType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field In value: static_cast<uint8_t>(0x0u)
  static ::System::Runtime::Remoting::Messaging::ArgInfoType const In;

  /// @brief Field Out value: static_cast<uint8_t>(0x1u)
  static ::System::Runtime::Remoting::Messaging::ArgInfoType const Out;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ArgInfoType, 0x1>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfoType, "System.Runtime.Remoting.Messaging", "ArgInfoType");
