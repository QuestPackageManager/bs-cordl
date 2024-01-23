#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SettingsSectionInternal)
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::SettingsSectionInternal);
// Type: System.Net.Configuration::SettingsSectionInternal
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9340))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9315))
// CS Name: ::System.Net.Configuration::SettingsSectionInternal*
class CORDL_TYPE SettingsSectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field HttpListenerUnescapeRequestUrl, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_HttpListenerUnescapeRequestUrl, put = __cordl_internal_set_HttpListenerUnescapeRequestUrl)) bool HttpListenerUnescapeRequestUrl;

  /// @brief Field IPProtectionLevel, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_IPProtectionLevel, put = __cordl_internal_set_IPProtectionLevel))::System::Net::Sockets::IPProtectionLevel IPProtectionLevel;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::System::Net::Configuration::SettingsSectionInternal* instance;

  __declspec(property(get = get_Ipv6Enabled)) bool Ipv6Enabled;

  constexpr bool& __cordl_internal_get_HttpListenerUnescapeRequestUrl();

  constexpr bool const& __cordl_internal_get_HttpListenerUnescapeRequestUrl() const;

  constexpr void __cordl_internal_set_HttpListenerUnescapeRequestUrl(bool value);

  constexpr ::System::Net::Sockets::IPProtectionLevel& __cordl_internal_get_IPProtectionLevel();

  constexpr ::System::Net::Sockets::IPProtectionLevel const& __cordl_internal_get_IPProtectionLevel() const;

  constexpr void __cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value);

  static inline void setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal* value);

  static inline ::System::Net::Configuration::SettingsSectionInternal* getStaticF_instance();

  /// @brief Method get_Section, addr 0x29f0db0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::Configuration::SettingsSectionInternal* get_Section();

  /// @brief Method get_Ipv6Enabled, addr 0x29f0e08, size 0x8, virtual false, abstract: false, final false
  inline bool get_Ipv6Enabled();

  static inline ::System::Net::Configuration::SettingsSectionInternal* New_ctor();

  /// @brief Method .ctor, addr 0x29f0e10, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSectionInternal(SettingsSectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSectionInternal(SettingsSectionInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSectionInternal();

public:
  /// @brief Field HttpListenerUnescapeRequestUrl, offset: 0x10, size: 0x1, def value: None
  bool ___HttpListenerUnescapeRequestUrl;

  /// @brief Field IPProtectionLevel, offset: 0x14, size: 0x4, def value: None
  ::System::Net::Sockets::IPProtectionLevel ___IPProtectionLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SettingsSectionInternal, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___HttpListenerUnescapeRequestUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___IPProtectionLevel) == 0x14, "Offset mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
