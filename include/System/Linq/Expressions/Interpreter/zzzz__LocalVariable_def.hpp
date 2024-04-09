#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVariable)
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LocalVariable;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LocalVariable);
// Type: System.Linq.Expressions.Interpreter::LocalVariable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::LocalVariable*
class CORDL_TYPE LocalVariable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InClosure)) bool InClosure;

  /// @brief Field Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Index, put = __cordl_internal_set_Index)) int32_t Index;

  __declspec(property(get = get_IsBoxed, put = set_IsBoxed)) bool IsBoxed;

  /// @brief Field _flags, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) int32_t _flags;

  static inline ::System::Linq::Expressions::Interpreter::LocalVariable* New_ctor(int32_t index, bool closure);

  /// @brief Method ToString, addr 0x2b3d2bc, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_Index() const;

  constexpr int32_t& __cordl_internal_get_Index();

  constexpr int32_t const& __cordl_internal_get__flags() const;

  constexpr int32_t& __cordl_internal_get__flags();

  constexpr void __cordl_internal_set_Index(int32_t value);

  constexpr void __cordl_internal_set__flags(int32_t value);

  /// @brief Method .ctor, addr 0x2b3d278, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, bool closure);

  /// @brief Method get_InClosure, addr 0x2b37e5c, size 0xc, virtual false, abstract: false, final false
  inline bool get_InClosure();

  /// @brief Method get_IsBoxed, addr 0x2b37e68, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsBoxed();

  /// @brief Method set_IsBoxed, addr 0x2b3d25c, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsBoxed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalVariable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalVariable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalVariable(LocalVariable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalVariable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalVariable(LocalVariable const&) = delete;

  /// @brief Field Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___Index;

  /// @brief Field _flags, offset: 0x14, size: 0x4, def value: None
  int32_t ____flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LocalVariable, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariable, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalVariable, ____flags) == 0x14, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalVariable);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalVariable*, "System.Linq.Expressions.Interpreter", "LocalVariable");
