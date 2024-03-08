#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/Initialization/zzzz__ResourceManagerRuntimeData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InitializationOperation)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c__DisplayClass16_0;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c__DisplayClass18_0;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::AddressableAssets::Utility {
class ResourceManagerDiagnostics;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class InitalizationObjectsOperation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class InitializationOperation;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c__DisplayClass16_0;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c__DisplayClass18_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::InitializationOperation);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::InitializationOperation::<>c*
class CORDL_TYPE __InitializationOperation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* __9__13_0;

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* New_ctor();

  /// @brief Method <Execute>b__13_0, addr 0x2b7de98, size 0x9c, virtual false, abstract: false, final false
  inline bool _Execute_b__13_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);

  /// @brief Method .ctor, addr 0x2b7de90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* getStaticF___9__13_0();

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* value);

  static inline void setStaticF___9__13_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializationOperation____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializationOperation____c(__InitializationOperation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializationOperation____c(__InitializationOperation____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::InitializationOperation::<>c__DisplayClass16_0*
class CORDL_TYPE __InitializationOperation____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field addressables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_addressables, put = __cordl_internal_set_addressables))::UnityEngine::AddressableAssets::AddressablesImpl* addressables;

  /// @brief Field providerSuffix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_providerSuffix, put = __cordl_internal_set_providerSuffix))::StringW providerSuffix;

  /// @brief Field remoteHashLocation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_remoteHashLocation,
                      put = __cordl_internal_set_remoteHashLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation;

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0* New_ctor();

  /// @brief Method <LoadContentCatalog>b__0, addr 0x2b7df3c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  _LoadContentCatalog_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> res);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_addressables() const;

  constexpr ::StringW const& __cordl_internal_get_providerSuffix() const;

  constexpr ::StringW& __cordl_internal_get_providerSuffix();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_remoteHashLocation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_remoteHashLocation() const;

  constexpr void __cordl_internal_set_addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_providerSuffix(::StringW value);

  constexpr void __cordl_internal_set_remoteHashLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x2b7df34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializationOperation____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializationOperation____c__DisplayClass16_0(__InitializationOperation____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializationOperation____c__DisplayClass16_0(__InitializationOperation____c__DisplayClass16_0 const&) = delete;

  /// @brief Field addressables, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___addressables;

  /// @brief Field providerSuffix, offset: 0x18, size: 0x8, def value: None
  ::StringW ___providerSuffix;

  /// @brief Field remoteHashLocation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___remoteHashLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0, ___addressables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0, ___providerSuffix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0, ___remoteHashLocation) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::InitializationOperation::<>c__DisplayClass18_0*
class CORDL_TYPE __InitializationOperation____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::AddressableAssets::Initialization::InitializationOperation* __4__this;

  /// @brief Field catalogs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_catalogs,
                      put = __cordl_internal_set_catalogs))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs;

  /// @brief Field index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field locMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_locMap, put = __cordl_internal_set_locMap))::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap;

  /// @brief Field remoteHashLocation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_remoteHashLocation,
                      put = __cordl_internal_set_remoteHashLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation;

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0* New_ctor();

  /// @brief Method <LoadContentCatalogInternal>b__0, addr 0x2b7df88, size 0x4c, virtual false, abstract: false, final false
  inline void _LoadContentCatalogInternal_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op);

  constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __cordl_internal_get_catalogs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const&
  __cordl_internal_get_catalogs() const;

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*& __cordl_internal_get_locMap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> const& __cordl_internal_get_locMap() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_remoteHashLocation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_remoteHashLocation() const;

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::Initialization::InitializationOperation* value);

  constexpr void __cordl_internal_set_catalogs(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_locMap(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value);

  constexpr void __cordl_internal_set_remoteHashLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x2b7df80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializationOperation____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializationOperation____c__DisplayClass18_0(__InitializationOperation____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializationOperation____c__DisplayClass18_0(__InitializationOperation____c__DisplayClass18_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::Initialization::InitializationOperation* _____4__this;

  /// @brief Field catalogs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* ___catalogs;

  /// @brief Field locMap, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* ___locMap;

  /// @brief Field index, offset: 0x28, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field remoteHashLocation, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___remoteHashLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0, ___catalogs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0, ___locMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0, ___index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0, ___remoteHashLocation) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: UnityEngine.AddressableAssets.Initialization::InitializationOperation
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.Initialization::InitializationOperation*
class CORDL_TYPE InitializationOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> {
public:
  // Declarations
  using __c = ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c;

  using __c__DisplayClass16_0 = ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0;

  using __c__DisplayClass18_0 = ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  __declspec(property(get = get_Progress)) float_t Progress;

  /// @brief Field m_Addressables, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_Diagnostics, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Diagnostics, put = __cordl_internal_set_m_Diagnostics))::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* m_Diagnostics;

  /// @brief Field m_InitGroupOps, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InitGroupOps,
                      put = __cordl_internal_set_m_InitGroupOps))::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* m_InitGroupOps;

  /// @brief Field m_ProviderSuffix, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderSuffix, put = __cordl_internal_set_m_ProviderSuffix))::StringW m_ProviderSuffix;

  /// @brief Field m_loadCatalogOp, offset 0xa8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_loadCatalogOp, put = __cordl_internal_set_m_loadCatalogOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> m_loadCatalogOp;

  /// @brief Field m_rtdOp, offset 0x88, size 0x20
  __declspec(property(get = __cordl_internal_get_m_rtdOp, put = __cordl_internal_set_m_rtdOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_rtdOp;

  /// @brief Method CreateInitializationOperation, addr 0x2b678ac, size 0x588, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  CreateInitializationOperation(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::StringW playerSettingsLocation, ::StringW providerSuffix);

  /// @brief Method Execute, addr 0x2b7b164, size 0xd10, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method InvokeWaitForCompletion, addr 0x2b7afa0, size 0x1c4, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method LoadContentCatalog, addr 0x2b68380, size 0x6a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::UnityEngine::AddressableAssets::AddressablesImpl* addressables, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadContentCatalog, addr 0x2b7ca98, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadContentCatalogInternal, addr 0x2b7be74, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogInternal(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs, int32_t index,
                             ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap,
                             ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadOpComplete, addr 0x2b7cac4, size 0x1368, virtual false, abstract: false, final false
  inline void LoadOpComplete(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op,
                             ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs,
                             ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, int32_t index,
                             ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadProvider, addr 0x2b7c068, size 0x490, virtual false, abstract: false, final false
  static inline void LoadProvider(::UnityEngine::AddressableAssets::AddressablesImpl* addressables, ::UnityEngine::ResourceManagement::Util::ObjectInitializationData providerData,
                                  ::StringW providerSuffix);

  static inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method OnCatalogDataLoaded, addr 0x2b7c4f8, size 0x5a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  OnCatalogDataLoaded(::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op, ::StringW providerSuffix,
                      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __cordl_internal_get_m_Addressables() const;

  constexpr ::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*& __cordl_internal_get_m_Diagnostics();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*> const& __cordl_internal_get_m_Diagnostics() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*& __cordl_internal_get_m_InitGroupOps();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*> const& __cordl_internal_get_m_InitGroupOps() const;

  constexpr ::StringW const& __cordl_internal_get_m_ProviderSuffix() const;

  constexpr ::StringW& __cordl_internal_get_m_ProviderSuffix();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const&
  __cordl_internal_get_m_loadCatalogOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>& __cordl_internal_get_m_loadCatalogOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> const&
  __cordl_internal_get_m_rtdOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>& __cordl_internal_get_m_rtdOp();

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr void __cordl_internal_set_m_Diagnostics(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* value);

  constexpr void __cordl_internal_set_m_InitGroupOps(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* value);

  constexpr void __cordl_internal_set_m_ProviderSuffix(::StringW value);

  constexpr void
  __cordl_internal_set_m_loadCatalogOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> value);

  constexpr void
  __cordl_internal_set_m_rtdOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> value);

  /// @brief Method .ctor, addr 0x2b7ae3c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method get_DebugName, addr 0x2b7af60, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_Progress, addr 0x2b7aee0, size 0x80, virtual true, abstract: false, final false
  inline float_t get_Progress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationOperation(InitializationOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationOperation(InitializationOperation const&) = delete;

  /// @brief Field m_rtdOp, offset: 0x88, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> ___m_rtdOp;

  /// @brief Field m_loadCatalogOp, offset: 0xa8, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> ___m_loadCatalogOp;

  /// @brief Field m_ProviderSuffix, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___m_ProviderSuffix;

  /// @brief Field m_Addressables, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field m_Diagnostics, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* ___m_Diagnostics;

  /// @brief Field m_InitGroupOps, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* ___m_InitGroupOps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::InitializationOperation, 0xe8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::InitializationOperation, ___m_rtdOp) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::InitializationOperation, ___m_loadCatalogOp) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::InitializationOperation, ___m_ProviderSuffix) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::InitializationOperation, ___m_Addressables) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::InitializationOperation, ___m_Diagnostics) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::InitializationOperation, ___m_InitGroupOps) == 0xe0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::InitializationOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::InitializationOperation*, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c*, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0*, "UnityEngine.AddressableAssets.Initialization",
                       "InitializationOperation/<>c__DisplayClass16_0");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0*, "UnityEngine.AddressableAssets.Initialization",
                       "InitializationOperation/<>c__DisplayClass18_0");
