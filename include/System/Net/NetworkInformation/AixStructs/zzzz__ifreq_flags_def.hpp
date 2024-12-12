#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq_flags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq_flags)
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags__ifr_name_e__FixedBuffer;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags__ifr_name_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq_flags);
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer);
// Dependencies
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_flags/<ifr_name>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ifreq_flags__ifr_name_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ifreq_flags__ifr_name_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ifreq_flags__ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9819 };

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
static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
// Dependencies System.Net.NetworkInformation.AixStructs.ifreq_flags::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_flags
#pragma pack(push, 0)
struct CORDL_TYPE ifreq_flags {
public:
  // Declarations
  using _ifr_name_e__FixedBuffer = ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer;

  /// @brief Field ifr_name, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_ifr_name, put = __cordl_internal_set_ifr_name)) ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer ifr_name;

  /// @brief Field ifru_flags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ifru_flags, put = __cordl_internal_set_ifru_flags)) uint32_t ifru_flags;

  constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer const& __cordl_internal_get_ifr_name() const;

  constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer& __cordl_internal_get_ifr_name();

  constexpr uint32_t const& __cordl_internal_get_ifru_flags() const;

  constexpr uint32_t& __cordl_internal_get_ifru_flags();

  constexpr void __cordl_internal_set_ifr_name(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer value);

  constexpr void __cordl_internal_set_ifru_flags(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ifreq_flags();

  // Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "ifru_flags", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ifreq_flags(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer ifr_name, uint32_t ifru_flags) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ifr_name_padding[0x0];
      /// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
      ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer ___ifr_name;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ifr_name_padding_forAlignment[0x0];
      /// @brief Field ifr_name, offset: 0x0, size: 0x10, def value: None
      ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer ___ifr_name_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___ifru_flags_padding[0x10];
      /// @brief Field ifru_flags, offset: 0x10, size: 0x4, def value: None
      uint32_t ___ifru_flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___ifru_flags_padding_forAlignment[0x10];
      /// @brief Field ifru_flags, offset: 0x10, size: 0x4, def value: None
      uint32_t ___ifru_flags_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq_flags, 0x14>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_flags, "System.Net.NetworkInformation.AixStructs", "ifreq_flags");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq_flags/<ifr_name>e__FixedBuffer");
