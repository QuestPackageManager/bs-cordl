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
// Type: System.Net::IWebRequestCreate
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::IWebRequestCreate*
class CORDL_TYPE IWebRequestCreate {
public:
  // Declarations
  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  // Ctor Parameters [CppParam { name: "", ty: "IWebRequestCreate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IWebRequestCreate(IWebRequestCreate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IWebRequestCreate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWebRequestCreate(IWebRequestCreate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::IWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IWebRequestCreate*, "System.Net", "IWebRequestCreate");
