#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerationDeferrer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerationDeferrer)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::UIElements::UIR {
class JobMerger;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
namespace UnityEngine::UIElements::UIR {
struct MeshGenerationDeferrer_CallbackInfo;
}
namespace UnityEngine::UIElements {
struct MeshGenerationCallbackType;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class MeshGenerationDeferrer;
}
namespace UnityEngine::UIElements::UIR {
struct MeshGenerationDeferrer_CallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer);
MARK_VAL_T(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerationDeferrer/CallbackInfo
struct CORDL_TYPE MeshGenerationDeferrer_CallbackInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationDeferrer_CallbackInfo();

  // Ctor Parameters [CppParam { name: "callback", ty: "::UnityEngine::UIElements::UIR::MeshGenerationCallback*", modifiers: "", def_value: None }, CppParam { name: "userData", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr MeshGenerationDeferrer_CallbackInfo(::UnityEngine::UIElements::UIR::MeshGenerationCallback* callback, ::System::Object* userData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5310 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field callback, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationCallback* callback;

  /// @brief Field userData, offset: 0x8, size: 0x8, def value: None
  ::System::Object* userData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo, callback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo, userData) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.MeshGenerationDeferrer
class CORDL_TYPE MeshGenerationDeferrer : public ::System::Object {
public:
  // Declarations
  using CallbackInfo = ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo;

  /// @brief Field <disposed>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_Dependencies, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dependencies, put = __cordl_internal_set_m_Dependencies)) ::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>* m_Dependencies;

  /// @brief Field m_DependencyMerger, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DependencyMerger, put = __cordl_internal_set_m_DependencyMerger)) ::UnityEngine::UIElements::UIR::JobMerger* m_DependencyMerger;

  /// @brief Field m_Fork, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Fork,
                      put = __cordl_internal_set_m_Fork)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* m_Fork;

  /// @brief Field m_JobDependentFork, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_JobDependentFork,
                      put = __cordl_internal_set_m_JobDependentFork)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* m_JobDependentFork;

  /// @brief Field m_JobDependentWork, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_JobDependentWork,
                      put = __cordl_internal_set_m_JobDependentWork)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* m_JobDependentWork;

  /// @brief Field m_JobDependentWorkThenFork, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_JobDependentWorkThenFork,
      put = __cordl_internal_set_m_JobDependentWorkThenFork)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* m_JobDependentWorkThenFork;

  /// @brief Field m_Work, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Work,
                      put = __cordl_internal_set_m_Work)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* m_Work;

  /// @brief Field m_WorkThenFork, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorkThenFork,
                      put = __cordl_internal_set_m_WorkThenFork)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* m_WorkThenFork;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddMeshGenerationCallback, addr 0x6b12f30, size 0x148, virtual false, abstract: false, final false
  inline void AddMeshGenerationCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* callback, ::System::Object* userData,
                                        ::UnityEngine::UIElements::MeshGenerationCallbackType callbackType, bool isJobDependent);

  /// @brief Method AddMeshGenerationJob, addr 0x6b12ec4, size 0x6c, virtual false, abstract: false, final false
  inline void AddMeshGenerationJob(::Unity::Jobs::JobHandle jobHandle);

  /// @brief Method Dispose, addr 0x6b134f4, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b1355c, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Invoke, addr 0x6b1330c, size 0x1d8, virtual false, abstract: false, final false
  static inline void Invoke(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo ci, Il2CppObject* mgc);

  static inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* New_ctor();

  /// @brief Method ProcessDeferredWork, addr 0x6b13078, size 0x294, virtual false, abstract: false, final false
  inline void ProcessDeferredWork(Il2CppObject* meshGenerationContext);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>* const& __cordl_internal_get_m_Dependencies() const;

  constexpr ::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>*& __cordl_internal_get_m_Dependencies();

  constexpr ::UnityEngine::UIElements::UIR::JobMerger* const& __cordl_internal_get_m_DependencyMerger() const;

  constexpr ::UnityEngine::UIElements::UIR::JobMerger*& __cordl_internal_get_m_DependencyMerger();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const& __cordl_internal_get_m_Fork() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*& __cordl_internal_get_m_Fork();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const& __cordl_internal_get_m_JobDependentFork() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*& __cordl_internal_get_m_JobDependentFork();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const& __cordl_internal_get_m_JobDependentWork() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*& __cordl_internal_get_m_JobDependentWork();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const& __cordl_internal_get_m_JobDependentWorkThenFork() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*& __cordl_internal_get_m_JobDependentWorkThenFork();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const& __cordl_internal_get_m_Work() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*& __cordl_internal_get_m_Work();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const& __cordl_internal_get_m_WorkThenFork() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*& __cordl_internal_get_m_WorkThenFork();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Dependencies(::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>* value);

  constexpr void __cordl_internal_set_m_DependencyMerger(::UnityEngine::UIElements::UIR::JobMerger* value);

  constexpr void __cordl_internal_set_m_Fork(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value);

  constexpr void __cordl_internal_set_m_JobDependentFork(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value);

  constexpr void __cordl_internal_set_m_JobDependentWork(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value);

  constexpr void __cordl_internal_set_m_JobDependentWorkThenFork(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value);

  constexpr void __cordl_internal_set_m_Work(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value);

  constexpr void __cordl_internal_set_m_WorkThenFork(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value);

  /// @brief Method .ctor, addr 0x6b13594, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposed, addr 0x6b134e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposed, addr 0x6b134ec, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationDeferrer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationDeferrer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGenerationDeferrer(MeshGenerationDeferrer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationDeferrer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGenerationDeferrer(MeshGenerationDeferrer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5311 };

  /// @brief Field m_Fork, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* ___m_Fork;

  /// @brief Field m_WorkThenFork, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* ___m_WorkThenFork;

  /// @brief Field m_Work, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* ___m_Work;

  /// @brief Field m_JobDependentFork, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* ___m_JobDependentFork;

  /// @brief Field m_JobDependentWorkThenFork, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* ___m_JobDependentWorkThenFork;

  /// @brief Field m_JobDependentWork, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* ___m_JobDependentWork;

  /// @brief Field m_Dependencies, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>* ___m_Dependencies;

  /// @brief Field m_DependencyMerger, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::JobMerger* ___m_DependencyMerger;

  /// @brief Field <disposed>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_Fork) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_WorkThenFork) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_Work) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_JobDependentFork) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_JobDependentWorkThenFork) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_JobDependentWork) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_Dependencies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ___m_DependencyMerger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, ____disposed_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*, "UnityEngine.UIElements.UIR", "MeshGenerationDeferrer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo, "UnityEngine.UIElements.UIR", "MeshGenerationDeferrer/CallbackInfo");
