#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlElementEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XmlElementEventHandler)
namespace System::Xml::Serialization {
class XmlElementEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlElementEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlElementEventHandler);
// Dependencies System.MulticastDelegate
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlElementEventHandler
class CORDL_TYPE XmlElementEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x437513c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlElementEventArgs* e);

  static inline ::System::Xml::Serialization::XmlElementEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4375038, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElementEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlElementEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElementEventHandler(XmlElementEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElementEventHandler(XmlElementEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlElementEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlElementEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementEventHandler*, "System.Xml.Serialization", "XmlElementEventHandler");
