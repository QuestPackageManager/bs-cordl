#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHaptics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHaptics)
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace GlobalNamespace {
class OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker;
}
namespace GlobalNamespace {
class OVRHaptics_Config;
}
namespace GlobalNamespace {
class OVRHaptics_OVRHapticsChannel;
}
namespace GlobalNamespace {
class OVRHaptics_OVRHapticsOutput;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHaptics;
}
namespace GlobalNamespace {
class OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker;
}
namespace GlobalNamespace {
class OVRHaptics_Config;
}
namespace GlobalNamespace {
class OVRHaptics_OVRHapticsChannel;
}
namespace GlobalNamespace {
class OVRHaptics_OVRHapticsOutput;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHaptics);
MARK_REF_PTR_T(::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker);
MARK_REF_PTR_T(::GlobalNamespace::OVRHaptics_Config);
MARK_REF_PTR_T(::GlobalNamespace::OVRHaptics_OVRHapticsChannel);
MARK_REF_PTR_T(::GlobalNamespace::OVRHaptics_OVRHapticsOutput);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHaptics/Config
class CORDL_TYPE OVRHaptics_Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field <MaximumBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MaximumBufferSamplesCount_k__BackingField, put = setStaticF__MaximumBufferSamplesCount_k__BackingField)) int32_t _MaximumBufferSamplesCount_k__BackingField;

  /// @brief Field <MinimumBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MinimumBufferSamplesCount_k__BackingField, put = setStaticF__MinimumBufferSamplesCount_k__BackingField)) int32_t _MinimumBufferSamplesCount_k__BackingField;

  /// @brief Field <MinimumSafeSamplesQueued>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__MinimumSafeSamplesQueued_k__BackingField, put = setStaticF__MinimumSafeSamplesQueued_k__BackingField)) int32_t _MinimumSafeSamplesQueued_k__BackingField;

  /// @brief Field <OptimalBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OptimalBufferSamplesCount_k__BackingField, put = setStaticF__OptimalBufferSamplesCount_k__BackingField)) int32_t _OptimalBufferSamplesCount_k__BackingField;

  /// @brief Field <SampleRateHz>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SampleRateHz_k__BackingField, put = setStaticF__SampleRateHz_k__BackingField)) int32_t _SampleRateHz_k__BackingField;

  /// @brief Field <SampleSizeInBytes>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SampleSizeInBytes_k__BackingField, put = setStaticF__SampleSizeInBytes_k__BackingField)) int32_t _SampleSizeInBytes_k__BackingField;

  /// @brief Method Load, addr 0x3fae910, size 0x200, virtual false, abstract: false, final false
  static inline void Load();

  static inline int32_t getStaticF__MaximumBufferSamplesCount_k__BackingField();

  static inline int32_t getStaticF__MinimumBufferSamplesCount_k__BackingField();

  static inline int32_t getStaticF__MinimumSafeSamplesQueued_k__BackingField();

  static inline int32_t getStaticF__OptimalBufferSamplesCount_k__BackingField();

  static inline int32_t getStaticF__SampleRateHz_k__BackingField();

  static inline int32_t getStaticF__SampleSizeInBytes_k__BackingField();

  /// @brief Method get_MaximumBufferSamplesCount, addr 0x3fafa30, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MaximumBufferSamplesCount();

  /// @brief Method get_MinimumBufferSamplesCount, addr 0x3faf8c8, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MinimumBufferSamplesCount();

  /// @brief Method get_MinimumSafeSamplesQueued, addr 0x3faf814, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MinimumSafeSamplesQueued();

  /// @brief Method get_OptimalBufferSamplesCount, addr 0x3faf97c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_OptimalBufferSamplesCount();

  /// @brief Method get_SampleRateHz, addr 0x3faf6ac, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_SampleRateHz();

  /// @brief Method get_SampleSizeInBytes, addr 0x3faf760, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_SampleSizeInBytes();

  static inline void setStaticF__MaximumBufferSamplesCount_k__BackingField(int32_t value);

  static inline void setStaticF__MinimumBufferSamplesCount_k__BackingField(int32_t value);

  static inline void setStaticF__MinimumSafeSamplesQueued_k__BackingField(int32_t value);

  static inline void setStaticF__OptimalBufferSamplesCount_k__BackingField(int32_t value);

  static inline void setStaticF__SampleRateHz_k__BackingField(int32_t value);

  static inline void setStaticF__SampleSizeInBytes_k__BackingField(int32_t value);

  /// @brief Method set_MaximumBufferSamplesCount, addr 0x3fafa88, size 0x5c, virtual false, abstract: false, final false
  static inline void set_MaximumBufferSamplesCount(int32_t value);

  /// @brief Method set_MinimumBufferSamplesCount, addr 0x3faf920, size 0x5c, virtual false, abstract: false, final false
  static inline void set_MinimumBufferSamplesCount(int32_t value);

  /// @brief Method set_MinimumSafeSamplesQueued, addr 0x3faf86c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_MinimumSafeSamplesQueued(int32_t value);

  /// @brief Method set_OptimalBufferSamplesCount, addr 0x3faf9d4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_OptimalBufferSamplesCount(int32_t value);

  /// @brief Method set_SampleRateHz, addr 0x3faf704, size 0x5c, virtual false, abstract: false, final false
  static inline void set_SampleRateHz(int32_t value);

  /// @brief Method set_SampleSizeInBytes, addr 0x3faf7b8, size 0x5c, virtual false, abstract: false, final false
  static inline void set_SampleSizeInBytes(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHaptics_Config();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics_Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHaptics_Config(OVRHaptics_Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics_Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHaptics_Config(OVRHaptics_Config const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHaptics_Config, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHaptics/OVRHapticsChannel
class CORDL_TYPE OVRHaptics_OVRHapticsChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_output, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_output, put = __cordl_internal_set_m_output)) ::GlobalNamespace::OVRHaptics_OVRHapticsOutput* m_output;

  /// @brief Method Clear, addr 0x3fb01cc, size 0x18, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Mix, addr 0x3fafd10, size 0x18, virtual false, abstract: false, final false
  inline void Mix(::GlobalNamespace::OVRHapticsClip* clip);

  static inline ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* New_ctor(uint32_t outputIndex);

  /// @brief Method Preempt, addr 0x3fafae8, size 0x18, virtual false, abstract: false, final false
  inline void Preempt(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Queue, addr 0x3fafc18, size 0x18, virtual false, abstract: false, final false
  inline void Queue(::GlobalNamespace::OVRHapticsClip* clip);

  constexpr ::GlobalNamespace::OVRHaptics_OVRHapticsOutput* const& __cordl_internal_get_m_output() const;

  constexpr ::GlobalNamespace::OVRHaptics_OVRHapticsOutput*& __cordl_internal_get_m_output();

  constexpr void __cordl_internal_set_m_output(::GlobalNamespace::OVRHaptics_OVRHapticsOutput* value);

  /// @brief Method .ctor, addr 0x3faec78, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(uint32_t outputIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHaptics_OVRHapticsChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics_OVRHapticsChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHaptics_OVRHapticsChannel(OVRHaptics_OVRHapticsChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics_OVRHapticsChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHaptics_OVRHapticsChannel(OVRHaptics_OVRHapticsChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7889 };

  /// @brief Field m_output, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRHaptics_OVRHapticsOutput* ___m_output;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsChannel, ___m_output) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHaptics_OVRHapticsChannel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
class CORDL_TYPE OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Clip, put = set_Clip)) ::GlobalNamespace::OVRHapticsClip* Clip;

  __declspec(property(get = get_ReadCount, put = set_ReadCount)) int32_t ReadCount;

  /// @brief Field <Clip>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Clip_k__BackingField, put = __cordl_internal_set__Clip_k__BackingField)) ::GlobalNamespace::OVRHapticsClip* _Clip_k__BackingField;

  /// @brief Field <ReadCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ReadCount_k__BackingField, put = __cordl_internal_set__ReadCount_k__BackingField)) int32_t _ReadCount_k__BackingField;

  static inline ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker* New_ctor(::GlobalNamespace::OVRHapticsClip* clip);

  constexpr ::GlobalNamespace::OVRHapticsClip* const& __cordl_internal_get__Clip_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRHapticsClip*& __cordl_internal_get__Clip_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ReadCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ReadCount_k__BackingField();

  constexpr void __cordl_internal_set__Clip_k__BackingField(::GlobalNamespace::OVRHapticsClip* value);

  constexpr void __cordl_internal_set__ReadCount_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x3fb0254, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method get_Clip, addr 0x3fb0494, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRHapticsClip* get_Clip();

  /// @brief Method get_ReadCount, addr 0x3fb0484, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReadCount();

  /// @brief Method set_Clip, addr 0x3fb049c, size 0x8, virtual false, abstract: false, final false
  inline void set_Clip(::GlobalNamespace::OVRHapticsClip* value);

  /// @brief Method set_ReadCount, addr 0x3fb048c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReadCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker(OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker(OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7890 };

  /// @brief Field <ReadCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____ReadCount_k__BackingField;

  /// @brief Field <Clip>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRHapticsClip* ____Clip_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker, ____ReadCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker, ____Clip_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHaptics/OVRHapticsOutput
