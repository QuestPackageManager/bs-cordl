#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__EqualsClass;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetHashCodeClass;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetValueOrDefault1;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetValueOrDefault;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetValue;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__HasValue;
}
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__ToStringClass;
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
// Type: System.Linq.Expressions.Interpreter::NullableMethodCallInstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::NullableMethodCallInstruction*
class CORDL_TYPE NullableMethodCallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using EqualsClass = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__EqualsClass;

  using GetHashCodeClass = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetHashCodeClass;

  using GetValue = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValue;

  using GetValueOrDefault = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault;

  using GetValueOrDefault1 = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault1;

  using HasValue = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__HasValue;

  using ToStringClass = ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_equals, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_equals, put = setStaticF_s_equals)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_equals;

  /// @brief Field s_getHashCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_getHashCode, put = setStaticF_s_getHashCode)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_getHashCode;

  /// @brief Field s_getValueOrDefault1, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF_s_getValueOrDefault1, put = setStaticF_s_getValueOrDefault1)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_getValueOrDefault1;

  /// @brief Field s_hasValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_hasValue, put = setStaticF_s_hasValue)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_hasValue;

  /// @brief Field s_toString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_toString, put = setStaticF_s_toString)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_toString;

  /// @brief Field s_value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_value, put = setStaticF_s_value)) ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* s_value;

  /// @brief Method Create, addr 0x4081448, size 0x344, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* Create(::StringW method, int32_t argCount, ::System::Reflection::MethodInfo* mi);

  /// @brief Method CreateGetValue, addr 0x4081800, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Interpreter::Instruction* CreateGetValue();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* New_ctor();

  /// @brief Method .ctor, addr 0x4081440, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_equals();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_getHashCode();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_getValueOrDefault1();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_hasValue();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_toString();

  static inline ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction* getStaticF_s_value();

  /// @brief Method get_ConsumedStack, addr 0x40813f0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x4081400, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40813f8, size 0x8, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14069 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction");
