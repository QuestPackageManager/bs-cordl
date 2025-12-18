#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ValidationEventHandler)
namespace System::Xml::Schema {
class ValidationEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ValidationEventHandler);
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ValidationEventHandler
class CORDL_TYPE ValidationEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x606a5b8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e);

  static inline ::System::Xml::Schema::ValidationEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x606a470, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationEventHandler(ValidationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationEventHandler(ValidationEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidationEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ValidationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationEventHandler*, "System.Xml.Schema", "ValidationEventHandler");
