#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesPlayback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PosesPlayback)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesPlayback;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesPlayback);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PosesPlayback
class CORDL_TYPE PosesPlayback : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _data, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::GlobalNamespace::PosesRecordingData* _data;

  /// @brief Field _keyframeIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__keyframeIndex, put = __cordl_internal_set__keyframeIndex)) int32_t _keyframeIndex;

  /// @brief Field _logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger)) ::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _transforms, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transforms, put = __cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transforms;

  /// @brief Method Init, addr 0x3b18cac, size 0x268, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> poseObjects, ::GlobalNamespace::PosesRecordingData* data,
                   ::GlobalNamespace::IBeatSaberLogger* logger);

  static inline ::GlobalNamespace::PosesPlayback* New_ctor();

  /// @brief Method PlaybackTick, addr 0x3b1ab38, size 0x3a0, virtual false, abstract: false, final false
  inline void PlaybackTick(float_t time);

  /// @brief Method StartPlayback, addr 0x3b19348, size 0xe8, virtual false, abstract: false, final false
  inline void StartPlayback();

  /// @brief Method StopPlayback, addr 0x3b192c0, size 0xc, virtual false, abstract: false, final false
  inline void StopPlayback();

  /// @brief Method Update, addr 0x3b1ab1c, size 0x1c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::PosesRecordingData* const& __cordl_internal_get__data() const;

  constexpr ::GlobalNamespace::PosesRecordingData*& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__keyframeIndex() const;

  constexpr int32_t& __cordl_internal_get__keyframeIndex();

  constexpr ::GlobalNamespace::IBeatSaberLogger* const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__data(::GlobalNamespace::PosesRecordingData* value);

  constexpr void __cordl_internal_set__keyframeIndex(int32_t value);

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x3b1aed8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesPlayback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesPlayback(PosesPlayback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesPlayback(PosesPlayback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5097 };

  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _logger, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _transforms, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transforms;

  /// @brief Field _data, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecordingData* ____data;

  /// @brief Field _keyframeIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____keyframeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____transforms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____keyframeIndex) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesPlayback, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesPlayback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesPlayback*, "", "PosesPlayback");
