#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionFilter)
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ExceptionFilter;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ExceptionFilter);
// Type: System.Linq.Expressions.Interpreter::ExceptionFilter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::ExceptionFilter*
class CORDL_TYPE ExceptionFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field EndIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_EndIndex, put = __cordl_internal_set_EndIndex)) int32_t EndIndex;

  /// @brief Field LabelIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LabelIndex, put = __cordl_internal_set_LabelIndex)) int32_t LabelIndex;

  /// @brief Field StartIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_StartIndex, put = __cordl_internal_set_StartIndex)) int32_t StartIndex;

  static inline ::System::Linq::Expressions::Interpreter::ExceptionFilter* New_ctor(int32_t labelIndex, int32_t start, int32_t end);

  constexpr int32_t const& __cordl_internal_get_EndIndex() const;

  constexpr int32_t& __cordl_internal_get_EndIndex();

  constexpr int32_t const& __cordl_internal_get_LabelIndex() const;

  constexpr int32_t& __cordl_internal_get_LabelIndex();

  constexpr int32_t const& __cordl_internal_get_StartIndex() const;

  constexpr int32_t& __cordl_internal_get_StartIndex();

  constexpr void __cordl_internal_set_EndIndex(int32_t value);

  constexpr void __cordl_internal_set_LabelIndex(int32_t value);

  constexpr void __cordl_internal_set_StartIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2c286cc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t labelIndex, int32_t start, int32_t end);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionFilter(ExceptionFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionFilter(ExceptionFilter const&) = delete;

  /// @brief Field LabelIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___LabelIndex;

  /// @brief Field StartIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___StartIndex;

  /// @brief Field EndIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___EndIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ExceptionFilter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionFilter, ___LabelIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionFilter, ___StartIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::ExceptionFilter, ___EndIndex) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ExceptionFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ExceptionFilter*, "System.Linq.Expressions.Interpreter", "ExceptionFilter");
