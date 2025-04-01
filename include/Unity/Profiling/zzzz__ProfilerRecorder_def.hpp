#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorder)
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
struct ProfilerRecorder_ControlOptions;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerRecorder_ControlOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder_ControlOptions);
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder);
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorder_ControlOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerRecorder_ControlOptions, 0x4>, "Size mismatch!");

} // namespace Unity::Profiling
// Dependencies System.IDisposable, Unity.Profiling.ProfilerRecorderOptions
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder
struct CORDL_TYPE ProfilerRecorder {
public:
  // Declarations
  using ControlOptions = ::Unity::Profiling::ProfilerRecorder_ControlOptions;

  __declspec(property(get = get_LastValue)) int64_t LastValue;

  __declspec(property(get = get_UnitType)) ::Unity::Profiling::ProfilerMarkerDataUnit UnitType;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CheckInitializedAndThrow, addr 0x485ad50, size 0x5c, virtual false, abstract: false, final false
  inline void CheckInitializedAndThrow();

  /// @brief Method Control, addr 0x485aed4, size 0x48, virtual false, abstract: false, final false
  static inline void Control(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions options);

  /// @brief Method Control_Injected, addr 0x485af1c, size 0x44, virtual false, abstract: false, final false
  static inline void Control_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions options);

  /// @brief Method Create, addr 0x485abb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorder Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t maxSampleCount,
                                                            ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method Create_Injected, addr 0x485ae78, size 0x5c, virtual false, abstract: false, final false
  static inline void Create_Injected(::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> statHandle, int32_t maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions options,
                                     ::ByRef<::Unity::Profiling::ProfilerRecorder> ret);

  /// @brief Method Dispose, addr 0x485b014, size 0x54, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetLastValue, addr 0x485ae38, size 0x40, virtual false, abstract: false, final false
  static inline int64_t GetLastValue(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetLastValue_Injected, addr 0x485af9c, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetLastValue_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method GetValid, addr 0x485acc0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetValid(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetValid_Injected, addr 0x485afd8, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetValid_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method GetValueUnitType, addr 0x485adac, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerMarkerDataUnit GetValueUnitType(::Unity::Profiling::ProfilerRecorder handle);

  /// @brief Method GetValueUnitType_Injected, addr 0x485af60, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerMarkerDataUnit GetValueUnitType_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle);

  /// @brief Method StartNew, addr 0x485ac14, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerRecorder StartNew(::Unity::Profiling::ProfilerCategory category, ::StringW statName, int32_t capacity, ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method .ctor, addr 0x485ab74, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::ProfilerCategory category, ::cordl_internals::Ptr<char16_t> statName, int32_t statNameLen, int32_t capacity,
                    ::Unity::Profiling::ProfilerRecorderOptions options);

  /// @brief Method get_LastValue, addr 0x485adec, size 0x4c, virtual false, abstract: false, final false
  inline int64_t get_LastValue();

  /// @brief Method get_UnitType, addr 0x485ad04, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarkerDataUnit get_UnitType();

  /// @brief Method get_Valid, addr 0x485ac6c, size 0x54, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorder();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ProfilerRecorder(uint64_t handle) noexcept;

  /// @brief Field SharedRecorder value: I32(128)
  static ::Unity::Profiling::ProfilerRecorderOptions const SharedRecorder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorder, handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerRecorder, 0x8>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerRecorder_ControlOptions, "Unity.Profiling", "ProfilerRecorder/ControlOptions");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerRecorder, "Unity.Profiling", "ProfilerRecorder");
