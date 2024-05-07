#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlNodeEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeEventHandler)
namespace System::Xml::Serialization {
class XmlNodeEventArgs;
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
// Type: System.Xml.Serialization::XmlNodeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlNodeEventHandler*
class CORDL_TYPE XmlNodeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2ec2fdc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Xml::Serialization::XmlNodeEventArgs* e);

  static inline ::System::Xml::Serialization::XmlNodeEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ec2eac, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlNodeEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlNodeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlNodeEventHandler*, "System.Xml.Serialization", "XmlNodeEventHandler");
