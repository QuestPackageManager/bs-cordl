#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/TryFaultHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TryFaultHandler)
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class TryFaultHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::TryFaultHandler);
// Type: System.Linq.Expressions.Interpreter::TryFaultHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::TryFaultHandler*
class CORDL_TYPE TryFaultHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field FinallyEndIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_FinallyEndIndex, put = __cordl_internal_set_FinallyEndIndex)) int32_t FinallyEndIndex;

  /// @brief Field FinallyStartIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_FinallyStartIndex, put = __cordl_internal_set_FinallyStartIndex)) int32_t FinallyStartIndex;

  /// @brief Field TryEndIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_TryEndIndex, put = __cordl_internal_set_TryEndIndex)) int32_t TryEndIndex;

  /// @brief Field TryStartIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_TryStartIndex, put = __cordl_internal_set_TryStartIndex)) int32_t TryStartIndex;

  static inline ::System::Linq::Expressions::Interpreter::TryFaultHandler* New_ctor(int32_t tryStart, int32_t tryEnd, int32_t finallyStart, int32_t finallyEnd);

  constexpr int32_t const& __cordl_internal_get_FinallyEndIndex() const;

  constexpr int32_t& __cordl_internal_get_FinallyEndIndex();

  constexpr int32_t const& __cordl_internal_get_FinallyStartIndex() const;

  constexpr int32_t& __cordl_internal_get_FinallyStartIndex();

  constexpr int32_t const& __cordl_internal_get_TryEndIndex() const;

  constexpr int32_t& __cordl_internal_get_TryEndIndex();

  constexpr int32_t const& __cordl_internal_get_TryStartIndex() const;

  constexpr int32_t& __cordl_internal_get_TryStartIndex();

  constexpr void __cordl_internal_set_FinallyEndIndex(int32_t value);

  constexpr void __cordl_internal_set_FinallyStartIndex(int32_t value);

  constexpr void __cordl_internal_set_TryEndIndex(int32_t value);

  constexpr void __cordl_internal_set_TryStartIndex(int32_t value);

  /// @brief Method .ctor, addr 0x4060db4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t tryStart, int32_t tryEnd, int32_t finallyStart, int32_t finallyEnd);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TryFaultHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TryFaultHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TryFaultHandler(TryFaultHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TryFaultHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TryFaultHandler(TryFaultHandler const&) = delete;

  /// @brief Field TryStartIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___TryStartIndex;

  /// @brief Field TryEndIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___TryEndIndex;

  /// @brief Field FinallyStartIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___FinallyStartIndex;

  /// @brief Field FinallyEndIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___FinallyEndIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::TryFaultHandler, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryFaultHandler, ___TryStartIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryFaultHandler, ___TryEndIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryFaultHandler, ___FinallyStartIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::TryFaultHandler, ___FinallyEndIndex) == 0x1c, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::TryFaultHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::TryFaultHandler*, "System.Linq.Expressions.Interpreter", "TryFaultHandler");
