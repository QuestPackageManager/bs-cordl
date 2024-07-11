#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCollectionEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaCollectionEnumerator)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaCollectionNode;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaCollectionEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaCollectionEnumerator);
// Type: System.Xml.Schema::XmlSchemaCollectionEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaCollectionEnumerator*
class CORDL_TYPE XmlSchemaCollectionEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Xml::Schema::XmlSchema* Current;

  __declspec(property(get = get_CurrentNode))::System::Xml::Schema::XmlSchemaCollectionNode* CurrentNode;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator))::System::Collections::IDictionaryEnumerator* enumerator;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2e414fc, size 0xa0, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Xml::Schema::XmlSchemaCollectionEnumerator* New_ctor(::System::Collections::Hashtable* collection);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x2e419dc, size 0xa0, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e41938, size 0xa4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e41a7c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::IDictionaryEnumerator*& __cordl_internal_get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionaryEnumerator*> const& __cordl_internal_get_enumerator() const;

  constexpr void __cordl_internal_set_enumerator(::System::Collections::IDictionaryEnumerator* value);

  /// @brief Method .ctor, addr 0x2e41260, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* collection);

  /// @brief Method get_Current, addr 0x2e41424, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* get_Current();

  /// @brief Method get_CurrentNode, addr 0x2e41a80, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaCollectionNode* get_CurrentNode();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaCollectionEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCollectionEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaCollectionEnumerator(XmlSchemaCollectionEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCollectionEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaCollectionEnumerator(XmlSchemaCollectionEnumerator const&) = delete;

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionaryEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaCollectionEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollectionEnumerator, ___enumerator) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaCollectionEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaCollectionEnumerator*, "System.Xml.Schema", "XmlSchemaCollectionEnumerator");
