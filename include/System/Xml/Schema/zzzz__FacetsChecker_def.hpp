#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class FacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::FacetsChecker);
// Type: System.Xml.Schema::FacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::FacetsChecker*
class CORDL_TYPE FacetsChecker : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckLexicalFacets, addr 0x29aa418, size 0x40, virtual true, abstract: false, final false
  inline ::System::Exception* CheckLexicalFacets(ByRef<::StringW> parseString, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckPatternFacets, addr 0x29aa53c, size 0x168, virtual false, abstract: false, final false
  inline ::System::Exception* CheckPatternFacets(::System::Xml::Schema::RestrictionFacets* restriction, ::StringW value);

  /// @brief Method CheckValueFacets, addr 0x29aa6ec, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6e4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6cc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6ac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6a4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6f4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6d4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(double_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6dc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(float_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6bc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int32_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x29aa6b4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckWhitespaceFacets, addr 0x29aa458, size 0xe4, virtual false, abstract: false, final false
  inline void CheckWhitespaceFacets(ByRef<::StringW> s, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x29aa704, size 0x8, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  static inline ::System::Xml::Schema::FacetsChecker* New_ctor();

  /// @brief Method Power, addr 0x29aa70c, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Decimal Power(int32_t x, int32_t y);

  /// @brief Method .ctor, addr 0x29aa838, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FacetsChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FacetsChecker(FacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FacetsChecker(FacetsChecker const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::FacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::FacetsChecker*, "System.Xml.Schema", "FacetsChecker");
