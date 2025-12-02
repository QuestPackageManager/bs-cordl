#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/Header.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Header)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class Header;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::Header);
// Dependencies System.Object
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.Header
class CORDL_TYPE Header : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Header();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Header", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Header(Header&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Header", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Header(Header const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::Header, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::Header);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::Header*, "System.Runtime.Remoting.Messaging", "Header");
