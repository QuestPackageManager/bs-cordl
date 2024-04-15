#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Interpreter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class DebugInfo;
}
namespace System::Linq::Expressions::Interpreter {
struct InstructionArray;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariable;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariables;
}
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class Interpreter;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::Interpreter);
// Type: System.Linq.Expressions.Interpreter::Interpreter
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::Interpreter*
class CORDL_TYPE Interpreter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ClosureSize)) int32_t ClosureSize;

  __declspec(property(get = get_ClosureVariables))::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,
                                                                                               ::System::Linq::Expressions::Interpreter::LocalVariable*>* ClosureVariables;

  __declspec(property(get = get_Instructions))::System::Linq::Expressions::Interpreter::InstructionArray Instructions;

  __declspec(property(get = get_LocalCount)) int32_t LocalCount;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Field NoValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NoValue, put = setStaticF_NoValue))::System::Object* NoValue;

  /// @brief Field <ClosureVariables>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__ClosureVariables_k__BackingField, put = __cordl_internal_set__ClosureVariables_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* _ClosureVariables_k__BackingField;

  /// @brief Field <LocalCount>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__LocalCount_k__BackingField, put = __cordl_internal_set__LocalCount_k__BackingField)) int32_t _LocalCount_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field _debugInfos, offset 0x48, size 0x8
  __declspec(
      property(get = __cordl_internal_get__debugInfos,
               put = __cordl_internal_set__debugInfos))::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> _debugInfos;

  /// @brief Field _instructions, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get__instructions, put = __cordl_internal_set__instructions))::System::Linq::Expressions::Interpreter::InstructionArray _instructions;

  /// @brief Field _labels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__labels,
                      put = __cordl_internal_set__labels))::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> _labels;

  /// @brief Field _objects, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__objects, put = __cordl_internal_set__objects))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _objects;

  static inline ::System::Linq::Expressions::Interpreter::Interpreter*
  New_ctor(::StringW name, ::System::Linq::Expressions::Interpreter::LocalVariables* locals, ::System::Linq::Expressions::Interpreter::InstructionArray instructions,
           ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> debugInfos);

  /// @brief Method Run, addr 0x2b27ff0, size 0x6c, virtual false, abstract: false, final false
  inline void Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
  __cordl_internal_get__ClosureVariables_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*> const&
  __cordl_internal_get__ClosureVariables_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__LocalCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LocalCount_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> const& __cordl_internal_get__debugInfos() const;

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*>& __cordl_internal_get__debugInfos();

  constexpr ::System::Linq::Expressions::Interpreter::InstructionArray const& __cordl_internal_get__instructions() const;

  constexpr ::System::Linq::Expressions::Interpreter::InstructionArray& __cordl_internal_get__instructions();

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> const& __cordl_internal_get__labels() const;

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>& __cordl_internal_get__labels();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__objects() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__objects();

  constexpr void __cordl_internal_set__ClosureVariables_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value);

  constexpr void __cordl_internal_set__LocalCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__debugInfos(::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> value);

  constexpr void __cordl_internal_set__instructions(::System::Linq::Expressions::Interpreter::InstructionArray value);

  constexpr void __cordl_internal_set__labels(::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> value);

  constexpr void __cordl_internal_set__objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x2b27ef8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Linq::Expressions::Interpreter::LocalVariables* locals, ::System::Linq::Expressions::Interpreter::InstructionArray instructions,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> debugInfos);

  static inline ::System::Object* getStaticF_NoValue();

  /// @brief Method get_ClosureSize, addr 0x2b27f7c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_ClosureSize();

  /// @brief Method get_ClosureVariables, addr 0x2b27fe8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* get_ClosureVariables();

  /// @brief Method get_Instructions, addr 0x2b27fd4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::InstructionArray get_Instructions();

  /// @brief Method get_LocalCount, addr 0x2b27f74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LocalCount();

  /// @brief Method get_Name, addr 0x2b27f6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  static inline void setStaticF_NoValue(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interpreter(Interpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interpreter(Interpreter const&) = delete;

  /// @brief Field _instructions, offset: 0x10, size: 0x28, def value: None
  ::System::Linq::Expressions::Interpreter::InstructionArray ____instructions;

  /// @brief Field _objects, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____objects;

  /// @brief Field _labels, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> ____labels;

  /// @brief Field _debugInfos, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> ____debugInfos;

  /// @brief Field <Name>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <LocalCount>k__BackingField, offset: 0x58, size: 0x4, def value: None
  int32_t ____LocalCount_k__BackingField;

  /// @brief Field <ClosureVariables>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* ____ClosureVariables_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::Interpreter, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____instructions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____objects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____labels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____debugInfos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____Name_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____LocalCount_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::Interpreter, ____ClosureVariables_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::Interpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::Interpreter*, "System.Linq.Expressions.Interpreter", "Interpreter");
