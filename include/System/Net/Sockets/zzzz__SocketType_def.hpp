#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketType)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketType;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketType);
// Type: System.Net.Sockets::SocketType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8189))
// CS Name: ::System.Net.Sockets::SocketType
struct CORDL_TYPE SocketType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SocketType_Unwrapped
  enum struct __SocketType_Unwrapped : int32_t {
    __E_Stream = static_cast<int32_t>(0x1),
    __E_Dgram = static_cast<int32_t>(0x2),
    __E_Raw = static_cast<int32_t>(0x3),
    __E_Rdm = static_cast<int32_t>(0x4),
    __E_Seqpacket = static_cast<int32_t>(0x5),
    __E_Unknown = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SocketType_Unwrapped() const noexcept {
    return static_cast<__SocketType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SocketType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Stream value: static_cast<int32_t>(0x1)
  static ::System::Net::Sockets::SocketType const Stream;

  /// @brief Field Dgram value: static_cast<int32_t>(0x2)
  static ::System::Net::Sockets::SocketType const Dgram;

  /// @brief Field Raw value: static_cast<int32_t>(0x3)
  static ::System::Net::Sockets::SocketType const Raw;

  /// @brief Field Rdm value: static_cast<int32_t>(0x4)
  static ::System::Net::Sockets::SocketType const Rdm;

  /// @brief Field Seqpacket value: static_cast<int32_t>(0x5)
  static ::System::Net::Sockets::SocketType const Seqpacket;

  /// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
  static ::System::Net::Sockets::SocketType const Unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketType, "System.Net.Sockets", "SocketType");
