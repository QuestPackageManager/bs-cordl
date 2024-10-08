#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/JobProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JobProcessor)
namespace System {
struct IntPtr;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class JobProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::JobProcessor);
// Type: UnityEngine.UIElements.UIR::JobProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::JobProcessor*
class CORDL_TYPE JobProcessor : public ::System::Object {
public:
  // Declarations
  /// @brief Method ScheduleConvertMeshJobs, addr 0x492b9b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleConvertMeshJobs(::System::IntPtr buffer, int32_t jobCount);

  /// @brief Method ScheduleConvertMeshJobs_Injected, addr 0x492ba10, size 0x54, virtual false, abstract: false, final false
  static inline void ScheduleConvertMeshJobs_Injected(::System::IntPtr buffer, int32_t jobCount, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method ScheduleCopyClosingMeshJobs, addr 0x492ba64, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleCopyClosingMeshJobs(::System::IntPtr buffer, int32_t jobCount);

  /// @brief Method ScheduleCopyClosingMeshJobs_Injected, addr 0x492bac0, size 0x54, virtual false, abstract: false, final false
  static inline void ScheduleCopyClosingMeshJobs_Injected(::System::IntPtr buffer, int32_t jobCount, ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method ScheduleNudgeJobs, addr 0x492b904, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleNudgeJobs(::System::IntPtr buffer, int32_t jobCount);

  /// @brief Method ScheduleNudgeJobs_Injected, addr 0x492b960, size 0x54, virtual false, abstract: false, final false
  static inline void ScheduleNudgeJobs_Injected(::System::IntPtr buffer, int32_t jobCount, ByRef<::Unity::Jobs::JobHandle> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobProcessor(JobProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobProcessor(JobProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::JobProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::JobProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::JobProcessor*, "UnityEngine.UIElements.UIR", "JobProcessor");
