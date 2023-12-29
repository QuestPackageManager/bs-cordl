#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PosesPlayback)
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesPlayback;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosesPlayback);
// Type: ::PosesPlayback
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6020))
// CS Name: ::PosesPlayback*
class CORDL_TYPE PosesPlayback : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x18, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _logger, offset 0x20, size 0x8
  __declspec(property(get = __get__logger, put = __set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _transforms, offset 0x28, size 0x8
  __declspec(property(get = __get__transforms, put = __set__transforms))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _transforms;

  /// @brief Field _data, offset 0x30, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::GlobalNamespace::PosesRecordingData* _data;

  /// @brief Field _keyframeIndex, offset 0x38, size 0x4
  __declspec(property(get = __get__keyframeIndex, put = __set__keyframeIndex)) int32_t _keyframeIndex;

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __get__logger() const;

  constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__transforms();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

  constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::GlobalNamespace::PosesRecordingData*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesRecordingData*> const& __get__data() const;

  constexpr void __set__data(::GlobalNamespace::PosesRecordingData* value);

  constexpr int32_t& __get__keyframeIndex();

  constexpr int32_t const& __get__keyframeIndex() const;

  constexpr void __set__keyframeIndex(int32_t value);

  /// @brief Method Update addr 0x21b8210 size 0x1c virtual false final false
  inline void Update();

  /// @brief Method Init addr 0x21b63ec size 0x26c virtual false final false
  inline void Init(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> poseObjects, ::GlobalNamespace::PosesRecordingData* data,
                   ::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method StartPlayback addr 0x21b6a90 size 0xe8 virtual false final false
  inline void StartPlayback();

  /// @brief Method PlaybackTick addr 0x21b822c size 0x3a0 virtual false final false
  inline void PlaybackTick(float_t time);

  /// @brief Method StopPlayback addr 0x21b6a08 size 0xc virtual false final false
  inline void StopPlayback();

  static inline ::GlobalNamespace::PosesPlayback* New_ctor();

  /// @brief Method .ctor addr 0x21b85cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PosesPlayback(PosesPlayback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PosesPlayback(PosesPlayback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PosesPlayback();

public:
  /// @brief Field _audioTimeSyncController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _logger, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _transforms, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____transforms;

  /// @brief Field _data, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecordingData* ____data;

  /// @brief Field _keyframeIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ____keyframeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosesPlayback, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____audioTimeSyncController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____logger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____transforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PosesPlayback, ____keyframeIndex) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosesPlayback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesPlayback*, "", "PosesPlayback");
