#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorder)
namespace System {
class IDisposable;
}
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerMarkerDataUnit;
}
namespace Unity::Profiling {
struct ProfilerRecorderOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorderSample;
}
namespace Unity::Profiling {
struct ProfilerRecorder_ControlOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorder_CountOptions;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerRecorder_ControlOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorder_CountOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder_ControlOptions);
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder_CountOptions);
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerRecorder_ControlOptions, "Unity.Profiling", "ProfilerRecorder/ControlOptions");
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerRecorder_CountOptions, "Unity.Profiling", "ProfilerRecorder/CountOptions");
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerRecorder, "Unity.Profiling", "ProfilerRecorder");
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder/ControlOptions
struct CORDL_TYPE ProfilerRecorder_ControlOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProfilerRecorder_ControlOptions_Unwrapped
  enum struct __ProfilerRecorder_ControlOptions_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Stop = static_cast<int32_t>(0x1),
    __E_Reset = static_cast<int32_t>(0x2),
    __E_Release = static_cast<int32_t>(0x4),
    __E_SetFilterToCurrentThread = static_cast<int32_t>(0x5),
    __E_SetToCollectFromAllThreads = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProfilerRecorder_ControlOptions_Unwrapped() const noexcept {
    return static_cast<__ProfilerRecorder_ControlOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorder_ControlOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProfilerRecorder_ControlOptions(int32_t value__) noexcept;

  /// @brief Field Release value: I32(4)
  static ::Unity::Profiling::ProfilerRecorder_ControlOptions const Release;

  /// @brief Field Reset value: I32(2)
  static ::Unity::Profiling::ProfilerRecorder_ControlOptions const Reset;

  /// @brief Field SetFilterToCurrentThread value: I32(5)
  static ::Unity::Profiling::ProfilerRecorder_ControlOptions const SetFilterToCurrentThread;

  /// @brief Field SetToCollectFromAllThreads value: I32(6)
  static ::Unity::Profiling::ProfilerRecorder_ControlOptions const SetToCollectFromAllThreads;

  /// @brief Field Start value: I32(0)
  static ::Unity::Profiling::ProfilerRecorder_ControlOptions const Start;

  /// @brief Field Stop value: I32(1)
  static ::Unity::Profiling::ProfilerRecorder_ControlOptions const Stop;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9524 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorder_ControlOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerRecorder_ControlOptions) == 0x4, "Size mismatch!");

} // namespace Unity::Profiling
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder/CountOptions
struct CORDL_TYPE ProfilerRecorder_CountOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProfilerRecorder_CountOptions_Unwrapped
  enum struct __ProfilerRecorder_CountOptions_Unwrapped : int32_t {
    __E_Count = static_cast<int32_t>(0x0),
    __E_MaxCount = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProfilerRecorder_CountOptions_Unwrapped() const noexcept {
    return static_cast<__ProfilerRecorder_CountOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorder_CountOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProfilerRecorder_CountOptions(int32_t value__) noexcept;

  /// @brief Field Count value: I32(0)
  static ::Unity::Profiling::ProfilerRecorder_CountOptions const Count;

  /// @brief Field MaxCount value: I32(1)
  static ::Unity::Profiling::ProfilerRecorder_CountOptions const MaxCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9525 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorder_CountOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerRecorder_CountOptions) == 0x4, "Size mismatch!");

} // namespace Unity::Profiling
// [NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerRecorder.bindings.h")]
// [DebuggerTypeProxy(typeof(Unity.Profiling.ProfilerRecorderDebugView))]
// [DebuggerDisplay("Count = {Count}")]
// [UsedByNativeCode]
// Dependencies Unity.Profiling.ProfilerRecorderOptions
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder
struct CORDL_TYPE ProfilerRecorder {
public:
  // Declarations
  using ControlOptions = ::Unity::Profiling::ProfilerRecorder_ControlOptions;

  using CountOptions = ::Unity::Profiling::ProfilerRecorder_CountOptions;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  __declspec(property(get = get_LastValue)) int64_t LastValue;

  __declspec(property(get = get_UnitType)) ::Unity::Profiling::ProfilerMarkerDataUnit UnitType;

  __declspec(property(get = get_Valid)) bool Valid;

