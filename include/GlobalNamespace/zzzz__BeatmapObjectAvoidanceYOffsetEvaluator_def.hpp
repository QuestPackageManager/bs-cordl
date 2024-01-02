#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidanceYOffsetEvaluator)
namespace GlobalNamespace {
struct __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace GlobalNamespace {
struct __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
MARK_VAL_T(::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData);
// Type: ::BufferData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3959))
// CS Name: ::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData
struct CORDL_TYPE __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2217808, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t songTime, float_t yOffset);

  // Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(float_t songTime, float_t yOffset) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectAvoidanceYOffsetEvaluator__BufferData();

  /// @brief Field songTime, offset: 0x0, size: 0x4, def value: None
  float_t songTime;

  /// @brief Field yOffset, offset: 0x4, size: 0x4, def value: None
  float_t yOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, songTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, yOffset) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapObjectAvoidanceYOffsetEvaluator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3960))
// CS Name: ::BeatmapObjectAvoidanceYOffsetEvaluator*
class CORDL_TYPE BeatmapObjectAvoidanceYOffsetEvaluator : public ::System::Object {
public:
  // Declarations
  using BufferData = ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData;

  /// @brief Field _currentYJumpOffsetBufferEndIndex, offset 0x10, size 0x4
  __declspec(property(get = __get__currentYJumpOffsetBufferEndIndex, put = __set__currentYJumpOffsetBufferEndIndex)) int32_t _currentYJumpOffsetBufferEndIndex;

  /// @brief Field _jumpDurationToDesiredZPosition, offset 0x14, size 0x4
  __declspec(property(get = __get__jumpDurationToDesiredZPosition, put = __set__jumpDurationToDesiredZPosition)) float_t _jumpDurationToDesiredZPosition;

  /// @brief Field _yJumpOffsetBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get__yJumpOffsetBuffer, put = __set__yJumpOffsetBuffer))::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,
                                                                                               ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> _yJumpOffsetBuffer;

  /// @brief Field _audioTimeSource, offset 0x20, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapObjectSpawnController, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  constexpr int32_t& __get__currentYJumpOffsetBufferEndIndex();

  constexpr int32_t const& __get__currentYJumpOffsetBufferEndIndex() const;

  constexpr void __set__currentYJumpOffsetBufferEndIndex(int32_t value);

  constexpr float_t& __get__jumpDurationToDesiredZPosition();

  constexpr float_t const& __get__jumpDurationToDesiredZPosition() const;

  constexpr void __set__jumpDurationToDesiredZPosition(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>&
  __get__yJumpOffsetBuffer();

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> const&
  __get__yJumpOffsetBuffer() const;

  constexpr void
  __set__yJumpOffsetBuffer(::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  static inline ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                    ::GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController, float_t moveToPlayerHeadTParam,
                                                                                    ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData);

  /// @brief Method .ctor, addr 0x22176b4, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController, float_t moveToPlayerHeadTParam,
                    ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData);

  /// @brief Method ManualUpdate, addr 0x2217810, size 0x178, virtual false, abstract: false, final false
  inline void ManualUpdate();

  /// @brief Method GetJumpOffsetYAtJumpStartSongTime, addr 0x2217988, size 0x310, virtual false, abstract: false, final false
  inline float_t GetJumpOffsetYAtJumpStartSongTime(float_t lastDeltaTime);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidanceYOffsetEvaluator();

public:
  /// @brief Field _currentYJumpOffsetBufferEndIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____currentYJumpOffsetBufferEndIndex;

  /// @brief Field _jumpDurationToDesiredZPosition, offset: 0x14, size: 0x4, def value: None
  float_t ____jumpDurationToDesiredZPosition;

  /// @brief Field _yJumpOffsetBuffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> ____yJumpOffsetBuffer;

  /// @brief Field _audioTimeSource, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field kYJumpOffsetBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t kYJumpOffsetBufferLength{ static_cast<int32_t>(0x7d0) };

  /// @brief Field kYJumpOffsetBufferSongTimeInitValue offset 0xffffffff size 0x4
  static constexpr float_t kYJumpOffsetBufferSongTimeInitValue{ -1000.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____currentYJumpOffsetBufferEndIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____jumpDurationToDesiredZPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____yJumpOffsetBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____audioTimeSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____beatmapObjectSpawnController) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*, "", "BeatmapObjectAvoidanceYOffsetEvaluator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, "", "BeatmapObjectAvoidanceYOffsetEvaluator/BufferData");
