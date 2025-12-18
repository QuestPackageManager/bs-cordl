#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixIPInterfaceProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
CORDL_MODULE_EXPORT(UnixIPInterfaceProperties)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class UnixNetworkInterface;
}
namespace System::Net {
class IPAddress;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixIPInterfaceProperties);
// Dependencies System.Net.NetworkInformation.IPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnixIPInterfaceProperties
class CORDL_TYPE UnixIPInterfaceProperties : public ::System::Net::NetworkInformation::IPInterfaceProperties {
public:
  // Declarations
  __declspec(property(get = get_UnicastAddresses)) ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* UnicastAddresses;

  /// @brief Field addresses, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_addresses, put = __cordl_internal_set_addresses)) ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses;

  /// @brief Field iface, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_iface, put = __cordl_internal_set_iface)) ::System::Net::NetworkInformation::UnixNetworkInterface* iface;

  /// @brief Field ns, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ns, put = setStaticF_ns)) ::System::Text::RegularExpressions::Regex* ns;

  /// @brief Field search, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_search, put = setStaticF_search)) ::System::Text::RegularExpressions::Regex* search;

  static inline ::System::Net::NetworkInformation::UnixIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface,
                                                                                       ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* const& __cordl_internal_get_addresses() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& __cordl_internal_get_addresses();

  constexpr ::System::Net::NetworkInformation::UnixNetworkInterface* const& __cordl_internal_get_iface() const;

  constexpr ::System::Net::NetworkInformation::UnixNetworkInterface*& __cordl_internal_get_iface();

  constexpr void __cordl_internal_set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value);

  constexpr void __cordl_internal_set_iface(::System::Net::NetworkInformation::UnixNetworkInterface* value);

  /// @brief Method .ctor, addr 0x619e0e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_ns();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_search();

  /// @brief Method get_UnicastAddresses, addr 0x61a2584, size 0x1fc, virtual true, abstract: false, final false
  inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();

  static inline void setStaticF_ns(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_search(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixIPInterfaceProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixIPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixIPInterfaceProperties(UnixIPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixIPInterfaceProperties(UnixIPInterfaceProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11689 };

  /// @brief Field iface, offset: 0x10, size: 0x8, def value: None
  ::System::Net::NetworkInformation::UnixNetworkInterface* ___iface;

  /// @brief Field addresses, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* ___addresses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::UnixIPInterfaceProperties, ___iface) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::UnixIPInterfaceProperties, ___addresses) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixIPInterfaceProperties, 0x20>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPInterfaceProperties*, "System.Net.NetworkInformation", "UnixIPInterfaceProperties");
