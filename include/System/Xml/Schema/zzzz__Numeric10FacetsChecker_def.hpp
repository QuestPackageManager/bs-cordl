#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Numeric10FacetsChecker)
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class Numeric10FacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Numeric10FacetsChecker);
// Type: System.Xml.Schema::Numeric10FacetsChecker
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2655)), TypeDefinitionIndex(TypeDefinitionIndex(11686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11687))
// CS Name: ::System.Xml.Schema::Numeric10FacetsChecker*
class CORDL_TYPE Numeric10FacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Field maxValue, offset 0x10, size 0x10
  __declspec(property(get = __get_maxValue, put = __set_maxValue))::System::Decimal maxValue;

  /// @brief Field minValue, offset 0x20, size 0x10
  __declspec(property(get = __get_minValue, put = __set_minValue))::System::Decimal minValue;

  /// @brief Field signs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_signs, put = setStaticF_signs))::ArrayW<char16_t, ::Array<char16_t>*> signs;

  constexpr ::System::Decimal& __get_maxValue();

  constexpr ::System::Decimal const& __get_maxValue() const;

  constexpr void __set_maxValue(::System::Decimal value);

  constexpr ::System::Decimal& __get_minValue();

  constexpr ::System::Decimal const& __get_minValue() const;

  constexpr void __set_minValue(::System::Decimal value);

  static inline void setStaticF_signs(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_signs();

  static inline ::System::Xml::Schema::Numeric10FacetsChecker* New_ctor(::System::Decimal minVal, ::System::Decimal maxVal);

  /// @brief Method .ctor, addr 0x28b8d24, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal minVal, ::System::Decimal maxVal);

  /// @brief Method CheckValueFacets, addr 0x28c0d5c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x28c0dcc, size 0x558, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x28c156c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x28c15f8, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int32_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x28c1684, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x28c1710, size 0x84, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x28c144c, size 0x120, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::System::Decimal value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter);

  /// @brief Method CheckTotalAndFractionDigits, addr 0x28bfb48, size 0x2a4, virtual false, abstract: false, final false
  inline ::System::Exception* CheckTotalAndFractionDigits(::System::Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction);

  // Ctor Parameters [CppParam { name: "", ty: "Numeric10FacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Numeric10FacetsChecker(Numeric10FacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Numeric10FacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Numeric10FacetsChecker(Numeric10FacetsChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Numeric10FacetsChecker();

public:
  /// @brief Field maxValue, offset: 0x10, size: 0x10, def value: None
  ::System::Decimal ___maxValue;

  /// @brief Field minValue, offset: 0x20, size: 0x10, def value: None
  ::System::Decimal ___minValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Numeric10FacetsChecker, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Numeric10FacetsChecker, ___maxValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Numeric10FacetsChecker, ___minValue) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Numeric10FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Numeric10FacetsChecker*, "System.Xml.Schema", "Numeric10FacetsChecker");
