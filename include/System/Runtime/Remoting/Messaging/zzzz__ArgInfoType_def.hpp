#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ArgInfoType.hpp"
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
// Dependencies
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// CS Name: System.Runtime.Remoting.Messaging.ArgInfoType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgInfoType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ArgInfoType(uint8_t value__) noexcept;

  /// @brief Field In value: U8(0)
  static ::System::Runtime::Remoting::Messaging::ArgInfoType const In;

  /// @brief Field Out value: U8(1)
  static ::System::Runtime::Remoting::Messaging::ArgInfoType const Out;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::ArgInfoType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ArgInfoType, 0x1>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfoType, "System.Runtime.Remoting.Messaging", "ArgInfoType");
