#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Axis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis)
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace MS::Internal::Xml::XPath {
struct __Axis__AxisType;
}
namespace System::Xml::XPath {
struct XPathNodeType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
struct __Axis__AxisType;
}
namespace MS::Internal::Xml::XPath {
class Axis;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::XPath::__Axis__AxisType);
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Axis);
// Type: ::AxisType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: true
// CS Name: ::Axis::AxisType
struct CORDL_TYPE __Axis__AxisType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Axis__AxisType_Unwrapped
  enum struct ____Axis__AxisType_Unwrapped : int32_t {
    __E_Ancestor = static_cast<int32_t>(0x0),
    __E_AncestorOrSelf = static_cast<int32_t>(0x1),
    __E_Attribute = static_cast<int32_t>(0x2),
    __E_Child = static_cast<int32_t>(0x3),
    __E_Descendant = static_cast<int32_t>(0x4),
    __E_DescendantOrSelf = static_cast<int32_t>(0x5),
    __E_Following = static_cast<int32_t>(0x6),
    __E_FollowingSibling = static_cast<int32_t>(0x7),
    __E_Namespace = static_cast<int32_t>(0x8),
    __E_Parent = static_cast<int32_t>(0x9),
    __E_Preceding = static_cast<int32_t>(0xa),
    __E_PrecedingSibling = static_cast<int32_t>(0xb),
    __E_Self = static_cast<int32_t>(0xc),
    __E_None = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Axis__AxisType_Unwrapped() const noexcept {
    return static_cast<____Axis__AxisType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Axis__AxisType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Axis__AxisType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ancestor value: static_cast<int32_t>(0x0)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Ancestor;

  /// @brief Field AncestorOrSelf value: static_cast<int32_t>(0x1)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const AncestorOrSelf;

  /// @brief Field Attribute value: static_cast<int32_t>(0x2)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Attribute;

  /// @brief Field Child value: static_cast<int32_t>(0x3)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Child;

  /// @brief Field Descendant value: static_cast<int32_t>(0x4)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Descendant;

  /// @brief Field DescendantOrSelf value: static_cast<int32_t>(0x5)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const DescendantOrSelf;

  /// @brief Field Following value: static_cast<int32_t>(0x6)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Following;

  /// @brief Field FollowingSibling value: static_cast<int32_t>(0x7)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const FollowingSibling;

  /// @brief Field Namespace value: static_cast<int32_t>(0x8)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Namespace;

  /// @brief Field None value: static_cast<int32_t>(0xd)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const None;

  /// @brief Field Parent value: static_cast<int32_t>(0x9)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Parent;

  /// @brief Field Preceding value: static_cast<int32_t>(0xa)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Preceding;

  /// @brief Field PrecedingSibling value: static_cast<int32_t>(0xb)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const PrecedingSibling;

  /// @brief Field Self value: static_cast<int32_t>(0xc)
  static ::MS::Internal::Xml::XPath::__Axis__AxisType const Self;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7739 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::__Axis__AxisType, 0x4>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::__Axis__AxisType, value__) == 0x0, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
// Type: MS.Internal.Xml.XPath::Axis
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::Axis*
class CORDL_TYPE Axis : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  using AxisType = ::MS::Internal::Xml::XPath::__Axis__AxisType;

  __declspec(property(get = get_AbbrAxis)) bool AbbrAxis;

  __declspec(property(get = get_Input, put = set_Input)) ::MS::Internal::Xml::XPath::AstNode* Input;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XPath::XPathNodeType NodeType;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_ReturnType)) ::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type)) ::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  __declspec(property(get = get_TypeOfAxis)) ::MS::Internal::Xml::XPath::__Axis__AxisType TypeOfAxis;

  __declspec(property(get = get_Urn, put = set_Urn)) ::StringW Urn;

  /// @brief Field _axisType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__axisType, put = __cordl_internal_set__axisType)) ::MS::Internal::Xml::XPath::__Axis__AxisType _axisType;

  /// @brief Field _input, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__input, put = __cordl_internal_set__input)) ::MS::Internal::Xml::XPath::AstNode* _input;

  /// @brief Field _name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _nodeType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeType, put = __cordl_internal_set__nodeType)) ::System::Xml::XPath::XPathNodeType _nodeType;

  /// @brief Field _prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix)) ::StringW _prefix;

  /// @brief Field _urn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__urn, put = __cordl_internal_set__urn)) ::StringW _urn;

  /// @brief Field abbrAxis, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_abbrAxis, put = __cordl_internal_set_abbrAxis)) bool abbrAxis;

  static inline ::MS::Internal::Xml::XPath::Axis* New_ctor(::MS::Internal::Xml::XPath::__Axis__AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input);

  static inline ::MS::Internal::Xml::XPath::Axis* New_ctor(::MS::Internal::Xml::XPath::__Axis__AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input, ::StringW prefix, ::StringW name,
                                                           ::System::Xml::XPath::XPathNodeType nodetype);

  constexpr ::MS::Internal::Xml::XPath::__Axis__AxisType const& __cordl_internal_get__axisType() const;

  constexpr ::MS::Internal::Xml::XPath::__Axis__AxisType& __cordl_internal_get__axisType();

  constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__input();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::AstNode*> const& __cordl_internal_get__input() const;

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::Xml::XPath::XPathNodeType const& __cordl_internal_get__nodeType() const;

  constexpr ::System::Xml::XPath::XPathNodeType& __cordl_internal_get__nodeType();

  constexpr ::StringW const& __cordl_internal_get__prefix() const;

  constexpr ::StringW& __cordl_internal_get__prefix();

  constexpr ::StringW const& __cordl_internal_get__urn() const;

  constexpr ::StringW& __cordl_internal_get__urn();

  constexpr bool const& __cordl_internal_get_abbrAxis() const;

  constexpr bool& __cordl_internal_get_abbrAxis();

  constexpr void __cordl_internal_set__axisType(::MS::Internal::Xml::XPath::__Axis__AxisType value);

  constexpr void __cordl_internal_set__input(::MS::Internal::Xml::XPath::AstNode* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__nodeType(::System::Xml::XPath::XPathNodeType value);

  constexpr void __cordl_internal_set__prefix(::StringW value);

  constexpr void __cordl_internal_set__urn(::StringW value);

  constexpr void __cordl_internal_set_abbrAxis(bool value);

  /// @brief Method .ctor, addr 0x428f538, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::__Axis__AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input);

  /// @brief Method .ctor, addr 0x428f4a0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::__Axis__AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input, ::StringW prefix, ::StringW name, ::System::Xml::XPath::XPathNodeType nodetype);

  /// @brief Method get_AbbrAxis, addr 0x428f5f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_AbbrAxis();

  /// @brief Method get_Input, addr 0x428f5c4, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode* get_Input();

  /// @brief Method get_Name, addr 0x428f5dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x428f5e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x428f5d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_ReturnType, addr 0x428f5bc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x428f5b4, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

  /// @brief Method get_TypeOfAxis, addr 0x428f5ec, size 0x8, virtual false, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__Axis__AxisType get_TypeOfAxis();

  /// @brief Method get_Urn, addr 0x428f5fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Urn();

  /// @brief Method set_Input, addr 0x428f5cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Input(::MS::Internal::Xml::XPath::AstNode* value);

  /// @brief Method set_Urn, addr 0x428f604, size 0x8, virtual false, abstract: false, final false
  inline void set_Urn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Axis();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Axis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Axis(Axis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Axis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Axis(Axis const&) = delete;

  /// @brief Field _axisType, offset: 0x10, size: 0x4, def value: None
  ::MS::Internal::Xml::XPath::__Axis__AxisType ____axisType;

  /// @brief Field _input, offset: 0x18, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::AstNode* ____input;

  /// @brief Field _prefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ____prefix;

  /// @brief Field _name, offset: 0x28, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _nodeType, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::XPath::XPathNodeType ____nodeType;

  /// @brief Field abbrAxis, offset: 0x34, size: 0x1, def value: None
  bool ___abbrAxis;

  /// @brief Field _urn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____urn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Axis, 0x40>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____axisType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____nodeType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ___abbrAxis) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Axis, ____urn) == 0x38, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::__Axis__AxisType, "MS.Internal.Xml.XPath", "Axis/AxisType");
NEED_NO_BOX(::MS::Internal::Xml::XPath::Axis);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Axis*, "MS.Internal.Xml.XPath", "Axis");
