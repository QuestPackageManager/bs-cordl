#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InterpretedFrameInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InterpretedFrameInfo)
namespace System::Linq::Expressions::Interpreter {
class DebugInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
struct InterpretedFrameInfo;
}
// Write type traits
MARK_VAL_T(::System::Linq::Expressions::Interpreter::InterpretedFrameInfo);
// Dependencies
namespace System::Linq::Expressions::Interpreter {
// Is value type: true
// CS Name: System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct CORDL_TYPE InterpretedFrameInfo {
public:
  // Declarations
  /// @brief Method ToString, addr 0x5d84ec0, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5d8216c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* info);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InterpretedFrameInfo();

  // Ctor Parameters [CppParam { name: "_methodName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_debugInfo", ty: "::System::Linq::Expressions::Interpreter::DebugInfo*",
  // modifiers: "", def_value: None }]
  constexpr InterpretedFrameInfo(::StringW _methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16394 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _methodName, offset: 0x0, size: 0x8, def value: None
  ::StringW _methodName;

  /// @brief Field _debugInfo, offset: 0x8, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrameInfo, _methodName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrameInfo, _debugInfo) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InterpretedFrameInfo, "System.Linq.Expressions.Interpreter", "InterpretedFrameInfo");
