#pragma once
// IWYU pragma private; include "ENet/ENetAddress.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENetAddress)
// Forward declare root types
namespace ENet {
struct ENetAddress;
}
// Write type traits
MARK_VAL_T(::ENet::ENetAddress);
// Type: ENet::ENetAddress
// SizeInfo { instance_size: 18, native_size: 18, calculated_instance_size: 18, calculated_native_size: 34, minimum_alignment: 2, packing: None, specified_packing: Some(0) }
namespace ENet {
// Is value type: true
// CS Name: ::ENet::ENetAddress
#pragma pack(push, 0)
struct CORDL_TYPE ENetAddress {
public:
  // Declarations
  /// @brief Field port, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) uint16_t port;

  constexpr uint16_t const& __cordl_internal_get_port() const;

  constexpr uint16_t& __cordl_internal_get_port();

  constexpr void __cordl_internal_set_port(uint16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ENetAddress();

  // Ctor Parameters [CppParam { name: "port", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr ENetAddress(uint16_t port) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___port_padding[0x10];
      /// @brief Field port, offset: 0x10, size: 0x2, def value: None
      uint16_t ___port;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___port_padding_forAlignment[0x10];
      /// @brief Field port, offset: 0x10, size: 0x2, def value: None
      uint16_t ___port_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x12 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ENetAddress, 0x12>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetAddress, "ENet", "ENetAddress");
