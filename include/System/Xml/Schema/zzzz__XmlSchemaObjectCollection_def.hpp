#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaObjectCollection)
namespace System {
class Object;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectCollection);
// Type: System.Xml.Schema::XmlSchemaObjectCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11731))
// CS Name: ::System.Xml.Schema::XmlSchemaObjectCollection*
class CORDL_TYPE XmlSchemaObjectCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  /// @brief Field parent, offset 0x18, size 0x8
  __declspec(property(get = __get_parent, put = __set_parent))::System::Xml::Schema::XmlSchemaObject* parent;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __get_parent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& __get_parent() const;

  constexpr void __set_parent(::System::Xml::Schema::XmlSchemaObject* value);

  static inline ::System::Xml::Schema::XmlSchemaObjectCollection* New_ctor();

  /// @brief Method .ctor addr 0x28c8c28 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Add addr 0x28c7bc4 size 0xb8 virtual false final false
  inline int32_t Add(::System::Xml::Schema::XmlSchemaObject* item);

  /// @brief Method OnInsert addr 0x28c8c30 size 0x1c virtual true final false
  inline void OnInsert(int32_t index, ::System::Object* item);

  /// @brief Method OnSet addr 0x28c8c4c size 0x5c virtual true final false
  inline void OnSet(int32_t index, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method OnClear addr 0x28c8ca8 size 0x1c virtual true final false
  inline void OnClear();

  /// @brief Method OnRemove addr 0x28c8cc4 size 0x1c virtual true final false
  inline void OnRemove(int32_t index, ::System::Object* item);

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectCollection(XmlSchemaObjectCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectCollection(XmlSchemaObjectCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectCollection();

public:
  /// @brief Field parent, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectCollection, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectCollection*, "System.Xml.Schema", "XmlSchemaObjectCollection");
