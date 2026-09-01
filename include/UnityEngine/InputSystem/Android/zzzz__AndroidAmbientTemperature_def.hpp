#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidAmbientTemperature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__AmbientTemperatureSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidAmbientTemperature)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidAmbientTemperature;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*, "UnityEngine.InputSystem.Android", "AndroidAmbientTemperature");
// Dependencies UnityEngine.InputSystem.AmbientTemperatureSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidAmbientTemperature
class CORDL_TYPE AndroidAmbientTemperature : public ::UnityEngine::InputSystem::AmbientTemperatureSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidAmbientTemperature* New_ctor();

  /// @brief Method .ctor, addr 0x65abc30, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAmbientTemperature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAmbientTemperature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAmbientTemperature(AndroidAmbientTemperature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAmbientTemperature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAmbientTemperature(AndroidAmbientTemperature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature) == 0x190, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
