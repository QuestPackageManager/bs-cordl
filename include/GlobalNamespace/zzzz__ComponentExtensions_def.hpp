#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::ComponentExtensions);
// Type: ::ComponentExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15845))
// CS Name: ::ComponentExtensions*
class CORDL_TYPE ComponentExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetComponentInParentOnly addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T GetComponentInParentOnly(::UnityEngine::Component* c);

  // Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentExtensions(ComponentExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentExtensions(ComponentExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComponentExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComponentExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComponentExtensions*, "", "ComponentExtensions");
