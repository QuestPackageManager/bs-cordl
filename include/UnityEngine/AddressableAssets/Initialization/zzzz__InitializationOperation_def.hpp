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
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class InitalizationObjectsOperation;
}
namespace UnityEngine::AddressableAssets::Utility {
class ResourceManagerDiagnostics;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c__DisplayClass18_0;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c__DisplayClass16_0;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __InitializationOperation____c;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14121))
// CS Name: ::InitializationOperation::<>c*
class CORDL_TYPE __InitializationOperation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* __9__13_0;

  static inline void setStaticF___9(::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* value);

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* getStaticF___9();

  static inline void setStaticF___9__13_0(::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* getStaticF___9__13_0();

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a33a18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Execute>b__13_0, addr 0x2a33a20, size 0x9c, virtual false, abstract: false, final false
  inline bool _Execute_b__13_0(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializationOperation____c(__InitializationOperation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializationOperation____c(__InitializationOperation____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializationOperation____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14122))
// CS Name: ::InitializationOperation::<>c__DisplayClass16_0*
class CORDL_TYPE __InitializationOperation____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field addressables, offset 0x10, size 0x8
  __declspec(property(get = __get_addressables, put = __set_addressables))::UnityEngine::AddressableAssets::AddressablesImpl* addressables;

  /// @brief Field providerSuffix, offset 0x18, size 0x8
  __declspec(property(get = __get_providerSuffix, put = __set_providerSuffix))::StringW providerSuffix;

  /// @brief Field remoteHashLocation, offset 0x20, size 0x8
  __declspec(property(get = __get_remoteHashLocation, put = __set_remoteHashLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __get_addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __get_addressables() const;

  constexpr void __set_addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::StringW& __get_providerSuffix();

  constexpr ::StringW const& __get_providerSuffix() const;

  constexpr void __set_providerSuffix(::StringW value);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __get_remoteHashLocation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __get_remoteHashLocation() const;

  constexpr void __set_remoteHashLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a33abc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadContentCatalog>b__0, addr 0x2a33ac4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  _LoadContentCatalog_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> res);

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializationOperation____c__DisplayClass16_0(__InitializationOperation____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializationOperation____c__DisplayClass16_0(__InitializationOperation____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializationOperation____c__DisplayClass16_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14123))
// CS Name: ::InitializationOperation::<>c__DisplayClass18_0*
class CORDL_TYPE __InitializationOperation____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::AddressableAssets::Initialization::InitializationOperation* __4__this;

  /// @brief Field catalogs, offset 0x18, size 0x8
  __declspec(property(get = __get_catalogs, put = __set_catalogs))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs;

  /// @brief Field locMap, offset 0x20, size 0x8
  __declspec(property(get = __get_locMap, put = __set_locMap))::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap;

  /// @brief Field index, offset 0x28, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field remoteHashLocation, offset 0x30, size 0x8
  __declspec(property(get = __get_remoteHashLocation, put = __set_remoteHashLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation;

  constexpr ::UnityEngine::AddressableAssets::Initialization::InitializationOperation*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Initialization::InitializationOperation*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::AddressableAssets::Initialization::InitializationOperation* value);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& __get_catalogs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& __get_catalogs() const;

  constexpr void __set_catalogs(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value);

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*& __get_locMap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> const& __get_locMap() const;

  constexpr void __set_locMap(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __get_remoteHashLocation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __get_remoteHashLocation() const;

  constexpr void __set_remoteHashLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  static inline ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a33b08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadContentCatalogInternal>b__0, addr 0x2a33b10, size 0x4c, virtual false, abstract: false, final false
  inline void _LoadContentCatalogInternal_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op);

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializationOperation____c__DisplayClass18_0(__InitializationOperation____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializationOperation____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializationOperation____c__DisplayClass18_0(__InitializationOperation____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializationOperation____c__DisplayClass18_0();

public:
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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 796 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 796 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(14125)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 858 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14112)), TypeDefinitionIndex(TypeDefinitionIndex(14033))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14124)) CS Name:
// ::UnityEngine.AddressableAssets.Initialization::InitializationOperation*
class CORDL_TYPE InitializationOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass18_0;

  using __c__DisplayClass16_0 = ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c__DisplayClass16_0;

  using __c = ::UnityEngine::AddressableAssets::Initialization::__InitializationOperation____c;

  /// @brief Field m_rtdOp, offset 0x88, size 0x20
  __declspec(
      property(get = __get_m_rtdOp,
               put = __set_m_rtdOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_rtdOp;

  /// @brief Field m_loadCatalogOp, offset 0xa8, size 0x20
  __declspec(property(
      get = __get_m_loadCatalogOp,
      put = __set_m_loadCatalogOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> m_loadCatalogOp;

  /// @brief Field m_ProviderSuffix, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_ProviderSuffix, put = __set_m_ProviderSuffix))::StringW m_ProviderSuffix;

  /// @brief Field m_Addressables, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_Addressables, put = __set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Field m_Diagnostics, offset 0xd8, size 0x8
  __declspec(property(get = __get_m_Diagnostics, put = __set_m_Diagnostics))::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* m_Diagnostics;

  /// @brief Field m_InitGroupOps, offset 0xe0, size 0x8
  __declspec(property(get = __get_m_InitGroupOps, put = __set_m_InitGroupOps))::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* m_InitGroupOps;

  __declspec(property(get = get_Progress)) float_t Progress;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>& __get_m_rtdOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> const& __get_m_rtdOp() const;

  constexpr void __set_m_rtdOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>& __get_m_loadCatalogOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const& __get_m_loadCatalogOp() const;

  constexpr void __set_m_loadCatalogOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> value);

  constexpr ::StringW& __get_m_ProviderSuffix();

  constexpr ::StringW const& __get_m_ProviderSuffix() const;

  constexpr void __set_m_ProviderSuffix(::StringW value);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __get_m_Addressables() const;

  constexpr void __set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  constexpr ::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*& __get_m_Diagnostics();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*> const& __get_m_Diagnostics() const;

  constexpr void __set_m_Diagnostics(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*& __get_m_InitGroupOps();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*> const& __get_m_InitGroupOps() const;

  constexpr void __set_m_InitGroupOps(::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* value);

  static inline ::UnityEngine::AddressableAssets::Initialization::InitializationOperation* New_ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method .ctor, addr 0x2a309c4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::AddressablesImpl* aa);

  /// @brief Method get_Progress, addr 0x2a30a68, size 0x80, virtual true, abstract: false, final false
  inline float_t get_Progress();

  /// @brief Method get_DebugName, addr 0x2a30ae8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method CreateInitializationOperation, addr 0x2a1d434, size 0x588, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  CreateInitializationOperation(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::StringW playerSettingsLocation, ::StringW providerSuffix);

  /// @brief Method InvokeWaitForCompletion, addr 0x2a30b28, size 0x1c4, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Execute, addr 0x2a30cec, size 0xd10, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method LoadProvider, addr 0x2a31bf0, size 0x490, virtual false, abstract: false, final false
  static inline void LoadProvider(::UnityEngine::AddressableAssets::AddressablesImpl* addressables, ::UnityEngine::ResourceManagement::Util::ObjectInitializationData providerData,
                                  ::StringW providerSuffix);

  /// @brief Method OnCatalogDataLoaded, addr 0x2a32080, size 0x5a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  OnCatalogDataLoaded(::UnityEngine::AddressableAssets::AddressablesImpl* addressables,
                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op, ::StringW providerSuffix,
                      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadContentCatalog, addr 0x2a1df08, size 0x6a4, virtual false, abstract: false, final false
  /// @param remoteHashLocation: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (default: nullptr)
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::UnityEngine::AddressableAssets::AddressablesImpl* addressables, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation = nullptr);

  /// @brief Method LoadContentCatalog, addr 0x2a32620, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalog(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc, ::StringW providerSuffix,
                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadContentCatalogInternal, addr 0x2a319fc, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>
  LoadContentCatalogInternal(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs, int32_t index,
                             ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap,
                             ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  /// @brief Method LoadOpComplete, addr 0x2a3264c, size 0x1368, virtual false, abstract: false, final false
  inline void LoadOpComplete(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> op,
                             ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* catalogs,
                             ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* locMap, int32_t index,
                             ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* remoteHashLocation);

  // Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationOperation(InitializationOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationOperation(InitializationOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationOperation();

public:
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
