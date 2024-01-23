#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityProtocolType)
// Forward declare root types
namespace System::Net {
struct SecurityProtocolType;
}
// Write type traits
MARK_VAL_T(::System::Net::SecurityProtocolType);
// Type: System.Net::SecurityProtocolType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9055))
// CS Name: ::System.Net::SecurityProtocolType
struct CORDL_TYPE SecurityProtocolType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SecurityProtocolType_Unwrapped
  enum struct __SecurityProtocolType_Unwrapped : int32_t {
    __E_SystemDefault = static_cast<int32_t>(0x0),
    __E_Ssl3 = static_cast<int32_t>(0x30),
    __E_Tls = static_cast<int32_t>(0xc0),
    __E_Tls11 = static_cast<int32_t>(0x300),
    __E_Tls12 = static_cast<int32_t>(0xc00),
    __E_Tls13 = static_cast<int32_t>(0x3000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SecurityProtocolType_Unwrapped() const noexcept {
    return static_cast<__SecurityProtocolType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SecurityProtocolType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityProtocolType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SystemDefault value: static_cast<int32_t>(0x0)
  static ::System::Net::SecurityProtocolType const SystemDefault;

  /// @brief Field Ssl3 value: static_cast<int32_t>(0x30)
  static ::System::Net::SecurityProtocolType const Ssl3;

  /// @brief Field Tls value: static_cast<int32_t>(0xc0)
  static ::System::Net::SecurityProtocolType const Tls;

  /// @brief Field Tls11 value: static_cast<int32_t>(0x300)
  static ::System::Net::SecurityProtocolType const Tls11;

  /// @brief Field Tls12 value: static_cast<int32_t>(0xc00)
  static ::System::Net::SecurityProtocolType const Tls12;

  /// @brief Field Tls13 value: static_cast<int32_t>(0x3000)
  static ::System::Net::SecurityProtocolType const Tls13;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::SecurityProtocolType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::SecurityProtocolType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SecurityProtocolType, "System.Net", "SecurityProtocolType");
