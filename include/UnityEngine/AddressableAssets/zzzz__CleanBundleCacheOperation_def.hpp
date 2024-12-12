#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/CleanBundleCacheOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CleanBundleCacheOperation)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class CleanBundleCacheOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::CleanBundleCacheOperation);
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>,
// UnityEngine.ResourceManagement.IUpdateReceiver
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.CleanBundleCacheOperation
class CORDL_TYPE CleanBundleCacheOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_Addressables, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_BaseCachePath, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BaseCachePath, put = __cordl_internal_set_m_BaseCachePath)) ::StringW m_BaseCachePath;

  /// @brief Field m_CacheDirsForRemoval, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheDirsForRemoval, put = __cordl_internal_set_m_CacheDirsForRemoval)) ::System::Collections::Generic::List_1<::StringW>* m_CacheDirsForRemoval;

  /// @brief Field m_DepOp, offset 0xa0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      m_DepOp;

  /// @brief Field m_EnumerationThread, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumerationThread, put = __cordl_internal_set_m_EnumerationThread)) ::System::Threading::Thread* m_EnumerationThread;

  /// @brief Field m_UseMultiThreading, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseMultiThreading, put = __cordl_internal_set_m_UseMultiThreading)) bool m_UseMultiThreading;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  /// @brief Method CompleteInternal, addr 0x44f1fb4, size 0x90, virtual false, abstract: false, final false
  inline void CompleteInternal(bool result, bool success, ::StringW errorMsg);

  /// @brief Method Destroy, addr 0x44f22a8, size 0x7c, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method DetermineCacheDirsNotInUse, addr 0x44f2f34, size 0x40c, virtual false, abstract: false, final false
  inline void DetermineCacheDirsNotInUse(::System::Collections::Generic::HashSet_1<::StringW>* cacheDirsInUse);

  /// @brief Method DetermineCacheDirsNotInUse, addr 0x44f3380, size 0x84, virtual false, abstract: false, final false
  inline void DetermineCacheDirsNotInUse(::System::Object* data);

  /// @brief Method Execute, addr 0x44f2440, size 0x1b8, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetCacheDirsInUse, addr 0x44f25f8, size 0x93c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>*
  GetCacheDirsInUse(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* catalogOps);

  /// @brief Method GetDependencies, addr 0x44f2324, size 0x11c, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);

  /// @brief Method InvokeWaitForCompletion, addr 0x44f2044, size 0xd0, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::CleanBundleCacheOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa, bool forceSingleThreading);

  /// @brief Method RemoveCacheEntries, addr 0x44f2114, size 0x194, virtual false, abstract: false, final false
  inline void RemoveCacheEntries();

  /// @brief Method Start, addr 0x44ef6ac, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  Start(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
            depOp);

  /// @brief Method UnityEngine.ResourceManagement.IUpdateReceiver.Update, addr 0x44f3340, size 0x40, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_m_Addressables() const;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::StringW const& __cordl_internal_get_m_BaseCachePath() const;

  constexpr ::StringW& __cordl_internal_get_m_BaseCachePath();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_CacheDirsForRemoval() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_CacheDirsForRemoval();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_DepOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_m_DepOp();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get_m_EnumerationThread() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get_m_EnumerationThread();

  constexpr bool const& __cordl_internal_get_m_UseMultiThreading() const;

  constexpr bool& __cordl_internal_get_m_UseMultiThreading();

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_BaseCachePath(::StringW value);

  constexpr void __cordl_internal_set_m_CacheDirsForRemoval(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr void __cordl_internal_set_m_EnumerationThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set_m_UseMultiThreading(bool value);

  /// @brief Method .ctor, addr 0x44ef604, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa, bool forceSingleThreading);

  /// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CleanBundleCacheOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CleanBundleCacheOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CleanBundleCacheOperation(CleanBundleCacheOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CleanBundleCacheOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CleanBundleCacheOperation(CleanBundleCacheOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16186 };

  /// @brief Field m_Addressables, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_DepOp, offset: 0xa0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  /// @brief Field m_CacheDirsForRemoval, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_CacheDirsForRemoval;

  /// @brief Field m_EnumerationThread, offset: 0xc8, size: 0x8, def value: None
  ::System::Threading::Thread* ___m_EnumerationThread;

  /// @brief Field m_BaseCachePath, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___m_BaseCachePath;

  /// @brief Field m_UseMultiThreading, offset: 0xd8, size: 0x1, def value: None
  bool ___m_UseMultiThreading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_Addressables) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_DepOp) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_CacheDirsForRemoval) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_EnumerationThread) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_BaseCachePath) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_UseMultiThreading) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::CleanBundleCacheOperation, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::CleanBundleCacheOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::CleanBundleCacheOperation*, "UnityEngine.AddressableAssets", "CleanBundleCacheOperation");
