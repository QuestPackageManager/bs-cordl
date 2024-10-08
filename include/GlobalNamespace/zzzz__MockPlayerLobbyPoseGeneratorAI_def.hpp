#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerLobbyPoseGeneratorAI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerLobbyPoseGeneratorAI)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorAI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI);
// Type: ::MockPlayerLobbyPoseGeneratorAI
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 312, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPlayerLobbyPoseGeneratorAI*
class CORDL_TYPE MockPlayerLobbyPoseGeneratorAI : public ::GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
  // Declarations
  /// @brief Field _headPose, offset 0x28, size 0x1c
  __declspec(property(get = __cordl_internal_get__headPose, put = __cordl_internal_set__headPose)) ::UnityEngine::Pose _headPose;

  /// @brief Field _headPoseTarget, offset 0xd8, size 0x1c
  __declspec(property(get = __cordl_internal_get__headPoseTarget, put = __cordl_internal_set__headPoseTarget)) ::UnityEngine::Pose _headPoseTarget;

  /// @brief Field _lastHeadPoseTarget, offset 0x7c, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastHeadPoseTarget, put = __cordl_internal_set__lastHeadPoseTarget)) ::UnityEngine::Pose _lastHeadPoseTarget;

  /// @brief Field _lastLeftHandPoseTarget, offset 0x98, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastLeftHandPoseTarget, put = __cordl_internal_set__lastLeftHandPoseTarget)) ::UnityEngine::Pose _lastLeftHandPoseTarget;

  /// @brief Field _lastRightHandPoseTarget, offset 0xb4, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastRightHandPoseTarget, put = __cordl_internal_set__lastRightHandPoseTarget)) ::UnityEngine::Pose _lastRightHandPoseTarget;

  /// @brief Field _lastTargetTime, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastTargetTime, put = __cordl_internal_set__lastTargetTime)) int64_t _lastTargetTime;

  /// @brief Field _leftHandPose, offset 0x44, size 0x1c
  __declspec(property(get = __cordl_internal_get__leftHandPose, put = __cordl_internal_set__leftHandPose)) ::UnityEngine::Pose _leftHandPose;

  /// @brief Field _leftHandPoseTarget, offset 0xf4, size 0x1c
  __declspec(property(get = __cordl_internal_get__leftHandPoseTarget, put = __cordl_internal_set__leftHandPoseTarget)) ::UnityEngine::Pose _leftHandPoseTarget;

  /// @brief Field _nextTargetTime, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__nextTargetTime, put = __cordl_internal_set__nextTargetTime)) int64_t _nextTargetTime;

  /// @brief Field _random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _rightHandPose, offset 0x60, size 0x1c
  __declspec(property(get = __cordl_internal_get__rightHandPose, put = __cordl_internal_set__rightHandPose)) ::UnityEngine::Pose _rightHandPose;

  /// @brief Field _rightHandPoseTarget, offset 0x110, size 0x1c
  __declspec(property(get = __cordl_internal_get__rightHandPoseTarget, put = __cordl_internal_set__rightHandPoseTarget)) ::UnityEngine::Pose _rightHandPoseTarget;

  /// @brief Method Init, addr 0x3bb9a64, size 0x2c4, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method Tick, addr 0x3bb9d28, size 0xa04, virtual true, abstract: false, final false
  inline void Tick();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__headPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__headPose();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__headPoseTarget() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__headPoseTarget();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastHeadPoseTarget() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastHeadPoseTarget();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastLeftHandPoseTarget() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastLeftHandPoseTarget();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastRightHandPoseTarget() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastRightHandPoseTarget();

  constexpr int64_t const& __cordl_internal_get__lastTargetTime() const;

  constexpr int64_t& __cordl_internal_get__lastTargetTime();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__leftHandPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__leftHandPose();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__leftHandPoseTarget() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__leftHandPoseTarget();

  constexpr int64_t const& __cordl_internal_get__nextTargetTime() const;

  constexpr int64_t& __cordl_internal_get__nextTargetTime();

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get__random() const;

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__rightHandPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__rightHandPose();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__rightHandPoseTarget() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__rightHandPoseTarget();

  constexpr void __cordl_internal_set__headPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__headPoseTarget(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastHeadPoseTarget(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastLeftHandPoseTarget(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastRightHandPoseTarget(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastTargetTime(int64_t value);

  constexpr void __cordl_internal_set__leftHandPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__leftHandPoseTarget(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__nextTargetTime(int64_t value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__rightHandPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__rightHandPoseTarget(::UnityEngine::Pose value);

  /// @brief Method .ctor, addr 0x3bb8eb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerLobbyPoseGeneratorAI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorAI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerLobbyPoseGeneratorAI(MockPlayerLobbyPoseGeneratorAI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorAI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerLobbyPoseGeneratorAI(MockPlayerLobbyPoseGeneratorAI const&) = delete;

  /// @brief Field _random, offset: 0x20, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _headPose, offset: 0x28, size: 0x1c, def value: None
  ::UnityEngine::Pose ____headPose;

  /// @brief Field _leftHandPose, offset: 0x44, size: 0x1c, def value: None
  ::UnityEngine::Pose ____leftHandPose;

  /// @brief Field _rightHandPose, offset: 0x60, size: 0x1c, def value: None
  ::UnityEngine::Pose ____rightHandPose;

  /// @brief Field _lastHeadPoseTarget, offset: 0x7c, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastHeadPoseTarget;

  /// @brief Field _lastLeftHandPoseTarget, offset: 0x98, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastLeftHandPoseTarget;

  /// @brief Field _lastRightHandPoseTarget, offset: 0xb4, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastRightHandPoseTarget;

  /// @brief Field _lastTargetTime, offset: 0xd0, size: 0x8, def value: None
  int64_t ____lastTargetTime;

  /// @brief Field _headPoseTarget, offset: 0xd8, size: 0x1c, def value: None
  ::UnityEngine::Pose ____headPoseTarget;

  /// @brief Field _leftHandPoseTarget, offset: 0xf4, size: 0x1c, def value: None
  ::UnityEngine::Pose ____leftHandPoseTarget;

  /// @brief Field _rightHandPoseTarget, offset: 0x110, size: 0x1c, def value: None
  ::UnityEngine::Pose ____rightHandPoseTarget;

  /// @brief Field _nextTargetTime, offset: 0x130, size: 0x8, def value: None
  int64_t ____nextTargetTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18022 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____random) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____headPose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____leftHandPose) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____rightHandPose) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____lastHeadPoseTarget) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____lastLeftHandPoseTarget) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____lastRightHandPoseTarget) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____lastTargetTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____headPoseTarget) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____leftHandPoseTarget) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____rightHandPoseTarget) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, ____nextTargetTime) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*, "", "MockPlayerLobbyPoseGeneratorAI");
