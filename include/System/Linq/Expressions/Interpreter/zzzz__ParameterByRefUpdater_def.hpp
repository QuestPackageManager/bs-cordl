#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ParameterByRefUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterByRefUpdater)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ParameterByRefUpdater;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ParameterByRefUpdater);
// Type: System.Linq.Expressions.Interpreter::ParameterByRefUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::ParameterByRefUpdater*
class CORDL_TYPE ParameterByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
public:
  // Declarations
  /// @brief Field _parameter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parameter, put = __cordl_internal_set__parameter))::System::Linq::Expressions::Interpreter::LocalVariable* _parameter;

  static inline ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater* New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, int32_t argumentIndex);

  /// @brief Method Update, addr 0x2c6b67c, size 0x1e0, virtual true, abstract: false, final false
  inline void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value);

  constexpr ::System::Linq::Expressions::Interpreter::LocalVariable*& __cordl_internal_get__parameter();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::LocalVariable*> const& __cordl_internal_get__parameter() const;

  constexpr void __cordl_internal_set__parameter(::System::Linq::Expressions::Interpreter::LocalVariable* value);

  /// @brief Method .ctor, addr 0x2c6b64c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, int32_t argumentIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterByRefUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterByRefUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterByRefUpdater(ParameterByRefUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterByRefUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterByRefUpdater(ParameterByRefUpdater const&) = delete;

  /// @brief Field _parameter, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::LocalVariable* ____parameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ParameterByRefUpdater, ____parameter) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ParameterByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*, "System.Linq.Expressions.Interpreter", "ParameterByRefUpdater");
