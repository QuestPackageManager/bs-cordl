#pragma once
// IWYU pragma private; include "System/Xml/Schema/ForwardAxis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ForwardAxis)
namespace System::Xml::Schema {
class DoubleLinkAxis;
}
// Forward declare root types
namespace System::Xml::Schema {
class ForwardAxis;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ForwardAxis);
// Type: System.Xml.Schema::ForwardAxis
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 35, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::ForwardAxis*
class CORDL_TYPE ForwardAxis : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsAttribute)) bool IsAttribute;

  __declspec(property(get = get_IsDss)) bool IsDss;

  __declspec(property(get = get_IsSelfAxis)) bool IsSelfAxis;

  __declspec(property(get = get_RootNode))::System::Xml::Schema::DoubleLinkAxis* RootNode;

  __declspec(property(get = get_TopNode))::System::Xml::Schema::DoubleLinkAxis* TopNode;

  /// @brief Field _isAttribute, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isAttribute, put = __cordl_internal_set__isAttribute)) bool _isAttribute;

  /// @brief Field _isDss, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__isDss, put = __cordl_internal_set__isDss)) bool _isDss;

  /// @brief Field _isSelfAxis, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__isSelfAxis, put = __cordl_internal_set__isSelfAxis)) bool _isSelfAxis;

  /// @brief Field _rootNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rootNode, put = __cordl_internal_set__rootNode))::System::Xml::Schema::DoubleLinkAxis* _rootNode;

  /// @brief Field _topNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__topNode, put = __cordl_internal_set__topNode))::System::Xml::Schema::DoubleLinkAxis* _topNode;

  static inline ::System::Xml::Schema::ForwardAxis* New_ctor(::System::Xml::Schema::DoubleLinkAxis* axis, bool isdesorself);

  constexpr bool const& __cordl_internal_get__isAttribute() const;

  constexpr bool& __cordl_internal_get__isAttribute();

  constexpr bool const& __cordl_internal_get__isDss() const;

  constexpr bool& __cordl_internal_get__isDss();

  constexpr bool const& __cordl_internal_get__isSelfAxis() const;

  constexpr bool& __cordl_internal_get__isSelfAxis();

  constexpr ::System::Xml::Schema::DoubleLinkAxis*& __cordl_internal_get__rootNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DoubleLinkAxis*> const& __cordl_internal_get__rootNode() const;

  constexpr ::System::Xml::Schema::DoubleLinkAxis*& __cordl_internal_get__topNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DoubleLinkAxis*> const& __cordl_internal_get__topNode() const;

  constexpr void __cordl_internal_set__isAttribute(bool value);

  constexpr void __cordl_internal_set__isDss(bool value);

  constexpr void __cordl_internal_set__isSelfAxis(bool value);

  constexpr void __cordl_internal_set__rootNode(::System::Xml::Schema::DoubleLinkAxis* value);

  constexpr void __cordl_internal_set__topNode(::System::Xml::Schema::DoubleLinkAxis* value);

  /// @brief Method .ctor, addr 0x2f13c94, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::DoubleLinkAxis* axis, bool isdesorself);

  /// @brief Method get_IsAttribute, addr 0x2f13c7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAttribute();

  /// @brief Method get_IsDss, addr 0x2f13c84, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDss();

  /// @brief Method get_IsSelfAxis, addr 0x2f13c8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSelfAxis();

  /// @brief Method get_RootNode, addr 0x2f13c6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::DoubleLinkAxis* get_RootNode();

  /// @brief Method get_TopNode, addr 0x2f13c74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::DoubleLinkAxis* get_TopNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardAxis();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardAxis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardAxis(ForwardAxis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardAxis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardAxis(ForwardAxis const&) = delete;

  /// @brief Field _topNode, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::DoubleLinkAxis* ____topNode;

  /// @brief Field _rootNode, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::DoubleLinkAxis* ____rootNode;

  /// @brief Field _isAttribute, offset: 0x20, size: 0x1, def value: None
  bool ____isAttribute;

  /// @brief Field _isDss, offset: 0x21, size: 0x1, def value: None
  bool ____isDss;

  /// @brief Field _isSelfAxis, offset: 0x22, size: 0x1, def value: None
  bool ____isSelfAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ForwardAxis, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::ForwardAxis, ____topNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ForwardAxis, ____rootNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ForwardAxis, ____isAttribute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ForwardAxis, ____isDss) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ForwardAxis, ____isSelfAxis) == 0x22, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ForwardAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ForwardAxis*, "System.Xml.Schema", "ForwardAxis");
