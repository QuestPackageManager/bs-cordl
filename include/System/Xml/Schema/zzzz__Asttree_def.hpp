#pragma once
// IWYU pragma private; include "System/Xml/Schema/Asttree.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asttree)
namespace MS::Internal::Xml::XPath {
class Axis;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml {
class XmlNamespaceManager;
}
// Forward declare root types
namespace System::Xml::Schema {
class Asttree;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Asttree);
// Type: System.Xml.Schema::Asttree
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Asttree*
class CORDL_TYPE Asttree : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SubtreeArray)) ::System::Collections::ArrayList* SubtreeArray;

  /// @brief Field _fAxisArray, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fAxisArray, put = __cordl_internal_set__fAxisArray)) ::System::Collections::ArrayList* _fAxisArray;

  /// @brief Field _isField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isField, put = __cordl_internal_set__isField)) bool _isField;

  /// @brief Field _nsmgr, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nsmgr, put = __cordl_internal_set__nsmgr)) ::System::Xml::XmlNamespaceManager* _nsmgr;

  /// @brief Field _xpathexpr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__xpathexpr, put = __cordl_internal_set__xpathexpr)) ::StringW _xpathexpr;

  /// @brief Method CompileXPath, addr 0x4332404, size 0x7cc, virtual false, abstract: false, final false
  inline void CompileXPath(::StringW xPath, bool isField, ::System::Xml::XmlNamespaceManager* nsmgr);

  /// @brief Method IsAttribute, addr 0x4331594, size 0x34, virtual false, abstract: false, final false
  static inline bool IsAttribute(::MS::Internal::Xml::XPath::Axis* ast);

  /// @brief Method IsDescendantOrSelf, addr 0x4332c04, size 0x40, virtual false, abstract: false, final false
  static inline bool IsDescendantOrSelf(::MS::Internal::Xml::XPath::Axis* ast);

  /// @brief Method IsNameTest, addr 0x4332bd0, size 0x34, virtual false, abstract: false, final false
  static inline bool IsNameTest(::MS::Internal::Xml::XPath::Axis* ast);

  /// @brief Method IsSelf, addr 0x433236c, size 0x40, virtual false, abstract: false, final false
  static inline bool IsSelf(::MS::Internal::Xml::XPath::Axis* ast);

  static inline ::System::Xml::Schema::Asttree* New_ctor(::StringW xPath, bool isField, ::System::Xml::XmlNamespaceManager* nsmgr);

  /// @brief Method SetURN, addr 0x4332c44, size 0xf0, virtual false, abstract: false, final false
  inline void SetURN(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::XmlNamespaceManager* nsmgr);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__fAxisArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__fAxisArray() const;

  constexpr bool const& __cordl_internal_get__isField() const;

  constexpr bool& __cordl_internal_get__isField();

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get__nsmgr();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __cordl_internal_get__nsmgr() const;

  constexpr ::StringW const& __cordl_internal_get__xpathexpr() const;

  constexpr ::StringW& __cordl_internal_get__xpathexpr();

  constexpr void __cordl_internal_set__fAxisArray(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__isField(bool value);

  constexpr void __cordl_internal_set__nsmgr(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set__xpathexpr(::StringW value);

  /// @brief Method .ctor, addr 0x43323b4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW xPath, bool isField, ::System::Xml::XmlNamespaceManager* nsmgr);

  /// @brief Method get_SubtreeArray, addr 0x43323ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_SubtreeArray();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asttree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asttree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asttree(Asttree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asttree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asttree(Asttree const&) = delete;

  /// @brief Field _fAxisArray, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____fAxisArray;

  /// @brief Field _xpathexpr, offset: 0x18, size: 0x8, def value: None
  ::StringW ____xpathexpr;

  /// @brief Field _isField, offset: 0x20, size: 0x1, def value: None
  bool ____isField;

  /// @brief Field _nsmgr, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ____nsmgr;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Asttree, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Asttree, ____fAxisArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Asttree, ____xpathexpr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Asttree, ____isField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Asttree, ____nsmgr) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Asttree);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Asttree*, "System.Xml.Schema", "Asttree");
