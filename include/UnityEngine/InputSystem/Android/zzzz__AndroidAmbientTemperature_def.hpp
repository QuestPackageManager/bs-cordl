#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__AmbientTemperatureSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidAmbientTemperature)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidAmbientTemperature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature);
// Type: UnityEngine.InputSystem.Android::AndroidAmbientTemperature
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6285))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6442))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidAmbientTemperature*
class CORDL_TYPE AndroidAmbientTemperature : public ::UnityEngine::InputSystem::AmbientTemperatureSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidAmbientTemperature* New_ctor();

  /// @brief Method .ctor, addr 0x2ae5a18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAmbientTemperature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAmbientTemperature(AndroidAmbientTemperature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAmbientTemperature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAmbientTemperature(AndroidAmbientTemperature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAmbientTemperature();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidAmbientTemperature, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*, "UnityEngine.InputSystem.Android", "AndroidAmbientTemperature");
