#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RuntimeVariables.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__IRuntimeVariables_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeVariables)
namespace System::Runtime::CompilerServices {
class IRuntimeVariables;
}
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class RuntimeVariables;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::RuntimeVariables);
// Dependencies System.Object, System.Runtime.CompilerServices.IRuntimeVariables
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.RuntimeVariables
class CORDL_TYPE RuntimeVariables : public ::System::Object {
public:
  // Declarations
  /// @brief Field _boxes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__boxes,
                      put = __cordl_internal_set__boxes)) ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>
      _boxes;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::IRuntimeVariables"
  constexpr operator ::System::Runtime::CompilerServices::IRuntimeVariables*() noexcept;

  /// @brief Method Create, addr 0x40ef524, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::IRuntimeVariables*
  Create(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> boxes);

  static inline ::System::Linq::Expressions::Interpreter::RuntimeVariables*
  New_ctor(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> boxes);

  constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> const& __cordl_internal_get__boxes() const;

  constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>& __cordl_internal_get__boxes();

  constexpr void __cordl_internal_set__boxes(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> value);

  /// @brief Method .ctor, addr 0x40fa3bc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> boxes);

  /// @brief Convert to "::System::Runtime::CompilerServices::IRuntimeVariables"
  constexpr ::System::Runtime::CompilerServices::IRuntimeVariables* i___System__Runtime__CompilerServices__IRuntimeVariables() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeVariables();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeVariables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeVariables(RuntimeVariables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeVariables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeVariables(RuntimeVariables const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14082 };

  /// @brief Field _boxes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> ____boxes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::RuntimeVariables, ____boxes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::RuntimeVariables, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::RuntimeVariables);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::RuntimeVariables*, "System.Linq.Expressions.Interpreter", "RuntimeVariables");
