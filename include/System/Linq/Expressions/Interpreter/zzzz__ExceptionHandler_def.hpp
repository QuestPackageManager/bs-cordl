#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExceptionHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionHandler)
namespace System::Linq::Expressions::Interpreter {
class ExceptionFilter;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ExceptionHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ExceptionHandler);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ExceptionHandler
class CORDL_TYPE ExceptionHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field Filter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Filter, put = __cordl_internal_set_Filter)) ::System::Linq::Expressions::Interpreter::ExceptionFilter* Filter;

  /// @brief Field HandlerEndIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_HandlerEndIndex, put = __cordl_internal_set_HandlerEndIndex)) int32_t HandlerEndIndex;

  /// @brief Field HandlerStartIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_HandlerStartIndex, put = __cordl_internal_set_HandlerStartIndex)) int32_t HandlerStartIndex;

  /// @brief Field LabelIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_LabelIndex, put = __cordl_internal_set_LabelIndex)) int32_t LabelIndex;

  /// @brief Field _exceptionType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionType, put = __cordl_internal_set__exceptionType)) ::System::Type* _exceptionType;

  /// @brief Method Matches, addr 0x40e5190, size 0x24, virtual false, abstract: false, final false
  inline bool Matches(::System::Type* exceptionType);

  static inline ::System::Linq::Expressions::Interpreter::ExceptionHandler* New_ctor(int32_t labelIndex, int32_t handlerStartIndex, int32_t handlerEndIndex, ::System::Type* exceptionType,
                                                                                     ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter);

  /// @brief Method ToString, addr 0x40e51b4, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Linq::Expressions::Interpreter::ExceptionFilter* const& __cordl_internal_get_Filter() const;

  constexpr ::System::Linq::Expressions::Interpreter::ExceptionFilter*& __cordl_internal_get_Filter();

  constexpr int32_t const& __cordl_internal_get_HandlerEndIndex() const;

  constexpr int32_t& __cordl_internal_get_HandlerEndIndex();

  constexpr int32_t const& __cordl_internal_get_HandlerStartIndex() const;

  constexpr int32_t& __cordl_internal_get_HandlerStartIndex();

  constexpr int32_t const& __cordl_internal_get_LabelIndex() const;

  constexpr int32_t& __cordl_internal_get_LabelIndex();

  constexpr ::System::Type* const& __cordl_internal_get__exceptionType() const;

  constexpr ::System::Type*& __cordl_internal_get__exceptionType();

  constexpr void __cordl_internal_set_Filter(::System::Linq::Expressions::Interpreter::ExceptionFilter* value);

  constexpr void __cordl_internal_set_HandlerEndIndex(int32_t value);

  constexpr void __cordl_internal_set_HandlerStartIndex(int32_t value);

  constexpr void __cordl_internal_set_LabelIndex(int32_t value);

  constexpr void __cordl_internal_set__exceptionType(::System::Type* value);

  /// @brief Method .ctor, addr 0x40e513c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(int32_t labelIndex, int32_t handlerStartIndex, int32_t handlerEndIndex, ::System::Type* exceptionType, ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionHandler(ExceptionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionHandler(ExceptionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13941 };

  /// @brief Field _exceptionType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____exceptionType;

  /// @brief Field LabelIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___LabelIndex;

  /// @brief Field HandlerStartIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___HandlerStartIndex;

  /// @brief Field HandlerEndIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___HandlerEndIndex;

  /// @brief Field Filter, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::ExceptionFilter* ___Filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionHandler, ____exceptionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionHandler, ___LabelIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionHandler, ___HandlerStartIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionHandler, ___HandlerEndIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionHandler, ___Filter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ExceptionHandler, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ExceptionHandler*, "System.Linq.Expressions.Interpreter", "ExceptionHandler");
