#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/INullable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INullable)
// Forward declare root types
namespace System::Data::SqlTypes {
class INullable;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::INullable);
// Dependencies
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.INullable
class CORDL_TYPE INullable {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Method get_IsNull, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsNull();

  // Ctor Parameters [CppParam { name: "", ty: "INullable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INullable(INullable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::INullable);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::INullable*, "System.Data.SqlTypes", "INullable");
