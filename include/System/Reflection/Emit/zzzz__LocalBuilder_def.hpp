#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__LocalVariableInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalBuilder)
namespace System::Reflection::Emit {
class ILGenerator;
}
// Forward declare root types
namespace System::Reflection::Emit {
class LocalBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::LocalBuilder);
// Type: System.Reflection.Emit::LocalBuilder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3516))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3542))
// CS Name: ::System.Reflection.Emit::LocalBuilder*
class CORDL_TYPE LocalBuilder : public ::System::Reflection::LocalVariableInfo {
public:
  // Declarations
  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field ilgen, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ilgen, put = __cordl_internal_set_ilgen))::System::Reflection::Emit::ILGenerator* ilgen;

  /// @brief Field startOffset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_startOffset, put = __cordl_internal_set_startOffset)) int32_t startOffset;

  /// @brief Field endOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_endOffset, put = __cordl_internal_set_endOffset)) int32_t endOffset;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::System::Reflection::Emit::ILGenerator*& __cordl_internal_get_ilgen();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Emit::ILGenerator*> const& __cordl_internal_get_ilgen() const;

  constexpr void __cordl_internal_set_ilgen(::System::Reflection::Emit::ILGenerator* value);

  constexpr int32_t& __cordl_internal_get_startOffset();

  constexpr int32_t const& __cordl_internal_get_startOffset() const;

  constexpr void __cordl_internal_set_startOffset(int32_t value);

  constexpr int32_t& __cordl_internal_get_endOffset();

  constexpr int32_t const& __cordl_internal_get_endOffset() const;

  constexpr void __cordl_internal_set_endOffset(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "LocalBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalBuilder(LocalBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalBuilder(LocalBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalBuilder();

public:
  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field ilgen, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::Emit::ILGenerator* ___ilgen;

  /// @brief Field startOffset, offset: 0x30, size: 0x4, def value: None
  int32_t ___startOffset;

  /// @brief Field endOffset, offset: 0x34, size: 0x4, def value: None
  int32_t ___endOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::LocalBuilder, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___ilgen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___startOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___endOffset) == 0x34, "Offset mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::LocalBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::LocalBuilder*, "System.Reflection.Emit", "LocalBuilder");
