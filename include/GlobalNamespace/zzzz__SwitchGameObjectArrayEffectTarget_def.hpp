#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchGameObjectArrayEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SwitchGameObjectArrayEffectTarget)
namespace GlobalNamespace {
struct SwitchGameObjectArrayEffectTarget_GameObjectActivation;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SwitchGameObjectArrayEffectTarget;
}
namespace GlobalNamespace {
struct SwitchGameObjectArrayEffectTarget_GameObjectActivation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SwitchGameObjectArrayEffectTarget);
MARK_VAL_T(::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SwitchGameObjectArrayEffectTarget/GameObjectActivation
struct CORDL_TYPE SwitchGameObjectArrayEffectTarget_GameObjectActivation {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchGameObjectArrayEffectTarget_GameObjectActivation();

  // Ctor Parameters [CppParam { name: "threshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value:
  // None }]
  constexpr SwitchGameObjectArrayEffectTarget_GameObjectActivation(float_t threshold, ::UnityW<::UnityEngine::GameObject> gameObject) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field threshold, offset: 0x0, size: 0x4, def value: None
  float_t threshold;

  /// @brief Field gameObject, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, threshold) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, gameObject) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// CS Name: SwitchGameObjectArrayEffectTarget
class CORDL_TYPE SwitchGameObjectArrayEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  using GameObjectActivation = ::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation;

  /// @brief Field gameObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjects, put = __cordl_internal_set_gameObjects)) ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation,
                                                                                                                ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*>
      gameObjects;

  static inline ::GlobalNamespace::SwitchGameObjectArrayEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x577cdac, size 0xb0, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x577cda8, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x577ce5c, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*> const&
  __cordl_internal_get_gameObjects() const;

  constexpr ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*>&
  __cordl_internal_get_gameObjects();

  constexpr void __cordl_internal_set_gameObjects(
      ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*> value);

  /// @brief Method .ctor, addr 0x577ce60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchGameObjectArrayEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchGameObjectArrayEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchGameObjectArrayEffectTarget(SwitchGameObjectArrayEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchGameObjectArrayEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchGameObjectArrayEffectTarget(SwitchGameObjectArrayEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5859 };

  /// @brief Field gameObjects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*> ___gameObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SwitchGameObjectArrayEffectTarget, ___gameObjects) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SwitchGameObjectArrayEffectTarget, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SwitchGameObjectArrayEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SwitchGameObjectArrayEffectTarget*, "", "SwitchGameObjectArrayEffectTarget");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, "", "SwitchGameObjectArrayEffectTarget/GameObjectActivation");
