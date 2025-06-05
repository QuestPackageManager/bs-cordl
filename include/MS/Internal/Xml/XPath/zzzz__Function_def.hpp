#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Function.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Function)
namespace MS::Internal::Xml::XPath {
struct AstNode_AstType;
}
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace MS::Internal::Xml::XPath {
struct Function_FunctionType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
struct Function_FunctionType;
}
namespace MS::Internal::Xml::XPath {
class Function;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::XPath::Function_FunctionType);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Function);
// Dependencies
namespace MS::Internal::Xml::XPath {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.Function/FunctionType
struct CORDL_TYPE Function_FunctionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Function_FunctionType_Unwrapped
  enum struct __Function_FunctionType_Unwrapped : int32_t {
    __E_FuncLast = static_cast<int32_t>(0x0),
    __E_FuncPosition = static_cast<int32_t>(0x1),
    __E_FuncCount = static_cast<int32_t>(0x2),
    __E_FuncID = static_cast<int32_t>(0x3),
    __E_FuncLocalName = static_cast<int32_t>(0x4),
    __E_FuncNameSpaceUri = static_cast<int32_t>(0x5),
    __E_FuncName = static_cast<int32_t>(0x6),
    __E_FuncString = static_cast<int32_t>(0x7),
    __E_FuncBoolean = static_cast<int32_t>(0x8),
    __E_FuncNumber = static_cast<int32_t>(0x9),
    __E_FuncTrue = static_cast<int32_t>(0xa),
    __E_FuncFalse = static_cast<int32_t>(0xb),
    __E_FuncNot = static_cast<int32_t>(0xc),
    __E_FuncConcat = static_cast<int32_t>(0xd),
    __E_FuncStartsWith = static_cast<int32_t>(0xe),
    __E_FuncContains = static_cast<int32_t>(0xf),
    __E_FuncSubstringBefore = static_cast<int32_t>(0x10),
    __E_FuncSubstringAfter = static_cast<int32_t>(0x11),
    __E_FuncSubstring = static_cast<int32_t>(0x12),
    __E_FuncStringLength = static_cast<int32_t>(0x13),
    __E_FuncNormalize = static_cast<int32_t>(0x14),
    __E_FuncTranslate = static_cast<int32_t>(0x15),
    __E_FuncLang = static_cast<int32_t>(0x16),
    __E_FuncSum = static_cast<int32_t>(0x17),
    __E_FuncFloor = static_cast<int32_t>(0x18),
    __E_FuncCeiling = static_cast<int32_t>(0x19),
    __E_FuncRound = static_cast<int32_t>(0x1a),
    __E_FuncUserDefined = static_cast<int32_t>(0x1b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Function_FunctionType_Unwrapped() const noexcept {
    return static_cast<__Function_FunctionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Function_FunctionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Function_FunctionType(int32_t value__) noexcept;

  /// @brief Field FuncBoolean value: I32(8)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncBoolean;

  /// @brief Field FuncCeiling value: I32(25)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncCeiling;

  /// @brief Field FuncConcat value: I32(13)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncConcat;

  /// @brief Field FuncContains value: I32(15)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncContains;

  /// @brief Field FuncCount value: I32(2)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncCount;

  /// @brief Field FuncFalse value: I32(11)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncFalse;

  /// @brief Field FuncFloor value: I32(24)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncFloor;

  /// @brief Field FuncID value: I32(3)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncID;

  /// @brief Field FuncLang value: I32(22)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncLang;

  /// @brief Field FuncLast value: I32(0)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncLast;

  /// @brief Field FuncLocalName value: I32(4)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncLocalName;

  /// @brief Field FuncName value: I32(6)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncName;

  /// @brief Field FuncNameSpaceUri value: I32(5)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncNameSpaceUri;

  /// @brief Field FuncNormalize value: I32(20)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncNormalize;

  /// @brief Field FuncNot value: I32(12)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncNot;

  /// @brief Field FuncNumber value: I32(9)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncNumber;

  /// @brief Field FuncPosition value: I32(1)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncPosition;

  /// @brief Field FuncRound value: I32(26)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncRound;

  /// @brief Field FuncStartsWith value: I32(14)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncStartsWith;

  /// @brief Field FuncString value: I32(7)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncString;

  /// @brief Field FuncStringLength value: I32(19)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncStringLength;

  /// @brief Field FuncSubstring value: I32(18)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncSubstring;

  /// @brief Field FuncSubstringAfter value: I32(17)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncSubstringAfter;

  /// @brief Field FuncSubstringBefore value: I32(16)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncSubstringBefore;

  /// @brief Field FuncSum value: I32(23)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncSum;

  /// @brief Field FuncTranslate value: I32(21)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncTranslate;

  /// @brief Field FuncTrue value: I32(10)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncTrue;

  /// @brief Field FuncUserDefined value: I32(27)
  static ::MS::Internal::Xml::XPath::Function_FunctionType const FuncUserDefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::Function_FunctionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Function_FunctionType, 0x4>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
// Dependencies MS.Internal.Xml.XPath.AstNode, MS.Internal.Xml.XPath.Function::FunctionType
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.Function
class CORDL_TYPE Function : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  using FunctionType = ::MS::Internal::Xml::XPath::Function_FunctionType;

  __declspec(property(get = get_ReturnType)) ::System::Xml::XPath::XPathResultType ReturnType;

  /// @brief Field ReturnTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ReturnTypes, put = setStaticF_ReturnTypes)) ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> ReturnTypes;

  __declspec(property(get = get_Type)) ::MS::Internal::Xml::XPath::AstNode_AstType Type;

  /// @brief Field _argumentList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__argumentList, put = __cordl_internal_set__argumentList)) ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* _argumentList;

  /// @brief Field _functionType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__functionType, put = __cordl_internal_set__functionType)) ::MS::Internal::Xml::XPath::Function_FunctionType _functionType;

  /// @brief Field _name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _prefix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix)) ::StringW _prefix;

  static inline ::MS::Internal::Xml::XPath::Function* New_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::MS::Internal::Xml::XPath::AstNode* arg);

  static inline ::MS::Internal::Xml::XPath::Function* New_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype,
                                                               ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList);