  __declspec(property(get = get_WrappedAround)) bool WrappedAround;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// [BurstDiscard]
  /// @brief Method CheckInitializedAndThrow, addr 0x6eaf308, size 0x58, virtual false, abstract: false, final false
  inline void CheckInitializedAndThrow();

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method Control, addr 0x6eaf3f0, size 0x48, virtual false, abstract: false, final false
  static inline void Control(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions options);

  /// @brief Method Control_Injected, addr 0x6eaf838, size 0x44, virtual false, abstract: false, final false
  static inline void Control_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions options);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method Create, addr 0x6eaf164, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorder Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t maxSampleCount,
                                                            ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method Create_Injected, addr 0x6eaf7dc, size 0x5c, virtual false, abstract: false, final false
  static inline void Create_Injected(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> statHandle, int32_t maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions options,
                                     ::by_ref<::Unity::Profiling::ProfilerRecorder> ret);

  /// @brief Method Dispose, addr 0x6eafa40, size 0x54, virtual true, abstract: false, final true
  inline void Dispose();

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetCount, addr 0x6eaf564, size 0x48, virtual false, abstract: false, final false
  static inline int32_t GetCount(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::ProfilerRecorder_CountOptions countOptions);

  /// @brief Method GetCount_Injected, addr 0x6eaf8f4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetCount_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::ProfilerRecorder_CountOptions countOptions);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetLastValue, addr 0x6eaf4d4, size 0x40, virtual false, abstract: false, final false
  static inline int64_t GetLastValue(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetLastValue_Injected, addr 0x6eaf8b8, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetLastValue_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetRunning, addr 0x6eaf64c, size 0x44, virtual false, abstract: false, final false
  static inline bool GetRunning(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetRunning_Injected, addr 0x6eaf9b0, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetRunning_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method GetSample, addr 0x6eaf724, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerRecorderSample GetSample(int32_t index);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method GetSampleInternal, addr 0x6eaf770, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorderSample GetSampleInternal(::Unity::Profiling::ProfilerRecorder handle, int32_t index);

  /// @brief Method GetSampleInternal_Injected, addr 0x6eaf9ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetSampleInternal_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle, int32_t index, ::by_ref<::Unity::Profiling::ProfilerRecorderSample> ret);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetValid, addr 0x6eaf278, size 0x44, virtual false, abstract: false, final false
  static inline bool GetValid(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetValid_Injected, addr 0x6eaf938, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetValid_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetValueUnitType, addr 0x6eaf360, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerMarkerDataUnit GetValueUnitType(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetValueUnitType_Injected, addr 0x6eaf87c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerMarkerDataUnit GetValueUnitType_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetWrapped, addr 0x6eaf6e0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetWrapped(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetWrapped_Injected, addr 0x6eaf974, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetWrapped_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method Start, addr 0x6eaf3a0, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartNew, addr 0x6eaf1e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorder StartNew(::Unity::Profiling::ProfilerCategory category, ::StringW statName, int32_t capacity, ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method Stop, addr 0x6eaf438, size 0x50, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method .ctor, addr 0x6eaf124, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, char16_t* statName, int32_t statNameLen, int32_t capacity, ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method .ctor, addr 0x6eaf1c4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t capacity, ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method get_Capacity, addr 0x6eaf514, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x6eaf5ac, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsRunning, addr 0x6eaf5fc, size 0x50, virtual false, abstract: false, final false
  inline bool get_IsRunning();

  /// @brief Method get_LastValue, addr 0x6eaf488, size 0x4c, virtual false, abstract: false, final false
  inline int64_t get_LastValue();

  /// @brief Method get_UnitType, addr 0x6eaf2bc, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarkerDataUnit get_UnitType();

  /// @brief Method get_Valid, addr 0x6eaf224, size 0x54, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Method get_WrappedAround, addr 0x6eaf690, size 0x50, virtual false, abstract: false, final false
  inline bool get_WrappedAround();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorder();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProfilerRecorder(uint64_t handle) noexcept;

  /// @brief Field SharedRecorder value: I32(128)
  static ::Unity::Profiling::ProfilerRecorderOptions const SharedRecorder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9526 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorder, handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerRecorder) == 0x8, "Size mismatch!");

} // namespace Unity::Profiling
