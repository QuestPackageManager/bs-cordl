#pragma once
// IWYU pragma private; include "System/Net/Sockets/AddressFamily.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressFamily)
// Forward declare root types
namespace System::Net::Sockets {
struct AddressFamily;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::AddressFamily);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.AddressFamily
struct CORDL_TYPE AddressFamily {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AddressFamily_Unwrapped
  enum struct __AddressFamily_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Unix = static_cast<int32_t>(0x1),
    __E_InterNetwork = static_cast<int32_t>(0x2),
    __E_ImpLink = static_cast<int32_t>(0x3),
    __E_Pup = static_cast<int32_t>(0x4),
    __E_Chaos = static_cast<int32_t>(0x5),
    __E_NS = static_cast<int32_t>(0x6),
    __E_Ipx = static_cast<int32_t>(0x6),
    __E_Iso = static_cast<int32_t>(0x7),
    __E_Osi = static_cast<int32_t>(0x7),
    __E_Ecma = static_cast<int32_t>(0x8),
    __E_DataKit = static_cast<int32_t>(0x9),
    __E_Ccitt = static_cast<int32_t>(0xa),
    __E_Sna = static_cast<int32_t>(0xb),
    __E_DecNet = static_cast<int32_t>(0xc),
    __E_DataLink = static_cast<int32_t>(0xd),
    __E_Lat = static_cast<int32_t>(0xe),
    __E_HyperChannel = static_cast<int32_t>(0xf),
    __E_AppleTalk = static_cast<int32_t>(0x10),
    __E_NetBios = static_cast<int32_t>(0x11),
    __E_VoiceView = static_cast<int32_t>(0x12),
    __E_FireFox = static_cast<int32_t>(0x13),
    __E_Banyan = static_cast<int32_t>(0x15),
    __E_Atm = static_cast<int32_t>(0x16),
    __E_InterNetworkV6 = static_cast<int32_t>(0x17),
    __E_Cluster = static_cast<int32_t>(0x18),
    __E_Ieee12844 = static_cast<int32_t>(0x19),
    __E_Irda = static_cast<int32_t>(0x1a),
    __E_NetworkDesigners = static_cast<int32_t>(0x1c),
    __E_Max = static_cast<int32_t>(0x1d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AddressFamily_Unwrapped() const noexcept {
    return static_cast<__AddressFamily_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressFamily();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AddressFamily(int32_t value__) noexcept;

  /// @brief Field AppleTalk value: I32(16)
  static ::System::Net::Sockets::AddressFamily const AppleTalk;

  /// @brief Field Atm value: I32(22)
  static ::System::Net::Sockets::AddressFamily const Atm;

  /// @brief Field Banyan value: I32(21)
  static ::System::Net::Sockets::AddressFamily const Banyan;

  /// @brief Field Ccitt value: I32(10)
  static ::System::Net::Sockets::AddressFamily const Ccitt;

  /// @brief Field Chaos value: I32(5)
  static ::System::Net::Sockets::AddressFamily const Chaos;

  /// @brief Field Cluster value: I32(24)
  static ::System::Net::Sockets::AddressFamily const Cluster;

  /// @brief Field DataKit value: I32(9)
  static ::System::Net::Sockets::AddressFamily const DataKit;

  /// @brief Field DataLink value: I32(13)
  static ::System::Net::Sockets::AddressFamily const DataLink;

  /// @brief Field DecNet value: I32(12)
  static ::System::Net::Sockets::AddressFamily const DecNet;

  /// @brief Field Ecma value: I32(8)
  static ::System::Net::Sockets::AddressFamily const Ecma;

  /// @brief Field FireFox value: I32(19)
  static ::System::Net::Sockets::AddressFamily const FireFox;

  /// @brief Field HyperChannel value: I32(15)
  static ::System::Net::Sockets::AddressFamily const HyperChannel;

  /// @brief Field Ieee12844 value: I32(25)
  static ::System::Net::Sockets::AddressFamily const Ieee12844;

  /// @brief Field ImpLink value: I32(3)
  static ::System::Net::Sockets::AddressFamily const ImpLink;

  /// @brief Field InterNetwork value: I32(2)
  static ::System::Net::Sockets::AddressFamily const InterNetwork;

  /// @brief Field InterNetworkV6 value: I32(23)
  static ::System::Net::Sockets::AddressFamily const InterNetworkV6;

  /// @brief Field Ipx value: I32(6)
  static ::System::Net::Sockets::AddressFamily const Ipx;

  /// @brief Field Irda value: I32(26)
  static ::System::Net::Sockets::AddressFamily const Irda;

  /// @brief Field Iso value: I32(7)
  static ::System::Net::Sockets::AddressFamily const Iso;

  /// @brief Field Lat value: I32(14)
  static ::System::Net::Sockets::AddressFamily const Lat;

  /// @brief Field Max value: I32(29)
  static ::System::Net::Sockets::AddressFamily const Max;

  /// @brief Field NS value: I32(6)
  static ::System::Net::Sockets::AddressFamily const NS;

  /// @brief Field NetBios value: I32(17)
  static ::System::Net::Sockets::AddressFamily const NetBios;

  /// @brief Field NetworkDesigners value: I32(28)
  static ::System::Net::Sockets::AddressFamily const NetworkDesigners;

  /// @brief Field Osi value: I32(7)
  static ::System::Net::Sockets::AddressFamily const Osi;

  /// @brief Field Pup value: I32(4)
  static ::System::Net::Sockets::AddressFamily const Pup;

  /// @brief Field Sna value: I32(11)
  static ::System::Net::Sockets::AddressFamily const Sna;

  /// @brief Field Unix value: I32(1)
  static ::System::Net::Sockets::AddressFamily const Unix;

  /// @brief Field Unknown value: I32(-1)
  static ::System::Net::Sockets::AddressFamily const Unknown;

  /// @brief Field Unspecified value: I32(0)
  static ::System::Net::Sockets::AddressFamily const Unspecified;

  /// @brief Field VoiceView value: I32(18)
  static ::System::Net::Sockets::AddressFamily const VoiceView;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9853 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::AddressFamily, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::AddressFamily, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::AddressFamily, "System.Net.Sockets", "AddressFamily");
