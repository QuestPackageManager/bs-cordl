#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightExtensions)
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalLightData;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class LightExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightExtensions
class CORDL_TYPE LightExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetUniversalAdditionalLightData, addr 0x671116c, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData> GetUniversalAdditionalLightData(::UnityEngine::Light* light);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightExtensions(LightExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightExtensions(LightExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12968 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightExtensions*, "UnityEngine.Rendering.Universal", "LightExtensions");
