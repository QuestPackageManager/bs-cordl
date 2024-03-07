#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaObject)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObject);
// Type: System.Xml.Schema::XmlSchemaObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaObject*
class CORDL_TYPE XmlSchemaObject : public ::System::Object {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaObject* New_ctor();

  /// @brief Method OnAdd, addr 0x2a13f38, size 0x4, virtual true, abstract: false, final false
  inline void OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item);

  /// @brief Method OnClear, addr 0x2a13f40, size 0x4, virtual true, abstract: false, final false
  inline void OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* container);

  /// @brief Method OnRemove, addr 0x2a13f3c, size 0x4, virtual true, abstract: false, final false
  inline void OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item);

  /// @brief Method .ctor, addr 0x2a123e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObject(XmlSchemaObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObject(XmlSchemaObject const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObject, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObject*, "System.Xml.Schema", "XmlSchemaObject");
