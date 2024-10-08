#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/XPathScanner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__XPathScanner_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathScanner)
namespace MS::Internal::Xml::XPath {
struct __XPathScanner__LexKind;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
struct __XPathScanner__LexKind;
}
namespace MS::Internal::Xml::XPath {
class XPathScanner;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::XPath::__XPathScanner__LexKind);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::XPathScanner);
// Type: ::LexKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: true
// CS Name: ::XPathScanner::LexKind
struct CORDL_TYPE __XPathScanner__LexKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XPathScanner__LexKind_Unwrapped
  enum struct ____XPathScanner__LexKind_Unwrapped : int32_t {
    __E_Comma = static_cast<int32_t>(0x2c),
    __E_Slash = static_cast<int32_t>(0x2f),
    __E_At = static_cast<int32_t>(0x40),
    __E_Dot = static_cast<int32_t>(0x2e),
    __E_LParens = static_cast<int32_t>(0x28),
    __E_RParens = static_cast<int32_t>(0x29),
    __E_LBracket = static_cast<int32_t>(0x5b),
    __E_RBracket = static_cast<int32_t>(0x5d),
    __E_Star = static_cast<int32_t>(0x2a),
    __E_Plus = static_cast<int32_t>(0x2b),
    __E_Minus = static_cast<int32_t>(0x2d),
    __E_Eq = static_cast<int32_t>(0x3d),
    __E_Lt = static_cast<int32_t>(0x3c),
    __E_Gt = static_cast<int32_t>(0x3e),
    __E_Bang = static_cast<int32_t>(0x21),
    __E_Dollar = static_cast<int32_t>(0x24),
    __E_Apos = static_cast<int32_t>(0x27),
    __E_Quote = static_cast<int32_t>(0x22),
    __E_Union = static_cast<int32_t>(0x7c),
    __E_Ne = static_cast<int32_t>(0x4e),
    __E_Le = static_cast<int32_t>(0x4c),
    __E_Ge = static_cast<int32_t>(0x47),
    __E_And = static_cast<int32_t>(0x41),
    __E_Or = static_cast<int32_t>(0x4f),
    __E_DotDot = static_cast<int32_t>(0x44),
    __E_SlashSlash = static_cast<int32_t>(0x53),
    __E_Name = static_cast<int32_t>(0x6e),
    __E_String = static_cast<int32_t>(0x73),
    __E_Number = static_cast<int32_t>(0x64),
    __E_Axe = static_cast<int32_t>(0x61),
    __E_Eof = static_cast<int32_t>(0x45),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XPathScanner__LexKind_Unwrapped() const noexcept {
    return static_cast<____XPathScanner__LexKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XPathScanner__LexKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XPathScanner__LexKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field And value: static_cast<int32_t>(0x41)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const And;

  /// @brief Field Apos value: static_cast<int32_t>(0x27)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Apos;

  /// @brief Field At value: static_cast<int32_t>(0x40)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const At;

  /// @brief Field Axe value: static_cast<int32_t>(0x61)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Axe;

  /// @brief Field Bang value: static_cast<int32_t>(0x21)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Bang;

  /// @brief Field Comma value: static_cast<int32_t>(0x2c)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Comma;

  /// @brief Field Dollar value: static_cast<int32_t>(0x24)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Dollar;

  /// @brief Field Dot value: static_cast<int32_t>(0x2e)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Dot;

  /// @brief Field DotDot value: static_cast<int32_t>(0x44)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const DotDot;

  /// @brief Field Eof value: static_cast<int32_t>(0x45)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Eof;

  /// @brief Field Eq value: static_cast<int32_t>(0x3d)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Eq;

  /// @brief Field Ge value: static_cast<int32_t>(0x47)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Ge;

  /// @brief Field Gt value: static_cast<int32_t>(0x3e)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Gt;

  /// @brief Field LBracket value: static_cast<int32_t>(0x5b)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const LBracket;

  /// @brief Field LParens value: static_cast<int32_t>(0x28)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const LParens;

  /// @brief Field Le value: static_cast<int32_t>(0x4c)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Le;

  /// @brief Field Lt value: static_cast<int32_t>(0x3c)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Lt;

  /// @brief Field Minus value: static_cast<int32_t>(0x2d)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Minus;

  /// @brief Field Name value: static_cast<int32_t>(0x6e)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Name;

  /// @brief Field Ne value: static_cast<int32_t>(0x4e)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Ne;

  /// @brief Field Number value: static_cast<int32_t>(0x64)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Number;

  /// @brief Field Or value: static_cast<int32_t>(0x4f)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Or;

  /// @brief Field Plus value: static_cast<int32_t>(0x2b)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Plus;

  /// @brief Field Quote value: static_cast<int32_t>(0x22)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Quote;

  /// @brief Field RBracket value: static_cast<int32_t>(0x5d)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const RBracket;

  /// @brief Field RParens value: static_cast<int32_t>(0x29)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const RParens;

  /// @brief Field Slash value: static_cast<int32_t>(0x2f)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Slash;

  /// @brief Field SlashSlash value: static_cast<int32_t>(0x53)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const SlashSlash;

  /// @brief Field Star value: static_cast<int32_t>(0x2a)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Star;

  /// @brief Field String value: static_cast<int32_t>(0x73)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const String;

  /// @brief Field Union value: static_cast<int32_t>(0x7c)
  static ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const Union;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7752 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::__XPathScanner__LexKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__XPathScanner__LexKind, value__) == 0x0, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
// Type: MS.Internal.Xml.XPath::XPathScanner
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::XPathScanner*
class CORDL_TYPE XPathScanner : public ::System::Object {
public:
  // Declarations
  using LexKind = ::MS::Internal::Xml::XPath::__XPathScanner__LexKind;

  __declspec(property(get = get_CanBeFunction)) bool CanBeFunction;

  __declspec(property(get = get_CurrentChar)) char16_t CurrentChar;

  __declspec(property(get = get_Kind)) ::MS::Internal::Xml::XPath::__XPathScanner__LexKind Kind;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NumberValue)) double_t NumberValue;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_SourceText)) ::StringW SourceText;

  __declspec(property(get = get_StringValue)) ::StringW StringValue;

  /// @brief Field _canBeFunction, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__canBeFunction, put = __cordl_internal_set__canBeFunction)) bool _canBeFunction;

  /// @brief Field _currentChar, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__currentChar, put = __cordl_internal_set__currentChar)) char16_t _currentChar;

  /// @brief Field _kind, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__kind, put = __cordl_internal_set__kind)) ::MS::Internal::Xml::XPath::__XPathScanner__LexKind _kind;

  /// @brief Field _name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _numberValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__numberValue, put = __cordl_internal_set__numberValue)) double_t _numberValue;

  /// @brief Field _prefix, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix)) ::StringW _prefix;

  /// @brief Field _stringValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stringValue, put = __cordl_internal_set__stringValue)) ::StringW _stringValue;

  /// @brief Field _xmlCharType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlCharType, put = __cordl_internal_set__xmlCharType)) ::System::Xml::XmlCharType _xmlCharType;

  /// @brief Field _xpathExpr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__xpathExpr, put = __cordl_internal_set__xpathExpr)) ::StringW _xpathExpr;

  /// @brief Field _xpathExprIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__xpathExprIndex, put = __cordl_internal_set__xpathExprIndex)) int32_t _xpathExprIndex;

  static inline ::MS::Internal::Xml::XPath::XPathScanner* New_ctor(::StringW xpathExpr);

  /// @brief Method NextChar, addr 0x4292d70, size 0x60, virtual false, abstract: false, final false
  inline bool NextChar();

  /// @brief Method NextLex, addr 0x42919b4, size 0x3bc, virtual false, abstract: false, final false
  inline bool NextLex();

  /// @brief Method ScanFraction, addr 0x4292e4c, size 0xb0, virtual false, abstract: false, final false
  inline double_t ScanFraction();

  /// @brief Method ScanName, addr 0x4293084, size 0x78, virtual false, abstract: false, final false
  inline ::StringW ScanName();

  /// @brief Method ScanNumber, addr 0x4292fac, size 0xd8, virtual false, abstract: false, final false
  inline double_t ScanNumber();

  /// @brief Method ScanString, addr 0x4292efc, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW ScanString();

  /// @brief Method SkipSpace, addr 0x4292e10, size 0x3c, virtual false, abstract: false, final false
  inline void SkipSpace();

  constexpr bool const& __cordl_internal_get__canBeFunction() const;

  constexpr bool& __cordl_internal_get__canBeFunction();

  constexpr char16_t const& __cordl_internal_get__currentChar() const;

  constexpr char16_t& __cordl_internal_get__currentChar();

  constexpr ::MS::Internal::Xml::XPath::__XPathScanner__LexKind const& __cordl_internal_get__kind() const;

  constexpr ::MS::Internal::Xml::XPath::__XPathScanner__LexKind& __cordl_internal_get__kind();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr double_t const& __cordl_internal_get__numberValue() const;

  constexpr double_t& __cordl_internal_get__numberValue();

  constexpr ::StringW const& __cordl_internal_get__prefix() const;

  constexpr ::StringW& __cordl_internal_get__prefix();

  constexpr ::StringW const& __cordl_internal_get__stringValue() const;

  constexpr ::StringW& __cordl_internal_get__stringValue();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get__xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get__xmlCharType();

  constexpr ::StringW const& __cordl_internal_get__xpathExpr() const;

  constexpr ::StringW& __cordl_internal_get__xpathExpr();

  constexpr int32_t const& __cordl_internal_get__xpathExprIndex() const;

  constexpr int32_t& __cordl_internal_get__xpathExprIndex();

  constexpr void __cordl_internal_set__canBeFunction(bool value);

  constexpr void __cordl_internal_set__currentChar(char16_t value);

  constexpr void __cordl_internal_set__kind(::MS::Internal::Xml::XPath::__XPathScanner__LexKind value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__numberValue(double_t value);

  constexpr void __cordl_internal_set__prefix(::StringW value);

  constexpr void __cordl_internal_set__stringValue(::StringW value);

  constexpr void __cordl_internal_set__xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set__xpathExpr(::StringW value);

  constexpr void __cordl_internal_set__xpathExprIndex(int32_t value);

  /// @brief Method .ctor, addr 0x428fcf8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW xpathExpr);

  /// @brief Method get_CanBeFunction, addr 0x4292e08, size 0x8, virtual false, abstract: false, final false
  inline bool get_CanBeFunction();

  /// @brief Method get_CurrentChar, addr 0x4292dd8, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_CurrentChar();

  /// @brief Method get_Kind, addr 0x4292de0, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__XPathScanner__LexKind get_Kind();

  /// @brief Method get_Name, addr 0x4292de8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NumberValue, addr 0x4292e00, size 0x8, virtual false, abstract: false, final false
  inline double_t get_NumberValue();

  /// @brief Method get_Prefix, addr 0x4292df0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SourceText, addr 0x4292dd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceText();

  /// @brief Method get_StringValue, addr 0x4292df8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathScanner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathScanner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathScanner(XPathScanner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathScanner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathScanner(XPathScanner const&) = delete;

  /// @brief Field _xpathExpr, offset: 0x10, size: 0x8, def value: None
  ::StringW ____xpathExpr;

  /// @brief Field _xpathExprIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____xpathExprIndex;

  /// @brief Field _kind, offset: 0x1c, size: 0x4, def value: None
  ::MS::Internal::Xml::XPath::__XPathScanner__LexKind ____kind;

  /// @brief Field _currentChar, offset: 0x20, size: 0x2, def value: None
  char16_t ____currentChar;

  /// @brief Field _name, offset: 0x28, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _prefix, offset: 0x30, size: 0x8, def value: None
  ::StringW ____prefix;

  /// @brief Field _stringValue, offset: 0x38, size: 0x8, def value: None
  ::StringW ____stringValue;

  /// @brief Field _numberValue, offset: 0x40, size: 0x8, def value: None
  double_t ____numberValue;

  /// @brief Field _canBeFunction, offset: 0x48, size: 0x1, def value: None
  bool ____canBeFunction;

  /// @brief Field _xmlCharType, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlCharType ____xmlCharType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::XPathScanner, 0x58>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____xpathExpr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____xpathExprIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____kind) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____currentChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____prefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____stringValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____numberValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____canBeFunction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____xmlCharType) == 0x50, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::__XPathScanner__LexKind, "MS.Internal.Xml.XPath", "XPathScanner/LexKind");
NEED_NO_BOX(::MS::Internal::Xml::XPath::XPathScanner);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::XPathScanner*, "MS.Internal.Xml.XPath", "XPathScanner");
