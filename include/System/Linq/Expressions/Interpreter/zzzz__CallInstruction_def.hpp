#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\CallInstruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallInstruction)
namespace System::Linq::Expressions::Interpreter {
class LightLambda;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class CallInstruction;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Interpreter::CallInstruction*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::CallInstruction*, "System.Linq.Expressions.Interpreter", "CallInstruction");
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.CallInstruction
class CORDL_TYPE CallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Method ArrayItemSetter1, addr 0x5f8e4fc, size 0x20, virtual false, abstract: false, final false
  static inline void ArrayItemSetter1(::System::Array* array, int32_t index0, ::System::Object* value);

  /// @brief Method ArrayItemSetter2, addr 0x5f8e51c, size 0x24, virtual false, abstract: false, final false
  static inline void ArrayItemSetter2(::System::Array* array, int32_t index0, int32_t index1, ::System::Object* value);

  /// @brief Method ArrayItemSetter3, addr 0x5f8e540, size 0x28, virtual false, abstract: false, final false
  static inline void ArrayItemSetter3(::System::Array* array, int32_t index0, int32_t index1, int32_t index2, ::System::Object* value);

  /// @brief Method Create, addr 0x5f8deb0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* info);

  /// @brief Method Create, addr 0x5f8df18, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* info, ::ArrayW<::System::Reflection::ParameterInfo*> parameters);

  /// @brief Method GetArrayAccessor, addr 0x5f8e080, size 0x470, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::CallInstruction* GetArrayAccessor(::System::Reflection::MethodInfo* info, int32_t argumentCount);

  /// @brief Method InterpretLambdaInvoke, addr 0x5f8e684, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* InterpretLambdaInvoke(::System::Linq::Expressions::Interpreter::LightLambda* targetLambda, ::ArrayW<::System::Object*> args);

  static inline ::System::Linq::Expressions::Interpreter::CallInstruction* New_ctor();

  /// @brief Method TryGetLightLambdaTarget, addr 0x5f8e574, size 0x110, virtual false, abstract: false, final false
  static inline bool TryGetLightLambdaTarget(::System::Object* instance, ::by_ref<::System::Linq::Expressions::Interpreter::LightLambda*> lightLambda);

  /// @brief Method .ctor, addr 0x5f8e6e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ArgumentCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_ConsumedStack, addr 0x5f8e568, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5f8de6c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallInstruction(CallInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallInstruction(CallInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Interpreter::CallInstruction) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
