#pragma once
// IWYU pragma private; include "System/Data/LikeNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__BinaryNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LikeNode)
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ExpressionNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class LikeNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::LikeNode);
// Dependencies System.Data.BinaryNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.LikeNode
class CORDL_TYPE LikeNode : public ::System::Data::BinaryNode {
public:
  // Declarations
  /// @brief Field _kind, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__kind, put = __cordl_internal_set__kind)) int32_t _kind;

  /// @brief Field _pattern, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pattern, put = __cordl_internal_set__pattern)) ::StringW _pattern;

  /// @brief Method AnalyzePattern, addr 0x4177c88, size 0x2e0, virtual false, abstract: false, final false
  inline ::StringW AnalyzePattern(::StringW pat);

  /// @brief Method Eval, addr 0x4177734, size 0x554, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  static inline ::System::Data::LikeNode* New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right);

  constexpr int32_t const& __cordl_internal_get__kind() const;

  constexpr int32_t& __cordl_internal_get__kind();

  constexpr ::StringW const& __cordl_internal_get__pattern() const;

  constexpr ::StringW& __cordl_internal_get__pattern();

  constexpr void __cordl_internal_set__kind(int32_t value);

  constexpr void __cordl_internal_set__pattern(::StringW value);

  /// @brief Method .ctor, addr 0x41776f0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LikeNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LikeNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LikeNode(LikeNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LikeNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LikeNode(LikeNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11422 };

  /// @brief Field _kind, offset: 0x30, size: 0x4, def value: None
  int32_t ____kind;

  /// @brief Field _pattern, offset: 0x38, size: 0x8, def value: None
  ::StringW ____pattern;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::LikeNode, ____kind) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::LikeNode, ____pattern) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::LikeNode, 0x40>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::LikeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::LikeNode*, "System.Data", "LikeNode");
