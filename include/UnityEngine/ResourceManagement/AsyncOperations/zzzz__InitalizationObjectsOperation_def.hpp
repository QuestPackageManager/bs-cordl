#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/InitalizationObjectsOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitalizationObjectsOperation)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::AddressableAssets::Initialization {
class ResourceManagerRuntimeData;
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
namespace UnityEngine::ResourceManagement::AsyncOperations {
class InitalizationObjectsOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation);
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
class CORDL_TYPE InitalizationObjectsOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  /// @brief Field m_Addressables, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_DepOp, offset 0xc0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      m_DepOp;

  /// @brief Field m_RtdOp, offset 0x98, size 0x20
  __declspec(property(
      get = __cordl_internal_get_m_RtdOp,
      put = __cordl_internal_set_m_RtdOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>
      m_RtdOp;

  /// @brief Method Execute, addr 0x44dd910, size 0x650, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x44dd338, size 0x34, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> rtdOp,
                   ::UnityEngine::AddressableAssets::AddressablesImpl* addressables);

  /// @brief Method InvokeWaitForCompletion, addr 0x44dd770, size 0x1a0, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method LogRuntimeWarnings, addr 0x44dd43c, size 0x204, virtual false, abstract: false, final false
  inline bool LogRuntimeWarnings(::StringW pathToBuildLogs);

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* New_ctor();

  /// @brief Method <Execute>b__8_0, addr 0x44de050, size 0x1ac, virtual false, abstract: false, final false
  inline void _Execute_b__8_0(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          obj);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_m_Addressables() const;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_DepOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_m_DepOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> const&
  __cordl_internal_get_m_RtdOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>& __cordl_internal_get_m_RtdOp();

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr void
  __cordl_internal_set_m_RtdOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> value);

  /// @brief Method .ctor, addr 0x44de008, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DebugName, addr 0x44dd3fc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitalizationObjectsOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitalizationObjectsOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitalizationObjectsOperation(InitalizationObjectsOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitalizationObjectsOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitalizationObjectsOperation(InitalizationObjectsOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16145 };

  /// @brief Field m_RtdOp, offset: 0x98, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> ___m_RtdOp;

  /// @brief Field m_Addressables, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_DepOp, offset: 0xc0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, ___m_RtdOp) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, ___m_Addressables) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, ___m_DepOp) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "InitalizationObjectsOperation");