class CORDL_TYPE OVRHaptics_OVRHapticsOutput : public ::System::Object {
public:
  // Declarations
  using ClipPlaybackTracker = ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker;

  /// @brief Field PrevSampleRateHz, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_PrevSampleRateHz, put = __cordl_internal_set_PrevSampleRateHz)) int32_t PrevSampleRateHz;

  /// @brief Field m_controller, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_controller, put = __cordl_internal_set_m_controller)) uint32_t m_controller;

  /// @brief Field m_lowLatencyMode, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_lowLatencyMode, put = __cordl_internal_set_m_lowLatencyMode)) bool m_lowLatencyMode;

  /// @brief Field m_nativeBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_nativeBuffer, put = __cordl_internal_set_m_nativeBuffer)) ::GlobalNamespace::OVRNativeBuffer* m_nativeBuffer;

  /// @brief Field m_numPredictionHits, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numPredictionHits, put = __cordl_internal_set_m_numPredictionHits)) int32_t m_numPredictionHits;

  /// @brief Field m_numPredictionMisses, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numPredictionMisses, put = __cordl_internal_set_m_numPredictionMisses)) int32_t m_numPredictionMisses;

  /// @brief Field m_numUnderruns, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numUnderruns, put = __cordl_internal_set_m_numUnderruns)) int32_t m_numUnderruns;

