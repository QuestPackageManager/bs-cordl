#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValueOrDefault.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableMethodCallInstruction_GetValueOrDefault)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class NullableMethodCallInstruction_GetValueOrDefault;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault);
// Dependencies System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault
class CORDL_TYPE NullableMethodCallInstruction_GetValueOrDefault : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  /// @brief Field _defaultValueType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValueType, put = __cordl_internal_set__defaultValueType)) ::System::Type* _defaultValueType;

  static inline ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault* New_ctor(::System::Reflection::MethodInfo* mi);

  /// @brief Method Run, addr 0x5da2bc4, size 0x64, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type* const& __cordl_internal_get__defaultValueType() const;

  constexpr ::System::Type*& __cordl_internal_get__defaultValueType();

  constexpr void __cordl_internal_set__defaultValueType(::System::Type* value);

  /// @brief Method .ctor, addr 0x5da2a70, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* mi);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableMethodCallInstruction_GetValueOrDefault();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_GetValueOrDefault", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableMethodCallInstruction_GetValueOrDefault(NullableMethodCallInstruction_GetValueOrDefault&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableMethodCallInstruction_GetValueOrDefault", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableMethodCallInstruction_GetValueOrDefault(NullableMethodCallInstruction_GetValueOrDefault const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16557 };

  /// @brief Field _defaultValueType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____defaultValueType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault, ____defaultValueType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction/GetValueOrDefault");
