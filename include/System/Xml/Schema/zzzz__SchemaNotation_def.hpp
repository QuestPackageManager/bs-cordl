#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaNotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaNotation)
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaNotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaNotation);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaNotation
class CORDL_TYPE SchemaNotation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::System::Xml::XmlQualifiedName* Name;

  __declspec(property(get = get_Pubid, put = set_Pubid)) ::StringW Pubid;

  __declspec(property(get = get_SystemLiteral, put = set_SystemLiteral)) ::StringW SystemLiteral;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlQualifiedName* name;

  /// @brief Field pubid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pubid, put = __cordl_internal_set_pubid)) ::StringW pubid;

  /// @brief Field systemLiteral, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_systemLiteral, put = __cordl_internal_set_systemLiteral)) ::StringW systemLiteral;

  static inline ::System::Xml::Schema::SchemaNotation* New_ctor(::System::Xml::XmlQualifiedName* name);

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_pubid() const;

  constexpr ::StringW& __cordl_internal_get_pubid();

  constexpr ::StringW const& __cordl_internal_get_systemLiteral() const;

  constexpr ::StringW& __cordl_internal_get_systemLiteral();

  constexpr void __cordl_internal_set_name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_pubid(::StringW value);

  constexpr void __cordl_internal_set_systemLiteral(::StringW value);

  /// @brief Method .ctor, addr 0x429400c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name);

  /// @brief Method get_Name, addr 0x4294034, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_Name();

  /// @brief Method get_Pubid, addr 0x429404c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Pubid();

  /// @brief Method get_SystemLiteral, addr 0x429403c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemLiteral();

  /// @brief Method set_Pubid, addr 0x4294054, size 0x8, virtual false, abstract: false, final false
  inline void set_Pubid(::StringW value);

  /// @brief Method set_SystemLiteral, addr 0x4294044, size 0x8, virtual false, abstract: false, final false
  inline void set_SystemLiteral(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaNotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaNotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaNotation(SchemaNotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaNotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaNotation(SchemaNotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7627 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field systemLiteral, offset: 0x18, size: 0x8, def value: None
  ::StringW ___systemLiteral;

  /// @brief Field pubid, offset: 0x20, size: 0x8, def value: None
  ::StringW ___pubid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaNotation, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNotation, ___systemLiteral) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNotation, ___pubid) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaNotation, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaNotation*, "System.Xml.Schema", "SchemaNotation");
