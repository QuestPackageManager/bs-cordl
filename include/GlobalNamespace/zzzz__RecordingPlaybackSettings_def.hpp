#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingPlaybackSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecordingPlaybackSettings)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingPlaybackSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RecordingPlaybackSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RecordingPlaybackSettings*, "", "RecordingPlaybackSettings");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingPlaybackSettings
class CORDL_TYPE RecordingPlaybackSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraFov, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraFov, put = __cordl_internal_set_cameraFov)) float_t cameraFov;

  /// @brief Field controllersSmoothing, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_controllersSmoothing, put = __cordl_internal_set_controllersSmoothing)) float_t controllersSmoothing;

  /// @brief Field controllersTimeOffsetSec, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_controllersTimeOffsetSec, put = __cordl_internal_set_controllersTimeOffsetSec)) float_t controllersTimeOffsetSec;

  /// @brief Field headPositionOffset, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_headPositionOffset, put = __cordl_internal_set_headPositionOffset)) ::UnityEngine::Vector3 headPositionOffset;

  /// @brief Field headRotationOffset, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_headRotationOffset, put = __cordl_internal_set_headRotationOffset)) ::UnityEngine::Vector3 headRotationOffset;

  /// @brief Field headSmoothing, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_headSmoothing, put = __cordl_internal_set_headSmoothing)) float_t headSmoothing;

  static inline ::GlobalNamespace::RecordingPlaybackSettings* New_ctor(::UnityEngine::Vector3 headPositionOffset, ::UnityEngine::Vector3 headRotationOffset, float_t headSmoothing,
                                                                       float_t controllersSmoothing, float_t controllersTimeOffsetSec, float_t cameraFov);

  constexpr float_t const& __cordl_internal_get_cameraFov() const;

  constexpr float_t& __cordl_internal_get_cameraFov();

  constexpr float_t const& __cordl_internal_get_controllersSmoothing() const;

  constexpr float_t& __cordl_internal_get_controllersSmoothing();

  constexpr float_t const& __cordl_internal_get_controllersTimeOffsetSec() const;

  constexpr float_t& __cordl_internal_get_controllersTimeOffsetSec();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headRotationOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headRotationOffset();

  constexpr float_t const& __cordl_internal_get_headSmoothing() const;

  constexpr float_t& __cordl_internal_get_headSmoothing();

  constexpr void __cordl_internal_set_cameraFov(float_t value);

  constexpr void __cordl_internal_set_controllersSmoothing(float_t value);

  constexpr void __cordl_internal_set_controllersTimeOffsetSec(float_t value);

  constexpr void __cordl_internal_set_headPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headRotationOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headSmoothing(float_t value);

  /// @brief Method .ctor, addr 0x3a0b464, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 headPositionOffset, ::UnityEngine::Vector3 headRotationOffset, float_t headSmoothing, float_t controllersSmoothing, float_t controllersTimeOffsetSec,
                    float_t cameraFov);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingPlaybackSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingPlaybackSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingPlaybackSettings(RecordingPlaybackSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingPlaybackSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingPlaybackSettings(RecordingPlaybackSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14682 };

  /// @brief Field headPositionOffset, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headPositionOffset;

  /// @brief Field headRotationOffset, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headRotationOffset;

  /// @brief Field headSmoothing, offset: 0x28, size: 0x4, def value: None
  float_t ___headSmoothing;

  /// @brief Field controllersSmoothing, offset: 0x2c, size: 0x4, def value: None
  float_t ___controllersSmoothing;

  /// @brief Field controllersTimeOffsetSec, offset: 0x30, size: 0x4, def value: None
  float_t ___controllersTimeOffsetSec;

  /// @brief Field cameraFov, offset: 0x34, size: 0x4, def value: None
  float_t ___cameraFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingPlaybackSettings, ___headPositionOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingPlaybackSettings, ___headRotationOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingPlaybackSettings, ___headSmoothing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingPlaybackSettings, ___controllersSmoothing) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingPlaybackSettings, ___controllersTimeOffsetSec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingPlaybackSettings, ___cameraFov) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RecordingPlaybackSettings) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
