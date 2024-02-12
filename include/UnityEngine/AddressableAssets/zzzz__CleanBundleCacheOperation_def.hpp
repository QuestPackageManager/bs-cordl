#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
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
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class CleanBundleCacheOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::CleanBundleCacheOperation);
// Type: UnityEngine.AddressableAssets::CleanBundleCacheOperation
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 201, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3834)), TypeDefinitionIndex(TypeDefinitionIndex(14045)), TypeDefinitionIndex(TypeDefinitionIndex(14046)),
// TypeDefinitionIndex(TypeDefinitionIndex(14047)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3834), inst: 273 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(14045), inst: 77 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14046), inst: 793 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(14106)) CS Name:
// ::UnityEngine.AddressableAssets::CleanBundleCacheOperation*
class CORDL_TYPE CleanBundleCacheOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_Addressables, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_DepOp, offset 0x90, size 0x20
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;

  /// @brief Field m_CacheDirsForRemoval, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheDirsForRemoval, put = __cordl_internal_set_m_CacheDirsForRemoval))::System::Collections::Generic::List_1<::StringW>* m_CacheDirsForRemoval;

  /// @brief Field m_EnumerationThread, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumerationThread, put = __cordl_internal_set_m_EnumerationThread))::System::Threading::Thread* m_EnumerationThread;

  /// @brief Field m_BaseCachePath, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BaseCachePath, put = __cordl_internal_set_m_BaseCachePath))::StringW m_BaseCachePath;

  /// @brief Field m_UseMultiThreading, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseMultiThreading, put = __cordl_internal_set_m_UseMultiThreading)) bool m_UseMultiThreading;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_m_DepOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_DepOp() const;

  constexpr void __cordl_internal_set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_CacheDirsForRemoval();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_CacheDirsForRemoval() const;

  constexpr void __cordl_internal_set_m_CacheDirsForRemoval(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Threading::Thread*& __cordl_internal_get_m_EnumerationThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get_m_EnumerationThread() const;

  constexpr void __cordl_internal_set_m_EnumerationThread(::System::Threading::Thread* value);

  constexpr ::StringW& __cordl_internal_get_m_BaseCachePath();

  constexpr ::StringW const& __cordl_internal_get_m_BaseCachePath() const;

  constexpr void __cordl_internal_set_m_BaseCachePath(::StringW value);

  constexpr bool& __cordl_internal_get_m_UseMultiThreading();

  constexpr bool const& __cordl_internal_get_m_UseMultiThreading() const;

  constexpr void __cordl_internal_set_m_UseMultiThreading(bool value);

  static inline ::UnityEngine::AddressableAssets::CleanBundleCacheOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa, bool forceSingleThreading);

  /// @brief Method .ctor, addr 0x2a253b4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa, bool forceSingleThreading);

  /// @brief Method Start, addr 0x2a25438, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
  Start(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
            depOp);

  /// @brief Method CompleteInternal, addr 0x2a27d68, size 0x90, virtual false, abstract: false, final false
  inline void CompleteInternal(bool result, bool success, ::StringW errorMsg);

  /// @brief Method InvokeWaitForCompletion, addr 0x2a27df8, size 0xd0, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Destroy, addr 0x2a2805c, size 0x7c, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method GetDependencies, addr 0x2a280d8, size 0x124, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);

  /// @brief Method Execute, addr 0x2a281fc, size 0x1c0, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method UnityEngine.ResourceManagement.IUpdateReceiver.Update, addr 0x2a290ec, size 0x40, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime);

  /// @brief Method RemoveCacheEntries, addr 0x2a27ec8, size 0x194, virtual false, abstract: false, final false
  inline void RemoveCacheEntries();

  /// @brief Method DetermineCacheDirsNotInUse, addr 0x2a2912c, size 0x84, virtual false, abstract: false, final false
  inline void DetermineCacheDirsNotInUse(::System::Object* data);

  /// @brief Method DetermineCacheDirsNotInUse, addr 0x2a28cec, size 0x400, virtual false, abstract: false, final false
  inline void DetermineCacheDirsNotInUse(::System::Collections::Generic::HashSet_1<::StringW>* cacheDirsInUse);

  /// @brief Method GetCacheDirsInUse, addr 0x2a283bc, size 0x930, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>*
  GetCacheDirsInUse(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* catalogOps);

  // Ctor Parameters [CppParam { name: "", ty: "CleanBundleCacheOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CleanBundleCacheOperation(CleanBundleCacheOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CleanBundleCacheOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CleanBundleCacheOperation(CleanBundleCacheOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CleanBundleCacheOperation();

public:
  /// @brief Field m_Addressables, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_DepOp, offset: 0x90, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  /// @brief Field m_CacheDirsForRemoval, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_CacheDirsForRemoval;

  /// @brief Field m_EnumerationThread, offset: 0xb8, size: 0x8, def value: None
  ::System::Threading::Thread* ___m_EnumerationThread;

  /// @brief Field m_BaseCachePath, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___m_BaseCachePath;

  /// @brief Field m_UseMultiThreading, offset: 0xc8, size: 0x1, def value: None
  bool ___m_UseMultiThreading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::CleanBundleCacheOperation, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_Addressables) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_DepOp) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_CacheDirsForRemoval) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_EnumerationThread) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_BaseCachePath) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CleanBundleCacheOperation, ___m_UseMultiThreading) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::CleanBundleCacheOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::CleanBundleCacheOperation*, "UnityEngine.AddressableAssets", "CleanBundleCacheOperation");
