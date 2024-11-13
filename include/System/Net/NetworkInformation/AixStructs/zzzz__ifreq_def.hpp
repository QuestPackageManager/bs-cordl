#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq)
namespace System::Net::NetworkInformation::AixStructs {
struct __ifreq___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct __ifreq___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer);
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq);
// Type: ::<ifr_name>e__FixedBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: ::ifreq::<ifr_name>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __ifreq___ifr_name_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ifreq___ifr_name_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ifreq___ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x10 - 0x1 = 0xf, packed as 0xf
  uint8_t _cordl_size_padding[0xf];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9792 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
// Type: System.Net.NetworkInformation.AixStructs::ifreq
// SizeInfo { instance_size: 18, native_size: 18, calculated_instance_size: 18, calculated_native_size: 34, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: ::System.Net.NetworkInformation.AixStructs::ifreq
#pragma pack(push, 0)
struct CORDL_TYPE ifreq {
public:
  // Declarations
  using _ifr_name_e__FixedBuffer = ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer;

  /// @brief Field ifr_name, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_ifr_name, put = __cordl_internal_set_ifr_name)) ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer ifr_name;

  /// @brief Field ifru_addr, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_ifru_addr, put = __cordl_internal_set_ifru_addr)) ::System::Net::NetworkInformation::AixStructs::sockaddr ifru_addr;

  constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer const& __cordl_internal_get_ifr_name() const;

  constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer& __cordl_internal_get_ifr_name();

  constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr const& __cordl_internal_get_ifru_addr() const;

  constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr& __cordl_internal_get_ifru_addr();

  constexpr void __cordl_internal_set_ifr_name(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer value);

  constexpr void __cordl_internal_set_ifru_addr(::System::Net::NetworkInformation::AixStructs::sockaddr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ifreq();

  // Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "ifru_addr", ty: "::System::Net::NetworkInformation::AixStructs::sockaddr", modifiers: "", def_value: None }]
  constexpr ifreq(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer ifr_name, ::System::Net::NetworkInformation::AixStructs::sockaddr ifru_addr) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ifr_name_padding[0x0];
      /// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
      ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer ___ifr_name;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ifr_name_padding_forAlignment[0x0];
      /// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
      ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer ___ifr_name_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___ifru_addr_padding[0x10];
      /// @brief Field ifru_addr, offset: 0x10, size: 0x2, def value: None
      ::System::Net::NetworkInformation::AixStructs::sockaddr ___ifru_addr;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___ifru_addr_padding_forAlignment[0x10];
      /// @brief Field ifru_addr, offset: 0x10, size: 0x2, def value: None
      ::System::Net::NetworkInformation::AixStructs::sockaddr ___ifru_addr_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9793 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x12 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq, 0x12>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq/<ifr_name>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq, "System.Net.NetworkInformation.AixStructs", "ifreq");
