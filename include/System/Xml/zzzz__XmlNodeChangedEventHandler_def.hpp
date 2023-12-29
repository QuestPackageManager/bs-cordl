#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeChangedEventHandler)
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeChangedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeChangedEventHandler);
// Type: System.Xml::XmlNodeChangedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11450))
// CS Name: ::System.Xml::XmlNodeChangedEventHandler*
class CORDL_TYPE XmlNodeChangedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Xml::XmlNodeChangedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2714804 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2714934 size 0x14 virtual true final false
  inline void Invoke(::System::Object* sender, ::System::Xml::XmlNodeChangedEventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeChangedEventHandler(XmlNodeChangedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeChangedEventHandler(XmlNodeChangedEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeChangedEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventHandler*, "System.Xml", "XmlNodeChangedEventHandler");
