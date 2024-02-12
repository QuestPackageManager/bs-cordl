#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerCertSelectionCallback)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Security {
class ServerCertSelectionCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::ServerCertSelectionCallback);
// Type: System.Net.Security::ServerCertSelectionCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7381))
// CS Name: ::System.Net.Security::ServerCertSelectionCallback*
class CORDL_TYPE ServerCertSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::Security::ServerCertSelectionCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29043c4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2904498, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW hostName);

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertSelectionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCertSelectionCallback(ServerCertSelectionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertSelectionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCertSelectionCallback(ServerCertSelectionCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCertSelectionCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::ServerCertSelectionCallback, 0x80>, "Size mismatch!");

} // namespace System::Net::Security
NEED_NO_BOX(::System::Net::Security::ServerCertSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::ServerCertSelectionCallback*, "System.Net.Security", "ServerCertSelectionCallback");
