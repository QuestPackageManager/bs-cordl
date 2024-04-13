#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml.Schema::Numeric10FacetsChecker
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Numeric10FacetsChecker*
class CORDL_TYPE Numeric10FacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Field maxValue, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_maxValue, put = __cordl_internal_set_maxValue))::System::Decimal maxValue;

  /// @brief Field minValue, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_minValue, put = __cordl_internal_set_minValue))::System::Decimal minValue;

  /// @brief Field signs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_signs, put = setStaticF_signs))::ArrayW<char16_t, ::Array<char16_t>*> signs;

  /// @brief Method CheckTotalAndFractionDigits, addr 0x2e11bd0, size 0x2a8, virtual false, abstract: false, final false
  inline ::System::Exception* CheckTotalAndFractionDigits(::System::Decimal value, int32_t totalDigits, int32_t fractionDigits, bool checkTotal, bool checkFraction);

  /// @brief Method CheckValueFacets, addr 0x2e1846c, size 0x564, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x2e183fc, size 0x70, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x2e18c08, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int16_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x2e18b7c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int32_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x2e18af0, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(int64_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x2e189d0, size 0x120, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::System::Decimal value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter);

  /// @brief Method MatchEnumeration, addr 0x2e18c94, size 0x84, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  static inline ::System::Xml::Schema::Numeric10FacetsChecker* New_ctor(::System::Decimal minVal, ::System::Decimal maxVal);

  constexpr ::System::Decimal const& __cordl_internal_get_maxValue() const;

  constexpr ::System::Decimal& __cordl_internal_get_maxValue();

  constexpr ::System::Decimal const& __cordl_internal_get_minValue() const;

  constexpr ::System::Decimal& __cordl_internal_get_minValue();

  constexpr void __cordl_internal_set_maxValue(::System::Decimal value);

  constexpr void __cordl_internal_set_minValue(::System::Decimal value);

  /// @brief Method .ctor, addr 0x2e0b7e8, size 0x40, virtual false, abstract: false, final false
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
