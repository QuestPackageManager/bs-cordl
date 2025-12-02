#pragma once
// IWYU pragma private; include "System/Net/Configuration/SettingsSectionInternal.hpp"
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
// Dependencies System.Net.Sockets.IPProtectionLevel, System.Object
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SettingsSectionInternal
class CORDL_TYPE SettingsSectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field HttpListenerUnescapeRequestUrl, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_HttpListenerUnescapeRequestUrl, put = __cordl_internal_set_HttpListenerUnescapeRequestUrl)) bool HttpListenerUnescapeRequestUrl;

  /// @brief Field IPProtectionLevel, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_IPProtectionLevel, put = __cordl_internal_set_IPProtectionLevel)) ::System::Net::Sockets::IPProtectionLevel IPProtectionLevel;

  __declspec(property(get = get_Ipv6Enabled)) bool Ipv6Enabled;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::System::Net::Configuration::SettingsSectionInternal* instance;

  static inline ::System::Net::Configuration::SettingsSectionInternal* New_ctor();

  constexpr bool const& __cordl_internal_get_HttpListenerUnescapeRequestUrl() const;

  constexpr bool& __cordl_internal_get_HttpListenerUnescapeRequestUrl();

  constexpr ::System::Net::Sockets::IPProtectionLevel const& __cordl_internal_get_IPProtectionLevel() const;

  constexpr ::System::Net::Sockets::IPProtectionLevel& __cordl_internal_get_IPProtectionLevel();

  constexpr void __cordl_internal_set_HttpListenerUnescapeRequestUrl(bool value);

  constexpr void __cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value);

  /// @brief Method .ctor, addr 0x613aef0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Configuration::SettingsSectionInternal* getStaticF_instance();

  /// @brief Method get_Ipv6Enabled, addr 0x613aee8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Ipv6Enabled();

  /// @brief Method get_Section, addr 0x613ae8c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Net::Configuration::SettingsSectionInternal* get_Section();

  static inline void setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsSectionInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsSectionInternal(SettingsSectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsSectionInternal(SettingsSectionInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11710 };

  /// @brief Field HttpListenerUnescapeRequestUrl, offset: 0x10, size: 0x1, def value: None
  bool ___HttpListenerUnescapeRequestUrl;

  /// @brief Field IPProtectionLevel, offset: 0x14, size: 0x4, def value: None
  ::System::Net::Sockets::IPProtectionLevel ___IPProtectionLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___HttpListenerUnescapeRequestUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___IPProtectionLevel) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SettingsSectionInternal, 0x18>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
