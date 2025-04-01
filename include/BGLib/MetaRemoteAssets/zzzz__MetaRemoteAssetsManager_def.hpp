#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaRemoteAssetsManager)
namespace AddressablesInternalBridge::Runtime {
class CatalogLocationData;
}
namespace BGLib::MetaRemoteAssets {
class IRemoteCatalogLoader;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager_AddResourceLocatorInput;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__FetchTokenAsync_d__23;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__InitializeInternalAsync_d__21;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__Initialize_d__19;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__WaitInitAsync_d__20;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager___c;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager_AddResourceLocatorInput;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager___c;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__FetchTokenAsync_d__23;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__InitializeInternalAsync_d__21;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__Initialize_d__19;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsManager__WaitInitAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20);
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/AddResourceLocatorInput
class CORDL_TYPE MetaRemoteAssetsManager_AddResourceLocatorInput : public ::System::Object {
public:
  // Declarations
  /// @brief Field CatalogLocation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CatalogLocation, put = __cordl_internal_set_CatalogLocation)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* CatalogLocation;

  /// @brief Field LocalHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_LocalHash, put = __cordl_internal_set_LocalHash)) ::StringW LocalHash;

  /// @brief Field ResourceLocator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceLocator, put = __cordl_internal_set_ResourceLocator)) ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* ResourceLocator;

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator,
                                                                                                     ::StringW localHash,
                                                                                                     ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get_CatalogLocation() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_CatalogLocation();

  constexpr ::StringW const& __cordl_internal_get_LocalHash() const;

  constexpr ::StringW& __cordl_internal_get_LocalHash();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* const& __cordl_internal_get_ResourceLocator() const;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get_ResourceLocator();

  constexpr void __cordl_internal_set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set_LocalHash(::StringW value);

  constexpr void __cordl_internal_set_ResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  /// @brief Method .ctor, addr 0x22a4b48, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, ::StringW localHash,
                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager_AddResourceLocatorInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsManager_AddResourceLocatorInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsManager_AddResourceLocatorInput(MetaRemoteAssetsManager_AddResourceLocatorInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsManager_AddResourceLocatorInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsManager_AddResourceLocatorInput(MetaRemoteAssetsManager_AddResourceLocatorInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18354 };

  /// @brief Field ResourceLocator, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* ___ResourceLocator;

  /// @brief Field LocalHash, offset: 0x18, size: 0x8, def value: None
  ::StringW ___LocalHash;

  /// @brief Field CatalogLocation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___CatalogLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput, ___ResourceLocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput, ___LocalHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput, ___CatalogLocation) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput, 0x28>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<>c
class CORDL_TYPE MetaRemoteAssetsManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Action* __9__17_0;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* __9__25_1;

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* New_ctor();

  /// @brief Method <UpdateCatalogsInternalAsync>b__25_0, addr 0x22a507c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _UpdateCatalogsInternalAsync_b__25_0(::AddressablesInternalBridge::Runtime::CatalogLocationData* catalogData);

  /// @brief Method <UpdateCatalogsInternalAsync>b__25_1, addr 0x22a5094, size 0xa0, virtual false, abstract: false, final false
  inline bool _UpdateCatalogsInternalAsync_b__25_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> entry);

  /// @brief Method <.ctor>b__17_0, addr 0x22a5078, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__17_0();

  /// @brief Method .ctor, addr 0x22a5070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__17_0();

  static inline ::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* getStaticF___9__25_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* getStaticF___9__25_1();

