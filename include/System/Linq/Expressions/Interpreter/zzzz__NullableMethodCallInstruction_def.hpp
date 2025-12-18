#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction)
namespace GlobalNamespace {
class NullableMethodCallInstruction_EqualsClass;
}
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetHashCodeClass;
}
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetValueOrDefault1;
}
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetValueOrDefault;
}
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetValue;
}
namespace GlobalNamespace {
class NullableMethodCallInstruction_HasValue;
}
namespace GlobalNamespace {
class NullableMethodCallInstruction_ToStringClass;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NullableMethodCallInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
class CORDL_TYPE NullableMethodCallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using EqualsClass = ::GlobalNamespace::NullableMethodCallInstruction_EqualsClass;

  using GetHashCodeClass = ::GlobalNamespace::NullableMethodCallInstruction_GetHashCodeClass;

  using GetValue = ::GlobalNamespace::NullableMethodCallInstruction_GetValue;

  using GetValueOrDefault = ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault;

  using GetValueOrDefault1 = ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1;

  using HasValue = ::GlobalNamespace::NullableMethodCallInstruction_HasValue;

  using ToStringClass = ::GlobalNamespace::NullableMethodCallInstruction_ToStringClass;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_equals, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_equals, put = setStaticF_s_equals)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_equals;

  /// @brief Field s_getHashCode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_getHashCode, put = setStaticF_s_getHashCode)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_getHashCode;

  /// @brief Field s_getValueOrDefault1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_getValueOrDefault1, put = setStaticF_s_getValueOrDefault1)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_getValueOrDefault1;

  /// @brief Field s_hasValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_hasValue, put = setStaticF_s_hasValue)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_hasValue;

  /// @brief Field s_toString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_toString, put = setStaticF_s_toString)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_toString;

  /// @brief Field s_value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_value, put = setStaticF_s_value)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_value;

  /// @brief Method Create, addr 0x5e0a28c, size 0x360, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::StringW method, int32_t argCount, ::System::Reflection::MethodInfo* mi);

  /// @brief Method CreateGetValue, addr 0x5e0a638, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* CreateGetValue();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x5e0a288, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_equals();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_getHashCode();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_getValueOrDefault1();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_hasValue();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_toString();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_value();

  /// @brief Method get_ConsumedStack, addr 0x5e0a234, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x5e0a244, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x5e0a23c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_equals(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value);

  static inline void setStaticF_s_getHashCode(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value);

  static inline void setStaticF_s_getValueOrDefault1(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value);

  static inline void setStaticF_s_hasValue(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value);

  static inline void setStaticF_s_toString(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value);

  static inline void setStaticF_s_value(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableMethodCallInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableMethodCallInstruction(NullableMethodCallInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableMethodCallInstruction(NullableMethodCallInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction");
