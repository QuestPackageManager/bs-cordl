#pragma once
// IWYU pragma private; include "GlobalNamespace\FrameTiming.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameTiming)
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Forward declare root types
namespace GlobalNamespace {
class FrameTiming;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FrameTiming*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FrameTiming*, "", "FrameTiming");
// Dependencies Unity.Profiling.ProfilerRecorder, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FrameTiming
class CORDL_TYPE FrameTiming : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field gpuMilliseconds, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gpuMilliseconds, put = __cordl_internal_set_gpuMilliseconds)) double_t gpuMilliseconds;

  /// @brief Field gpuPreviousCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_gpuPreviousCount, put = __cordl_internal_set_gpuPreviousCount)) int32_t gpuPreviousCount;

  /// @brief Field gpuRecorder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gpuRecorder, put = __cordl_internal_set_gpuRecorder)) ::Unity::Profiling::ProfilerRecorder gpuRecorder;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::UnityW<::GlobalNamespace::FrameTiming> instance;

  /// @brief Field lastRefreshFrame, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lastRefreshFrame, put = __cordl_internal_set_lastRefreshFrame)) int32_t lastRefreshFrame;

  /// @brief Field playerLoopMilliseconds, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerLoopMilliseconds, put = __cordl_internal_set_playerLoopMilliseconds)) double_t playerLoopMilliseconds;

  /// @brief Field playerLoopPreviousCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_playerLoopPreviousCount, put = __cordl_internal_set_playerLoopPreviousCount)) int32_t playerLoopPreviousCount;

  /// @brief Field playerLoopRecorder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_playerLoopRecorder, put = __cordl_internal_set_playerLoopRecorder)) ::Unity::Profiling::ProfilerRecorder playerLoopRecorder;

  /// @brief Method Awake, addr 0x58528e4, size 0x2ac, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetLastFrameSampleValue, addr 0x5852be0, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t GetLastFrameSampleValue(::Unity::Profiling::ProfilerRecorder recorder, int32_t lastFrameCount);

  /// @brief Method Initialize, addr 0x5852744, size 0x1a0, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::GlobalNamespace::FrameTiming* New_ctor();

  /// @brief Method OnDestroy, addr 0x5852b90, size 0x4c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Refresh, addr 0x585242c, size 0x260, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Update, addr 0x5852bdc, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr double_t const& __cordl_internal_get_gpuMilliseconds() const;

  constexpr double_t& __cordl_internal_get_gpuMilliseconds();

  constexpr int32_t const& __cordl_internal_get_gpuPreviousCount() const;

  constexpr int32_t& __cordl_internal_get_gpuPreviousCount();

  constexpr ::Unity::Profiling::ProfilerRecorder const& __cordl_internal_get_gpuRecorder() const;

  constexpr ::Unity::Profiling::ProfilerRecorder& __cordl_internal_get_gpuRecorder();

  constexpr int32_t const& __cordl_internal_get_lastRefreshFrame() const;

  constexpr int32_t& __cordl_internal_get_lastRefreshFrame();

  constexpr double_t const& __cordl_internal_get_playerLoopMilliseconds() const;

  constexpr double_t& __cordl_internal_get_playerLoopMilliseconds();

  constexpr int32_t const& __cordl_internal_get_playerLoopPreviousCount() const;

  constexpr int32_t& __cordl_internal_get_playerLoopPreviousCount();

  constexpr ::Unity::Profiling::ProfilerRecorder const& __cordl_internal_get_playerLoopRecorder() const;

  constexpr ::Unity::Profiling::ProfilerRecorder& __cordl_internal_get_playerLoopRecorder();

  constexpr void __cordl_internal_set_gpuMilliseconds(double_t value);

  constexpr void __cordl_internal_set_gpuPreviousCount(int32_t value);

  constexpr void __cordl_internal_set_gpuRecorder(::Unity::Profiling::ProfilerRecorder value);

  constexpr void __cordl_internal_set_lastRefreshFrame(int32_t value);

  constexpr void __cordl_internal_set_playerLoopMilliseconds(double_t value);

  constexpr void __cordl_internal_set_playerLoopPreviousCount(int32_t value);

  constexpr void __cordl_internal_set_playerLoopRecorder(::Unity::Profiling::ProfilerRecorder value);

  /// @brief Method .ctor, addr 0x5852c5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::FrameTiming> getStaticF_instance();

  /// @brief Method get_GPUMilliseconds, addr 0x585268c, size 0xb8, virtual false, abstract: false, final false
  static inline double_t get_GPUMilliseconds();

  /// @brief Method get_PlayerLoopMilliseconds, addr 0x5852374, size 0xb8, virtual false, abstract: false, final false
  static inline double_t get_PlayerLoopMilliseconds();

  static inline void setStaticF_instance(::UnityW<::GlobalNamespace::FrameTiming> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTiming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrameTiming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameTiming(FrameTiming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameTiming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameTiming(FrameTiming const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22763 };

  /// @brief Field lastRefreshFrame, offset: 0x20, size: 0x4, def value: None
  int32_t ___lastRefreshFrame;

  /// @brief Field playerLoopRecorder, offset: 0x28, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerRecorder ___playerLoopRecorder;

  /// @brief Field playerLoopPreviousCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___playerLoopPreviousCount;

  /// @brief Field playerLoopMilliseconds, offset: 0x38, size: 0x8, def value: None
  double_t ___playerLoopMilliseconds;

  /// @brief Field gpuRecorder, offset: 0x40, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerRecorder ___gpuRecorder;

  /// @brief Field gpuPreviousCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___gpuPreviousCount;

  /// @brief Field gpuMilliseconds, offset: 0x50, size: 0x8, def value: None
  double_t ___gpuMilliseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FrameTiming, ___lastRefreshFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameTiming, ___playerLoopRecorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameTiming, ___playerLoopPreviousCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameTiming, ___playerLoopMilliseconds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameTiming, ___gpuRecorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameTiming, ___gpuPreviousCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FrameTiming, ___gpuMilliseconds) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FrameTiming) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
