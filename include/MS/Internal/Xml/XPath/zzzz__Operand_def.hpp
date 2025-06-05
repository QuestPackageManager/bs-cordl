#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Operand)
namespace MS::Internal::Xml::XPath {
struct AstNode_AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Operand;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Operand);
// Dependencies MS.Internal.Xml.XPath.AstNode, System.Xml.XPath.XPathResultType
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.Operand
class CORDL_TYPE Operand : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  __declspec(property(get = get_ReturnType)) ::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type)) ::MS::Internal::Xml::XPath::AstNode_AstType Type;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Xml::XPath::XPathResultType _type;

  /// @brief Field _val, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val)) ::System::Object* _val;

  static inline ::MS::Internal::Xml::XPath::Operand* New_ctor(::StringW val);

  static inline ::MS::Internal::Xml::XPath::Operand* New_ctor(double_t val);

  constexpr ::System::Xml::XPath::XPathResultType const& __cordl_internal_get__type() const;

  constexpr ::System::Xml::XPath::XPathResultType& __cordl_internal_get__type();

  constexpr ::System::Object* const& __cordl_internal_get__val() const;

  constexpr ::System::Object*& __cordl_internal_get__val();

  constexpr void __cordl_internal_set__type(::System::Xml::XPath::XPathResultType value);

  constexpr void __cordl_internal_set__val(::System::Object* value);

  /// @brief Method .ctor, addr 0x4306dbc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW val);

  /// @brief Method .ctor, addr 0x4306dec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(double_t val);

  /// @brief Method get_ReturnType, addr 0x4306e64, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x4306e5c, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::AstNode_AstType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Operand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Operand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Operand(Operand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Operand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Operand(Operand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7780 };

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XPath::XPathResultType ____type;

  /// @brief Field _val, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::Operand, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Operand, ____val) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Operand, 0x20>, "Size mismatch!");

} // namespace MS::Internal::Xml::XPath
NEED_NO_BOX(::MS::Internal::Xml::XPath::Operand);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Operand*, "MS.Internal.Xml.XPath", "Operand");
