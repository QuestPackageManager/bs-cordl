#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchGameObjectEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SwitchGameObjectEffectTarget)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SwitchGameObjectEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SwitchGameObjectEffectTarget);
// Dependencies FloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// CS Name: SwitchGameObjectEffectTarget
class CORDL_TYPE SwitchGameObjectEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _gameObject01, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObject01, put = __cordl_internal_set__gameObject01)) ::UnityW<::UnityEngine::GameObject> _gameObject01;

  /// @brief Field _gameObject02, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObject02, put = __cordl_internal_set__gameObject02)) ::UnityW<::UnityEngine::GameObject> _gameObject02;

  static inline ::GlobalNamespace::SwitchGameObjectEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x57e3710, size 0xd8, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x57e370c, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x57e37e8, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject01() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject01();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject02() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject02();

  constexpr void __cordl_internal_set__gameObject01(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__gameObject02(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x57e37ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchGameObjectEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchGameObjectEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchGameObjectEffectTarget(SwitchGameObjectEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchGameObjectEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchGameObjectEffectTarget(SwitchGameObjectEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5860 };

  /// @brief Field _gameObject01, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____gameObject01;

  /// @brief Field _gameObject02, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____gameObject02;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SwitchGameObjectEffectTarget, ____gameObject01) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwitchGameObjectEffectTarget, ____gameObject02) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SwitchGameObjectEffectTarget, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SwitchGameObjectEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SwitchGameObjectEffectTarget*, "", "SwitchGameObjectEffectTarget");
