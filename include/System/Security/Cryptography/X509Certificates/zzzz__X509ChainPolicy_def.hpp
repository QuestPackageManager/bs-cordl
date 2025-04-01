#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ChainPolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationFlag_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509VerificationFlags_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(X509ChainPolicy)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationFlag;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509VerificationFlags;
}
namespace System::Security::Cryptography {
class OidCollection;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainPolicy);
// Dependencies System.DateTime, System.Object, System.Security.Cryptography.X509Certificates.X509RevocationFlag, System.Security.Cryptography.X509Certificates.X509RevocationMode,
// System.Security.Cryptography.X509Certificates.X509VerificationFlags, System.TimeSpan
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainPolicy
class CORDL_TYPE X509ChainPolicy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ExtraStore)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* ExtraStore;

  __declspec(property(get = get_RevocationFlag, put = set_RevocationFlag)) ::System::Security::Cryptography::X509Certificates::X509RevocationFlag RevocationFlag;

  __declspec(property(get = get_RevocationMode, put = set_RevocationMode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode RevocationMode;

  __declspec(property(put = set_UrlRetrievalTimeout)) ::System::TimeSpan UrlRetrievalTimeout;

  __declspec(property(get = get_VerificationFlags, put = set_VerificationFlags)) ::System::Security::Cryptography::X509Certificates::X509VerificationFlags VerificationFlags;

  __declspec(property(get = get_VerificationTime, put = set_VerificationTime)) ::System::DateTime VerificationTime;

  /// @brief Field apps, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_apps, put = __cordl_internal_set_apps)) ::System::Security::Cryptography::OidCollection* apps;

  /// @brief Field cert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cert, put = __cordl_internal_set_cert)) ::System::Security::Cryptography::OidCollection* cert;

  /// @brief Field mode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::System::Security::Cryptography::X509Certificates::X509RevocationMode mode;

  /// @brief Field rflag, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_rflag, put = __cordl_internal_set_rflag)) ::System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag;

  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_store, put = __cordl_internal_set_store)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* store;

  /// @brief Field store2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_store2, put = __cordl_internal_set_store2)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2;

  /// @brief Field timeout, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_timeout, put = __cordl_internal_set_timeout)) ::System::TimeSpan timeout;

  /// @brief Field vflags, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_vflags, put = __cordl_internal_set_vflags)) ::System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags;

  /// @brief Field vtime, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_vtime, put = __cordl_internal_set_vtime)) ::System::DateTime vtime;

  static inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* New_ctor();

  /// @brief Method Reset, addr 0x443d8ac, size 0xe8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Security::Cryptography::OidCollection* const& __cordl_internal_get_apps() const;

  constexpr ::System::Security::Cryptography::OidCollection*& __cordl_internal_get_apps();

  constexpr ::System::Security::Cryptography::OidCollection* const& __cordl_internal_get_cert() const;

  constexpr ::System::Security::Cryptography::OidCollection*& __cordl_internal_get_cert();

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& __cordl_internal_get_mode() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& __cordl_internal_get_mode();

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag const& __cordl_internal_get_rflag() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag& __cordl_internal_get_rflag();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get_store() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get_store();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& __cordl_internal_get_store2() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& __cordl_internal_get_store2();

  constexpr ::System::TimeSpan const& __cordl_internal_get_timeout() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_timeout();

  constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const& __cordl_internal_get_vflags() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags& __cordl_internal_get_vflags();

  constexpr ::System::DateTime const& __cordl_internal_get_vtime() const;

  constexpr ::System::DateTime& __cordl_internal_get_vtime();

  constexpr void __cordl_internal_set_apps(::System::Security::Cryptography::OidCollection* value);

  constexpr void __cordl_internal_set_cert(::System::Security::Cryptography::OidCollection* value);

  constexpr void __cordl_internal_set_mode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  constexpr void __cordl_internal_set_rflag(::System::Security::Cryptography::X509Certificates::X509RevocationFlag value);

  constexpr void __cordl_internal_set_store(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set_store2(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value);

  constexpr void __cordl_internal_set_timeout(::System::TimeSpan value);

  constexpr void __cordl_internal_set_vflags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags value);

  constexpr void __cordl_internal_set_vtime(::System::DateTime value);

  /// @brief Method .ctor, addr 0x443a95c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExtraStore, addr 0x443b8bc, size 0x260, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_ExtraStore();

  /// @brief Method get_RevocationFlag, addr 0x443d994, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509RevocationFlag get_RevocationFlag();

  /// @brief Method get_RevocationMode, addr 0x443d9fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509RevocationMode get_RevocationMode();

  /// @brief Method get_VerificationFlags, addr 0x443da6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509VerificationFlags get_VerificationFlags();

  /// @brief Method get_VerificationTime, addr 0x443dad4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_VerificationTime();

  /// @brief Method set_RevocationFlag, addr 0x443d99c, size 0x60, virtual false, abstract: false, final false
  inline void set_RevocationFlag(::System::Security::Cryptography::X509Certificates::X509RevocationFlag value);

  /// @brief Method set_RevocationMode, addr 0x443da04, size 0x60, virtual false, abstract: false, final false
  inline void set_RevocationMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);

  /// @brief Method set_UrlRetrievalTimeout, addr 0x443da64, size 0x8, virtual false, abstract: false, final false
  inline void set_UrlRetrievalTimeout(::System::TimeSpan value);

  /// @brief Method set_VerificationFlags, addr 0x443da74, size 0x60, virtual false, abstract: false, final false
  inline void set_VerificationFlags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags value);

  /// @brief Method set_VerificationTime, addr 0x443dadc, size 0x8, virtual false, abstract: false, final false
  inline void set_VerificationTime(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ChainPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ChainPolicy(X509ChainPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ChainPolicy(X509ChainPolicy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9329 };

  /// @brief Field apps, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::OidCollection* ___apps;

  /// @brief Field cert, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::OidCollection* ___cert;

  /// @brief Field store, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ___store;

  /// @brief Field store2, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* ___store2;

  /// @brief Field rflag, offset: 0x30, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509RevocationFlag ___rflag;

  /// @brief Field mode, offset: 0x34, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509RevocationMode ___mode;

  /// @brief Field timeout, offset: 0x38, size: 0x8, def value: None
  ::System::TimeSpan ___timeout;

  /// @brief Field vflags, offset: 0x40, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags ___vflags;

  /// @brief Field vtime, offset: 0x48, size: 0x8, def value: None
  ::System::DateTime ___vtime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___apps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___cert) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___store2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___rflag) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___mode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___timeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___vflags) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy, ___vtime) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainPolicy, 0x50>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainPolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*, "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
