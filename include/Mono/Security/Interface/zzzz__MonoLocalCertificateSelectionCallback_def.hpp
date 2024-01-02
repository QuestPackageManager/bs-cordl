#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoLocalCertificateSelectionCallback)
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
class Object;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoLocalCertificateSelectionCallback;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback);
// Type: Mono.Security.Interface::MonoLocalCertificateSelectionCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13781))
// CS Name: ::Mono.Security.Interface::MonoLocalCertificateSelectionCallback*
class CORDL_TYPE MonoLocalCertificateSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2402c98, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2402d70, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW targetHost,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                     ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers);

  // Ctor Parameters [CppParam { name: "", ty: "MonoLocalCertificateSelectionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoLocalCertificateSelectionCallback(MonoLocalCertificateSelectionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoLocalCertificateSelectionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoLocalCertificateSelectionCallback(MonoLocalCertificateSelectionCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoLocalCertificateSelectionCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback, 0x80>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*, "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
