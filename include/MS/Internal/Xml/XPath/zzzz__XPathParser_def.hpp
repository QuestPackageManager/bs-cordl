#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__Function_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathParser)
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace MS::Internal::Xml::XPath {
class XPathScanner;
}
namespace MS::Internal::Xml::XPath {
struct __Axis__AxisType;
}
namespace MS::Internal::Xml::XPath {
struct __Function__FunctionType;
}
namespace MS::Internal::Xml::XPath {
class __XPathParser__ParamInfo;
}
namespace MS::Internal::Xml::XPath {
struct __XPathScanner__LexKind;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class XPathParser;
}
namespace MS::Internal::Xml::XPath {
class __XPathParser__ParamInfo;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::XPathParser);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo);
// Type: ::ParamInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::XPathParser::ParamInfo*
class CORDL_TYPE __XPathParser__ParamInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgTypes))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> ArgTypes;

  __declspec(property(get = get_FType))::MS::Internal::Xml::XPath::__Function__FunctionType FType;

  __declspec(property(get = get_Maxargs)) int32_t Maxargs;

  __declspec(property(get = get_Minargs)) int32_t Minargs;

  /// @brief Field _argTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__argTypes,
                      put = __cordl_internal_set__argTypes))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> _argTypes;

  /// @brief Field _ftype, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ftype, put = __cordl_internal_set__ftype))::MS::Internal::Xml::XPath::__Function__FunctionType _ftype;

  /// @brief Field _maxargs, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxargs, put = __cordl_internal_set__maxargs)) int32_t _maxargs;

  /// @brief Field _minargs, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__minargs, put = __cordl_internal_set__minargs)) int32_t _minargs;

  static inline ::MS::Internal::Xml::XPath::__XPathParser__ParamInfo* New_ctor(::MS::Internal::Xml::XPath::__Function__FunctionType ftype, int32_t minargs, int32_t maxargs,
                                                                               ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> argTypes);

  constexpr ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> const& __cordl_internal_get__argTypes() const;

  constexpr ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*>& __cordl_internal_get__argTypes();

  constexpr ::MS::Internal::Xml::XPath::__Function__FunctionType const& __cordl_internal_get__ftype() const;

  constexpr ::MS::Internal::Xml::XPath::__Function__FunctionType& __cordl_internal_get__ftype();

  constexpr int32_t const& __cordl_internal_get__maxargs() const;

  constexpr int32_t& __cordl_internal_get__maxargs();

  constexpr int32_t const& __cordl_internal_get__minargs() const;

  constexpr int32_t& __cordl_internal_get__minargs();

  constexpr void __cordl_internal_set__argTypes(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  constexpr void __cordl_internal_set__ftype(::MS::Internal::Xml::XPath::__Function__FunctionType value);

  constexpr void __cordl_internal_set__maxargs(int32_t value);

  constexpr void __cordl_internal_set__minargs(int32_t value);

  /// @brief Method .ctor, addr 0x2e61508, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::__Function__FunctionType ftype, int32_t minargs, int32_t maxargs,
                    ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> argTypes);

  /// @brief Method get_ArgTypes, addr 0x2e61a54, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> get_ArgTypes();

  /// @brief Method get_FType, addr 0x2e61a3c, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__Function__FunctionType get_FType();

  /// @brief Method get_Maxargs, addr 0x2e61a4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Maxargs();

  /// @brief Method get_Minargs, addr 0x2e61a44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Minargs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XPathParser__ParamInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XPathParser__ParamInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XPathParser__ParamInfo(__XPathParser__ParamInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XPathParser__ParamInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XPathParser__ParamInfo(__XPathParser__ParamInfo const&) = delete;

  /// @brief Field _ftype, offset: 0x10, size: 0x4, def value: None
  ::MS::Internal::Xml::XPath::__Function__FunctionType ____ftype;

  /// @brief Field _minargs, offset: 0x14, size: 0x4, def value: None
  int32_t ____minargs;

  /// @brief Field _maxargs, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxargs;

  /// @brief Field _argTypes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> ____argTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::__XPathParser__ParamInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo, ____ftype) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo, ____minargs) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo, ____maxargs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo, ____argTypes) == 0x20, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
