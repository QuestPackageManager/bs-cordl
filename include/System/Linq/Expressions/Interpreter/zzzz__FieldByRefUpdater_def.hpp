#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldByRefUpdater)
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
class FieldInfo;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class FieldByRefUpdater;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::FieldByRefUpdater);
// Type: System.Linq.Expressions.Interpreter::FieldByRefUpdater
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::FieldByRefUpdater*
class CORDL_TYPE FieldByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
public:
  // Declarations
  /// @brief Field _field, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__field, put = __cordl_internal_set__field))::System::Reflection::FieldInfo* _field;

  /// @brief Field _object, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__object, put = __cordl_internal_set__object))::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> _object;

  static inline ::System::Linq::Expressions::Interpreter::FieldByRefUpdater* New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                                      ::System::Reflection::FieldInfo* field, int32_t argumentIndex);

  /// @brief Method UndefineTemps, addr 0x2c36b04, size 0x98, virtual true, abstract: false, final false
  inline void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);

  /// @brief Method Update, addr 0x2c36a60, size 0xa4, virtual true, abstract: false, final false
  inline void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value);

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get__field();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& __cordl_internal_get__field() const;

  constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& __cordl_internal_get__object() const;

  constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& __cordl_internal_get__object();

  constexpr void __cordl_internal_set__field(::System::Reflection::FieldInfo* value);

  constexpr void __cordl_internal_set__object(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value);

  /// @brief Method .ctor, addr 0x2c36a18, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::System::Reflection::FieldInfo* field, int32_t argumentIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldByRefUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldByRefUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldByRefUpdater(FieldByRefUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldByRefUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldByRefUpdater(FieldByRefUpdater const&) = delete;

  /// @brief Field _object, offset: 0x18, size: 0x18, def value: None
  ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> ____object;

  /// @brief Field _field, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ____field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::FieldByRefUpdater, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::FieldByRefUpdater, ____object) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::FieldByRefUpdater, ____field) == 0x30, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::FieldByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::FieldByRefUpdater*, "System.Linq.Expressions.Interpreter", "FieldByRefUpdater");
