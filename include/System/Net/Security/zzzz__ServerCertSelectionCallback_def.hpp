#pragma once
// IWYU pragma private; include "System/Net/Security/ServerCertSelectionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServerCertSelectionCallback)
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
class ServerCertSelectionCallback;
}
// Write type traits
MARK_REF_T(::System::Net::Security::ServerCertSelectionCallback*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::ServerCertSelectionCallback*, "System.Net.Security", "ServerCertSelectionCallback");
// Dependencies System.MulticastDelegate
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.ServerCertSelectionCallback
class CORDL_TYPE ServerCertSelectionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x636b5e4, size 0x14, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW hostName);

  static inline ::System::Net::Security::ServerCertSelectionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x636b568, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCertSelectionCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerCertSelectionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCertSelectionCallback(ServerCertSelectionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCertSelectionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCertSelectionCallback(ServerCertSelectionCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Security::ServerCertSelectionCallback) == 0x80, "Size mismatch!");

} // namespace System::Net::Security
