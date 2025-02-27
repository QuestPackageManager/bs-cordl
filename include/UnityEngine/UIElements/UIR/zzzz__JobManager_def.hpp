#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/JobManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JobManager)
namespace UnityEngine::UIElements::UIR {
struct ConvertMeshJobData;
}
namespace UnityEngine::UIElements::UIR {
struct CopyClosingMeshJobData;
}
namespace UnityEngine::UIElements::UIR {
class JobMerger;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class NativePagedList_1;
}
namespace UnityEngine::UIElements::UIR {
struct NudgeJobData;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class JobManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::JobManager);
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.JobManager
class CORDL_TYPE JobManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_ConvertMeshJobs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ConvertMeshJobs,
                      put = __cordl_internal_set_m_ConvertMeshJobs)) ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>* m_ConvertMeshJobs;

  /// @brief Field m_CopyClosingMeshJobs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyClosingMeshJobs,
                      put =
                          __cordl_internal_set_m_CopyClosingMeshJobs)) ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData>* m_CopyClosingMeshJobs;

  /// @brief Field m_JobMerger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_JobMerger, put = __cordl_internal_set_m_JobMerger)) ::UnityEngine::UIElements::UIR::JobMerger* m_JobMerger;

  /// @brief Field m_NudgeJobs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NudgeJobs,
                      put = __cordl_internal_set_m_NudgeJobs)) ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>* m_NudgeJobs;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x49b559c, size 0x58, virtual false, abstract: false, final false
  inline void Add(::ByRef<::UnityEngine::UIElements::UIR::ConvertMeshJobData> job);

  /// @brief Method Add, addr 0x49b55f4, size 0x58, virtual false, abstract: false, final false
  inline void Add(::ByRef<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData> job);

  /// @brief Method Add, addr 0x49b5544, size 0x58, virtual false, abstract: false, final false
  inline void Add(::ByRef<::UnityEngine::UIElements::UIR::NudgeJobData> job);

  /// @brief Method CompleteClosingMeshJobs, addr 0x49b5bb8, size 0x23c, virtual false, abstract: false, final false
  inline void CompleteClosingMeshJobs();

  /// @brief Method CompleteConvertMeshJobs, addr 0x49b597c, size 0x23c, virtual false, abstract: false, final false
  inline void CompleteConvertMeshJobs();

  /// @brief Method CompleteNudgeJobs, addr 0x49b564c, size 0x23c, virtual false, abstract: false, final false
  inline void CompleteNudgeJobs();

  /// @brief Method Dispose, addr 0x49b5e08, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49b5e6c, size 0xc0, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::JobManager* New_ctor();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>* const& __cordl_internal_get_m_ConvertMeshJobs() const;

  constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>*& __cordl_internal_get_m_ConvertMeshJobs();

  constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData>* const& __cordl_internal_get_m_CopyClosingMeshJobs() const;

  constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData>*& __cordl_internal_get_m_CopyClosingMeshJobs();

  constexpr ::UnityEngine::UIElements::UIR::JobMerger* const& __cordl_internal_get_m_JobMerger() const;

  constexpr ::UnityEngine::UIElements::UIR::JobMerger*& __cordl_internal_get_m_JobMerger();

  constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>* const& __cordl_internal_get_m_NudgeJobs() const;

  constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>*& __cordl_internal_get_m_NudgeJobs();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ConvertMeshJobs(::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>* value);

  constexpr void __cordl_internal_set_m_CopyClosingMeshJobs(::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData>* value);

  constexpr void __cordl_internal_set_m_JobMerger(::UnityEngine::UIElements::UIR::JobMerger* value);

  constexpr void __cordl_internal_set_m_NudgeJobs(::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>* value);

  /// @brief Method .ctor, addr 0x49b5f90, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposed, addr 0x49b5df4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x49b5dfc, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobManager(JobManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobManager(JobManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6364 };

  /// @brief Field m_NudgeJobs, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>* ___m_NudgeJobs;

  /// @brief Field m_ConvertMeshJobs, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>* ___m_ConvertMeshJobs;

  /// @brief Field m_CopyClosingMeshJobs, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData>* ___m_CopyClosingMeshJobs;

  /// @brief Field m_JobMerger, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::JobMerger* ___m_JobMerger;

  /// @brief Field <disposed>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::JobManager, ___m_NudgeJobs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobManager, ___m_ConvertMeshJobs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobManager, ___m_CopyClosingMeshJobs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobManager, ___m_JobMerger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobManager, ____disposed_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::JobManager, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::JobManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::JobManager*, "UnityEngine.UIElements.UIR", "JobManager");
