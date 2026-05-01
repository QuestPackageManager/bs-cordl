#pragma once
// IWYU pragma private; include "System/Reflection/Emit/LocalBuilder.hpp"
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
// Dependencies System.Reflection.LocalVariableInfo
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.LocalBuilder
class CORDL_TYPE LocalBuilder : public ::System::Reflection::LocalVariableInfo {
public:
  // Declarations
  /// @brief Field endOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_endOffset, put = __cordl_internal_set_endOffset)) int32_t endOffset;

  /// @brief Field ilgen, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ilgen, put = __cordl_internal_set_ilgen)) ::System::Reflection::Emit::ILGenerator* ilgen;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field startOffset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_startOffset, put = __cordl_internal_set_startOffset)) int32_t startOffset;

  constexpr int32_t const& __cordl_internal_get_endOffset() const;

  constexpr int32_t& __cordl_internal_get_endOffset();

  constexpr ::System::Reflection::Emit::ILGenerator* const& __cordl_internal_get_ilgen() const;

  constexpr ::System::Reflection::Emit::ILGenerator*& __cordl_internal_get_ilgen();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_startOffset() const;

  constexpr int32_t& __cordl_internal_get_startOffset();

  constexpr void __cordl_internal_set_endOffset(int32_t value);

  constexpr void __cordl_internal_set_ilgen(::System::Reflection::Emit::ILGenerator* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_startOffset(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalBuilder(LocalBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalBuilder(LocalBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3569 };

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
static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___ilgen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___startOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Emit::LocalBuilder, ___endOffset) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::LocalBuilder, 0x38>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::LocalBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::LocalBuilder*, "System.Reflection.Emit", "LocalBuilder");
