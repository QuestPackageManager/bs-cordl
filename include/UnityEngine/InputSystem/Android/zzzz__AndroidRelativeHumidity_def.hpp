#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidRelativeHumidity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidRelativeHumidity)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidRelativeHumidity;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*, "UnityEngine.InputSystem.Android", "AndroidRelativeHumidity");
// Dependencies UnityEngine.InputSystem.HumiditySensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidRelativeHumidity
class CORDL_TYPE AndroidRelativeHumidity : public ::UnityEngine::InputSystem::HumiditySensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity* New_ctor();

  /// @brief Method .ctor, addr 0x65abc10, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidRelativeHumidity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidRelativeHumidity(AndroidRelativeHumidity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidRelativeHumidity(AndroidRelativeHumidity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity) == 0x190, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
