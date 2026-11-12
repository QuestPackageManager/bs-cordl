#pragma once
// IWYU pragma private; include "AddressablesInternalBridge/Runtime/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace AddressablesInternalBridge::Runtime {
class CatalogLocationData;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c__DisplayClass2_0;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c__DisplayClass4_0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
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
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationBase;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace AddressablesInternalBridge::Runtime {
class Extensions;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c__DisplayClass2_0;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::AddressablesInternalBridge::Runtime::Extensions*);
MARK_REF_T(::AddressablesInternalBridge::Runtime::Extensions___c*);
MARK_REF_T(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*);
MARK_REF_T(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::AddressablesInternalBridge::Runtime::Extensions*, "AddressablesInternalBridge.Runtime", "Extensions");
DEFINE_IL2CPP_CLASS(::AddressablesInternalBridge::Runtime::Extensions___c*, "AddressablesInternalBridge.Runtime", "Extensions/<>c");
DEFINE_IL2CPP_CLASS(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0*, "AddressablesInternalBridge.Runtime", "Extensions/<>c__DisplayClass2_0");
DEFINE_IL2CPP_CLASS(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0*, "AddressablesInternalBridge.Runtime", "Extensions/<>c__DisplayClass4_0");
// [CompilerGenerated]
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.Extensions/<>c
class CORDL_TYPE Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::AddressablesInternalBridge::Runtime::Extensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_1,
                      put = setStaticF___9__1_1)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* __9__1_1;

  static inline ::AddressablesInternalBridge::Runtime::Extensions___c* New_ctor();

  /// @brief Method <GetUpdateableCatalogLocationDatas>b__1_0, addr 0x68b0834, size 0x14, virtual false, abstract: false, final false
  inline bool _GetUpdateableCatalogLocationDatas_b__1_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo);

  /// @brief Method <GetUpdateableCatalogLocationDatas>b__1_1, addr 0x68b09f4, size 0xec, virtual false, abstract: false, final false
  inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* _GetUpdateableCatalogLocationDatas_b__1_1(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo);

  /// @brief Method .ctor, addr 0x68b0830, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::AddressablesInternalBridge::Runtime::Extensions___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* getStaticF___9__1_0();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* getStaticF___9__1_1();

  static inline void setStaticF___9(::AddressablesInternalBridge::Runtime::Extensions___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* value);

  static inline void setStaticF___9__1_1(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c(Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c(Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AddressablesInternalBridge::Runtime::Extensions___c) == 0x10, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime
// [CompilerGenerated]
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.Extensions/<>c__DisplayClass2_0
class CORDL_TYPE Extensions___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field taskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource, put = __cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  static inline ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0* New_ctor();

  /// @brief Method <WaitForUnloadingAssetBundlesAsync>b__0, addr 0x68b0c04, size 0x58, virtual false, abstract: false, final false
  inline void _WaitForUnloadingAssetBundlesAsync_b__0(::UnityEngine::AsyncOperation* _);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource();

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x68aff34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__DisplayClass2_0(Extensions___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__DisplayClass2_0(Extensions___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20097 };

  /// @brief Field taskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0, ___taskSource) == 0x10, "Offset mismatch!");

static_assert(sizeof(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime
// [CompilerGenerated]
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.Extensions/<>c__DisplayClass4_0
class CORDL_TYPE Extensions___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field addressables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_addressables, put = __cordl_internal_set_addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl* addressables;

  /// @brief Field cachedCatalogLocation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedCatalogLocation,
                      put = __cordl_internal_set_cachedCatalogLocation)) ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* cachedCatalogLocation;

  /// @brief Field remoteHashLocation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_remoteHashLocation,
                      put = __cordl_internal_set_remoteHashLocation)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation;

  static inline ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0* New_ctor();

  /// @brief Method <LoadCachedContentCatalogOrNull>b__1, addr 0x68b0e08, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  _LoadCachedContentCatalogOrNull_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _);

  /// @brief Method <LoadCachedContentCatalogOrNull>g__LoadCatalog|0, addr 0x68b05f4, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  _LoadCachedContentCatalogOrNull_g__LoadCatalog_0();

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_addressables() const;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_addressables();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* const& __cordl_internal_get_cachedCatalogLocation() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*& __cordl_internal_get_cachedCatalogLocation();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get_remoteHashLocation() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_remoteHashLocation();

  constexpr void __cordl_internal_set_addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_cachedCatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* value);

  constexpr void __cordl_internal_set_remoteHashLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x68b0508, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__DisplayClass4_0(Extensions___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__DisplayClass4_0(Extensions___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20098 };

  /// @brief Field addressables, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___addressables;

  /// @brief Field cachedCatalogLocation, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* ___cachedCatalogLocation;

  /// @brief Field remoteHashLocation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___remoteHashLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0, ___addressables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0, ___cachedCatalogLocation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0, ___remoteHashLocation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0) == 0x28, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::AddressablesInternalBridge::Runtime::Extensions___c;

  using __c__DisplayClass2_0 = ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass2_0;

  using __c__DisplayClass4_0 = ::AddressablesInternalBridge::Runtime::Extensions___c__DisplayClass4_0;

  /// @brief Method GetCatalogLocationData, addr 0x68af668, size 0xb8, virtual false, abstract: false, final false
  static inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* GetCatalogLocationData(::StringW locatorId);

  /// @brief Method GetUpdateableCatalogLocationDatas, addr 0x68af964, size 0x1fc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>* GetUpdateableCatalogLocationDatas();

  /// @brief Method LoadCachedContentCatalogOrNull, addr 0x68aff9c, size 0x56c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>
  LoadCachedContentCatalogOrNull(::StringW catalogPath);

  /// @brief Method SetCatalogRequestsTimeout, addr 0x68aff38, size 0x64, virtual false, abstract: false, final false
  static inline void SetCatalogRequestsTimeout(int32_t timeoutInSeconds);

  /// @brief Method WaitForUnloadingAssetBundlesAsync, addr 0x68afb60, size 0x3d4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WaitForUnloadingAssetBundlesAsync();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20099 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AddressablesInternalBridge::Runtime::Extensions) == 0x10, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime
