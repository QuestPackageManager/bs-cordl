#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaObjectCollection)
namespace System::Xml::Schema {
class XmlSchemaObjectEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectCollection);
// Dependencies System.Collections.CollectionBase
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectCollection
class CORDL_TYPE XmlSchemaObjectCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::System::Xml::Schema::XmlSchemaObject* Item[];

  /// @brief Field parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::System::Xml::Schema::XmlSchemaObject* parent;

  /// @brief Method Add, addr 0x42b8ec4, size 0xb8, virtual false, abstract: false, final false
  inline int32_t Add(::System::Xml::Schema::XmlSchemaObject* item);

  /// @brief Method Add, addr 0x42bf8a8, size 0x2c, virtual false, abstract: false, final false
  inline void Add(::System::Xml::Schema::XmlSchemaObjectCollection* collToAdd);

  /// @brief Method Clone, addr 0x42bc9b8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* Clone();

  /// @brief Method GetEnumerator, addr 0x42bf5f8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectEnumerator* GetEnumerator();

  /// @brief Method Insert, addr 0x42bf678, size 0xc8, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::Xml::Schema::XmlSchemaObject* item);

  static inline ::System::Xml::Schema::XmlSchemaObjectCollection* New_ctor();

  /// @brief Method OnClear, addr 0x42bf870, size 0x1c, virtual true, abstract: false, final false
  inline void OnClear();

  /// @brief Method OnInsert, addr 0x42bf7f8, size 0x1c, virtual true, abstract: false, final false
  inline void OnInsert(int32_t index, ::System::Object* item);

  /// @brief Method OnRemove, addr 0x42bf88c, size 0x1c, virtual true, abstract: false, final false
  inline void OnRemove(int32_t index, ::System::Object* item);

  /// @brief Method OnSet, addr 0x42bf814, size 0x5c, virtual true, abstract: false, final false
  inline void OnSet(int32_t index, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method Remove, addr 0x42bf740, size 0xb8, virtual false, abstract: false, final false
  inline void Remove(::System::Xml::Schema::XmlSchemaObject* item);

  constexpr ::System::Xml::Schema::XmlSchemaObject* const& __cordl_internal_get_parent() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_parent(::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method .ctor, addr 0x42b7948, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x42bf430, size 0x100, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x42bf530, size 0xc8, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Xml::Schema::XmlSchemaObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectCollection(XmlSchemaObjectCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectCollection(XmlSchemaObjectCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7707 };

  /// @brief Field parent, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectCollection, ___parent) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectCollection, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectCollection*, "System.Xml.Schema", "XmlSchemaObjectCollection");
