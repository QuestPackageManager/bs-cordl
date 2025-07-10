#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/PropertyByRefUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyByRefUpdater)
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
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class PropertyByRefUpdater;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::PropertyByRefUpdater);
// Dependencies System.Linq.Expressions.Interpreter.ByRefUpdater, System.Linq.Expressions.Interpreter.LocalDefinition, System.Nullable`1<T>
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.PropertyByRefUpdater
class CORDL_TYPE PropertyByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
public:
  // Declarations
  /// @brief Field _object, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__object, put = __cordl_internal_set__object)) ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _object;

  /// @brief Field _property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__property, put = __cordl_internal_set__property)) ::System::Reflection::PropertyInfo* _property;

  static inline ::System::Linq::Expressions::Interpreter::PropertyByRefUpdater* New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                                         ::System::Reflection::PropertyInfo* property, int32_t argumentIndex);

  /// @brief Method UndefineTemps, addr 0x40e5fd8, size 0x98, virtual true, abstract: false, final false
  inline void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);

  /// @brief Method Update, addr 0x40e5e74, size 0x148, virtual true, abstract: false, final false
  inline void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value);

  constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& __cordl_internal_get__object() const;

  constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& __cordl_internal_get__object();

  constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get__property() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get__property();

  constexpr void __cordl_internal_set__object(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value);

  constexpr void __cordl_internal_set__property(::System::Reflection::PropertyInfo* value);

  /// @brief Method .ctor, addr 0x40e5e2c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::System::Reflection::PropertyInfo* property, int32_t argumentIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyByRefUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyByRefUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyByRefUpdater(PropertyByRefUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyByRefUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyByRefUpdater(PropertyByRefUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13955 };

  /// @brief Field _object, offset: 0x18, size: 0x18, def value: None
  ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> ____object;

  /// @brief Field _property, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ____property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::PropertyByRefUpdater, ____object) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::PropertyByRefUpdater, ____property) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater, 0x38>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::PropertyByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*, "System.Linq.Expressions.Interpreter", "PropertyByRefUpdater");
