#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexMethodByRefUpdater)
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
struct LocalDefinition;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariables;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class IndexMethodByRefUpdater;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater);
// Type: System.Linq.Expressions.Interpreter::IndexMethodByRefUpdater
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::IndexMethodByRefUpdater*
class CORDL_TYPE IndexMethodByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
public:
  // Declarations
  /// @brief Field _args, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__args,
                      put = __cordl_internal_set__args))::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> _args;

  /// @brief Field _indexer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexer, put = __cordl_internal_set__indexer))::System::Reflection::MethodInfo* _indexer;

  /// @brief Field _obj, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get__obj, put = __cordl_internal_set__obj))::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _obj;

  static inline ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*
  New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
           ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> args, ::System::Reflection::MethodInfo* indexer,
           int32_t argumentIndex);

  /// @brief Method UndefineTemps, addr 0x2b3a784, size 0xfc, virtual true, abstract: false, final false
  inline void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);

  /// @brief Method Update, addr 0x2b3a530, size 0x254, virtual true, abstract: false, final false
  inline void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value);

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> const& __cordl_internal_get__args() const;

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>& __cordl_internal_get__args();

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__indexer();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get__indexer() const;

  constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& __cordl_internal_get__obj() const;

  constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& __cordl_internal_get__obj();

  constexpr void __cordl_internal_set__args(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> value);

  constexpr void __cordl_internal_set__indexer(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set__obj(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value);

  /// @brief Method .ctor, addr 0x2b3a4e0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> args,
                    ::System::Reflection::MethodInfo* indexer, int32_t argumentIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexMethodByRefUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexMethodByRefUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexMethodByRefUpdater(IndexMethodByRefUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexMethodByRefUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexMethodByRefUpdater(IndexMethodByRefUpdater const&) = delete;

  /// @brief Field _indexer, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____indexer;

  /// @brief Field _obj, offset: 0x20, size: 0x18, def value: None
  ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> ____obj;

  /// @brief Field _args, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> ____args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater, ____indexer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater, ____obj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater, ____args) == 0x38, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*, "System.Linq.Expressions.Interpreter", "IndexMethodByRefUpdater");
