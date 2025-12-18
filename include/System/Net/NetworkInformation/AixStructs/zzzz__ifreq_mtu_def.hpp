#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq_mtu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq_mtu)
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu__ifr_name_e__FixedBuffer;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu__ifr_name_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq_mtu);
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer);
// Dependencies
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_mtu/<ifr_name>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ifreq_mtu__ifr_name_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ifreq_mtu__ifr_name_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ifreq_mtu__ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x10 - 0x1 = 0xf, packed as 0xf
  uint8_t _cordl_size_padding[0xf];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
// Dependencies System.Net.NetworkInformation.AixStructs.ifreq_mtu::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_mtu
#pragma pack(push, 0)
struct CORDL_TYPE ifreq_mtu {
public:
  // Declarations
  using _ifr_name_e__FixedBuffer = ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer;

  /// @brief Field ifr_name, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_ifr_name, put = __cordl_internal_set_ifr_name)) ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer ifr_name;

  /// @brief Field ifru_mtu, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ifru_mtu, put = __cordl_internal_set_ifru_mtu)) int32_t ifru_mtu;

  constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer const& __cordl_internal_get_ifr_name() const;

  constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer& __cordl_internal_get_ifr_name();

  constexpr int32_t const& __cordl_internal_get_ifru_mtu() const;

  constexpr int32_t& __cordl_internal_get_ifru_mtu();

  constexpr void __cordl_internal_set_ifr_name(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer value);

  constexpr void __cordl_internal_set_ifru_mtu(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ifreq_mtu();

  // Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "ifru_mtu", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ifreq_mtu(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer ifr_name, int32_t ifru_mtu) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ifr_name_padding[0x0];
      /// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
      ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer ___ifr_name;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ifr_name_padding_forAlignment[0x0];
      /// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
      ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer ___ifr_name_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___ifru_mtu_padding[0x10];
      /// @brief Field ifru_mtu, offset: 0x10, size: 0x4, def value: None
      int32_t ___ifru_mtu;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___ifru_mtu_padding_forAlignment[0x10];
      /// @brief Field ifru_mtu, offset: 0x10, size: 0x4, def value: None
      int32_t ___ifru_mtu_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11705 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq_mtu, 0x14>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_mtu, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu/<ifr_name>e__FixedBuffer");
