#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoRemoteCertificateValidationCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoRemoteCertificateValidationCallback)
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoRemoteCertificateValidationCallback;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback);
// Dependencies System.MulticastDelegate
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.MonoRemoteCertificateValidationCallback
class CORDL_TYPE MonoRemoteCertificateValidationCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3c46318, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                     ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors);

  static inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3c46278, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoRemoteCertificateValidationCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoRemoteCertificateValidationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoRemoteCertificateValidationCallback(MonoRemoteCertificateValidationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoRemoteCertificateValidationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoRemoteCertificateValidationCallback(MonoRemoteCertificateValidationCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback, 0x80>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*, "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
