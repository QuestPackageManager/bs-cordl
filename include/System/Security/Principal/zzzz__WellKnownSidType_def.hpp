#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WellKnownSidType)
// Forward declare root types
namespace System::Security::Principal {
struct WellKnownSidType;
}
// Write type traits
MARK_VAL_T(::System::Security::Principal::WellKnownSidType);
// Type: System.Security.Principal::WellKnownSidType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: true
// CS Name: ::System.Security.Principal::WellKnownSidType
struct CORDL_TYPE WellKnownSidType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WellKnownSidType_Unwrapped
  enum struct __WellKnownSidType_Unwrapped : int32_t {
    __E_NullSid = static_cast<int32_t>(0x0),
    __E_WorldSid = static_cast<int32_t>(0x1),
    __E_LocalSid = static_cast<int32_t>(0x2),
    __E_CreatorOwnerSid = static_cast<int32_t>(0x3),
    __E_CreatorGroupSid = static_cast<int32_t>(0x4),
    __E_CreatorOwnerServerSid = static_cast<int32_t>(0x5),
    __E_CreatorGroupServerSid = static_cast<int32_t>(0x6),
    __E_NTAuthoritySid = static_cast<int32_t>(0x7),
    __E_DialupSid = static_cast<int32_t>(0x8),
    __E_NetworkSid = static_cast<int32_t>(0x9),
    __E_BatchSid = static_cast<int32_t>(0xa),
    __E_InteractiveSid = static_cast<int32_t>(0xb),
    __E_ServiceSid = static_cast<int32_t>(0xc),
    __E_AnonymousSid = static_cast<int32_t>(0xd),
    __E_ProxySid = static_cast<int32_t>(0xe),
    __E_EnterpriseControllersSid = static_cast<int32_t>(0xf),
    __E_SelfSid = static_cast<int32_t>(0x10),
    __E_AuthenticatedUserSid = static_cast<int32_t>(0x11),
    __E_RestrictedCodeSid = static_cast<int32_t>(0x12),
    __E_TerminalServerSid = static_cast<int32_t>(0x13),
    __E_RemoteLogonIdSid = static_cast<int32_t>(0x14),
    __E_LogonIdsSid = static_cast<int32_t>(0x15),
    __E_LocalSystemSid = static_cast<int32_t>(0x16),
    __E_LocalServiceSid = static_cast<int32_t>(0x17),
    __E_NetworkServiceSid = static_cast<int32_t>(0x18),
    __E_BuiltinDomainSid = static_cast<int32_t>(0x19),
    __E_BuiltinAdministratorsSid = static_cast<int32_t>(0x1a),
    __E_BuiltinUsersSid = static_cast<int32_t>(0x1b),
    __E_BuiltinGuestsSid = static_cast<int32_t>(0x1c),
    __E_BuiltinPowerUsersSid = static_cast<int32_t>(0x1d),
    __E_BuiltinAccountOperatorsSid = static_cast<int32_t>(0x1e),
    __E_BuiltinSystemOperatorsSid = static_cast<int32_t>(0x1f),
    __E_BuiltinPrintOperatorsSid = static_cast<int32_t>(0x20),
    __E_BuiltinBackupOperatorsSid = static_cast<int32_t>(0x21),
    __E_BuiltinReplicatorSid = static_cast<int32_t>(0x22),
    __E_BuiltinPreWindows2000CompatibleAccessSid = static_cast<int32_t>(0x23),
    __E_BuiltinRemoteDesktopUsersSid = static_cast<int32_t>(0x24),
    __E_BuiltinNetworkConfigurationOperatorsSid = static_cast<int32_t>(0x25),
    __E_AccountAdministratorSid = static_cast<int32_t>(0x26),
    __E_AccountGuestSid = static_cast<int32_t>(0x27),
    __E_AccountKrbtgtSid = static_cast<int32_t>(0x28),
    __E_AccountDomainAdminsSid = static_cast<int32_t>(0x29),
    __E_AccountDomainUsersSid = static_cast<int32_t>(0x2a),
    __E_AccountDomainGuestsSid = static_cast<int32_t>(0x2b),
    __E_AccountComputersSid = static_cast<int32_t>(0x2c),
    __E_AccountControllersSid = static_cast<int32_t>(0x2d),
    __E_AccountCertAdminsSid = static_cast<int32_t>(0x2e),
    __E_AccountSchemaAdminsSid = static_cast<int32_t>(0x2f),
    __E_AccountEnterpriseAdminsSid = static_cast<int32_t>(0x30),
    __E_AccountPolicyAdminsSid = static_cast<int32_t>(0x31),
    __E_AccountRasAndIasServersSid = static_cast<int32_t>(0x32),
    __E_NtlmAuthenticationSid = static_cast<int32_t>(0x33),
    __E_DigestAuthenticationSid = static_cast<int32_t>(0x34),
    __E_SChannelAuthenticationSid = static_cast<int32_t>(0x35),
    __E_ThisOrganizationSid = static_cast<int32_t>(0x36),
    __E_OtherOrganizationSid = static_cast<int32_t>(0x37),
    __E_BuiltinIncomingForestTrustBuildersSid = static_cast<int32_t>(0x38),
    __E_BuiltinPerformanceMonitoringUsersSid = static_cast<int32_t>(0x39),
    __E_BuiltinPerformanceLoggingUsersSid = static_cast<int32_t>(0x3a),
    __E_BuiltinAuthorizationAccessSid = static_cast<int32_t>(0x3b),
    __E_WinBuiltinTerminalServerLicenseServersSid = static_cast<int32_t>(0x3c),
    __E_MaxDefined = static_cast<int32_t>(0x3c),
    __E_WinBuiltinDCOMUsersSid = static_cast<int32_t>(0x3d),
    __E_WinBuiltinIUsersSid = static_cast<int32_t>(0x3e),
    __E_WinIUserSid = static_cast<int32_t>(0x3f),
    __E_WinBuiltinCryptoOperatorsSid = static_cast<int32_t>(0x40),
    __E_WinUntrustedLabelSid = static_cast<int32_t>(0x41),
    __E_WinLowLabelSid = static_cast<int32_t>(0x42),
    __E_WinMediumLabelSid = static_cast<int32_t>(0x43),
    __E_WinHighLabelSid = static_cast<int32_t>(0x44),
    __E_WinSystemLabelSid = static_cast<int32_t>(0x45),
    __E_WinWriteRestrictedCodeSid = static_cast<int32_t>(0x46),
    __E_WinCreatorOwnerRightsSid = static_cast<int32_t>(0x47),
    __E_WinCacheablePrincipalsGroupSid = static_cast<int32_t>(0x48),
    __E_WinNonCacheablePrincipalsGroupSid = static_cast<int32_t>(0x49),
    __E_WinEnterpriseReadonlyControllersSid = static_cast<int32_t>(0x4a),
    __E_WinAccountReadonlyControllersSid = static_cast<int32_t>(0x4b),
    __E_WinBuiltinEventLogReadersGroup = static_cast<int32_t>(0x4c),
    __E_WinNewEnterpriseReadonlyControllersSid = static_cast<int32_t>(0x4d),
    __E_WinBuiltinCertSvcDComAccessGroup = static_cast<int32_t>(0x4e),
    __E_WinMediumPlusLabelSid = static_cast<int32_t>(0x4f),
    __E_WinLocalLogonSid = static_cast<int32_t>(0x50),
    __E_WinConsoleLogonSid = static_cast<int32_t>(0x51),
    __E_WinThisOrganizationCertificateSid = static_cast<int32_t>(0x52),
    __E_WinApplicationPackageAuthoritySid = static_cast<int32_t>(0x53),
    __E_WinBuiltinAnyPackageSid = static_cast<int32_t>(0x54),
    __E_WinCapabilityInternetClientSid = static_cast<int32_t>(0x55),
    __E_WinCapabilityInternetClientServerSid = static_cast<int32_t>(0x56),
    __E_WinCapabilityPrivateNetworkClientServerSid = static_cast<int32_t>(0x57),
    __E_WinCapabilityPicturesLibrarySid = static_cast<int32_t>(0x58),
    __E_WinCapabilityVideosLibrarySid = static_cast<int32_t>(0x59),
    __E_WinCapabilityMusicLibrarySid = static_cast<int32_t>(0x5a),
    __E_WinCapabilityDocumentsLibrarySid = static_cast<int32_t>(0x5b),
    __E_WinCapabilitySharedUserCertificatesSid = static_cast<int32_t>(0x5c),
    __E_WinCapabilityEnterpriseAuthenticationSid = static_cast<int32_t>(0x5d),
    __E_WinCapabilityRemovableStorageSid = static_cast<int32_t>(0x5e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WellKnownSidType_Unwrapped() const noexcept {
    return static_cast<__WellKnownSidType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__WellKnownSidType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownSidType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WellKnownSidType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AccountAdministratorSid value: static_cast<int32_t>(0x26)
  static ::System::Security::Principal::WellKnownSidType const AccountAdministratorSid;

  /// @brief Field AccountCertAdminsSid value: static_cast<int32_t>(0x2e)
  static ::System::Security::Principal::WellKnownSidType const AccountCertAdminsSid;

  /// @brief Field AccountComputersSid value: static_cast<int32_t>(0x2c)
  static ::System::Security::Principal::WellKnownSidType const AccountComputersSid;

  /// @brief Field AccountControllersSid value: static_cast<int32_t>(0x2d)
  static ::System::Security::Principal::WellKnownSidType const AccountControllersSid;

  /// @brief Field AccountDomainAdminsSid value: static_cast<int32_t>(0x29)
  static ::System::Security::Principal::WellKnownSidType const AccountDomainAdminsSid;

  /// @brief Field AccountDomainGuestsSid value: static_cast<int32_t>(0x2b)
  static ::System::Security::Principal::WellKnownSidType const AccountDomainGuestsSid;

  /// @brief Field AccountDomainUsersSid value: static_cast<int32_t>(0x2a)
  static ::System::Security::Principal::WellKnownSidType const AccountDomainUsersSid;

  /// @brief Field AccountEnterpriseAdminsSid value: static_cast<int32_t>(0x30)
  static ::System::Security::Principal::WellKnownSidType const AccountEnterpriseAdminsSid;

  /// @brief Field AccountGuestSid value: static_cast<int32_t>(0x27)
  static ::System::Security::Principal::WellKnownSidType const AccountGuestSid;

  /// @brief Field AccountKrbtgtSid value: static_cast<int32_t>(0x28)
  static ::System::Security::Principal::WellKnownSidType const AccountKrbtgtSid;

  /// @brief Field AccountPolicyAdminsSid value: static_cast<int32_t>(0x31)
  static ::System::Security::Principal::WellKnownSidType const AccountPolicyAdminsSid;

  /// @brief Field AccountRasAndIasServersSid value: static_cast<int32_t>(0x32)
  static ::System::Security::Principal::WellKnownSidType const AccountRasAndIasServersSid;

  /// @brief Field AccountSchemaAdminsSid value: static_cast<int32_t>(0x2f)
  static ::System::Security::Principal::WellKnownSidType const AccountSchemaAdminsSid;

  /// @brief Field AnonymousSid value: static_cast<int32_t>(0xd)
  static ::System::Security::Principal::WellKnownSidType const AnonymousSid;

  /// @brief Field AuthenticatedUserSid value: static_cast<int32_t>(0x11)
  static ::System::Security::Principal::WellKnownSidType const AuthenticatedUserSid;

  /// @brief Field BatchSid value: static_cast<int32_t>(0xa)
  static ::System::Security::Principal::WellKnownSidType const BatchSid;

  /// @brief Field BuiltinAccountOperatorsSid value: static_cast<int32_t>(0x1e)
  static ::System::Security::Principal::WellKnownSidType const BuiltinAccountOperatorsSid;

  /// @brief Field BuiltinAdministratorsSid value: static_cast<int32_t>(0x1a)
  static ::System::Security::Principal::WellKnownSidType const BuiltinAdministratorsSid;

  /// @brief Field BuiltinAuthorizationAccessSid value: static_cast<int32_t>(0x3b)
  static ::System::Security::Principal::WellKnownSidType const BuiltinAuthorizationAccessSid;

  /// @brief Field BuiltinBackupOperatorsSid value: static_cast<int32_t>(0x21)
  static ::System::Security::Principal::WellKnownSidType const BuiltinBackupOperatorsSid;

  /// @brief Field BuiltinDomainSid value: static_cast<int32_t>(0x19)
  static ::System::Security::Principal::WellKnownSidType const BuiltinDomainSid;

  /// @brief Field BuiltinGuestsSid value: static_cast<int32_t>(0x1c)
  static ::System::Security::Principal::WellKnownSidType const BuiltinGuestsSid;

  /// @brief Field BuiltinIncomingForestTrustBuildersSid value: static_cast<int32_t>(0x38)
  static ::System::Security::Principal::WellKnownSidType const BuiltinIncomingForestTrustBuildersSid;

  /// @brief Field BuiltinNetworkConfigurationOperatorsSid value: static_cast<int32_t>(0x25)
  static ::System::Security::Principal::WellKnownSidType const BuiltinNetworkConfigurationOperatorsSid;

  /// @brief Field BuiltinPerformanceLoggingUsersSid value: static_cast<int32_t>(0x3a)
  static ::System::Security::Principal::WellKnownSidType const BuiltinPerformanceLoggingUsersSid;

  /// @brief Field BuiltinPerformanceMonitoringUsersSid value: static_cast<int32_t>(0x39)
  static ::System::Security::Principal::WellKnownSidType const BuiltinPerformanceMonitoringUsersSid;

  /// @brief Field BuiltinPowerUsersSid value: static_cast<int32_t>(0x1d)
  static ::System::Security::Principal::WellKnownSidType const BuiltinPowerUsersSid;

  /// @brief Field BuiltinPreWindows2000CompatibleAccessSid value: static_cast<int32_t>(0x23)
  static ::System::Security::Principal::WellKnownSidType const BuiltinPreWindows2000CompatibleAccessSid;

  /// @brief Field BuiltinPrintOperatorsSid value: static_cast<int32_t>(0x20)
  static ::System::Security::Principal::WellKnownSidType const BuiltinPrintOperatorsSid;

  /// @brief Field BuiltinRemoteDesktopUsersSid value: static_cast<int32_t>(0x24)
  static ::System::Security::Principal::WellKnownSidType const BuiltinRemoteDesktopUsersSid;

  /// @brief Field BuiltinReplicatorSid value: static_cast<int32_t>(0x22)
  static ::System::Security::Principal::WellKnownSidType const BuiltinReplicatorSid;

  /// @brief Field BuiltinSystemOperatorsSid value: static_cast<int32_t>(0x1f)
  static ::System::Security::Principal::WellKnownSidType const BuiltinSystemOperatorsSid;

  /// @brief Field BuiltinUsersSid value: static_cast<int32_t>(0x1b)
  static ::System::Security::Principal::WellKnownSidType const BuiltinUsersSid;

  /// @brief Field CreatorGroupServerSid value: static_cast<int32_t>(0x6)
  static ::System::Security::Principal::WellKnownSidType const CreatorGroupServerSid;

  /// @brief Field CreatorGroupSid value: static_cast<int32_t>(0x4)
  static ::System::Security::Principal::WellKnownSidType const CreatorGroupSid;

  /// @brief Field CreatorOwnerServerSid value: static_cast<int32_t>(0x5)
  static ::System::Security::Principal::WellKnownSidType const CreatorOwnerServerSid;

  /// @brief Field CreatorOwnerSid value: static_cast<int32_t>(0x3)
  static ::System::Security::Principal::WellKnownSidType const CreatorOwnerSid;

  /// @brief Field DialupSid value: static_cast<int32_t>(0x8)
  static ::System::Security::Principal::WellKnownSidType const DialupSid;

  /// @brief Field DigestAuthenticationSid value: static_cast<int32_t>(0x34)
  static ::System::Security::Principal::WellKnownSidType const DigestAuthenticationSid;

  /// @brief Field EnterpriseControllersSid value: static_cast<int32_t>(0xf)
  static ::System::Security::Principal::WellKnownSidType const EnterpriseControllersSid;

  /// @brief Field InteractiveSid value: static_cast<int32_t>(0xb)
  static ::System::Security::Principal::WellKnownSidType const InteractiveSid;

  /// @brief Field LocalServiceSid value: static_cast<int32_t>(0x17)
  static ::System::Security::Principal::WellKnownSidType const LocalServiceSid;

  /// @brief Field LocalSid value: static_cast<int32_t>(0x2)
  static ::System::Security::Principal::WellKnownSidType const LocalSid;

  /// @brief Field LocalSystemSid value: static_cast<int32_t>(0x16)
  static ::System::Security::Principal::WellKnownSidType const LocalSystemSid;

  /// @brief Field LogonIdsSid value: static_cast<int32_t>(0x15)
  static ::System::Security::Principal::WellKnownSidType const LogonIdsSid;

  /// @brief Field MaxDefined value: static_cast<int32_t>(0x3c)
  static ::System::Security::Principal::WellKnownSidType const MaxDefined;

  /// @brief Field NTAuthoritySid value: static_cast<int32_t>(0x7)
  static ::System::Security::Principal::WellKnownSidType const NTAuthoritySid;

  /// @brief Field NetworkServiceSid value: static_cast<int32_t>(0x18)
  static ::System::Security::Principal::WellKnownSidType const NetworkServiceSid;

  /// @brief Field NetworkSid value: static_cast<int32_t>(0x9)
  static ::System::Security::Principal::WellKnownSidType const NetworkSid;

  /// @brief Field NtlmAuthenticationSid value: static_cast<int32_t>(0x33)
  static ::System::Security::Principal::WellKnownSidType const NtlmAuthenticationSid;

  /// @brief Field NullSid value: static_cast<int32_t>(0x0)
  static ::System::Security::Principal::WellKnownSidType const NullSid;

  /// @brief Field OtherOrganizationSid value: static_cast<int32_t>(0x37)
  static ::System::Security::Principal::WellKnownSidType const OtherOrganizationSid;

  /// @brief Field ProxySid value: static_cast<int32_t>(0xe)
  static ::System::Security::Principal::WellKnownSidType const ProxySid;

  /// @brief Field RemoteLogonIdSid value: static_cast<int32_t>(0x14)
  static ::System::Security::Principal::WellKnownSidType const RemoteLogonIdSid;

  /// @brief Field RestrictedCodeSid value: static_cast<int32_t>(0x12)
  static ::System::Security::Principal::WellKnownSidType const RestrictedCodeSid;

  /// @brief Field SChannelAuthenticationSid value: static_cast<int32_t>(0x35)
  static ::System::Security::Principal::WellKnownSidType const SChannelAuthenticationSid;

  /// @brief Field SelfSid value: static_cast<int32_t>(0x10)
  static ::System::Security::Principal::WellKnownSidType const SelfSid;

  /// @brief Field ServiceSid value: static_cast<int32_t>(0xc)
  static ::System::Security::Principal::WellKnownSidType const ServiceSid;

  /// @brief Field TerminalServerSid value: static_cast<int32_t>(0x13)
  static ::System::Security::Principal::WellKnownSidType const TerminalServerSid;

  /// @brief Field ThisOrganizationSid value: static_cast<int32_t>(0x36)
  static ::System::Security::Principal::WellKnownSidType const ThisOrganizationSid;

  /// @brief Field WinAccountReadonlyControllersSid value: static_cast<int32_t>(0x4b)
  static ::System::Security::Principal::WellKnownSidType const WinAccountReadonlyControllersSid;

  /// @brief Field WinApplicationPackageAuthoritySid value: static_cast<int32_t>(0x53)
  static ::System::Security::Principal::WellKnownSidType const WinApplicationPackageAuthoritySid;

  /// @brief Field WinBuiltinAnyPackageSid value: static_cast<int32_t>(0x54)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinAnyPackageSid;

  /// @brief Field WinBuiltinCertSvcDComAccessGroup value: static_cast<int32_t>(0x4e)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinCertSvcDComAccessGroup;

  /// @brief Field WinBuiltinCryptoOperatorsSid value: static_cast<int32_t>(0x40)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinCryptoOperatorsSid;

  /// @brief Field WinBuiltinDCOMUsersSid value: static_cast<int32_t>(0x3d)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinDCOMUsersSid;

  /// @brief Field WinBuiltinEventLogReadersGroup value: static_cast<int32_t>(0x4c)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinEventLogReadersGroup;

  /// @brief Field WinBuiltinIUsersSid value: static_cast<int32_t>(0x3e)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinIUsersSid;

  /// @brief Field WinBuiltinTerminalServerLicenseServersSid value: static_cast<int32_t>(0x3c)
  static ::System::Security::Principal::WellKnownSidType const WinBuiltinTerminalServerLicenseServersSid;

  /// @brief Field WinCacheablePrincipalsGroupSid value: static_cast<int32_t>(0x48)
  static ::System::Security::Principal::WellKnownSidType const WinCacheablePrincipalsGroupSid;

  /// @brief Field WinCapabilityDocumentsLibrarySid value: static_cast<int32_t>(0x5b)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityDocumentsLibrarySid;

  /// @brief Field WinCapabilityEnterpriseAuthenticationSid value: static_cast<int32_t>(0x5d)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityEnterpriseAuthenticationSid;

  /// @brief Field WinCapabilityInternetClientServerSid value: static_cast<int32_t>(0x56)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityInternetClientServerSid;

  /// @brief Field WinCapabilityInternetClientSid value: static_cast<int32_t>(0x55)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityInternetClientSid;

  /// @brief Field WinCapabilityMusicLibrarySid value: static_cast<int32_t>(0x5a)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityMusicLibrarySid;

  /// @brief Field WinCapabilityPicturesLibrarySid value: static_cast<int32_t>(0x58)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityPicturesLibrarySid;

  /// @brief Field WinCapabilityPrivateNetworkClientServerSid value: static_cast<int32_t>(0x57)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityPrivateNetworkClientServerSid;

  /// @brief Field WinCapabilityRemovableStorageSid value: static_cast<int32_t>(0x5e)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityRemovableStorageSid;

  /// @brief Field WinCapabilitySharedUserCertificatesSid value: static_cast<int32_t>(0x5c)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilitySharedUserCertificatesSid;

  /// @brief Field WinCapabilityVideosLibrarySid value: static_cast<int32_t>(0x59)
  static ::System::Security::Principal::WellKnownSidType const WinCapabilityVideosLibrarySid;

  /// @brief Field WinConsoleLogonSid value: static_cast<int32_t>(0x51)
  static ::System::Security::Principal::WellKnownSidType const WinConsoleLogonSid;

  /// @brief Field WinCreatorOwnerRightsSid value: static_cast<int32_t>(0x47)
  static ::System::Security::Principal::WellKnownSidType const WinCreatorOwnerRightsSid;

  /// @brief Field WinEnterpriseReadonlyControllersSid value: static_cast<int32_t>(0x4a)
  static ::System::Security::Principal::WellKnownSidType const WinEnterpriseReadonlyControllersSid;

  /// @brief Field WinHighLabelSid value: static_cast<int32_t>(0x44)
  static ::System::Security::Principal::WellKnownSidType const WinHighLabelSid;

  /// @brief Field WinIUserSid value: static_cast<int32_t>(0x3f)
  static ::System::Security::Principal::WellKnownSidType const WinIUserSid;

  /// @brief Field WinLocalLogonSid value: static_cast<int32_t>(0x50)
  static ::System::Security::Principal::WellKnownSidType const WinLocalLogonSid;

  /// @brief Field WinLowLabelSid value: static_cast<int32_t>(0x42)
  static ::System::Security::Principal::WellKnownSidType const WinLowLabelSid;

  /// @brief Field WinMediumLabelSid value: static_cast<int32_t>(0x43)
  static ::System::Security::Principal::WellKnownSidType const WinMediumLabelSid;

  /// @brief Field WinMediumPlusLabelSid value: static_cast<int32_t>(0x4f)
  static ::System::Security::Principal::WellKnownSidType const WinMediumPlusLabelSid;

  /// @brief Field WinNewEnterpriseReadonlyControllersSid value: static_cast<int32_t>(0x4d)
  static ::System::Security::Principal::WellKnownSidType const WinNewEnterpriseReadonlyControllersSid;

  /// @brief Field WinNonCacheablePrincipalsGroupSid value: static_cast<int32_t>(0x49)
  static ::System::Security::Principal::WellKnownSidType const WinNonCacheablePrincipalsGroupSid;

  /// @brief Field WinSystemLabelSid value: static_cast<int32_t>(0x45)
  static ::System::Security::Principal::WellKnownSidType const WinSystemLabelSid;

  /// @brief Field WinThisOrganizationCertificateSid value: static_cast<int32_t>(0x52)
  static ::System::Security::Principal::WellKnownSidType const WinThisOrganizationCertificateSid;

  /// @brief Field WinUntrustedLabelSid value: static_cast<int32_t>(0x41)
  static ::System::Security::Principal::WellKnownSidType const WinUntrustedLabelSid;

  /// @brief Field WinWriteRestrictedCodeSid value: static_cast<int32_t>(0x46)
  static ::System::Security::Principal::WellKnownSidType const WinWriteRestrictedCodeSid;

  /// @brief Field WorldSid value: static_cast<int32_t>(0x1)
  static ::System::Security::Principal::WellKnownSidType const WorldSid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WellKnownSidType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownSidType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WellKnownSidType, "System.Security.Principal", "WellKnownSidType");
