#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHaptics)
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace GlobalNamespace {
class __OVRHaptics__Config;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsChannel;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHaptics;
}
namespace GlobalNamespace {
class __OVRHaptics__Config;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsChannel;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHaptics);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__Config);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker);
// Type: ::Config
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHaptics::Config*
class CORDL_TYPE __OVRHaptics__Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field <MaximumBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MaximumBufferSamplesCount_k__BackingField,
                             put = setStaticF__MaximumBufferSamplesCount_k__BackingField)) int32_t _MaximumBufferSamplesCount_k__BackingField;

  /// @brief Field <MinimumBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MinimumBufferSamplesCount_k__BackingField,
                             put = setStaticF__MinimumBufferSamplesCount_k__BackingField)) int32_t _MinimumBufferSamplesCount_k__BackingField;

  /// @brief Field <MinimumSafeSamplesQueued>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MinimumSafeSamplesQueued_k__BackingField, put = setStaticF__MinimumSafeSamplesQueued_k__BackingField)) int32_t _MinimumSafeSamplesQueued_k__BackingField;

  /// @brief Field <OptimalBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__OptimalBufferSamplesCount_k__BackingField,
                             put = setStaticF__OptimalBufferSamplesCount_k__BackingField)) int32_t _OptimalBufferSamplesCount_k__BackingField;

  /// @brief Field <SampleRateHz>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SampleRateHz_k__BackingField, put = setStaticF__SampleRateHz_k__BackingField)) int32_t _SampleRateHz_k__BackingField;

  /// @brief Field <SampleSizeInBytes>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SampleSizeInBytes_k__BackingField, put = setStaticF__SampleSizeInBytes_k__BackingField)) int32_t _SampleSizeInBytes_k__BackingField;

  /// @brief Method Load, addr 0x29ff2bc, size 0x200, virtual false, abstract: false, final false
  static inline void Load();

  static inline int32_t getStaticF__MaximumBufferSamplesCount_k__BackingField();

  static inline int32_t getStaticF__MinimumBufferSamplesCount_k__BackingField();

  static inline int32_t getStaticF__MinimumSafeSamplesQueued_k__BackingField();

  static inline int32_t getStaticF__OptimalBufferSamplesCount_k__BackingField();

  static inline int32_t getStaticF__SampleRateHz_k__BackingField();

  static inline int32_t getStaticF__SampleSizeInBytes_k__BackingField();

  /// @brief Method get_MaximumBufferSamplesCount, addr 0x2a003e0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MaximumBufferSamplesCount();

  /// @brief Method get_MinimumBufferSamplesCount, addr 0x2a00278, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MinimumBufferSamplesCount();

  /// @brief Method get_MinimumSafeSamplesQueued, addr 0x2a001c4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MinimumSafeSamplesQueued();

  /// @brief Method get_OptimalBufferSamplesCount, addr 0x2a0032c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_OptimalBufferSamplesCount();

  /// @brief Method get_SampleRateHz, addr 0x2a0005c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_SampleRateHz();

  /// @brief Method get_SampleSizeInBytes, addr 0x2a00110, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_SampleSizeInBytes();

  static inline void setStaticF__MaximumBufferSamplesCount_k__BackingField(int32_t value);

  static inline void setStaticF__MinimumBufferSamplesCount_k__BackingField(int32_t value);

  static inline void setStaticF__MinimumSafeSamplesQueued_k__BackingField(int32_t value);

  static inline void setStaticF__OptimalBufferSamplesCount_k__BackingField(int32_t value);

  static inline void setStaticF__SampleRateHz_k__BackingField(int32_t value);

  static inline void setStaticF__SampleSizeInBytes_k__BackingField(int32_t value);

  /// @brief Method set_MaximumBufferSamplesCount, addr 0x2a00438, size 0x5c, virtual false, abstract: false, final false
  static inline void set_MaximumBufferSamplesCount(int32_t value);

  /// @brief Method set_MinimumBufferSamplesCount, addr 0x2a002d0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_MinimumBufferSamplesCount(int32_t value);

  /// @brief Method set_MinimumSafeSamplesQueued, addr 0x2a0021c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_MinimumSafeSamplesQueued(int32_t value);

  /// @brief Method set_OptimalBufferSamplesCount, addr 0x2a00384, size 0x5c, virtual false, abstract: false, final false
  static inline void set_OptimalBufferSamplesCount(int32_t value);

  /// @brief Method set_SampleRateHz, addr 0x2a000b4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_SampleRateHz(int32_t value);

  /// @brief Method set_SampleSizeInBytes, addr 0x2a00168, size 0x5c, virtual false, abstract: false, final false
  static inline void set_SampleSizeInBytes(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__Config();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__Config(__OVRHaptics__Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__Config(__OVRHaptics__Config const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__Config, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHapticsChannel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHaptics::OVRHapticsChannel*
class CORDL_TYPE __OVRHaptics__OVRHapticsChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_output, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_output, put = __cordl_internal_set_m_output))::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* m_output;

  /// @brief Method Clear, addr 0x2a00ba0, size 0x18, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Mix, addr 0x2a006d0, size 0x18, virtual false, abstract: false, final false
  inline void Mix(::GlobalNamespace::OVRHapticsClip* clip);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* New_ctor(uint32_t outputIndex);

  /// @brief Method Preempt, addr 0x2a00498, size 0x18, virtual false, abstract: false, final false
  inline void Preempt(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Queue, addr 0x2a005d0, size 0x18, virtual false, abstract: false, final false
  inline void Queue(::GlobalNamespace::OVRHapticsClip* clip);

  constexpr ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*& __cordl_internal_get_m_output();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*> const& __cordl_internal_get_m_output() const;

  constexpr void __cordl_internal_set_m_output(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* value);

  /// @brief Method .ctor, addr 0x29ff630, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(uint32_t outputIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__OVRHapticsChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__OVRHapticsChannel(__OVRHaptics__OVRHapticsChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__OVRHapticsChannel(__OVRHaptics__OVRHapticsChannel const&) = delete;

  /// @brief Field m_output, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* ___m_output;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel, ___m_output) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ClipPlaybackTracker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*
class CORDL_TYPE __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Clip, put = set_Clip))::GlobalNamespace::OVRHapticsClip* Clip;

  __declspec(property(get = get_ReadCount, put = set_ReadCount)) int32_t ReadCount;

  /// @brief Field <Clip>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Clip_k__BackingField, put = __cordl_internal_set__Clip_k__BackingField))::GlobalNamespace::OVRHapticsClip* _Clip_k__BackingField;

  /// @brief Field <ReadCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ReadCount_k__BackingField, put = __cordl_internal_set__ReadCount_k__BackingField)) int32_t _ReadCount_k__BackingField;

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker* New_ctor(::GlobalNamespace::OVRHapticsClip* clip);

  constexpr ::GlobalNamespace::OVRHapticsClip*& __cordl_internal_get__Clip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHapticsClip*> const& __cordl_internal_get__Clip_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__ReadCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ReadCount_k__BackingField();

  constexpr void __cordl_internal_set__Clip_k__BackingField(::GlobalNamespace::OVRHapticsClip* value);

  constexpr void __cordl_internal_set__ReadCount_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2a00c28, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method get_Clip, addr 0x2a00e68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRHapticsClip* get_Clip();

  /// @brief Method get_ReadCount, addr 0x2a00e58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReadCount();

  /// @brief Method set_Clip, addr 0x2a00e70, size 0x8, virtual false, abstract: false, final false
  inline void set_Clip(::GlobalNamespace::OVRHapticsClip* value);

  /// @brief Method set_ReadCount, addr 0x2a00e60, size 0x8, virtual false, abstract: false, final false
  inline void set_ReadCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker const&) = delete;

  /// @brief Field <ReadCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____ReadCount_k__BackingField;

  /// @brief Field <Clip>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRHapticsClip* ____Clip_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker, ____ReadCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker, ____Clip_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHapticsOutput
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHaptics::OVRHapticsOutput*
class CORDL_TYPE __OVRHaptics__OVRHapticsOutput : public ::System::Object {
public:
  // Declarations
  using ClipPlaybackTracker = ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;

