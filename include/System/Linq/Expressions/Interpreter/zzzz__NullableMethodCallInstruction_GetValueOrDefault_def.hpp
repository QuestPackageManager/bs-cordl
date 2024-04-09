#pragma once
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
namespace System::Linq::Expressions::Interpreter {
class __NullableMethodCallInstruction__GetValueOrDefault;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault);
// Type: ::GetValueOrDefault
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NullableMethodCallInstruction::GetValueOrDefault*
class CORDL_TYPE __NullableMethodCallInstruction__GetValueOrDefault : public ::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
public:
  // Declarations
  /// @brief Field _defaultValueType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValueType, put = __cordl_internal_set__defaultValueType))::System::Type* _defaultValueType;

  static inline ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault* New_ctor(::System::Reflection::MethodInfo* mi);

  /// @brief Method Run, addr 0x2b4b084, size 0x60, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type*& __cordl_internal_get__defaultValueType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__defaultValueType() const;

  constexpr void __cordl_internal_set__defaultValueType(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b4aef4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* mi);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NullableMethodCallInstruction__GetValueOrDefault();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetValueOrDefault", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NullableMethodCallInstruction__GetValueOrDefault(__NullableMethodCallInstruction__GetValueOrDefault&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NullableMethodCallInstruction__GetValueOrDefault", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NullableMethodCallInstruction__GetValueOrDefault(__NullableMethodCallInstruction__GetValueOrDefault const&) = delete;

  /// @brief Field _defaultValueType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____defaultValueType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault, ____defaultValueType) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*, "System.Linq.Expressions.Interpreter",
                       "NullableMethodCallInstruction/GetValueOrDefault");
