#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsConnectionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Interface/zzzz__CipherSuiteCode_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTlsConnectionInfo)
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsConnectionInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::MonoTlsConnectionInfo);
// Type: Mono.Security.Interface::MonoTlsConnectionInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: ::Mono.Security.Interface::MonoTlsConnectionInfo*
class CORDL_TYPE MonoTlsConnectionInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CipherSuiteCode, put = set_CipherSuiteCode))::Mono::Security::Interface::CipherSuiteCode CipherSuiteCode;

  __declspec(property(put = set_PeerDomainName))::StringW PeerDomainName;

  __declspec(property(get = get_ProtocolVersion, put = set_ProtocolVersion))::Mono::Security::Interface::TlsProtocols ProtocolVersion;

  /// @brief Field <CipherSuiteCode>k__BackingField, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__CipherSuiteCode_k__BackingField,
                      put = __cordl_internal_set__CipherSuiteCode_k__BackingField))::Mono::Security::Interface::CipherSuiteCode _CipherSuiteCode_k__BackingField;

  /// @brief Field <PeerDomainName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__PeerDomainName_k__BackingField, put = __cordl_internal_set__PeerDomainName_k__BackingField))::StringW _PeerDomainName_k__BackingField;

  /// @brief Field <ProtocolVersion>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__ProtocolVersion_k__BackingField,
                      put = __cordl_internal_set__ProtocolVersion_k__BackingField))::Mono::Security::Interface::TlsProtocols _ProtocolVersion_k__BackingField;

  static inline ::Mono::Security::Interface::MonoTlsConnectionInfo* New_ctor();

  /// @brief Method ToString, addr 0x2780d20, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Mono::Security::Interface::CipherSuiteCode const& __cordl_internal_get__CipherSuiteCode_k__BackingField() const;

  constexpr ::Mono::Security::Interface::CipherSuiteCode& __cordl_internal_get__CipherSuiteCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PeerDomainName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PeerDomainName_k__BackingField();

  constexpr ::Mono::Security::Interface::TlsProtocols const& __cordl_internal_get__ProtocolVersion_k__BackingField() const;

  constexpr ::Mono::Security::Interface::TlsProtocols& __cordl_internal_get__ProtocolVersion_k__BackingField();

  constexpr void __cordl_internal_set__CipherSuiteCode_k__BackingField(::Mono::Security::Interface::CipherSuiteCode value);

  constexpr void __cordl_internal_set__PeerDomainName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProtocolVersion_k__BackingField(::Mono::Security::Interface::TlsProtocols value);

  /// @brief Method .ctor, addr 0x2780ddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CipherSuiteCode, addr 0x2780cf8, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode();

  /// @brief Method get_ProtocolVersion, addr 0x2780d08, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::TlsProtocols get_ProtocolVersion();

  /// @brief Method set_CipherSuiteCode, addr 0x2780d00, size 0x8, virtual false, abstract: false, final false
  inline void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode value);

  /// @brief Method set_PeerDomainName, addr 0x2780d18, size 0x8, virtual false, abstract: false, final false
  inline void set_PeerDomainName(::StringW value);

  /// @brief Method set_ProtocolVersion, addr 0x2780d10, size 0x8, virtual false, abstract: false, final false
  inline void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsConnectionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsConnectionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsConnectionInfo(MonoTlsConnectionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsConnectionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsConnectionInfo(MonoTlsConnectionInfo const&) = delete;

  /// @brief Field <CipherSuiteCode>k__BackingField, offset: 0x10, size: 0x2, def value: None
  ::Mono::Security::Interface::CipherSuiteCode ____CipherSuiteCode_k__BackingField;

  /// @brief Field <ProtocolVersion>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Mono::Security::Interface::TlsProtocols ____ProtocolVersion_k__BackingField;

  /// @brief Field <PeerDomainName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____PeerDomainName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsConnectionInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsConnectionInfo, ____CipherSuiteCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsConnectionInfo, ____ProtocolVersion_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Interface::MonoTlsConnectionInfo, ____PeerDomainName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsConnectionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsConnectionInfo*, "Mono.Security.Interface", "MonoTlsConnectionInfo");