  /// @brief Field PrevSampleRateHz, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_PrevSampleRateHz, put = __cordl_internal_set_PrevSampleRateHz)) int32_t PrevSampleRateHz;

  /// @brief Field m_controller, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_controller, put = __cordl_internal_set_m_controller)) uint32_t m_controller;

  /// @brief Field m_lowLatencyMode, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_lowLatencyMode, put = __cordl_internal_set_m_lowLatencyMode)) bool m_lowLatencyMode;

  /// @brief Field m_nativeBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_nativeBuffer, put = __cordl_internal_set_m_nativeBuffer))::GlobalNamespace::OVRNativeBuffer* m_nativeBuffer;

  /// @brief Field m_numPredictionHits, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numPredictionHits, put = __cordl_internal_set_m_numPredictionHits)) int32_t m_numPredictionHits;

  /// @brief Field m_numPredictionMisses, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numPredictionMisses, put = __cordl_internal_set_m_numPredictionMisses)) int32_t m_numPredictionMisses;

  /// @brief Field m_numUnderruns, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numUnderruns, put = __cordl_internal_set_m_numUnderruns)) int32_t m_numUnderruns;

  /// @brief Field m_pendingClips, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pendingClips,
                      put = __cordl_internal_set_m_pendingClips))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>* m_pendingClips;

  /// @brief Field m_prevSamplesQueued, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_prevSamplesQueued, put = __cordl_internal_set_m_prevSamplesQueued)) int32_t m_prevSamplesQueued;

  /// @brief Field m_prevSamplesQueuedTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_prevSamplesQueuedTime, put = __cordl_internal_set_m_prevSamplesQueuedTime)) float_t m_prevSamplesQueuedTime;

  /// @brief Method Clear, addr 0x2a00bb8, size 0x70, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Mix, addr 0x2a006e8, size 0x4b8, virtual false, abstract: false, final false
  inline void Mix(::GlobalNamespace::OVRHapticsClip* clip);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* New_ctor(uint32_t controller);

  /// @brief Method Preempt, addr 0x2a004b0, size 0x120, virtual false, abstract: false, final false
  inline void Preempt(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Process, addr 0x29ff7a4, size 0x8b8, virtual false, abstract: false, final false
  inline void Process();

  /// @brief Method Queue, addr 0x2a005e8, size 0xe8, virtual false, abstract: false, final false
  inline void Queue(::GlobalNamespace::OVRHapticsClip* clip);

  constexpr int32_t const& __cordl_internal_get_PrevSampleRateHz() const;

  constexpr int32_t& __cordl_internal_get_PrevSampleRateHz();

  constexpr uint32_t const& __cordl_internal_get_m_controller() const;

  constexpr uint32_t& __cordl_internal_get_m_controller();

  constexpr bool const& __cordl_internal_get_m_lowLatencyMode() const;

  constexpr bool& __cordl_internal_get_m_lowLatencyMode();

  constexpr ::GlobalNamespace::OVRNativeBuffer*& __cordl_internal_get_m_nativeBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRNativeBuffer*> const& __cordl_internal_get_m_nativeBuffer() const;

  constexpr int32_t const& __cordl_internal_get_m_numPredictionHits() const;

  constexpr int32_t& __cordl_internal_get_m_numPredictionHits();

  constexpr int32_t const& __cordl_internal_get_m_numPredictionMisses() const;

  constexpr int32_t& __cordl_internal_get_m_numPredictionMisses();

  constexpr int32_t const& __cordl_internal_get_m_numUnderruns() const;

  constexpr int32_t& __cordl_internal_get_m_numUnderruns();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>*& __cordl_internal_get_m_pendingClips();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>*> const&
  __cordl_internal_get_m_pendingClips() const;

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

  constexpr void __cordl_internal_set_m_pendingClips(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>* value);

  constexpr void __cordl_internal_set_m_prevSamplesQueued(int32_t value);

  constexpr void __cordl_internal_set_m_prevSamplesQueuedTime(float_t value);

  /// @brief Method .ctor, addr 0x29ff4bc, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(uint32_t controller);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__OVRHapticsOutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__OVRHapticsOutput(__OVRHaptics__OVRHapticsOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__OVRHapticsOutput(__OVRHaptics__OVRHapticsOutput const&) = delete;

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
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>* ___m_pendingClips;

  /// @brief Field m_controller, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_controller;

  /// @brief Field m_nativeBuffer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRNativeBuffer* ___m_nativeBuffer;

  /// @brief Field PrevSampleRateHz, offset: 0x40, size: 0x4, def value: None
  int32_t ___PrevSampleRateHz;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_lowLatencyMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_prevSamplesQueued) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_prevSamplesQueuedTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_numPredictionHits) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_numPredictionMisses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_numUnderruns) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_pendingClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_controller) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___m_nativeBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, ___PrevSampleRateHz) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHaptics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHaptics*
