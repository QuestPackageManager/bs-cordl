#pragma once
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
// Type: System.Net::ICredentials
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9070))
// CS Name: ::System.Net::ICredentials*
class CORDL_TYPE ICredentials {
public:
  // Declarations
  /// @brief Method GetCredential addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::StringW authType);

  // Ctor Parameters [CppParam { name: "", ty: "ICredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICredentials(ICredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICredentials(ICredentials const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICredentials);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICredentials*, "System.Net", "ICredentials");
