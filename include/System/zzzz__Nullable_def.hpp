#pragma once
// IWYU pragma private; include "System\Nullable.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::System::Nullable*);
DEFINE_IL2CPP_CLASS(::System::Nullable*, "System", "Nullable");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Nullable
class CORDL_TYPE Nullable : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetUnderlyingType, addr 0x5c4b3c0, size 0x140, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Nullable) == 0x10, "Size mismatch!");

} // namespace System
