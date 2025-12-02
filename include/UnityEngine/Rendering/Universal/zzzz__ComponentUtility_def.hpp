#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ComponentUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ComponentUtility)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ComponentUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ComponentUtility);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ComponentUtility
class CORDL_TYPE ComponentUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsUniversalCamera, addr 0x661ccfc, size 0x94, virtual false, abstract: false, final false
  static inline bool IsUniversalCamera(::UnityEngine::Camera* camera);

  /// @brief Method IsUniversalLight, addr 0x661cd90, size 0x94, virtual false, abstract: false, final false
  static inline bool IsUniversalLight(::UnityEngine::Light* light);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentUtility(ComponentUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentUtility(ComponentUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ComponentUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ComponentUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ComponentUtility*, "UnityEngine.Rendering.Universal", "ComponentUtility");
