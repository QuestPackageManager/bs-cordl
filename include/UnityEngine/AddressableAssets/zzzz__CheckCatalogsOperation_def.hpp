#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/CheckCatalogsOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CheckCatalogsOperation)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::AddressableAssets {
class CheckCatalogsOperation___c;
}
namespace UnityEngine::AddressableAssets {
class ResourceLocatorInfo;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class CheckCatalogsOperation;
}
namespace UnityEngine::AddressableAssets {
class CheckCatalogsOperation___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::CheckCatalogsOperation);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::CheckCatalogsOperation___c);
// Dependencies System.Object
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.CheckCatalogsOperation/<>c
class CORDL_TYPE CheckCatalogsOperation___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* __9__5_0;

  static inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* New_ctor();

  /// @brief Method <Start>b__5_0, addr 0x62434a8, size 0x8c, virtual false, abstract: false, final false
  inline bool _Start_b__5_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);

  /// @brief Method .ctor, addr 0x62434a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::CheckCatalogsOperation___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CheckCatalogsOperation___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CheckCatalogsOperation___c(CheckCatalogsOperation___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CheckCatalogsOperation___c(CheckCatalogsOperation___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::CheckCatalogsOperation___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.CheckCatalogsOperation
class CORDL_TYPE CheckCatalogsOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::List_1<::StringW>*> {
public:
  // Declarations
  using __c = ::UnityEngine::AddressableAssets::CheckCatalogsOperation___c;

  /// @brief Field m_Addressables, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_DepOp, offset 0xb0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      m_DepOp;

  /// @brief Field m_LocalHashes, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalHashes, put = __cordl_internal_set_m_LocalHashes)) ::System::Collections::Generic::List_1<::StringW>* m_LocalHashes;

  /// @brief Field m_LocatorInfos, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocatorInfos,
                      put = __cordl_internal_set_m_LocatorInfos)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* m_LocatorInfos;

  /// @brief Method Destroy, addr 0x6242c90, size 0x4c, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Execute, addr 0x62433a4, size 0xac, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetDependencies, addr 0x6242cdc, size 0xe4, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);

  /// @brief Method InvokeWaitForCompletion, addr 0x6242b24, size 0x16c, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method ProcessDependentOpResults, addr 0x6242dc0, size 0x5e4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>*
  ProcessDependentOpResults(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* results,
                            ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* locatorInfos,
                            ::System::Collections::Generic::List_1<::StringW>* localHashes, ::ByRef<::StringW> errorString, ::ByRef<bool> success);

  /// @brief Method Start, addr 0x623f4d8, size 0x590, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
  Start(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* locatorInfos);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_m_Addressables() const;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_DepOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_m_DepOp();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_LocalHashes() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_LocalHashes();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* const& __cordl_internal_get_m_LocatorInfos() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*& __cordl_internal_get_m_LocatorInfos();

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr void __cordl_internal_set_m_LocalHashes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_LocatorInfos(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* value);

  /// @brief Method .ctor, addr 0x623f478, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CheckCatalogsOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CheckCatalogsOperation(CheckCatalogsOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CheckCatalogsOperation(CheckCatalogsOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19519 };

  /// @brief Field m_Addressables, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_LocalHashes, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_LocalHashes;

  /// @brief Field m_LocatorInfos, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* ___m_LocatorInfos;

  /// @brief Field m_DepOp, offset: 0xb0, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_Addressables) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_LocalHashes) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_LocatorInfos) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_DepOp) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::CheckCatalogsOperation, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::CheckCatalogsOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::CheckCatalogsOperation*, "UnityEngine.AddressableAssets", "CheckCatalogsOperation");
NEED_NO_BOX(::UnityEngine::AddressableAssets::CheckCatalogsOperation___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::CheckCatalogsOperation___c*, "UnityEngine.AddressableAssets", "CheckCatalogsOperation/<>c");
