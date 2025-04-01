#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DelegateHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DelegateHelpers)
namespace System::Linq::Expressions::Interpreter {
class DelegateHelpers___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class DelegateHelpers;
}
namespace System::Linq::Expressions::Interpreter {
class DelegateHelpers___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DelegateHelpers);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DelegateHelpers___c);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DelegateHelpers/<>c
class CORDL_TYPE DelegateHelpers___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Linq::Expressions::Interpreter::DelegateHelpers___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::System::Type*, bool>* __9__1_0;

  static inline ::System::Linq::Expressions::Interpreter::DelegateHelpers___c* New_ctor();

  /// @brief Method <MakeDelegate>b__1_0, addr 0x40f56e4, size 0x18, virtual false, abstract: false, final false
  inline bool _MakeDelegate_b__1_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x40f56dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::DelegateHelpers___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__1_0();

  static inline void setStaticF___9(::System::Linq::Expressions::Interpreter::DelegateHelpers___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateHelpers___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateHelpers___c(DelegateHelpers___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateHelpers___c(DelegateHelpers___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DelegateHelpers___c, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DelegateHelpers
class CORDL_TYPE DelegateHelpers : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Linq::Expressions::Interpreter::DelegateHelpers___c;

  /// @brief Method MakeDelegate, addr 0x40e2730, size 0x670, virtual false, abstract: false, final false
  static inline ::System::Type* MakeDelegate(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateHelpers(DelegateHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateHelpers(DelegateHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DelegateHelpers, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DelegateHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DelegateHelpers*, "System.Linq.Expressions.Interpreter", "DelegateHelpers");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DelegateHelpers___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DelegateHelpers___c*, "System.Linq.Expressions.Interpreter", "DelegateHelpers/<>c");
