#pragma once
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
// Type: System.Xml.Schema::XmlSchemaObjectCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaObjectCollection*
class CORDL_TYPE XmlSchemaObjectCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Xml::Schema::XmlSchemaObject* Item[];

  /// @brief Field parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent))::System::Xml::Schema::XmlSchemaObject* parent;

  /// @brief Method Add, addr 0x2e0d3d8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t Add(::System::Xml::Schema::XmlSchemaObject* item);

  /// @brief Method Add, addr 0x2e13eb0, size 0x2c, virtual false, abstract: false, final false
  inline void Add(::System::Xml::Schema::XmlSchemaObjectCollection* collToAdd);

  /// @brief Method Clone, addr 0x2e10f70, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* Clone();

  /// @brief Method GetEnumerator, addr 0x2e13bfc, size 0x84, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectEnumerator* GetEnumerator();

  /// @brief Method Insert, addr 0x2e13c80, size 0xc8, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::Xml::Schema::XmlSchemaObject* item);

  static inline ::System::Xml::Schema::XmlSchemaObjectCollection* New_ctor();

  /// @brief Method OnClear, addr 0x2e13e78, size 0x1c, virtual true, abstract: false, final false
  inline void OnClear();

  /// @brief Method OnInsert, addr 0x2e13e00, size 0x1c, virtual true, abstract: false, final false
  inline void OnInsert(int32_t index, ::System::Object* item);

  /// @brief Method OnRemove, addr 0x2e13e94, size 0x1c, virtual true, abstract: false, final false
  inline void OnRemove(int32_t index, ::System::Object* item);

  /// @brief Method OnSet, addr 0x2e13e1c, size 0x5c, virtual true, abstract: false, final false
  inline void OnSet(int32_t index, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method Remove, addr 0x2e13d48, size 0xb8, virtual false, abstract: false, final false
  inline void Remove(::System::Xml::Schema::XmlSchemaObject* item);

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_parent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& __cordl_internal_get_parent() const;

  constexpr void __cordl_internal_set_parent(::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method .ctor, addr 0x2e0be34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x2e13a34, size 0x100, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2e13b34, size 0xc8, virtual true, abstract: false, final false
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

  /// @brief Field parent, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectCollection, ___parent) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectCollection*, "System.Xml.Schema", "XmlSchemaObjectCollection");
