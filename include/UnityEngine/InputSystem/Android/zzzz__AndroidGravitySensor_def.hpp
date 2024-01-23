#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__GravitySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidGravitySensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGravitySensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGravitySensor);
// Type: UnityEngine.InputSystem.Android::AndroidGravitySensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6277))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6438))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidGravitySensor*
class CORDL_TYPE AndroidGravitySensor : public ::UnityEngine::InputSystem::GravitySensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGravitySensor* New_ctor();

  /// @brief Method .ctor, addr 0x2ae59f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGravitySensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGravitySensor(AndroidGravitySensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGravitySensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGravitySensor(AndroidGravitySensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGravitySensor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGravitySensor, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGravitySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGravitySensor*, "UnityEngine.InputSystem.Android", "AndroidGravitySensor");
