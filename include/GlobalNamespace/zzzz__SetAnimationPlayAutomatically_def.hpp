#pragma once
// IWYU pragma private; include "GlobalNamespace/SetAnimationPlayAutomatically.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetAnimationPlayAutomatically)
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class SetAnimationPlayAutomatically;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetAnimationPlayAutomatically*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetAnimationPlayAutomatically*, "", "SetAnimationPlayAutomatically");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetAnimationPlayAutomatically
class CORDL_TYPE SetAnimationPlayAutomatically : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animationToPlay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animationToPlay, put = __cordl_internal_set__animationToPlay)) ::UnityW<::UnityEngine::Animation> _animationToPlay;

  /// @brief Field _determinismConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Method Init, addr 0x5986838, size 0x18c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::DeterminismConfig* determinismConfig);

  static inline ::GlobalNamespace::SetAnimationPlayAutomatically* New_ctor();

  /// @brief Method OnDestroy, addr 0x59869c4, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDeterminismSet, addr 0x5986a94, size 0x20, virtual false, abstract: false, final false
  inline void OnDeterminismSet(bool isDeterministic);

  /// @brief Method OnValidate, addr 0x5986ab4, size 0x94, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animationToPlay() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animationToPlay();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr void __cordl_internal_set__animationToPlay(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  /// @brief Method .ctor, addr 0x5986b48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetAnimationPlayAutomatically();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetAnimationPlayAutomatically", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetAnimationPlayAutomatically(SetAnimationPlayAutomatically&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetAnimationPlayAutomatically", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetAnimationPlayAutomatically(SetAnimationPlayAutomatically const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5796 };

  /// @brief Field _animationToPlay, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animationToPlay;

  /// @brief Field _determinismConfig, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetAnimationPlayAutomatically, ____animationToPlay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimationPlayAutomatically, ____determinismConfig) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetAnimationPlayAutomatically) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
