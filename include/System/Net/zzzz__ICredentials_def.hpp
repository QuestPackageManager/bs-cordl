#pragma once
// IWYU pragma private; include "System/Net/ICredentials.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICredentials)
namespace System::Net {
class NetworkCredential;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ICredentials;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ICredentials);
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ICredentials
class CORDL_TYPE ICredentials {
public:
  // Declarations
  /// @brief Method GetCredential, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::StringW authType);

  // Ctor Parameters [CppParam { name: "", ty: "ICredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICredentials(ICredentials const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICredentials);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICredentials*, "System.Net", "ICredentials");
