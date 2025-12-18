#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Recorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Recorder)
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
// Forward declare root types
namespace UnityEngine::Profiling {
class Recorder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Recorder);
// Dependencies System.Object, Unity.Profiling.ProfilerRecorder, Unity.Profiling.ProfilerRecorderOptions
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.Recorder
class CORDL_TYPE Recorder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_elapsedNanoseconds)) int64_t elapsedNanoseconds;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_gpuElapsedNanoseconds)) int64_t gpuElapsedNanoseconds;

  __declspec(property(get = get_gpuSampleBlockCount)) int32_t gpuSampleBlockCount;

  /// @brief Field m_RecorderCPU, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RecorderCPU, put = __cordl_internal_set_m_RecorderCPU)) ::Unity::Profiling::ProfilerRecorder m_RecorderCPU;

  /// @brief Field m_RecorderGPU, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RecorderGPU, put = __cordl_internal_set_m_RecorderGPU)) ::Unity::Profiling::ProfilerRecorder m_RecorderGPU;

  /// @brief Field s_InvalidRecorder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvalidRecorder, put = setStaticF_s_InvalidRecorder)) ::UnityEngine::Profiling::Recorder* s_InvalidRecorder;

  __declspec(property(get = get_sampleBlockCount)) int32_t sampleBlockCount;

  /// @brief Method Finalize, addr 0x6930848, size 0x60, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Profiling::Recorder* New_ctor();

  static inline ::UnityEngine::Profiling::Recorder* New_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle);

  /// @brief Method SetEnabled, addr 0x69308b8, size 0x68, virtual false, abstract: false, final false
  inline void SetEnabled(bool state);

  constexpr ::Unity::Profiling::ProfilerRecorder const& __cordl_internal_get_m_RecorderCPU() const;

  constexpr ::Unity::Profiling::ProfilerRecorder& __cordl_internal_get_m_RecorderCPU();

  constexpr ::Unity::Profiling::ProfilerRecorder const& __cordl_internal_get_m_RecorderGPU() const;

  constexpr ::Unity::Profiling::ProfilerRecorder& __cordl_internal_get_m_RecorderGPU();

  constexpr void __cordl_internal_set_m_RecorderCPU(::Unity::Profiling::ProfilerRecorder value);

  constexpr void __cordl_internal_set_m_RecorderGPU(::Unity::Profiling::ProfilerRecorder value);

  /// @brief Method .ctor, addr 0x69307b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x69307b8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle);

  static inline ::UnityEngine::Profiling::Recorder* getStaticF_s_InvalidRecorder();

  /// @brief Method get_elapsedNanoseconds, addr 0x6930920, size 0x34, virtual false, abstract: false, final false
  inline int64_t get_elapsedNanoseconds();

  /// @brief Method get_enabled, addr 0x69308a8, size 0xc, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_gpuElapsedNanoseconds, addr 0x6930954, size 0x34, virtual false, abstract: false, final false
  inline int64_t get_gpuElapsedNanoseconds();

  /// @brief Method get_gpuSampleBlockCount, addr 0x69309e8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_gpuSampleBlockCount();

  /// @brief Method get_sampleBlockCount, addr 0x6930988, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_sampleBlockCount();

  static inline void setStaticF_s_InvalidRecorder(::UnityEngine::Profiling::Recorder* value);

  /// @brief Method set_enabled, addr 0x69308b4, size 0x4, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Recorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Recorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Recorder(Recorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Recorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Recorder(Recorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10406 };

  /// @brief Field s_RecorderDefaultOptions value: I32(153)
  static ::Unity::Profiling::ProfilerRecorderOptions const s_RecorderDefaultOptions;

  /// @brief Field m_RecorderCPU, offset: 0x10, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerRecorder ___m_RecorderCPU;

  /// @brief Field m_RecorderGPU, offset: 0x18, size: 0x8, def value: None
  ::Unity::Profiling::ProfilerRecorder ___m_RecorderGPU;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Profiling::Recorder, ___m_RecorderCPU) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Recorder, ___m_RecorderGPU) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Recorder, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::Recorder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Recorder*, "UnityEngine.Profiling", "Recorder");