class CORDL_TYPE OVRHaptics : public ::System::Object {
public:
  // Declarations
  using Config = ::GlobalNamespace::__OVRHaptics__Config;

  using OVRHapticsChannel = ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel;

  using OVRHapticsOutput = ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput;

  /// @brief Field Channels, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Channels,
                             put = setStaticF_Channels))::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*>*> Channels;

  /// @brief Field LeftChannel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LeftChannel, put = setStaticF_LeftChannel))::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* LeftChannel;

  /// @brief Field RightChannel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RightChannel, put = setStaticF_RightChannel))::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* RightChannel;

  /// @brief Field m_outputs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_outputs,
                             put = setStaticF_m_outputs))::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*>*> m_outputs;

  /// @brief Method Process, addr 0x29ff6c8, size 0xdc, virtual false, abstract: false, final false
  static inline void Process();

  static inline ::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*>*> getStaticF_Channels();

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* getStaticF_LeftChannel();

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* getStaticF_RightChannel();

  static inline ::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*>*> getStaticF_m_outputs();

  static inline void setStaticF_Channels(::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*>*> value);

  static inline void setStaticF_LeftChannel(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* value);

  static inline void setStaticF_RightChannel(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* value);

  static inline void setStaticF_m_outputs(::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*>*> value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHaptics, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHaptics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics*, "", "OVRHaptics");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__Config);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__Config*, "", "OVRHaptics/Config");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, "", "OVRHaptics/OVRHapticsChannel");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, "", "OVRHaptics/OVRHapticsOutput");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
