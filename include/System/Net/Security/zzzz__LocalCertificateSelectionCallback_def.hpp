#pragma once
// IWYU pragma private; include "System/Net/Security/LocalCertificateSelectionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalCertificateSelectionCallback)
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
// Write type traits
MARK_REF_T(::System::Net::Security::LocalCertificateSelectionCallback*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::LocalCertificateSelectionCallback*, "System.Net.Security", "LocalCertificateSelectionCallback");
// Dependencies System.MulticastDelegate
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.LocalCertificateSelectionCallback
class CORDL_TYPE LocalCertificateSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x636b364, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::Object* sender, ::StringW targetHost,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                     ::ArrayW<::StringW> acceptableIssuers);

  static inline ::System::Net::Security::LocalCertificateSelectionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x636b21c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalCertificateSelectionCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalCertificateSelectionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalCertificateSelectionCallback(LocalCertificateSelectionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalCertificateSelectionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalCertificateSelectionCallback(LocalCertificateSelectionCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Security::LocalCertificateSelectionCallback) == 0x80, "Size mismatch!");

} // namespace System::Net::Security
