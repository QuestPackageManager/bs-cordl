#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SolverManager)
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class SolverManager;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::SolverManager);
// Type: RootMotion::SolverManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 51, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::SolverManager*
class CORDL_TYPE SolverManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_animatePhysics)) bool animatePhysics;

  /// @brief Field animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field componentInitiated, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_componentInitiated, put = __cordl_internal_set_componentInitiated)) bool componentInitiated;

  /// @brief Field fixTransforms, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_fixTransforms, put = __cordl_internal_set_fixTransforms)) bool fixTransforms;

  __declspec(property(get = get_isAnimated)) bool isAnimated;

  /// @brief Field legacy, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_legacy, put = __cordl_internal_set_legacy))::UnityW<::UnityEngine::Animation> legacy;

  /// @brief Field skipSolverUpdate, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_skipSolverUpdate, put = __cordl_internal_set_skipSolverUpdate)) bool skipSolverUpdate;

  /// @brief Field updateFrame, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_updateFrame, put = __cordl_internal_set_updateFrame)) bool updateFrame;

  /// @brief Method Disable, addr 0x134389c, size 0x94, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method FindAnimatorRecursive, addr 0x1343a84, size 0x1b8, virtual false, abstract: false, final false
  inline void FindAnimatorRecursive(::UnityEngine::Transform* t, bool findInChildren);

  /// @brief Method FixTransforms, addr 0x1343938, size 0x4, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method FixedUpdate, addr 0x1343d10, size 0x4c, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method Initiate, addr 0x1343964, size 0x50, virtual false, abstract: false, final false
  inline void Initiate();

  /// @brief Method InitiateSolver, addr 0x1343930, size 0x4, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method LateUpdate, addr 0x1343d5c, size 0x4c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::RootMotion::SolverManager* New_ctor();

  /// @brief Method OnDisable, addr 0x134393c, size 0x28, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Start, addr 0x13439b4, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x1343c3c, size 0x3c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSolver, addr 0x1343934, size 0x4, virtual true, abstract: false, final false
  inline void UpdateSolver();

  /// @brief Method UpdateSolverExternal, addr 0x1343da8, size 0x38, virtual false, abstract: false, final false
  inline void UpdateSolverExternal();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr bool const& __cordl_internal_get_componentInitiated() const;

  constexpr bool& __cordl_internal_get_componentInitiated();

  constexpr bool const& __cordl_internal_get_fixTransforms() const;

  constexpr bool& __cordl_internal_get_fixTransforms();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_legacy() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_legacy();

  constexpr bool const& __cordl_internal_get_skipSolverUpdate() const;

  constexpr bool& __cordl_internal_get_skipSolverUpdate();

  constexpr bool const& __cordl_internal_get_updateFrame() const;

  constexpr bool& __cordl_internal_get_updateFrame();

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_componentInitiated(bool value);

  constexpr void __cordl_internal_set_fixTransforms(bool value);

  constexpr void __cordl_internal_set_legacy(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set_skipSolverUpdate(bool value);

  constexpr void __cordl_internal_set_updateFrame(bool value);

  /// @brief Method .ctor, addr 0x1343de0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animatePhysics, addr 0x13439b8, size 0xcc, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_isAnimated, addr 0x1343c78, size 0x98, virtual false, abstract: false, final false
  inline bool get_isAnimated();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SolverManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SolverManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SolverManager(SolverManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SolverManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SolverManager(SolverManager const&) = delete;

  /// @brief Field fixTransforms, offset: 0x18, size: 0x1, def value: None
  bool ___fixTransforms;

  /// @brief Field animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field legacy, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ___legacy;

  /// @brief Field updateFrame, offset: 0x30, size: 0x1, def value: None
  bool ___updateFrame;

  /// @brief Field componentInitiated, offset: 0x31, size: 0x1, def value: None
  bool ___componentInitiated;

  /// @brief Field skipSolverUpdate, offset: 0x32, size: 0x1, def value: None
  bool ___skipSolverUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::SolverManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::SolverManager, ___fixTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::SolverManager, ___animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::SolverManager, ___legacy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::SolverManager, ___updateFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::SolverManager, ___componentInitiated) == 0x31, "Offset mismatch!");

static_assert(offsetof(::RootMotion::SolverManager, ___skipSolverUpdate) == 0x32, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::SolverManager);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::SolverManager*, "RootMotion", "SolverManager");
