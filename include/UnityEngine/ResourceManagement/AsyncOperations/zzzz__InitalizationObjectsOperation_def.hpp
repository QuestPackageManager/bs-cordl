#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__ResourceManagerRuntimeData_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitalizationObjectsOperation)
namespace UnityEngine::AddressableAssets::Initialization {
class ResourceManagerRuntimeData;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class InitalizationObjectsOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation);
// Type: UnityEngine.ResourceManagement.AsyncOperations::InitalizationObjectsOperation
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14034)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 792 }), GenericInstantiation(GenericInstantiation
// { tdi: TypeDefinitionIndex(14033), inst: 858 }), TypeDefinitionIndex(TypeDefinitionIndex(14125)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 105 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3835), inst: 275 }), TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(3835)),
// TypeDefinitionIndex(TypeDefinitionIndex(14033))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14047)) CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::InitalizationObjectsOperation*
class CORDL_TYPE InitalizationObjectsOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_RtdOp, offset 0x88, size 0x20
  __declspec(
      property(get = __get_m_RtdOp,
               put = __set_m_RtdOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_RtdOp;

  /// @brief Field m_Addressables, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_Addressables, put = __set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_DepOp, offset 0xb0, size 0x20
  __declspec(property(get = __get_m_DepOp, put = __set_m_DepOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>& __get_m_RtdOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> const& __get_m_RtdOp() const;

  constexpr void __set_m_RtdOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> value);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __get_m_Addressables() const;

  constexpr void __set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __get_m_DepOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __get_m_DepOp() const;

  constexpr void __set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  /// @brief Method Init, addr 0x2a0f148, size 0x34, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> rtdOp,
                   ::UnityEngine::AddressableAssets::AddressablesImpl* addressables);

  /// @brief Method get_DebugName, addr 0x2a0f218, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method LogRuntimeWarnings, addr 0x2a0f258, size 0x1fc, virtual false, abstract: false, final false
  inline bool LogRuntimeWarnings(::StringW pathToBuildLogs);

  /// @brief Method InvokeWaitForCompletion, addr 0x2a0f584, size 0x1a0, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Execute, addr 0x2a0f724, size 0x6a0, virtual true, abstract: false, final false
  inline void Execute();

  static inline ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* New_ctor();

  /// @brief Method .ctor, addr 0x2a0fec0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Execute>b__8_0, addr 0x2a0ff08, size 0x1ac, virtual false, abstract: false, final false
  inline void _Execute_b__8_0(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          obj);

  // Ctor Parameters [CppParam { name: "", ty: "InitalizationObjectsOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitalizationObjectsOperation(InitalizationObjectsOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitalizationObjectsOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitalizationObjectsOperation(InitalizationObjectsOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitalizationObjectsOperation();

public:
  /// @brief Field m_RtdOp, offset: 0x88, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> ___m_RtdOp;

  /// @brief Field m_Addressables, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_DepOp, offset: 0xb0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, ___m_RtdOp) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, ___m_Addressables) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation, ___m_DepOp) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "InitalizationObjectsOperation");
