#pragma once
// IWYU pragma private; include "System/Data/FunctionNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FunctionNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data {
class DataColumn;
}
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
namespace System::Data {
struct FunctionId;
}
namespace System::Data {
class Function;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class FunctionNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::FunctionNode);
// Type: System.Data::FunctionNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::FunctionNode*
class CORDL_TYPE FunctionNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  __declspec(property(get = get_Aggregate))::System::Data::FunctionId Aggregate;

  __declspec(property(get = get_IsAggregate)) bool IsAggregate;

  /// @brief Field _argumentCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__argumentCount, put = __cordl_internal_set__argumentCount)) int32_t _argumentCount;

  /// @brief Field _arguments, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments))::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> _arguments;

  /// @brief Field _info, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__info, put = __cordl_internal_set__info)) int32_t _info;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field s_funcs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_funcs, put = setStaticF_s_funcs))::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*> s_funcs;

  /// @brief Method AddArgument, addr 0x2cca950, size 0x1dc, virtual false, abstract: false, final false
  inline void AddArgument(::System::Data::ExpressionNode* argument);

  /// @brief Method Bind, addr 0x2ccc264, size 0x2d8, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method Check, addr 0x2ccab2c, size 0x1a0, virtual false, abstract: false, final false
  inline void Check();

  /// @brief Method DependsOn, addr 0x2cce9a0, size 0x88, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x2ccc53c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x2cce76c, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x2ccc550, size 0x940, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method EvalFunction, addr 0x2ccd110, size 0x165c, virtual false, abstract: false, final false
  inline ::System::Object* EvalFunction(::System::Data::FunctionId id, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> argumentValues, ::System::Data::DataRow* row,
                                        ::System::Data::DataRowVersion version);

  /// @brief Method GetDataType, addr 0x2ccce90, size 0x280, virtual false, abstract: false, final false
  inline ::System::Type* GetDataType(::System::Data::ExpressionNode* node);

  /// @brief Method HasLocalAggregate, addr 0x2cce8a8, size 0x7c, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x2cce924, size 0x7c, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x2cce79c, size 0x90, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x2cce82c, size 0x7c, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::FunctionNode* New_ctor(::System::Data::DataTable* table, ::StringW name);

  /// @brief Method Optimize, addr 0x2ccea28, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr int32_t const& __cordl_internal_get__argumentCount() const;

  constexpr int32_t& __cordl_internal_get__argumentCount();

  constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*>& __cordl_internal_get__arguments();

  constexpr int32_t const& __cordl_internal_get__info() const;

  constexpr int32_t& __cordl_internal_get__info();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__argumentCount(int32_t value);

  constexpr void __cordl_internal_set__arguments(::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> value);

  constexpr void __cordl_internal_set__info(int32_t value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x2cca3d0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::StringW name);

  static inline ::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*> getStaticF_s_funcs();

  /// @brief Method get_Aggregate, addr 0x2cca5bc, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Data::FunctionId get_Aggregate();

  /// @brief Method get_IsAggregate, addr 0x2ccebd8, size 0x234, virtual false, abstract: false, final false
  inline bool get_IsAggregate();

  static inline void setStaticF_s_funcs(::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FunctionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FunctionNode(FunctionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FunctionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FunctionNode(FunctionNode const&) = delete;

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _info, offset: 0x20, size: 0x4, def value: None
  int32_t ____info;

  /// @brief Field _argumentCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____argumentCount;

  /// @brief Field _arguments, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::FunctionNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____info) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____argumentCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____arguments) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::FunctionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::FunctionNode*, "System.Data", "FunctionNode");