  static inline void setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c* value);

  static inline void setStaticF___9__17_0(::System::Action* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* value);

  static inline void setStaticF___9__25_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsManager___c(MetaRemoteAssetsManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsManager___c(MetaRemoteAssetsManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken, XPlatformAccessTokenData
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<FetchTokenAsync>d__23
struct CORDL_TYPE MetaRemoteAssetsManager__FetchTokenAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22a5134, size 0x5c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22a56fc, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager__FetchTokenAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsManager__FetchTokenAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18356 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, 0x40>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<Initialize>d__19
struct CORDL_TYPE MetaRemoteAssetsManager__Initialize_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22a5764, size 0x264, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22a59c8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager__Initialize_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsManager__Initialize_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                      ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18357 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19, 0x38>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<InitializeInternalAsync>d__21
struct CORDL_TYPE MetaRemoteAssetsManager__InitializeInternalAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22a59d4, size 0x4d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22a5eac, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager__InitializeInternalAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr MetaRemoteAssetsManager__InitializeInternalAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                   ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18358 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, 0x40>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Threading.CancellationToken
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<UpdateCatalogsAsync>d__24
struct CORDL_TYPE MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22a5f28, size 0x1e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22a6108, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18359 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, 0x38>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<UpdateCatalogsInternalAsync>d__25
struct CORDL_TYPE MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22a6170, size 0x834, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22a69a4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: None }, CppParam { name: "_hashesBeforeUpdate_5__2", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>", modifiers: "", def_value:
  // None }]
  constexpr MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
      ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _hashesBeforeUpdate_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field <hashesBeforeUpdate>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _hashesBeforeUpdate_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, _hashesBeforeUpdate_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, 0x40>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager/<WaitInitAsync>d__20
struct CORDL_TYPE MetaRemoteAssetsManager__WaitInitAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22a6a0c, size 0x264, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22a6c70, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager__WaitInitAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsManager__WaitInitAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                         ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20, 0x30>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.IDisposable, System.Object, Zenject.IInitializable
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsManager
class CORDL_TYPE MetaRemoteAssetsManager : public ::System::Object {
public:
  // Declarations
  using AddResourceLocatorInput = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput;

  using _FetchTokenAsync_d__23 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23;

  using _InitializeInternalAsync_d__21 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21;

  using _Initialize_d__19 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19;

  using _UpdateCatalogsAsync_d__24 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24;

  using _UpdateCatalogsInternalAsync_d__25 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25;

  using _WaitInitAsync_d__20 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20;

  using __c = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c;

  /// @brief Field _accessToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__accessToken, put = __cordl_internal_set__accessToken)) ::StringW _accessToken;

  /// @brief Field _appId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__appId, put = __cordl_internal_set__appId)) ::StringW _appId;

  /// @brief Field _inBuildGameVersion, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__inBuildGameVersion, put = __cordl_internal_set__inBuildGameVersion)) ::StringW _inBuildGameVersion;

  /// @brief Field _initializationCancellationTokenSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationCancellationTokenSource,
                      put = __cordl_internal_set__initializationCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _initializationCancellationTokenSource;

  /// @brief Field _initializationTask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task_1<bool>* _initializationTask;

  /// @brief Field _platform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::StringW _platform;

  /// @brief Field _platformUserModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserModel, put = __cordl_internal_set__platformUserModel)) ::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _remoteCatalogLoader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__remoteCatalogLoader, put = __cordl_internal_set__remoteCatalogLoader)) ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* _remoteCatalogLoader;

  /// @brief Field _updateCatalogTask, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__updateCatalogTask, put = __cordl_internal_set__updateCatalogTask)) ::System::Threading::Tasks::Task* _updateCatalogTask;

  /// @brief Field didCatalogLoadOrUpdateEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didCatalogLoadOrUpdateEvent, put = __cordl_internal_set_didCatalogLoadOrUpdateEvent)) ::System::Action* didCatalogLoadOrUpdateEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method ApplyAddressablesOverrides, addr 0x22a42fc, size 0xf4, virtual false, abstract: false, final false
  inline void ApplyAddressablesOverrides();

  /// @brief Method CreateAddResourceLocatorInput, addr 0x22a4a5c, size 0xec, virtual false, abstract: false, final false
  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*
  CreateAddResourceLocatorInput(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator);

  /// @brief Method Dispose, addr 0x22a482c, size 0x50, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FetchTokenAsync, addr 0x22a468c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FetchTokenAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Initialize, addr 0x22a43f0, size 0x90, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeInternalAsync, addr 0x22a4480, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalIdTransformFunc, addr 0x22a4578, size 0x114, virtual false, abstract: false, final false
  inline ::StringW InternalIdTransformFunc(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation);

  /// @brief Method MakeRemoteCatalogTopPriority, addr 0x22a4b84, size 0x490, virtual false, abstract: false, final false
  static inline void MakeRemoteCatalogTopPriority();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IPlatformUserModel* platformUserModel,
                                                                             ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader, ::StringW platform, ::StringW inBuildGameVersion);

  /// @brief Method UpdateCatalogsAsync, addr 0x22a3e28, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateCatalogsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateCatalogsInternalAsync, addr 0x22a475c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateCatalogsInternalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitInitAsync, addr 0x22a3d38, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitInitAsync();

  /// @brief Method WebRequestOverride, addr 0x22a487c, size 0x1e0, virtual false, abstract: false, final false
  inline void WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request);

  constexpr ::StringW const& __cordl_internal_get__accessToken() const;

  constexpr ::StringW& __cordl_internal_get__accessToken();

  constexpr ::StringW const& __cordl_internal_get__appId() const;

  constexpr ::StringW& __cordl_internal_get__appId();

  constexpr ::StringW const& __cordl_internal_get__inBuildGameVersion() const;

  constexpr ::StringW& __cordl_internal_get__inBuildGameVersion();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__initializationCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__initializationCancellationTokenSource();

  constexpr ::System::Threading::Tasks::Task_1<bool>* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task_1<bool>*& __cordl_internal_get__initializationTask();

  constexpr ::StringW const& __cordl_internal_get__platform() const;

  constexpr ::StringW& __cordl_internal_get__platform();

  constexpr ::GlobalNamespace::IPlatformUserModel* const& __cordl_internal_get__platformUserModel() const;

  constexpr ::GlobalNamespace::IPlatformUserModel*& __cordl_internal_get__platformUserModel();

  constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* const& __cordl_internal_get__remoteCatalogLoader() const;

  constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*& __cordl_internal_get__remoteCatalogLoader();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__updateCatalogTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__updateCatalogTask();

  constexpr ::System::Action* const& __cordl_internal_get_didCatalogLoadOrUpdateEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didCatalogLoadOrUpdateEvent();

  constexpr void __cordl_internal_set__accessToken(::StringW value);

  constexpr void __cordl_internal_set__appId(::StringW value);

  constexpr void __cordl_internal_set__inBuildGameVersion(::StringW value);

  constexpr void __cordl_internal_set__initializationCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task_1<bool>* value);

  constexpr void __cordl_internal_set__platform(::StringW value);

  constexpr void __cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr void __cordl_internal_set__remoteCatalogLoader(::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* value);

  constexpr void __cordl_internal_set__updateCatalogTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set_didCatalogLoadOrUpdateEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x22a40dc, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IPlatformUserModel* platformUserModel, ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader,
                    ::StringW platform, ::StringW inBuildGameVersion);

  /// @brief Method add_didCatalogLoadOrUpdateEvent, addr 0x22a3fa4, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCatalogLoadOrUpdateEvent(::System::Action* value);

  /// @brief Method get_RemoteCatalogPath, addr 0x22a3f64, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_RemoteCatalogPath();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method remove_didCatalogLoadOrUpdateEvent, addr 0x22a4040, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCatalogLoadOrUpdateEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsManager(MetaRemoteAssetsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsManager(MetaRemoteAssetsManager const&) = delete;

  /// @brief Field MetaServerHost offset 0xffffffff size 0x8
  static constexpr ::ConstString MetaServerHost{ u"https://oculus.com" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18362 };

  /// @brief Field kMetaServerCatalogPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kMetaServerCatalogPath{ u"beat-saber/remote-assets/download/catalog.json" };

  /// @brief Field kPlatformInjectId offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformInjectId{ u"MetaRemoteAssetsManager_platform_injectId" };

  /// @brief Field _accessToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ____accessToken;

  /// @brief Field _platform, offset: 0x18, size: 0x8, def value: None
  ::StringW ____platform;

  /// @brief Field _initializationCancellationTokenSource, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____initializationCancellationTokenSource;

  /// @brief Field _initializationTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* ____initializationTask;

  /// @brief Field _updateCatalogTask, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____updateCatalogTask;

  /// @brief Field _appId, offset: 0x38, size: 0x8, def value: None
  ::StringW ____appId;

  /// @brief Field _platformUserModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformUserModel* ____platformUserModel;

  /// @brief Field _remoteCatalogLoader, offset: 0x48, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* ____remoteCatalogLoader;

  /// @brief Field _inBuildGameVersion, offset: 0x50, size: 0x8, def value: None
  ::StringW ____inBuildGameVersion;

  /// @brief Field didCatalogLoadOrUpdateEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___didCatalogLoadOrUpdateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____accessToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____initializationCancellationTokenSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____initializationTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____updateCatalogTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____appId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____platformUserModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____remoteCatalogLoader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____inBuildGameVersion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ___didCatalogLoadOrUpdateEvent) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, 0x60>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager_AddResourceLocatorInput*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/AddResourceLocatorInput");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager___c*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__FetchTokenAsync_d__23, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<FetchTokenAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__InitializeInternalAsync_d__21, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<InitializeInternalAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__Initialize_d__19, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<Initialize>d__19");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsAsync_d__24, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<UpdateCatalogsAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__UpdateCatalogsInternalAsync_d__25, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<UpdateCatalogsInternalAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager__WaitInitAsync_d__20, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<WaitInitAsync>d__20");
