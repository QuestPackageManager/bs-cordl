#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalCertificateSelectionCallback)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Object;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::LocalCertificateSelectionCallback);
// Type: System.Net.Security::LocalCertificateSelectionCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9367))
// CS Name: ::System.Net.Security::LocalCertificateSelectionCallback*
class CORDL_TYPE LocalCertificateSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::Security::LocalCertificateSelectionCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x28ff9e8 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x28ffb18 size 0x14 virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::Object* sender, ::StringW targetHost,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                     ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  // Ctor Parameters [CppParam { name: "", ty: "LocalCertificateSelectionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalCertificateSelectionCallback(LocalCertificateSelectionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalCertificateSelectionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalCertificateSelectionCallback(LocalCertificateSelectionCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalCertificateSelectionCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::LocalCertificateSelectionCallback, 0x80>, "Size mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::LocalCertificateSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::LocalCertificateSelectionCallback*, "System.Net.Security", "LocalCertificateSelectionCallback");
