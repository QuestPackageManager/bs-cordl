#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByRefUpdater)
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariables;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ByRefUpdater;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ByRefUpdater);
// Type: System.Linq.Expressions.Interpreter::ByRefUpdater
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::ByRefUpdater*
class CORDL_TYPE ByRefUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Field ArgumentIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ArgumentIndex, put = __cordl_internal_set_ArgumentIndex)) int32_t ArgumentIndex;

  static inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* New_ctor(int32_t argumentIndex);

  /// @brief Method UndefineTemps, addr 0x2b39c44, size 0x4, virtual true, abstract: false, final false
  inline void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value);

  constexpr int32_t const& __cordl_internal_get_ArgumentIndex() const;

  constexpr int32_t& __cordl_internal_get_ArgumentIndex();

  constexpr void __cordl_internal_set_ArgumentIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2b39c1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t argumentIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByRefUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByRefUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByRefUpdater(ByRefUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByRefUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByRefUpdater(ByRefUpdater const&) = delete;

  /// @brief Field ArgumentIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___ArgumentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ByRefUpdater, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ByRefUpdater, ___ArgumentIndex) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ByRefUpdater*, "System.Linq.Expressions.Interpreter", "ByRefUpdater");
