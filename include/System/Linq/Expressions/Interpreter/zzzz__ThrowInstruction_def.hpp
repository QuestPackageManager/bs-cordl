#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ThrowInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ThrowInstruction);
// Type: System.Linq.Expressions.Interpreter::ThrowInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::ThrowInstruction*
class CORDL_TYPE ThrowInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field Rethrow, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Rethrow, put = setStaticF_Rethrow))::System::Linq::Expressions::Interpreter::ThrowInstruction* Rethrow;

  /// @brief Field Throw, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Throw, put = setStaticF_Throw))::System::Linq::Expressions::Interpreter::ThrowInstruction* Throw;

  /// @brief Field VoidRethrow, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VoidRethrow, put = setStaticF_VoidRethrow))::System::Linq::Expressions::Interpreter::ThrowInstruction* VoidRethrow;

  /// @brief Field VoidThrow, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VoidThrow, put = setStaticF_VoidThrow))::System::Linq::Expressions::Interpreter::ThrowInstruction* VoidThrow;

  /// @brief Field _hasResult, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__hasResult, put = __cordl_internal_set__hasResult)) bool _hasResult;

  /// @brief Field _rethrow, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__rethrow, put = __cordl_internal_set__rethrow)) bool _rethrow;

  static inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* New_ctor(bool hasResult, bool isRethrow);

  /// @brief Method Run, addr 0x2b17aa8, size 0x90, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method WrapThrownObject, addr 0x2b17b38, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* WrapThrownObject(::System::Object* thrown);

  constexpr bool const& __cordl_internal_get__hasResult() const;

  constexpr bool& __cordl_internal_get__hasResult();

  constexpr bool const& __cordl_internal_get__rethrow() const;

  constexpr bool& __cordl_internal_get__rethrow();

  constexpr void __cordl_internal_set__hasResult(bool value);

  constexpr void __cordl_internal_set__rethrow(bool value);

  /// @brief Method .ctor, addr 0x2b17a28, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool hasResult, bool isRethrow);

  static inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* getStaticF_Rethrow();

  static inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* getStaticF_Throw();

  static inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* getStaticF_VoidRethrow();

  static inline ::System::Linq::Expressions::Interpreter::ThrowInstruction* getStaticF_VoidThrow();

  /// @brief Method get_ConsumedStack, addr 0x2b17aa0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2b17a58, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2b17a98, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_Rethrow(::System::Linq::Expressions::Interpreter::ThrowInstruction* value);

  static inline void setStaticF_Throw(::System::Linq::Expressions::Interpreter::ThrowInstruction* value);

  static inline void setStaticF_VoidRethrow(::System::Linq::Expressions::Interpreter::ThrowInstruction* value);

  static inline void setStaticF_VoidThrow(::System::Linq::Expressions::Interpreter::ThrowInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowInstruction(ThrowInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowInstruction(ThrowInstruction const&) = delete;

  /// @brief Field _hasResult, offset: 0x10, size: 0x1, def value: None
  bool ____hasResult;

  /// @brief Field _rethrow, offset: 0x11, size: 0x1, def value: None
  bool ____rethrow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ThrowInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ThrowInstruction, ____hasResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ThrowInstruction, ____rethrow) == 0x11, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ThrowInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ThrowInstruction*, "System.Linq.Expressions.Interpreter", "ThrowInstruction");
