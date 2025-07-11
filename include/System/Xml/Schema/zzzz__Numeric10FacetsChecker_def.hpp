#pragma once
// IWYU pragma private; include "System/Xml/Schema/Numeric10FacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Numeric10FacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlValueConverter;
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
// Forward declare root types
namespace System::Xml::Schema {
class Numeric10FacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Numeric10FacetsChecker);
// Dependencies System.Decimal, System.Xml.Schema.FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Numeric10FacetsChecker
class CORDL_TYPE Numeric10FacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Field maxValue, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_maxValue, put = __cordl_internal_set_maxValue)) ::System::Decimal maxValue;

  /// @brief Field minValue, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_minValue, put = __cordl_internal_set_minValue)) ::System::Decimal minValue;

  /// @brief Field signs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_signs, put = setStaticF_signs)) ::ArrayW<char16_t, ::Array<char16_t>*> signs;

  /// @brief Method CheckTotalAndFractionDigits, addr 0x43b1418, size 0x270, virtual false, abstract: false, final false
  inline ::System::Exception* CheckTotalAndFractionDigits(::System::Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction);

  /// @brief Method CheckValueFacets, addr 0x43b8018, size 0x5b0, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x43b7fa8, size 0x70, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x43b8804, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x43b8778, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int32_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x43b86ec, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x43b85c8, size 0x124, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::System::Decimal value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter);

  /// @brief Method MatchEnumeration, addr 0x43b8890, size 0x84, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  static inline ::System::Xml::Schema::Numeric10FacetsChecker* New_ctor(::System::Decimal minVal, ::System::Decimal maxVal);

  constexpr ::System::Decimal const& __cordl_internal_get_maxValue() const;

  constexpr ::System::Decimal& __cordl_internal_get_maxValue();

  constexpr ::System::Decimal const& __cordl_internal_get_minValue() const;

  constexpr ::System::Decimal& __cordl_internal_get_minValue();

  constexpr void __cordl_internal_set_maxValue(::System::Decimal value);

  constexpr void __cordl_internal_set_minValue(::System::Decimal value);

  /// @brief Method .ctor, addr 0x43ab198, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal minVal, ::System::Decimal maxVal);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_signs();

  static inline void setStaticF_signs(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Numeric10FacetsChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Numeric10FacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Numeric10FacetsChecker(Numeric10FacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Numeric10FacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Numeric10FacetsChecker(Numeric10FacetsChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7591 };

  /// @brief Field maxValue, offset: 0x10, size: 0x10, def value: None
  ::System::Decimal ___maxValue;

  /// @brief Field minValue, offset: 0x20, size: 0x10, def value: None
  ::System::Decimal ___minValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Numeric10FacetsChecker, ___maxValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Numeric10FacetsChecker, ___minValue) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Numeric10FacetsChecker, 0x30>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Numeric10FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Numeric10FacetsChecker*, "System.Xml.Schema", "Numeric10FacetsChecker");
