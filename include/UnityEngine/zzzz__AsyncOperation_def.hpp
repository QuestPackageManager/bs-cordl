#pragma once
// IWYU pragma private; include "UnityEngine/AsyncOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperation)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AsyncOperation_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class AsyncOperation_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::AsyncOperation*);
MARK_REF_T(::UnityEngine::AsyncOperation_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AsyncOperation*, "UnityEngine", "AsyncOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::AsyncOperation_BindingsMarshaller*, "UnityEngine", "AsyncOperation/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AsyncOperation/BindingsMarshaller
class CORDL_TYPE AsyncOperation_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x6ad6748, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x6ad6e90, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::AsyncOperation* asyncOperation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperation_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperation_BindingsMarshaller(AsyncOperation_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperation_BindingsMarshaller(AsyncOperation_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AsyncOperation_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, UnityEngine.YieldInstruction
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AsyncOperation
class CORDL_TYPE AsyncOperation : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::AsyncOperation_BindingsMarshaller;

  __declspec(property(get = get_allowSceneActivation, put = set_allowSceneActivation)) bool allowSceneActivation;

  __declspec(property(get = get_isDone)) bool isDone;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_completeCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_completeCallback, put = __cordl_internal_set_m_completeCallback)) ::System::Action_1<::UnityEngine::AsyncOperation*>* m_completeCallback;

  __declspec(property(put = set_priority)) int32_t priority;

  __declspec(property(get = get_progress)) float_t progress;

  /// @brief Method Finalize, addr 0x6ad6c78, size 0x74, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InternalDestroy, addr 0x6ad6914, size 0x3c, virtual false, abstract: false, final false
  static inline void InternalDestroy(::System::IntPtr ptr);

  /// @brief Method InternalSetManagedObject, addr 0x6ad6950, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetManagedObject(::System::IntPtr ptr, ::UnityEngine::AsyncOperation* self);

  /// @brief Method InvokeCompletionEvent, addr 0x6ad6cec, size 0x30, virtual false, abstract: false, final false
  inline void InvokeCompletionEvent();

  static inline ::UnityEngine::AsyncOperation* New_ctor();

  static inline ::UnityEngine::AsyncOperation* New_ctor(::System::IntPtr ptr);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_m_completeCallback() const;

  constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_m_completeCallback();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_completeCallback(::System::Action_1<::UnityEngine::AsyncOperation*>* value);

  /// @brief Method .ctor, addr 0x6ad6994, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6ad58b8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method add_completed, addr 0x6ad6d1c, size 0xd4, virtual false, abstract: false, final false
  inline void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value);

  /// @brief Method get_allowSceneActivation, addr 0x6ad6b50, size 0x50, virtual false, abstract: false, final false
  inline bool get_allowSceneActivation();

  /// @brief Method get_allowSceneActivation_Injected, addr 0x6ad6ba0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowSceneActivation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isDone, addr 0x6ad699c, size 0x50, virtual false, abstract: false, final false
  inline bool get_isDone();

  /// @brief Method get_isDone_Injected, addr 0x6ad69ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isDone_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_progress, addr 0x6ad6a28, size 0x50, virtual false, abstract: false, final false
  inline float_t get_progress();

  /// @brief Method get_progress_Injected, addr 0x6ad6a78, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_progress_Injected(::System::IntPtr _unity_self);

  /// @brief Method remove_completed, addr 0x6ad6df0, size 0xa0, virtual false, abstract: false, final false
  inline void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value);

  /// @brief Method set_allowSceneActivation, addr 0x6ad6bdc, size 0x58, virtual false, abstract: false, final false
  inline void set_allowSceneActivation(bool value);

  /// @brief Method set_allowSceneActivation_Injected, addr 0x6ad6c34, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowSceneActivation_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_priority, addr 0x6ad6ab4, size 0x58, virtual false, abstract: false, final false
  inline void set_priority(int32_t value);

  /// @brief Method set_priority_Injected, addr 0x6ad6b0c, size 0x44, virtual false, abstract: false, final false
  static inline void set_priority_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperation(AsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperation(AsyncOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10273 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_completeCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::AsyncOperation*>* ___m_completeCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AsyncOperation, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AsyncOperation, ___m_completeCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AsyncOperation) == 0x20, "Size mismatch!");

} // namespace UnityEngine
