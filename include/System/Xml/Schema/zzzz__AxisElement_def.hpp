#pragma once
// IWYU pragma private; include "System/Xml/Schema/AxisElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AxisElement)
namespace System::Xml::Schema {
class DoubleLinkAxis;
}
namespace System::Xml::Schema {
class ForwardAxis;
}
// Forward declare root types
namespace System::Xml::Schema {
class AxisElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::AxisElement);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.AxisElement
class CORDL_TYPE AxisElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurNode)) ::System::Xml::Schema::DoubleLinkAxis* CurNode;

  /// @brief Field curDepth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curDepth, put = __cordl_internal_set_curDepth)) int32_t curDepth;

  /// @brief Field curNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_curNode, put = __cordl_internal_set_curNode)) ::System::Xml::Schema::DoubleLinkAxis* curNode;

  /// @brief Field isMatch, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isMatch, put = __cordl_internal_set_isMatch)) bool isMatch;

  /// @brief Field rootDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rootDepth, put = __cordl_internal_set_rootDepth)) int32_t rootDepth;

  /// @brief Method MoveToChild, addr 0x43a1630, size 0x164, virtual false, abstract: false, final false
  inline bool MoveToChild(::StringW name, ::StringW URN, int32_t depth, ::System::Xml::Schema::ForwardAxis* parent);

  /// @brief Method MoveToParent, addr 0x43a1524, size 0x10c, virtual false, abstract: false, final false
  inline void MoveToParent(int32_t depth, ::System::Xml::Schema::ForwardAxis* parent);

  static inline ::System::Xml::Schema::AxisElement* New_ctor(::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth);

  /// @brief Method SetDepth, addr 0x43a151c, size 0x8, virtual false, abstract: false, final false
  inline void SetDepth(int32_t depth);

  constexpr int32_t const& __cordl_internal_get_curDepth() const;

  constexpr int32_t& __cordl_internal_get_curDepth();

  constexpr ::System::Xml::Schema::DoubleLinkAxis* const& __cordl_internal_get_curNode() const;

  constexpr ::System::Xml::Schema::DoubleLinkAxis*& __cordl_internal_get_curNode();

  constexpr bool const& __cordl_internal_get_isMatch() const;

  constexpr bool& __cordl_internal_get_isMatch();

  constexpr int32_t const& __cordl_internal_get_rootDepth() const;

  constexpr int32_t& __cordl_internal_get_rootDepth();

  constexpr void __cordl_internal_set_curDepth(int32_t value);

  constexpr void __cordl_internal_set_curNode(::System::Xml::Schema::DoubleLinkAxis* value);

  constexpr void __cordl_internal_set_isMatch(bool value);

  constexpr void __cordl_internal_set_rootDepth(int32_t value);

  /// @brief Method .ctor, addr 0x43a14e8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth);

  /// @brief Method get_CurNode, addr 0x43a14e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::DoubleLinkAxis* get_CurNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AxisElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisElement(AxisElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisElement(AxisElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7475 };

  /// @brief Field curNode, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::DoubleLinkAxis* ___curNode;

  /// @brief Field rootDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ___rootDepth;

  /// @brief Field curDepth, offset: 0x1c, size: 0x4, def value: None
  int32_t ___curDepth;

  /// @brief Field isMatch, offset: 0x20, size: 0x1, def value: None
  bool ___isMatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::AxisElement, ___curNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AxisElement, ___rootDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AxisElement, ___curDepth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AxisElement, ___isMatch) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::AxisElement, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::AxisElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AxisElement*, "System.Xml.Schema", "AxisElement");
