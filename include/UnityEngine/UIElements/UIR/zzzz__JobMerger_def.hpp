#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/JobMerger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JobMerger)
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class JobMerger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::JobMerger);
// Type: UnityEngine.UIElements.UIR::JobMerger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::JobMerger*
class CORDL_TYPE JobMerger : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_JobCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_JobCount, put = __cordl_internal_set_m_JobCount)) int32_t m_JobCount;

  /// @brief Field m_Jobs, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Jobs, put = __cordl_internal_set_m_Jobs)) ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> m_Jobs;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x494208c, size 0x6c, virtual false, abstract: false, final false
  inline void Add(::Unity::Jobs::JobHandle job);

  /// @brief Method Dispose, addr 0x4942730, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49429a4, size 0x64, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method MergeAndReset, addr 0x49420f8, size 0x88, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle MergeAndReset();

  static inline ::UnityEngine::UIElements::UIR::JobMerger* New_ctor(int32_t capacity);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_JobCount() const;

  constexpr int32_t& __cordl_internal_get_m_JobCount();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> const& __cordl_internal_get_m_Jobs() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>& __cordl_internal_get_m_Jobs();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_JobCount(int32_t value);

  constexpr void __cordl_internal_set_m_Jobs(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> value);

  /// @brief Method .ctor, addr 0x49428d8, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_disposed, addr 0x4942990, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x4942998, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobMerger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobMerger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobMerger(JobMerger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobMerger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobMerger(JobMerger const&) = delete;

  /// @brief Field m_Jobs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> ___m_Jobs;

  /// @brief Field m_JobCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_JobCount;

  /// @brief Field <disposed>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6338 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::JobMerger, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobMerger, ___m_Jobs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobMerger, ___m_JobCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::JobMerger, ____disposed_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::JobMerger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::JobMerger*, "UnityEngine.UIElements.UIR", "JobMerger");
