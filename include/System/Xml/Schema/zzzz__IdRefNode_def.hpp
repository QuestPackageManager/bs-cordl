#pragma once
// IWYU pragma private; include "System/Xml/Schema/IdRefNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdRefNode)
// Forward declare root types
namespace System::Xml::Schema {
class IdRefNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::IdRefNode);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.IdRefNode
class CORDL_TYPE IdRefNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field Id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) ::StringW Id;

  /// @brief Field LineNo, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_LineNo, put = __cordl_internal_set_LineNo)) int32_t LineNo;

  /// @brief Field LinePos, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_LinePos, put = __cordl_internal_set_LinePos)) int32_t LinePos;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Xml::Schema::IdRefNode* Next;

  static inline ::System::Xml::Schema::IdRefNode* New_ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int32_t lineNo, int32_t linePos);

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr int32_t const& __cordl_internal_get_LineNo() const;

  constexpr int32_t& __cordl_internal_get_LineNo();

  constexpr int32_t const& __cordl_internal_get_LinePos() const;

  constexpr int32_t& __cordl_internal_get_LinePos();

  constexpr ::System::Xml::Schema::IdRefNode* const& __cordl_internal_get_Next() const;

  constexpr ::System::Xml::Schema::IdRefNode*& __cordl_internal_get_Next();

  constexpr void __cordl_internal_set_Id(::StringW value);

  constexpr void __cordl_internal_set_LineNo(int32_t value);

  constexpr void __cordl_internal_set_LinePos(int32_t value);

  constexpr void __cordl_internal_set_Next(::System::Xml::Schema::IdRefNode* value);

  /// @brief Method .ctor, addr 0x602079c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int32_t lineNo, int32_t linePos);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdRefNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdRefNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdRefNode(IdRefNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdRefNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdRefNode(IdRefNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9801 };

  /// @brief Field Id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Id;

  /// @brief Field LineNo, offset: 0x18, size: 0x4, def value: None
  int32_t ___LineNo;

  /// @brief Field LinePos, offset: 0x1c, size: 0x4, def value: None
  int32_t ___LinePos;

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::IdRefNode* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::IdRefNode, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::IdRefNode, ___LineNo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::IdRefNode, ___LinePos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::IdRefNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::IdRefNode, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::IdRefNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::IdRefNode*, "System.Xml.Schema", "IdRefNode");
