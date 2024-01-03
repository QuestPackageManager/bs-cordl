#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteCertificateValidationCallback)
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::RemoteCertificateValidationCallback);
// Type: System.Net.Security::RemoteCertificateValidationCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9368))
// CS Name: ::System.Net.Security::RemoteCertificateValidationCallback*
class CORDL_TYPE RemoteCertificateValidationCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::Security::RemoteCertificateValidationCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x28ffb2c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x28ffc5c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                     ::System::Net::Security::SslPolicyErrors sslPolicyErrors);

  // Ctor Parameters [CppParam { name: "", ty: "RemoteCertificateValidationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteCertificateValidationCallback(RemoteCertificateValidationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteCertificateValidationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteCertificateValidationCallback(RemoteCertificateValidationCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteCertificateValidationCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::RemoteCertificateValidationCallback, 0x80>, "Size mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::RemoteCertificateValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::RemoteCertificateValidationCallback*, "System.Net.Security", "RemoteCertificateValidationCallback");
