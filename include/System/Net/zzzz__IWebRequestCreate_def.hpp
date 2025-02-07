#pragma once
// IWYU pragma private; include "System/Net/IWebRequestCreate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWebRequestCreate)
namespace System::Net {
class WebRequest;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class IWebRequestCreate;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IWebRequestCreate);
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IWebRequestCreate
class CORDL_TYPE IWebRequestCreate {
public:
  // Declarations
  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  // Ctor Parameters [CppParam { name: "", ty: "IWebRequestCreate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWebRequestCreate(IWebRequestCreate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::IWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IWebRequestCreate*, "System.Net", "IWebRequestCreate");
