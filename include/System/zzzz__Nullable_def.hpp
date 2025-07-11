#pragma once
// IWYU pragma private; include "System/Nullable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Nullable)
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Nullable;
}
// Write type traits
MARK_REF_PTR_T(::System::Nullable);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Nullable
class CORDL_TYPE Nullable : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetUnderlyingType, addr 0x3dee0f8, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Type* GetUnderlyingType(::System::Type* nullableType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nullable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nullable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nullable(Nullable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nullable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nullable(Nullable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Nullable, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Nullable);
DEFINE_IL2CPP_ARG_TYPE(::System::Nullable*, "System", "Nullable");