  /// @brief Field m_pendingClips, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pendingClips,
                      put = __cordl_internal_set_m_pendingClips)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>* m_pendingClips;

  /// @brief Field m_prevSamplesQueued, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_prevSamplesQueued, put = __cordl_internal_set_m_prevSamplesQueued)) int32_t m_prevSamplesQueued;

  /// @brief Field m_prevSamplesQueuedTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_prevSamplesQueuedTime, put = __cordl_internal_set_m_prevSamplesQueuedTime)) float_t m_prevSamplesQueuedTime;

  /// @brief Method Clear, addr 0x3fb01e4, size 0x70, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Mix, addr 0x3fafd28, size 0x4a4, virtual false, abstract: false, final false
  inline void Mix(::GlobalNamespace::OVRHapticsClip* clip);

  static inline ::GlobalNamespace::OVRHaptics_OVRHapticsOutput* New_ctor(uint32_t controller);

  /// @brief Method Preempt, addr 0x3fafb00, size 0x118, virtual false, abstract: false, final false
  inline void Preempt(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Process, addr 0x3faedec, size 0x8c0, virtual false, abstract: false, final false
  inline void Process();

  /// @brief Method Queue, addr 0x3fafc30, size 0xe0, virtual false, abstract: false, final false
  inline void Queue(::GlobalNamespace::OVRHapticsClip* clip);

  constexpr int32_t const& __cordl_internal_get_PrevSampleRateHz() const;

  constexpr int32_t& __cordl_internal_get_PrevSampleRateHz();

  constexpr uint32_t const& __cordl_internal_get_m_controller() const;

  constexpr uint32_t& __cordl_internal_get_m_controller();

  constexpr bool const& __cordl_internal_get_m_lowLatencyMode() const;

  constexpr bool& __cordl_internal_get_m_lowLatencyMode();

  constexpr ::GlobalNamespace::OVRNativeBuffer* const& __cordl_internal_get_m_nativeBuffer() const;

  constexpr ::GlobalNamespace::OVRNativeBuffer*& __cordl_internal_get_m_nativeBuffer();

  constexpr int32_t const& __cordl_internal_get_m_numPredictionHits() const;

  constexpr int32_t& __cordl_internal_get_m_numPredictionHits();

  constexpr int32_t const& __cordl_internal_get_m_numPredictionMisses() const;

  constexpr int32_t& __cordl_internal_get_m_numPredictionMisses();

  constexpr int32_t const& __cordl_internal_get_m_numUnderruns() const;

  constexpr int32_t& __cordl_internal_get_m_numUnderruns();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>* const& __cordl_internal_get_m_pendingClips() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>*& __cordl_internal_get_m_pendingClips();

  constexpr int32_t const& __cordl_internal_get_m_prevSamplesQueued() const;

  constexpr int32_t& __cordl_internal_get_m_prevSamplesQueued();

  constexpr float_t const& __cordl_internal_get_m_prevSamplesQueuedTime() const;

  constexpr float_t& __cordl_internal_get_m_prevSamplesQueuedTime();

  constexpr void __cordl_internal_set_PrevSampleRateHz(int32_t value);

  constexpr void __cordl_internal_set_m_controller(uint32_t value);

  constexpr void __cordl_internal_set_m_lowLatencyMode(bool value);

  constexpr void __cordl_internal_set_m_nativeBuffer(::GlobalNamespace::OVRNativeBuffer* value);

  constexpr void __cordl_internal_set_m_numPredictionHits(int32_t value);

  constexpr void __cordl_internal_set_m_numPredictionMisses(int32_t value);

  constexpr void __cordl_internal_set_m_numUnderruns(int32_t value);

  constexpr void __cordl_internal_set_m_pendingClips(::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>* value);

  constexpr void __cordl_internal_set_m_prevSamplesQueued(int32_t value);

  constexpr void __cordl_internal_set_m_prevSamplesQueuedTime(float_t value);

  /// @brief Method .ctor, addr 0x3faeb10, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(uint32_t controller);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHaptics_OVRHapticsOutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics_OVRHapticsOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHaptics_OVRHapticsOutput(OVRHaptics_OVRHapticsOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics_OVRHapticsOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHaptics_OVRHapticsOutput(OVRHaptics_OVRHapticsOutput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7891 };

  /// @brief Field m_lowLatencyMode, offset: 0x10, size: 0x1, def value: None
  bool ___m_lowLatencyMode;

  /// @brief Field m_prevSamplesQueued, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_prevSamplesQueued;

  /// @brief Field m_prevSamplesQueuedTime, offset: 0x18, size: 0x4, def value: None
  float_t ___m_prevSamplesQueuedTime;

  /// @brief Field m_numPredictionHits, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_numPredictionHits;

  /// @brief Field m_numPredictionMisses, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_numPredictionMisses;

  /// @brief Field m_numUnderruns, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_numUnderruns;

  /// @brief Field m_pendingClips, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>* ___m_pendingClips;

  /// @brief Field m_controller, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_controller;

  /// @brief Field m_nativeBuffer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRNativeBuffer* ___m_nativeBuffer;

  /// @brief Field PrevSampleRateHz, offset: 0x40, size: 0x4, def value: None
  int32_t ___PrevSampleRateHz;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_lowLatencyMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_prevSamplesQueued) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_prevSamplesQueuedTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_numPredictionHits) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_numPredictionMisses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_numUnderruns) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_pendingClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_controller) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___m_nativeBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHaptics_OVRHapticsOutput, ___PrevSampleRateHz) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHaptics_OVRHapticsOutput, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHaptics
