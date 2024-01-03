#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CheckCatalogsOperation)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::AddressableAssets {
class __AddressablesImpl__ResourceLocatorInfo;
}
namespace UnityEngine::AddressableAssets {
class __CheckCatalogsOperation____c;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class CheckCatalogsOperation;
}
namespace UnityEngine::AddressableAssets {
class __CheckCatalogsOperation____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::CheckCatalogsOperation);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14091))
// CS Name: ::CheckCatalogsOperation::<>c*
class CORDL_TYPE __CheckCatalogsOperation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* __9__5_0;

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c* value);

  static inline ::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* getStaticF___9__5_0();

  static inline ::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a25158, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__5_0, addr 0x2a25160, size 0x9c, virtual false, abstract: false, final false
  inline bool _Start_b__5_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);

  // Ctor Parameters [CppParam { name: "", ty: "__CheckCatalogsOperation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CheckCatalogsOperation____c(__CheckCatalogsOperation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CheckCatalogsOperation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CheckCatalogsOperation____c(__CheckCatalogsOperation____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CheckCatalogsOperation____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Type: UnityEngine.AddressableAssets::CheckCatalogsOperation
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 795 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3835), inst: 275 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 397 }), TypeDefinitionIndex(TypeDefinitionIndex(14033)),
// TypeDefinitionIndex(TypeDefinitionIndex(14032)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 792 }), TypeDefinitionIndex(TypeDefinitionIndex(3843)),
// TypeDefinitionIndex(TypeDefinitionIndex(14034))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14092)) CS Name: ::UnityEngine.AddressableAssets::CheckCatalogsOperation*
class CORDL_TYPE CheckCatalogsOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::List_1<::StringW>*> {
public:
  // Declarations
  using __c = ::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c;

  /// @brief Field m_Addressables, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Addressables, put = __set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_LocalHashes, offset 0x90, size 0x8
  __declspec(property(get = __get_m_LocalHashes, put = __set_m_LocalHashes))::System::Collections::Generic::List_1<::StringW>* m_LocalHashes;

  /// @brief Field m_LocatorInfos, offset 0x98, size 0x8
  __declspec(property(get = __get_m_LocatorInfos,
                      put = __set_m_LocatorInfos))::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* m_LocatorInfos;

  /// @brief Field m_DepOp, offset 0xa0, size 0x20
  __declspec(property(get = __get_m_DepOp, put = __set_m_DepOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __get_m_Addressables() const;

  constexpr void __set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_LocalHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_LocalHashes() const;

  constexpr void __set_m_LocalHashes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*& __get_m_LocatorInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>*> const&
  __get_m_LocatorInfos() const;

  constexpr void __set_m_LocatorInfos(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __get_m_DepOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __get_m_DepOp() const;

  constexpr void __set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  static inline ::UnityEngine::AddressableAssets::CheckCatalogsOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method .ctor, addr 0x2a20ed4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method Start, addr 0x2a20f30, size 0x5f4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*>
  Start(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* locatorInfos);

  /// @brief Method InvokeWaitForCompletion, addr 0x2a24770, size 0x134, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Destroy, addr 0x2a248a4, size 0x70, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method GetDependencies, addr 0x2a24914, size 0x124, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);

  /// @brief Method ProcessDependentOpResults, addr 0x2a24a38, size 0x624, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>*
  ProcessDependentOpResults(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* results,
                            ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* locatorInfos,
                            ::System::Collections::Generic::List_1<::StringW>* localHashes, ByRef<::StringW> errorString, ByRef<bool> success);

  /// @brief Method Execute, addr 0x2a2505c, size 0x98, virtual true, abstract: false, final false
  inline void Execute();

  // Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CheckCatalogsOperation(CheckCatalogsOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CheckCatalogsOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CheckCatalogsOperation(CheckCatalogsOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CheckCatalogsOperation();

public:
  /// @brief Field m_Addressables, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_LocalHashes, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_LocalHashes;

  /// @brief Field m_LocatorInfos, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::__AddressablesImpl__ResourceLocatorInfo*>* ___m_LocatorInfos;

  /// @brief Field m_DepOp, offset: 0xa0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::CheckCatalogsOperation, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_Addressables) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_LocalHashes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_LocatorInfos) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::CheckCatalogsOperation, ___m_DepOp) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::CheckCatalogsOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::CheckCatalogsOperation*, "UnityEngine.AddressableAssets", "CheckCatalogsOperation");
NEED_NO_BOX(::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::__CheckCatalogsOperation____c*, "UnityEngine.AddressableAssets", "CheckCatalogsOperation/<>c");
