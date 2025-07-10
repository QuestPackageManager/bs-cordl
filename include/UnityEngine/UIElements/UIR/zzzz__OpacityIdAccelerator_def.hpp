#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/OpacityIdAccelerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpacityIdAccelerator)
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct OpacityIdAccelerator_OpacityIdUpdateJob;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class OpacityIdAccelerator;
}
namespace UnityEngine::UIElements::UIR {
struct OpacityIdAccelerator_OpacityIdUpdateJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::OpacityIdAccelerator);
MARK_VAL_T(::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob);
// Dependencies Unity.Collections.NativeSlice`1<T>, Unity.Jobs.IJobParallelFor, UnityEngine.Color32, UnityEngine.UIElements.Vertex
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.OpacityIdAccelerator/OpacityIdUpdateJob
struct CORDL_TYPE OpacityIdAccelerator_OpacityIdUpdateJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x49aa648, size 0x128, virtual true, abstract: false, final true
  inline void Execute(int32_t i);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpacityIdAccelerator_OpacityIdUpdateJob();

  // Ctor Parameters [CppParam { name: "oldVerts", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "newVerts", ty:
  // "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "opacityData", ty: "::UnityEngine::Color32", modifiers: "", def_value:
  // None }]
  constexpr OpacityIdAccelerator_OpacityIdUpdateJob(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> oldVerts,
                                                    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> newVerts, ::UnityEngine::Color32 opacityData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6377 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field oldVerts, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> oldVerts;

  /// @brief Field newVerts, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> newVerts;

  /// @brief Field opacityData, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Color32 opacityData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob, oldVerts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob, newVerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob, opacityData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.IDisposable, System.Object, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.OpacityIdAccelerator
class CORDL_TYPE OpacityIdAccelerator : public ::System::Object {
public:
  // Declarations
  using OpacityIdUpdateJob = ::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob;

  /// @brief Field <disposed>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_Jobs, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Jobs, put = __cordl_internal_set_m_Jobs)) ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> m_Jobs;

  /// @brief Field m_NextJobIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextJobIndex, put = __cordl_internal_set_m_NextJobIndex)) int32_t m_NextJobIndex;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CompleteJobs, addr 0x49aa454, size 0x98, virtual false, abstract: false, final false
  inline void CompleteJobs();

  /// @brief Method CreateJob, addr 0x49aa360, size 0xf4, virtual false, abstract: false, final false
  inline void CreateJob(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> oldVerts, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> newVerts,
                        ::UnityEngine::Color32 opacityData, int32_t vertexCount);

  /// @brief Method Dispose, addr 0x49aa500, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49aa56c, size 0x64, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* New_ctor();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> const& __cordl_internal_get_m_Jobs() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>& __cordl_internal_get_m_Jobs();

  constexpr int32_t const& __cordl_internal_get_m_NextJobIndex() const;

  constexpr int32_t& __cordl_internal_get_m_NextJobIndex();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Jobs(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> value);

  constexpr void __cordl_internal_set_m_NextJobIndex(int32_t value);

  /// @brief Method .ctor, addr 0x49aa5d0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposed, addr 0x49aa4ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x49aa4f4, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpacityIdAccelerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpacityIdAccelerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpacityIdAccelerator(OpacityIdAccelerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpacityIdAccelerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpacityIdAccelerator(OpacityIdAccelerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6378 };

  /// @brief Field m_Jobs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> ___m_Jobs;

  /// @brief Field m_NextJobIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_NextJobIndex;

  /// @brief Field <disposed>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::OpacityIdAccelerator, ___m_Jobs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::OpacityIdAccelerator, ___m_NextJobIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::OpacityIdAccelerator, ____disposed_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::OpacityIdAccelerator, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::OpacityIdAccelerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*, "UnityEngine.UIElements.UIR", "OpacityIdAccelerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OpacityIdAccelerator_OpacityIdUpdateJob, "UnityEngine.UIElements.UIR", "OpacityIdAccelerator/OpacityIdUpdateJob");
