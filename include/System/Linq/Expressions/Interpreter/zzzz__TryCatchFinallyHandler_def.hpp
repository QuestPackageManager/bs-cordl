#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/TryCatchFinallyHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TryCatchFinallyHandler)
namespace System::Linq::Expressions::Interpreter {
class ExceptionFilter;
}
namespace System::Linq::Expressions::Interpreter {
class ExceptionHandler;
}
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
class TryCatchFinallyHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.TryCatchFinallyHandler
class CORDL_TYPE TryCatchFinallyHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field FinallyEndIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_FinallyEndIndex, put = __cordl_internal_set_FinallyEndIndex)) int32_t FinallyEndIndex;

  /// @brief Field FinallyStartIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_FinallyStartIndex, put = __cordl_internal_set_FinallyStartIndex)) int32_t FinallyStartIndex;

  /// @brief Field GotoEndTargetIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_GotoEndTargetIndex, put = __cordl_internal_set_GotoEndTargetIndex)) int32_t GotoEndTargetIndex;

  __declspec(property(get = get_Handlers)) ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> Handlers;

  __declspec(property(get = get_IsCatchBlockExist)) bool IsCatchBlockExist;

  __declspec(property(get = get_IsFinallyBlockExist)) bool IsFinallyBlockExist;

  /// @brief Field TryEndIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_TryEndIndex, put = __cordl_internal_set_TryEndIndex)) int32_t TryEndIndex;

  /// @brief Field TryStartIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_TryStartIndex, put = __cordl_internal_set_TryStartIndex)) int32_t TryStartIndex;

  /// @brief Field _handlers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__handlers,
                      put =
                          __cordl_internal_set__handlers)) ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*>
      _handlers;

  /// @brief Method FilterPasses, addr 0x40d7c28, size 0x1f8, virtual false, abstract: false, final false
  static inline bool FilterPasses(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::ByRef<::System::Object*> exception,
                                  ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter);

  /// @brief Method HasHandler, addr 0x40d7ad4, size 0x154, virtual false, abstract: false, final false
  inline bool HasHandler(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Exception* exception,
                         ::ByRef<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handler, ::ByRef<::System::Object*> unwrappedException);

  static inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*
  New_ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndLabelIndex, int32_t finallyStart, int32_t finallyEnd,
           ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> handlers);

  static inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*
  New_ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndTargetIndex,
           ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> handlers);

  constexpr int32_t const& __cordl_internal_get_FinallyEndIndex() const;

  constexpr int32_t& __cordl_internal_get_FinallyEndIndex();

  constexpr int32_t const& __cordl_internal_get_FinallyStartIndex() const;

  constexpr int32_t& __cordl_internal_get_FinallyStartIndex();

  constexpr int32_t const& __cordl_internal_get_GotoEndTargetIndex() const;

  constexpr int32_t& __cordl_internal_get_GotoEndTargetIndex();

  constexpr int32_t const& __cordl_internal_get_TryEndIndex() const;

  constexpr int32_t& __cordl_internal_get_TryEndIndex();

  constexpr int32_t const& __cordl_internal_get_TryStartIndex() const;

  constexpr int32_t& __cordl_internal_get_TryStartIndex();

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> const& __cordl_internal_get__handlers() const;

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*>& __cordl_internal_get__handlers();

  constexpr void __cordl_internal_set_FinallyEndIndex(int32_t value);

  constexpr void __cordl_internal_set_FinallyStartIndex(int32_t value);

  constexpr void __cordl_internal_set_GotoEndTargetIndex(int32_t value);

  constexpr void __cordl_internal_set_TryEndIndex(int32_t value);

  constexpr void __cordl_internal_set_TryStartIndex(int32_t value);

  constexpr void __cordl_internal_set__handlers(::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> value);

  /// @brief Method .ctor, addr 0x40d7a7c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndLabelIndex, int32_t finallyStart, int32_t finallyEnd,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> handlers);

  /// @brief Method .ctor, addr 0x40d7a30, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndTargetIndex,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> handlers);

  /// @brief Method get_Handlers, addr 0x40d7a18, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> get_Handlers();

  /// @brief Method get_IsCatchBlockExist, addr 0x40d7a20, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCatchBlockExist();

  /// @brief Method get_IsFinallyBlockExist, addr 0x40d7a04, size 0x14, virtual false, abstract: false, final false
  inline bool get_IsFinallyBlockExist();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TryCatchFinallyHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TryCatchFinallyHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TryCatchFinallyHandler(TryCatchFinallyHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TryCatchFinallyHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TryCatchFinallyHandler(TryCatchFinallyHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13942 };

  /// @brief Field TryStartIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___TryStartIndex;

  /// @brief Field TryEndIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___TryEndIndex;

  /// @brief Field FinallyStartIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___FinallyStartIndex;

  /// @brief Field FinallyEndIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___FinallyEndIndex;

  /// @brief Field GotoEndTargetIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___GotoEndTargetIndex;

  /// @brief Field _handlers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*, ::Array<::System::Linq::Expressions::Interpreter::ExceptionHandler*>*> ____handlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, ___TryStartIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, ___TryEndIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, ___FinallyStartIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, ___FinallyEndIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, ___GotoEndTargetIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, ____handlers) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*, "System.Linq.Expressions.Interpreter", "TryCatchFinallyHandler");
