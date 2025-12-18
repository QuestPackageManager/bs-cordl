#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ArrayByRefUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayByRefUpdater)
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
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ArrayByRefUpdater;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater);
// Dependencies System.Linq.Expressions.Interpreter.ByRefUpdater, System.Linq.Expressions.Interpreter.LocalDefinition
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ArrayByRefUpdater
class CORDL_TYPE ArrayByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
public:
  // Declarations
  /// @brief Field _array, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::System::Linq::Expressions::Interpreter::LocalDefinition _array;

  /// @brief Field _index, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) ::System::Linq::Expressions::Interpreter::LocalDefinition _index;

  static inline ::System::Linq::Expressions::Interpreter::ArrayByRefUpdater* New_ctor(::System::Linq::Expressions::Interpreter::LocalDefinition array,
                                                                                      ::System::Linq::Expressions::Interpreter::LocalDefinition index, int32_t argumentIndex);

  /// @brief Method UndefineTemps, addr 0x5df9dc0, size 0x78, virtual true, abstract: false, final false
  inline void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);

  /// @brief Method Update, addr 0x5df9d08, size 0xb8, virtual true, abstract: false, final false
  inline void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value);

  constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition const& __cordl_internal_get__array() const;

  constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition& __cordl_internal_get__array();

  constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition const& __cordl_internal_get__index() const;

  constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__array(::System::Linq::Expressions::Interpreter::LocalDefinition value);

  constexpr void __cordl_internal_set__index(::System::Linq::Expressions::Interpreter::LocalDefinition value);

  /// @brief Method .ctor, addr 0x5df9cf8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::LocalDefinition array, ::System::Linq::Expressions::Interpreter::LocalDefinition index, int32_t argumentIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayByRefUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayByRefUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayByRefUpdater(ArrayByRefUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayByRefUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayByRefUpdater(ArrayByRefUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16414 };

  /// @brief Field _array, offset: 0x18, size: 0x10, def value: None
  ::System::Linq::Expressions::Interpreter::LocalDefinition ____array;

  /// @brief Field _index, offset: 0x28, size: 0x10, def value: None
  ::System::Linq::Expressions::Interpreter::LocalDefinition ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater, ____array) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater, ____index) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater, 0x38>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*, "System.Linq.Expressions.Interpreter", "ArrayByRefUpdater");