  static inline ::MS::Internal::Xml::XPath::Function* New_ctor(::StringW prefix, ::StringW name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList);

  constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* const& __cordl_internal_get__argumentList() const;

  constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*& __cordl_internal_get__argumentList();

  constexpr ::MS::Internal::Xml::XPath::Function_FunctionType const& __cordl_internal_get__functionType() const;

  constexpr ::MS::Internal::Xml::XPath::Function_FunctionType& __cordl_internal_get__functionType();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__prefix() const;

  constexpr ::StringW& __cordl_internal_get__prefix();

  constexpr void __cordl_internal_set__argumentList(::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* value);

  constexpr void __cordl_internal_set__functionType(::MS::Internal::Xml::XPath::Function_FunctionType value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__prefix(::StringW value);

  /// @brief Method .ctor, addr 0x4306b58, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::MS::Internal::Xml::XPath::AstNode* arg);

  /// @brief Method .ctor, addr 0x4306a1c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList);

  /// @brief Method .ctor, addr 0x4306ab4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList);

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_ReturnTypes();

  /// @brief Method get_ReturnType, addr 0x4306c70, size 0x80, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x4306c68, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode_AstType get_Type();

  static inline void setStaticF_ReturnTypes(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Function();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Function", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Function(Function&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Function", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Function(Function const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7778 };

  /// @brief Field _functionType, offset: 0x10, size: 0x4, def value: None
  ::MS::Internal::Xml::XPath::Function_FunctionType ____functionType;

  /// @brief Field _argumentList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* ____argumentList;

  /// @brief Field _name, offset: 0x20, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _prefix, offset: 0x28, size: 0x8, def value: None
  ::StringW ____prefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____functionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____argumentList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Function, ____prefix) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Function, 0x30>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Function_FunctionType, "MS.Internal.Xml.XPath", "Function/FunctionType");
NEED_NO_BOX(::MS::Internal::Xml::XPath::Function);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Function*, "MS.Internal.Xml.XPath", "Function");
