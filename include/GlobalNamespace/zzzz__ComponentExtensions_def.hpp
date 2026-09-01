#pragma once
// IWYU pragma private; include "GlobalNamespace\ComponentExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ComponentExtensions)
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace GlobalNamespace {
class ComponentExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ComponentExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ComponentExtensions*, "", "ComponentExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ComponentExtensions
class CORDL_TYPE ComponentExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetComponentInParentOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetComponentInParentOnly(::UnityEngine::Component* c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentExtensions(ComponentExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentExtensions(ComponentExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20731 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ComponentExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
