#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifa_ifu)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct ifa_ifu;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::ifa_ifu);
// Type: System.Net.NetworkInformation::ifa_ifu
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8107))
// CS Name: ::System.Net.NetworkInformation::ifa_ifu
struct CORDL_TYPE ifa_ifu {
public:
  // Declarations
  /// @brief Field ifu_broadaddr, offset 0x0, size 0x8
  __declspec(property(get = __get_ifu_broadaddr, put = __set_ifu_broadaddr)) void* ifu_broadaddr;

  /// @brief Field ifu_dstaddr, offset 0x0, size 0x8
  __declspec(property(get = __get_ifu_dstaddr, put = __set_ifu_dstaddr)) void* ifu_dstaddr;

  constexpr void*& __get_ifu_broadaddr();

  constexpr void* const& __get_ifu_broadaddr() const;

  constexpr void __set_ifu_broadaddr(void* value);

  constexpr void*& __get_ifu_dstaddr();

  constexpr void* const& __get_ifu_dstaddr() const;

  constexpr void __set_ifu_dstaddr(void* value);

  // Ctor Parameters [CppParam { name: "ifu_broadaddr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "ifu_dstaddr", ty: "void*", modifiers: "", def_value: None }]
  constexpr ifa_ifu(void* ifu_broadaddr, void* ifu_dstaddr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ifa_ifu();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ifu_broadaddr_padding[0x0];
      /// @brief Field ifu_broadaddr, offset: 0x0, size: 0x8, def value: None
      void* ___ifu_broadaddr;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ifu_broadaddr_padding_forAlignment[0x0];
      /// @brief Field ifu_broadaddr, offset: 0x0, size: 0x8, def value: None
      void* ___ifu_broadaddr_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ifu_dstaddr_padding[0x0];
      /// @brief Field ifu_dstaddr, offset: 0x0, size: 0x8, def value: None
      void* ___ifu_dstaddr;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ifu_dstaddr_padding_forAlignment[0x0];
      /// @brief Field ifu_dstaddr, offset: 0x0, size: 0x8, def value: None
      void* ___ifu_dstaddr_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::ifa_ifu, 0x8>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::ifa_ifu, "System.Net.NetworkInformation", "ifa_ifu");
