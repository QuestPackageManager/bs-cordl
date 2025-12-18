#pragma once
// IWYU pragma private; include "System/Net/Security/LocalCertSelectionCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Net::Security::LocalCertSelectionCallback);
// Dependencies System.MulticastDelegate
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.LocalCertSelectionCallback
class CORDL_TYPE LocalCertSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x61bc214, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW targetHost,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                     ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  static inline ::System::Net::Security::LocalCertSelectionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x61bc194, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11781 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::LocalCertSelectionCallback, 0x80>, "Size mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::LocalCertSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::LocalCertSelectionCallback*, "System.Net.Security", "LocalCertSelectionCallback");
