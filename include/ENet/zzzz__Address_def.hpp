#pragma once
// IWYU pragma private; include "ENet/Address.hpp"
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
// Dependencies ENet.ENetAddress
namespace ENet {
// Is value type: true
// CS Name: ENet.Address
struct CORDL_TYPE Address {
public:
  // Declarations
  __declspec(property(get = get_NativeData, put = set_NativeData)) ::ENet::ENetAddress NativeData;

  __declspec(property(get = get_Port, put = set_Port)) uint16_t Port;

  /// @brief Method GetHost, addr 0x3ab12b4, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetHost();

  /// @brief Method GetIP, addr 0x3ab1034, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW GetIP();

  /// @brief Method SetHost, addr 0x3ab1430, size 0x64, virtual false, abstract: false, final false
  inline bool SetHost(::StringW hostName);

  /// @brief Method SetIP, addr 0x3ab11b0, size 0x64, virtual false, abstract: false, final false
  inline bool SetIP(::StringW ip);

  /// @brief Method .ctor, addr 0x3ab1010, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ENet::ENetAddress address);

  /// @brief Method get_NativeData, addr 0x3ab0fe8, size 0x14, virtual false, abstract: false, final false
  inline ::ENet::ENetAddress get_NativeData();

  /// @brief Method get_Port, addr 0x3ab1024, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_Port();

  /// @brief Method set_NativeData, addr 0x3ab0ffc, size 0x14, virtual false, abstract: false, final false
  inline void set_NativeData(::ENet::ENetAddress value);

  /// @brief Method set_Port, addr 0x3ab102c, size 0x8, virtual false, abstract: false, final false
  inline void set_Port(uint16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Address();

  // Ctor Parameters [CppParam { name: "nativeAddress", ty: "::ENet::ENetAddress", modifiers: "", def_value: None }]
  constexpr Address(::ENet::ENetAddress nativeAddress) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17750 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x12 };

  /// @brief Field nativeAddress, offset: 0x0, size: 0x12, def value: None
  ::ENet::ENetAddress nativeAddress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::Address, nativeAddress) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::Address, 0x12>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Address, "ENet", "Address");
