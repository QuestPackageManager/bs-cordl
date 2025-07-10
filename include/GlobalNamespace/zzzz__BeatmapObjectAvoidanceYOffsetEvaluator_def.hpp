#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectAvoidanceYOffsetEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidanceYOffsetEvaluator)
namespace GlobalNamespace {
struct BeatmapObjectAvoidanceYOffsetEvaluator_BufferData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace GlobalNamespace {
struct BeatmapObjectAvoidanceYOffsetEvaluator_BufferData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
MARK_VAL_T(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapObjectAvoidanceYOffsetEvaluator/BufferData
struct CORDL_TYPE BeatmapObjectAvoidanceYOffsetEvaluator_BufferData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2260164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t songTime, float_t yOffset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidanceYOffsetEvaluator_BufferData();

  // Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BeatmapObjectAvoidanceYOffsetEvaluator_BufferData(float_t songTime, float_t yOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field songTime, offset: 0x0, size: 0x4, def value: None
  float_t songTime;

  /// @brief Field yOffset, offset: 0x4, size: 0x4, def value: None
  float_t yOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, songTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, yOffset) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectAvoidanceYOffsetEvaluator
class CORDL_TYPE BeatmapObjectAvoidanceYOffsetEvaluator : public ::System::Object {
public:
  // Declarations
  using BufferData = ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData;

  /// @brief Field _audioTimeSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _currentYJumpOffsetBufferEndIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__currentYJumpOffsetBufferEndIndex, put = __cordl_internal_set__currentYJumpOffsetBufferEndIndex)) int32_t _currentYJumpOffsetBufferEndIndex;

  /// @brief Field _jumpDurationToDesiredZPosition, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDurationToDesiredZPosition, put = __cordl_internal_set__jumpDurationToDesiredZPosition)) float_t _jumpDurationToDesiredZPosition;

  /// @brief Field _jumpOffsetYProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider)) ::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _yJumpOffsetBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__yJumpOffsetBuffer,
                      put = __cordl_internal_set__yJumpOffsetBuffer)) ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData,
                                                                               ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*>
      _yJumpOffsetBuffer;

  /// @brief Method GetJumpOffsetYAtJumpStartSongTime, addr 0x22602e0, size 0x314, virtual false, abstract: false, final false
  inline float_t GetJumpOffsetYAtJumpStartSongTime(float_t lastDeltaTime);

  /// @brief Method ManualUpdate, addr 0x226016c, size 0x174, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider,
                                                                                    ::GlobalNamespace::IVariableMovementDataProvider* variableMovementDataProvider, float_t moveToPlayerHeadTParam);

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr int32_t const& __cordl_internal_get__currentYJumpOffsetBufferEndIndex() const;

  constexpr int32_t& __cordl_internal_get__currentYJumpOffsetBufferEndIndex();

  constexpr float_t const& __cordl_internal_get__jumpDurationToDesiredZPosition() const;

  constexpr float_t& __cordl_internal_get__jumpDurationToDesiredZPosition();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*> const&
  __cordl_internal_get__yJumpOffsetBuffer() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*>&
  __cordl_internal_get__yJumpOffsetBuffer();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__currentYJumpOffsetBufferEndIndex(int32_t value);

  constexpr void __cordl_internal_set__jumpDurationToDesiredZPosition(float_t value);

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__yJumpOffsetBuffer(
      ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*> value);

  /// @brief Method .ctor, addr 0x225ffa8, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider,
                    ::GlobalNamespace::IVariableMovementDataProvider* variableMovementDataProvider, float_t moveToPlayerHeadTParam);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidanceYOffsetEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceYOffsetEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectAvoidanceYOffsetEvaluator(BeatmapObjectAvoidanceYOffsetEvaluator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17673 };

  /// @brief Field kYJumpOffsetBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t kYJumpOffsetBufferLength{ static_cast<int32_t>(0x7d0) };

  /// @brief Field kYJumpOffsetBufferSongTimeInitValue offset 0xffffffff size 0x4
  static constexpr float_t kYJumpOffsetBufferSongTimeInitValue{ static_cast<float_t>(-1000.0f) };

  /// @brief Field _currentYJumpOffsetBufferEndIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____currentYJumpOffsetBufferEndIndex;

  /// @brief Field _jumpDurationToDesiredZPosition, offset: 0x14, size: 0x4, def value: None
  float_t ____jumpDurationToDesiredZPosition;

  /// @brief Field _yJumpOffsetBuffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*> ____yJumpOffsetBuffer;

  /// @brief Field _audioTimeSource, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _jumpOffsetYProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____currentYJumpOffsetBufferEndIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____jumpDurationToDesiredZPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____yJumpOffsetBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____audioTimeSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, ____jumpOffsetYProvider) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*, "", "BeatmapObjectAvoidanceYOffsetEvaluator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, "", "BeatmapObjectAvoidanceYOffsetEvaluator/BufferData");
