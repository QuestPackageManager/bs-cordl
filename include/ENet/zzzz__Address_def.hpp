#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__ENetAddress_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Address)
namespace ENet {
struct ENetAddress;
}
// Forward declare root types
namespace ENet {
struct Address;
}
// Write type traits
MARK_VAL_T(::ENet::Address);
// Type: ENet::Address
// SizeInfo { instance_size: 18, native_size: 18, calculated_instance_size: 18, calculated_native_size: 34, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace ENet {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15217))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15228))
// CS Name: ::ENet::Address
struct CORDL_TYPE Address {
public:
  // Declarations
  __declspec(property(get = get_NativeData, put = set_NativeData))::ENet::ENetAddress NativeData;

  __declspec(property(get = get_Port, put = set_Port)) uint16_t Port;

  /// @brief Method get_NativeData, addr 0x21ef720, size 0x14, virtual false, abstract: false, final false
  inline ::ENet::ENetAddress get_NativeData();

  /// @brief Method set_NativeData, addr 0x21ef734, size 0x14, virtual false, abstract: false, final false
  inline void set_NativeData(::ENet::ENetAddress value);

  /// @brief Method .ctor, addr 0x21ef748, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ENet::ENetAddress address);

  /// @brief Method get_Port, addr 0x21ef75c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_Port();

  /// @brief Method set_Port, addr 0x21ef764, size 0x8, virtual false, abstract: false, final false
  inline void set_Port(uint16_t value);

  /// @brief Method GetIP, addr 0x21ef76c, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetIP();

  /// @brief Method SetIP, addr 0x21ef8e8, size 0x68, virtual false, abstract: false, final false
  inline bool SetIP(::StringW ip);

  /// @brief Method GetHost, addr 0x21ef9f0, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetHost();

  /// @brief Method SetHost, addr 0x21efb6c, size 0x68, virtual false, abstract: false, final false
  inline bool SetHost(::StringW hostName);

  // Ctor Parameters [CppParam { name: "nativeAddress", ty: "::ENet::ENetAddress", modifiers: "", def_value: None }]
  constexpr Address(::ENet::ENetAddress nativeAddress) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Address();

  /// @brief Field nativeAddress, offset: 0x0, size: 0x12, def value: None
  ::ENet::ENetAddress nativeAddress;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x12 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Address, 0x12>, "Size mismatch!");

static_assert(offsetof(::ENet::Address, nativeAddress) == 0x0, "Offset mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Address, "ENet", "Address");
