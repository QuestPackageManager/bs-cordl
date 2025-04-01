#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGyroscope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gyroscope_def.hpp"
CORDL_MODULE_EXPORT(AndroidGyroscope)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGyroscope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGyroscope);
// Dependencies UnityEngine.InputSystem.Gyroscope
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGyroscope
class CORDL_TYPE AndroidGyroscope : public ::UnityEngine::InputSystem::Gyroscope {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGyroscope* New_ctor();

  /// @brief Method .ctor, addr 0x4600eb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGyroscope();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGyroscope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGyroscope(AndroidGyroscope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGyroscope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGyroscope(AndroidGyroscope const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGyroscope, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGyroscope*, "UnityEngine.InputSystem.Android", "AndroidGyroscope");
