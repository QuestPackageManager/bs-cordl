#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaObjectEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObjectEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObjectEnumerator);
// Type: System.Xml.Schema::XmlSchemaObjectEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaObjectEnumerator*
class CORDL_TYPE XmlSchemaObjectEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Xml::Schema::XmlSchemaObject* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator))::System::Collections::IEnumerator* enumerator;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2e46008, size 0xa0, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Xml::Schema::XmlSchemaObjectEnumerator* New_ctor(::System::Collections::IEnumerator* enumerator);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x2e4623c, size 0xa0, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e46198, size 0xa4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e462dc, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_enumerator() const;

  constexpr void __cordl_internal_set_enumerator(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x2e45fe0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerator* enumerator);

  /// @brief Method get_Current, addr 0x2e460a8, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObjectEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObjectEnumerator(XmlSchemaObjectEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObjectEnumerator(XmlSchemaObjectEnumerator const&) = delete;

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObjectEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectEnumerator, ___enumerator) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObjectEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObjectEnumerator*, "System.Xml.Schema", "XmlSchemaObjectEnumerator");
