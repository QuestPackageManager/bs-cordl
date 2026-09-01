#pragma once
// IWYU pragma private; include "System\Net\Security\LocalCertSelectionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalCertSelectionCallback)
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
class LocalCertSelectionCallback;
}
// Write type traits
MARK_REF_T(::System::Net::Security::LocalCertSelectionCallback*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::LocalCertSelectionCallback*, "System.Net.Security", "LocalCertSelectionCallback");
// Dependencies System.MulticastDelegate
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.LocalCertSelectionCallback
class CORDL_TYPE LocalCertSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6370d6c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW targetHost,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                     ::ArrayW<::StringW> acceptableIssuers);

  static inline ::System::Net::Security::LocalCertSelectionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6370cec, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalCertSelectionCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalCertSelectionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalCertSelectionCallback(LocalCertSelectionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalCertSelectionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalCertSelectionCallback(LocalCertSelectionCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11806 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Security::LocalCertSelectionCallback) == 0x80, "Size mismatch!");

} // namespace System::Net::Security