class CORDL_TYPE OVRHaptics : public ::System::Object {
public:
  // Declarations
  using Config = ::GlobalNamespace::OVRHaptics_Config;

  using OVRHapticsChannel = ::GlobalNamespace::OVRHaptics_OVRHapticsChannel;

  using OVRHapticsOutput = ::GlobalNamespace::OVRHaptics_OVRHapticsOutput;

  /// @brief Field Channels, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Channels, put = setStaticF_Channels)) ::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, ::Array<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>*>
      Channels;

  /// @brief Field LeftChannel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LeftChannel, put = setStaticF_LeftChannel)) ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* LeftChannel;

  /// @brief Field RightChannel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RightChannel, put = setStaticF_RightChannel)) ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* RightChannel;

  /// @brief Field m_outputs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_outputs, put = setStaticF_m_outputs)) ::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*, ::Array<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>*>
      m_outputs;

  /// @brief Method Process, addr 0x3faed10, size 0xdc, virtual false, abstract: false, final false
  static inline void Process();

  static inline ::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, ::Array<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>*> getStaticF_Channels();

  static inline ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* getStaticF_LeftChannel();

  static inline ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* getStaticF_RightChannel();

  static inline ::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*, ::Array<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>*> getStaticF_m_outputs();

  static inline void setStaticF_Channels(::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, ::Array<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>*> value);

  static inline void setStaticF_LeftChannel(::GlobalNamespace::OVRHaptics_OVRHapticsChannel* value);

  static inline void setStaticF_RightChannel(::GlobalNamespace::OVRHaptics_OVRHapticsChannel* value);

  static inline void setStaticF_m_outputs(::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*, ::Array<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHaptics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHaptics(OVRHaptics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHaptics(OVRHaptics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHaptics, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHaptics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics*, "", "OVRHaptics");
NEED_NO_BOX(::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
NEED_NO_BOX(::GlobalNamespace::OVRHaptics_Config);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics_Config*, "", "OVRHaptics/Config");
NEED_NO_BOX(::GlobalNamespace::OVRHaptics_OVRHapticsChannel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, "", "OVRHaptics/OVRHapticsChannel");
NEED_NO_BOX(::GlobalNamespace::OVRHaptics_OVRHapticsOutput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics_OVRHapticsOutput*, "", "OVRHaptics/OVRHapticsOutput");