// Type: MS.Internal.Xml.XPath::XPathParser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::XPathParser*
class CORDL_TYPE XPathParser : public ::System::Object {
public:
  // Declarations
  using ParamInfo = ::MS::Internal::Xml::XPath::__XPathParser__ParamInfo;

  /// @brief Field _parseDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__parseDepth, put = __cordl_internal_set__parseDepth)) int32_t _parseDepth;

  /// @brief Field _scanner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__scanner, put = __cordl_internal_set__scanner))::MS::Internal::Xml::XPath::XPathScanner* _scanner;

  /// @brief Field s_AxesTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_AxesTable,
                             put = setStaticF_s_AxesTable))::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__Axis__AxisType>* s_AxesTable;

  /// @brief Field s_functionTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_functionTable,
                             put = setStaticF_s_functionTable))::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__XPathParser__ParamInfo*>* s_functionTable;

  /// @brief Field s_temparray1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray1,
                             put = setStaticF_s_temparray1))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray1;

  /// @brief Field s_temparray2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray2,
                             put = setStaticF_s_temparray2))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray2;

  /// @brief Field s_temparray3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray3,
                             put = setStaticF_s_temparray3))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray3;

  /// @brief Field s_temparray4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray4,
                             put = setStaticF_s_temparray4))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray4;

  /// @brief Field s_temparray5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray5,
                             put = setStaticF_s_temparray5))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray5;

  /// @brief Field s_temparray6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray6,
                             put = setStaticF_s_temparray6))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray6;

  /// @brief Field s_temparray7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray7,
                             put = setStaticF_s_temparray7))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray7;

  /// @brief Field s_temparray8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray8,
                             put = setStaticF_s_temparray8))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray8;

  /// @brief Field s_temparray9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_temparray9,
                             put = setStaticF_s_temparray9))::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> s_temparray9;

  /// @brief Method CheckNodeSet, addr 0x2e5f340, size 0x5c, virtual false, abstract: false, final false
  inline void CheckNodeSet(::System::Xml::XPath::XPathResultType t);

  /// @brief Method CheckToken, addr 0x2e60058, size 0x64, virtual false, abstract: false, final false
  inline void CheckToken(::MS::Internal::Xml::XPath::__XPathScanner__LexKind t);

  /// @brief Method CreateAxesTable, addr 0x2e6154c, size 0x2b0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__Axis__AxisType>* CreateAxesTable();

  /// @brief Method CreateFunctionTable, addr 0x2e609e4, size 0xb24, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__XPathParser__ParamInfo*>* CreateFunctionTable();

  /// @brief Method GetAxis, addr 0x2e5fc7c, size 0xe8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__Axis__AxisType GetAxis();

  /// @brief Method IsNodeType, addr 0x2e5f39c, size 0xf4, virtual false, abstract: false, final false
  static inline bool IsNodeType(::MS::Internal::Xml::XPath::XPathScanner* scaner);

  /// @brief Method IsPrimaryExpr, addr 0x2e5f490, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsPrimaryExpr(::MS::Internal::Xml::XPath::XPathScanner* scanner);

  /// @brief Method IsStep, addr 0x2e5faac, size 0x48, virtual false, abstract: false, final false
  static inline bool IsStep(::MS::Internal::Xml::XPath::__XPathScanner__LexKind lexKind);

  static inline ::MS::Internal::Xml::XPath::XPathParser* New_ctor(::MS::Internal::Xml::XPath::XPathScanner* scanner);

  /// @brief Method NextLex, addr 0x2e5ec34, size 0x18, virtual false, abstract: false, final false
  inline void NextLex();

  /// @brief Method ParseAdditiveExpr, addr 0x2e5ee2c, size 0xdc, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseAdditiveExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseAndExpr, addr 0x2e5eaf4, size 0xf4, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseAndExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseEqualityExpr, addr 0x2e5ec4c, size 0xdc, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseEqualityExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseExpression, addr 0x2e5e99c, size 0x64, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseExpression(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseFilterExpr, addr 0x2e5f540, size 0xb4, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseFilterExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseLocationPath, addr 0x2e5f6c0, size 0x150, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseMethod, addr 0x2e600bc, size 0x56c, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseMethod(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseMultiplicativeExpr, addr 0x2e5ef08, size 0x130, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseMultiplicativeExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseNodeTest, addr 0x2e5fd64, size 0x2f4, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseNodeTest(::MS::Internal::Xml::XPath::AstNode* qyInput, ::MS::Internal::Xml::XPath::__Axis__AxisType axisType,
                                                            ::System::Xml::XPath::XPathNodeType nodeType);

  /// @brief Method ParseOrExpr, addr 0x2e5ea00, size 0xf4, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseOrExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParsePathExpr, addr 0x2e5f224, size 0x11c, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParsePathExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParsePredicate, addr 0x2e5fa20, size 0x6c, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParsePredicate(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParsePrimaryExpr, addr 0x2e5f810, size 0x210, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParsePrimaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseRelationalExpr, addr 0x2e5ed28, size 0x104, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseRelationalExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseRelativeLocationPath, addr 0x2e5f5f4, size 0xcc, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseRelativeLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseStep, addr 0x2e5faf4, size 0x188, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseStep(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseUnaryExpr, addr 0x2e5f038, size 0xe4, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseUnaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseUnionExpr, addr 0x2e5f11c, size 0x108, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* ParseUnionExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);

  /// @brief Method ParseXPathExpression, addr 0x2e5e820, size 0xe4, virtual false, abstract: false, final false
  static inline ::MS::Internal::Xml::XPath::AstNode* ParseXPathExpression(::StringW xpathExpression);

  /// @brief Method PassToken, addr 0x2e5fa8c, size 0x20, virtual false, abstract: false, final false
  inline void PassToken(::MS::Internal::Xml::XPath::__XPathScanner__LexKind t);

  /// @brief Method TestOp, addr 0x2e5ebe8, size 0x4c, virtual false, abstract: false, final false
  inline bool TestOp(::StringW op);

  constexpr int32_t const& __cordl_internal_get__parseDepth() const;

  constexpr int32_t& __cordl_internal_get__parseDepth();

  constexpr ::MS::Internal::Xml::XPath::XPathScanner*& __cordl_internal_get__scanner();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::XPathScanner*> const& __cordl_internal_get__scanner() const;

  constexpr void __cordl_internal_set__parseDepth(int32_t value);

  constexpr void __cordl_internal_set__scanner(::MS::Internal::Xml::XPath::XPathScanner* value);

  /// @brief Method .ctor, addr 0x2e5e7f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::XPathScanner* scanner);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__Axis__AxisType>* getStaticF_s_AxesTable();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__XPathParser__ParamInfo*>* getStaticF_s_functionTable();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray1();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray2();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray3();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray4();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray5();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray6();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray7();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray8();

  static inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> getStaticF_s_temparray9();

  static inline void setStaticF_s_AxesTable(::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__Axis__AxisType>* value);

  static inline void setStaticF_s_functionTable(::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::__XPathParser__ParamInfo*>* value);

  static inline void setStaticF_s_temparray1(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray2(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray3(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray4(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray5(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray6(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray7(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray8(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

  static inline void setStaticF_s_temparray9(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathParser(XPathParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathParser(XPathParser const&) = delete;

  /// @brief Field _scanner, offset: 0x10, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::XPathScanner* ____scanner;

  /// @brief Field _parseDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ____parseDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::XPathParser, 0x20>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathParser, ____scanner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathParser, ____parseDepth) == 0x18, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
NEED_NO_BOX(::MS::Internal::Xml::XPath::XPathParser);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::XPathParser*, "MS.Internal.Xml.XPath", "XPathParser");
NEED_NO_BOX(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::__XPathParser__ParamInfo*, "MS.Internal.Xml.XPath", "XPathParser/ParamInfo");
