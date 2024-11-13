#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstructionArray)
namespace GlobalNamespace {
struct __InstructionList__DebugView__InstructionView;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
namespace System::Linq::Expressions::Interpreter {
class __InstructionArray__DebugView;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __InstructionArray__DebugView;
}
namespace System::Linq::Expressions::Interpreter {
struct InstructionArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView);
MARK_VAL_T(::System::Linq::Expressions::Interpreter::InstructionArray);
// Type: System.Linq.Expressions.Interpreter::InstructionArray
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: true
// CS Name: ::System.Linq.Expressions.Interpreter::InstructionArray
struct CORDL_TYPE InstructionArray {
public:
  // Declarations
  using DebugView = ::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView;

  /// @brief Method .ctor, addr 0x406b340, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxStackDepth, int32_t maxContinuationDepth,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> instructions,
                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> objects,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> labels,
                    ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* debugCookies);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstructionArray();

  // Ctor Parameters [CppParam { name: "MaxStackDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MaxContinuationDepth", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Instructions", ty: "::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>", modifiers: "", def_value:
  // None }, CppParam { name: "Objects", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "Labels", ty:
  // "::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>", modifiers: "", def_value: None }, CppParam { name:
  // "DebugCookies", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*", modifiers: "", def_value: None }]
  constexpr InstructionArray(int32_t MaxStackDepth, int32_t MaxContinuationDepth,
                             ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Instructions,
                             ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Objects,
                             ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> Labels,
                             ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* DebugCookies) noexcept;

  /// @brief Field MaxStackDepth, offset: 0x0, size: 0x4, def value: None
  int32_t MaxStackDepth;

  /// @brief Field MaxContinuationDepth, offset: 0x4, size: 0x4, def value: None
  int32_t MaxContinuationDepth;

  /// @brief Field Instructions, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Instructions;

  /// @brief Field Objects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Objects;

  /// @brief Field Labels, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> Labels;

  /// @brief Field DebugCookies, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* DebugCookies;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13857 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InstructionArray, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionArray, MaxStackDepth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionArray, MaxContinuationDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionArray, Instructions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionArray, Objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionArray, Labels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionArray, DebugCookies) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Type: ::DebugView
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::InstructionArray::DebugView*
class CORDL_TYPE __InstructionArray__DebugView : public ::System::Object {
public:
  // Declarations
  /// @brief Field _array, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::System::Linq::Expressions::Interpreter::InstructionArray _array;

  /// @brief Method GetInstructionViews, addr 0x406b3fc, size 0xa0, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__InstructionList__DebugView__InstructionView, ::Array<::GlobalNamespace::__InstructionList__DebugView__InstructionView>*>
  GetInstructionViews(bool includeDebugCookies);

  static inline ::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView* New_ctor(::System::Linq::Expressions::Interpreter::InstructionArray array);

  /// @brief Method <GetInstructionViews>b__4_0, addr 0x406ba6c, size 0x34, virtual false, abstract: false, final false
  inline int32_t _GetInstructionViews_b__4_0(int32_t index);

  constexpr ::System::Linq::Expressions::Interpreter::InstructionArray const& __cordl_internal_get__array() const;

  constexpr ::System::Linq::Expressions::Interpreter::InstructionArray& __cordl_internal_get__array();

  constexpr void __cordl_internal_set__array(::System::Linq::Expressions::Interpreter::InstructionArray value);

  /// @brief Method .ctor, addr 0x406b350, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::InstructionArray array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InstructionArray__DebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InstructionArray__DebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InstructionArray__DebugView(__InstructionArray__DebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InstructionArray__DebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InstructionArray__DebugView(__InstructionArray__DebugView const&) = delete;

  /// @brief Field _array, offset: 0x10, size: 0x28, def value: None
  ::System::Linq::Expressions::Interpreter::InstructionArray ____array;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView, ____array) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__InstructionArray__DebugView*, "System.Linq.Expressions.Interpreter", "InstructionArray/DebugView");
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InstructionArray, "System.Linq.Expressions.Interpreter", "InstructionArray");
