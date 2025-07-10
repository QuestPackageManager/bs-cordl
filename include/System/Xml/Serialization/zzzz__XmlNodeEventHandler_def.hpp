#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlNodeEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(XmlNodeEventHandler)
namespace System::Xml::Serialization {
class XmlNodeEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlNodeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlNodeEventHandler);
// Dependencies System.MulticastDelegate
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlNodeEventHandler
class CORDL_TYPE XmlNodeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4367a3c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlNodeEventArgs* e);

  static inline ::System::Xml::Serialization::XmlNodeEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4367938, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeEventHandler(XmlNodeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeEventHandler(XmlNodeEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlNodeEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlNodeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlNodeEventHandler*, "System.Xml.Serialization", "XmlNodeEventHandler");
