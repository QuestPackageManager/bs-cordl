#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/IntegerExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegerExtensions)
// Forward declare root types
namespace BGLib::DotnetExtension {
class IntegerExtensions;
}
// Write type traits
MARK_REF_T(::BGLib::DotnetExtension::IntegerExtensions*);
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::IntegerExtensions*, "BGLib.DotnetExtension", "IntegerExtensions");
// Dependencies System.Object
namespace BGLib::DotnetExtension {
// Is value type: false
// CS Name: BGLib.DotnetExtension.IntegerExtensions
class CORDL_TYPE IntegerExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToUInt, addr 0x330b7f0, size 0x18, virtual false, abstract: false, final false
  static inline void ToUInt(int32_t number, ::by_ref<uint32_t> uNumber, ::by_ref<bool> isNegative);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerExtensions(IntegerExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerExtensions(IntegerExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20478 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::DotnetExtension::IntegerExtensions) == 0x10, "Size mismatch!");

} // namespace BGLib::DotnetExtension
