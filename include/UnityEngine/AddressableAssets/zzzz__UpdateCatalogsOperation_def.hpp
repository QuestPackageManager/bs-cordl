#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/UpdateCatalogsOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateCatalogsOperation)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::AddressableAssets {
class ResourceLocatorInfo;
}
namespace UnityEngine::AddressableAssets {
class UpdateCatalogsOperation___c;
}
namespace UnityEngine::AddressableAssets {
class UpdateCatalogsOperation___c__DisplayClass11_0;
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
class UpdateCatalogsOperation;
}
namespace UnityEngine::AddressableAssets {
class UpdateCatalogsOperation___c;
}
namespace UnityEngine::AddressableAssets {
class UpdateCatalogsOperation___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::UpdateCatalogsOperation);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0);
// Dependencies System.Object
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c
class CORDL_TYPE UpdateCatalogsOperation___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* __9__6_0;

  static inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* New_ctor();

  /// @brief Method <Start>b__6_0, addr 0x44f7174, size 0x9c, virtual false, abstract: false, final false
  inline bool _Start_b__6_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);

  /// @brief Method .ctor, addr 0x44f716c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateCatalogsOperation___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateCatalogsOperation___c(UpdateCatalogsOperation___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateCatalogsOperation___c(UpdateCatalogsOperation___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16190 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Dependencies System.Object
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.UpdateCatalogsOperation/<>c__DisplayClass11_0
class CORDL_TYPE UpdateCatalogsOperation___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* __4__this;

  /// @brief Field catalogs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_catalogs,
                      put = __cordl_internal_set_catalogs)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* catalogs;

  static inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0* New_ctor();

  /// @brief Method <OnCleanCacheCompleted>b__0, addr 0x44f7210, size 0x188, virtual false, abstract: false, final false
  inline void _OnCleanCacheCompleted_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> obj);

  constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::AddressableAssets::UpdateCatalogsOperation*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* const& __cordl_internal_get_catalogs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*& __cordl_internal_get_catalogs();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::UpdateCatalogsOperation* value);

  constexpr void __cordl_internal_set_catalogs(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* value);

  /// @brief Method .ctor, addr 0x44f7108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateCatalogsOperation___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateCatalogsOperation___c__DisplayClass11_0(UpdateCatalogsOperation___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateCatalogsOperation___c__DisplayClass11_0(UpdateCatalogsOperation___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16191 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* _____4__this;

  /// @brief Field catalogs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* ___catalogs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0, ___catalogs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.UpdateCatalogsOperation
class CORDL_TYPE UpdateCatalogsOperation
    : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> {
public:
  // Declarations
  using __c = ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c;

  using __c__DisplayClass11_0 = ::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0;

  /// @brief Field m_Addressables, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_AutoCleanBundleCache, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutoCleanBundleCache, put = __cordl_internal_set_m_AutoCleanBundleCache)) bool m_AutoCleanBundleCache;

  /// @brief Field m_CleanCacheOp, offset 0xc8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_CleanCacheOp, put = __cordl_internal_set_m_CleanCacheOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
      m_CleanCacheOp;

  /// @brief Field m_DepOp, offset 0xa8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      m_DepOp;

  /// @brief Field m_LocatorInfos, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocatorInfos,
                      put = __cordl_internal_set_m_LocatorInfos)) ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* m_LocatorInfos;

  /// @brief Method Destroy, addr 0x44f6824, size 0x74, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Execute, addr 0x44f69b8, size 0x67c, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetDependencies, addr 0x44f6898, size 0x120, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);

  /// @brief Method InvokeWaitForCompletion, addr 0x44f6674, size 0x1b0, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::UpdateCatalogsOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method OnCleanCacheCompleted, addr 0x44f7034, size 0xd4, virtual false, abstract: false, final false
  inline void OnCleanCacheCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> handle,
                                    ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* catalogs);

  /// @brief Method Start, addr 0x44f1980, size 0x6e8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>
  Start(::System::Collections::Generic::IEnumerable_1<::StringW>* catalogIds, bool autoCleanBundleCache);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_m_Addressables() const;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr bool const& __cordl_internal_get_m_AutoCleanBundleCache() const;

  constexpr bool& __cordl_internal_get_m_AutoCleanBundleCache();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> const& __cordl_internal_get_m_CleanCacheOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>& __cordl_internal_get_m_CleanCacheOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_DepOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_m_DepOp();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* const& __cordl_internal_get_m_LocatorInfos() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>*& __cordl_internal_get_m_LocatorInfos();

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_AutoCleanBundleCache(bool value);

  constexpr void __cordl_internal_set_m_CleanCacheOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> value);

  constexpr void __cordl_internal_set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr void __cordl_internal_set_m_LocatorInfos(::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* value);

  /// @brief Method .ctor, addr 0x44f1924, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateCatalogsOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateCatalogsOperation(UpdateCatalogsOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateCatalogsOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateCatalogsOperation(UpdateCatalogsOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16192 };

  /// @brief Field m_Addressables, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_LocatorInfos, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocatorInfo*>* ___m_LocatorInfos;

  /// @brief Field m_DepOp, offset: 0xa8, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  /// @brief Field m_CleanCacheOp, offset: 0xc8, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ___m_CleanCacheOp;

  /// @brief Field m_AutoCleanBundleCache, offset: 0xe8, size: 0x1, def value: None
  bool ___m_AutoCleanBundleCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation, ___m_Addressables) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation, ___m_LocatorInfos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation, ___m_DepOp) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation, ___m_CleanCacheOp) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::UpdateCatalogsOperation, ___m_AutoCleanBundleCache) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::UpdateCatalogsOperation, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::UpdateCatalogsOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::UpdateCatalogsOperation*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation");
NEED_NO_BOX(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation/<>c");
NEED_NO_BOX(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::UpdateCatalogsOperation___c__DisplayClass11_0*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation/<>c__DisplayClass11_0");
