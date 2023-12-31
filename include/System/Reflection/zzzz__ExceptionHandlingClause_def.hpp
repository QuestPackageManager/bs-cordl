#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ExceptionHandlingClauseOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionHandlingClause)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class ExceptionHandlingClause;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ExceptionHandlingClause);
// Type: System.Reflection::ExceptionHandlingClause
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3467))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3515))
// CS Name: ::System.Reflection::ExceptionHandlingClause*
class CORDL_TYPE ExceptionHandlingClause : public ::System::Object {
public:
  // Declarations
  /// @brief Field catch_type, offset 0x10, size 0x8
  __declspec(property(get = __get_catch_type, put = __set_catch_type))::System::Type* catch_type;

  /// @brief Field filter_offset, offset 0x18, size 0x4
  __declspec(property(get = __get_filter_offset, put = __set_filter_offset)) int32_t filter_offset;

  /// @brief Field flags, offset 0x1c, size 0x4
  __declspec(property(get = __get_flags, put = __set_flags))::System::Reflection::ExceptionHandlingClauseOptions flags;

  /// @brief Field try_offset, offset 0x20, size 0x4
  __declspec(property(get = __get_try_offset, put = __set_try_offset)) int32_t try_offset;

  /// @brief Field try_length, offset 0x24, size 0x4
  __declspec(property(get = __get_try_length, put = __set_try_length)) int32_t try_length;

  /// @brief Field handler_offset, offset 0x28, size 0x4
  __declspec(property(get = __get_handler_offset, put = __set_handler_offset)) int32_t handler_offset;

  /// @brief Field handler_length, offset 0x2c, size 0x4
  __declspec(property(get = __get_handler_length, put = __set_handler_length)) int32_t handler_length;

  constexpr ::System::Type*& __get_catch_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_catch_type() const;

  constexpr void __set_catch_type(::System::Type* value);

  constexpr int32_t& __get_filter_offset();

  constexpr int32_t const& __get_filter_offset() const;

  constexpr void __set_filter_offset(int32_t value);

  constexpr ::System::Reflection::ExceptionHandlingClauseOptions& __get_flags();

  constexpr ::System::Reflection::ExceptionHandlingClauseOptions const& __get_flags() const;

  constexpr void __set_flags(::System::Reflection::ExceptionHandlingClauseOptions value);

  constexpr int32_t& __get_try_offset();

  constexpr int32_t const& __get_try_offset() const;

  constexpr void __set_try_offset(int32_t value);

  constexpr int32_t& __get_try_length();

  constexpr int32_t const& __get_try_length() const;

  constexpr void __set_try_length(int32_t value);

  constexpr int32_t& __get_handler_offset();

  constexpr int32_t const& __get_handler_offset() const;

  constexpr void __set_handler_offset(int32_t value);

  constexpr int32_t& __get_handler_length();

  constexpr int32_t const& __get_handler_length() const;

  constexpr void __set_handler_length(int32_t value);

  static inline ::System::Reflection::ExceptionHandlingClause* New_ctor();

  /// @brief Method .ctor, addr 0x24f19fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ToString, addr 0x24f1a04, size 0x2c4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHandlingClause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionHandlingClause(ExceptionHandlingClause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHandlingClause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionHandlingClause(ExceptionHandlingClause const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHandlingClause();

public:
  /// @brief Field catch_type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___catch_type;

  /// @brief Field filter_offset, offset: 0x18, size: 0x4, def value: None
  int32_t ___filter_offset;

  /// @brief Field flags, offset: 0x1c, size: 0x4, def value: None
  ::System::Reflection::ExceptionHandlingClauseOptions ___flags;

  /// @brief Field try_offset, offset: 0x20, size: 0x4, def value: None
  int32_t ___try_offset;

  /// @brief Field try_length, offset: 0x24, size: 0x4, def value: None
  int32_t ___try_length;

  /// @brief Field handler_offset, offset: 0x28, size: 0x4, def value: None
  int32_t ___handler_offset;

  /// @brief Field handler_length, offset: 0x2c, size: 0x4, def value: None
  int32_t ___handler_length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ExceptionHandlingClause, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___catch_type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___filter_offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___flags) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___try_offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___try_length) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___handler_offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ExceptionHandlingClause, ___handler_length) == 0x2c, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ExceptionHandlingClause);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ExceptionHandlingClause*, "System.Reflection", "ExceptionHandlingClause");
