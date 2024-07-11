#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class __MetaRemoteAssetsManager__AddResourceLocatorInput;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___FetchTokenAsync_d__22;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___InitializeInternalAsync_d__20;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___Initialize_d__18;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___WaitInitAsync_d__19;
}
namespace BGLib::MetaRemoteAssets {
class __MetaRemoteAssetsManager____c;
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
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
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
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
namespace System {
class IDisposable;
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
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager;
}
namespace BGLib::MetaRemoteAssets {
class __MetaRemoteAssetsManager__AddResourceLocatorInput;
}
namespace BGLib::MetaRemoteAssets {
class __MetaRemoteAssetsManager____c;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___FetchTokenAsync_d__22;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___InitializeInternalAsync_d__20;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___Initialize_d__18;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24;
}
namespace BGLib::MetaRemoteAssets {
struct __MetaRemoteAssetsManager___WaitInitAsync_d__19;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24);
MARK_VAL_T(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19);
// Type: ::AddResourceLocatorInput
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: ::MetaRemoteAssetsManager::AddResourceLocatorInput*
class CORDL_TYPE __MetaRemoteAssetsManager__AddResourceLocatorInput : public ::System::Object {
public:
  // Declarations
  /// @brief Field CatalogLocation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CatalogLocation, put = __cordl_internal_set_CatalogLocation))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* CatalogLocation;

  /// @brief Field LocalHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_LocalHash, put = __cordl_internal_set_LocalHash))::StringW LocalHash;

  /// @brief Field ResourceLocator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceLocator, put = __cordl_internal_set_ResourceLocator))::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* ResourceLocator;

  static inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator,
                                                                                                        ::StringW localHash,
                                                                                                        ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_CatalogLocation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_CatalogLocation() const;

  constexpr ::StringW const& __cordl_internal_get_LocalHash() const;

  constexpr ::StringW& __cordl_internal_get_LocalHash();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*& __cordl_internal_get_ResourceLocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> const& __cordl_internal_get_ResourceLocator() const;

  constexpr void __cordl_internal_set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set_LocalHash(::StringW value);

  constexpr void __cordl_internal_set_ResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* value);

  /// @brief Method .ctor, addr 0x108a7e4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator, ::StringW localHash,
                    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* catalogLocation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager__AddResourceLocatorInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MetaRemoteAssetsManager__AddResourceLocatorInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MetaRemoteAssetsManager__AddResourceLocatorInput(__MetaRemoteAssetsManager__AddResourceLocatorInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MetaRemoteAssetsManager__AddResourceLocatorInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MetaRemoteAssetsManager__AddResourceLocatorInput(__MetaRemoteAssetsManager__AddResourceLocatorInput const&) = delete;

  /// @brief Field ResourceLocator, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* ___ResourceLocator;

  /// @brief Field LocalHash, offset: 0x18, size: 0x8, def value: None
  ::StringW ___LocalHash;

  /// @brief Field CatalogLocation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___CatalogLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput, 0x28>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput, ___ResourceLocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput, ___LocalHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput, ___CatalogLocation) == 0x20, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: ::MetaRemoteAssetsManager::<>c*
class CORDL_TYPE __MetaRemoteAssetsManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Action* __9__16_0;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0))::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* __9__24_1;

  static inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c* New_ctor();

  /// @brief Method <UpdateCatalogsInternalAsync>b__24_0, addr 0x108ad24, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _UpdateCatalogsInternalAsync_b__24_0(::AddressablesInternalBridge::Runtime::CatalogLocationData* catalogData);

  /// @brief Method <UpdateCatalogsInternalAsync>b__24_1, addr 0x108ad3c, size 0xa0, virtual false, abstract: false, final false
  inline bool _UpdateCatalogsInternalAsync_b__24_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> entry);

  /// @brief Method <.ctor>b__16_0, addr 0x108ad20, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__16_0();

  /// @brief Method .ctor, addr 0x108ad18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__16_0();

  static inline ::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* getStaticF___9__24_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* getStaticF___9__24_1();

  static inline void setStaticF___9(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c* value);

  static inline void setStaticF___9__16_0(::System::Action* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::AddressablesInternalBridge::Runtime::CatalogLocationData*, ::StringW>* value);

  static inline void setStaticF___9__24_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MetaRemoteAssetsManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MetaRemoteAssetsManager____c(__MetaRemoteAssetsManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MetaRemoteAssetsManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MetaRemoteAssetsManager____c(__MetaRemoteAssetsManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<Initialize>d__18
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsManager::<Initialize>d__18
struct CORDL_TYPE __MetaRemoteAssetsManager___Initialize_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x108addc, size 0x264, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x108b040, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager___Initialize_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __MetaRemoteAssetsManager___Initialize_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                         ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<WaitInitAsync>d__19
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsManager::<WaitInitAsync>d__19
struct CORDL_TYPE __MetaRemoteAssetsManager___WaitInitAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x108b04c, size 0x20c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x108b258, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager___WaitInitAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __MetaRemoteAssetsManager___WaitInitAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                            ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19, __u__1) == 0x28, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<InitializeInternalAsync>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsManager::<InitializeInternalAsync>d__20
struct CORDL_TYPE __MetaRemoteAssetsManager___InitializeInternalAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x108b2b0, size 0x47c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x108b72c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager___InitializeInternalAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr __MetaRemoteAssetsManager___InitializeInternalAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                      ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, __u__2) == 0x38, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<FetchTokenAsync>d__22
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsManager::<FetchTokenAsync>d__22
struct CORDL_TYPE __MetaRemoteAssetsManager___FetchTokenAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x108b784, size 0x4e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x108bc68, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager___FetchTokenAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }]
  constexpr __MetaRemoteAssetsManager___FetchTokenAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__2) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, __u__2) == 0x38, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<UpdateCatalogsAsync>d__23
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsManager::<UpdateCatalogsAsync>d__23
struct CORDL_TYPE __MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x108bc74, size 0x19c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x108be10, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: ::<UpdateCatalogsInternalAsync>d__24
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: ::MetaRemoteAssetsManager::<UpdateCatalogsInternalAsync>d__24
struct CORDL_TYPE __MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x108be1c, size 0x7c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x108c5e0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*", modifiers: "", def_value: None }, CppParam { name: "_hashesBeforeUpdate_5__2", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*>", modifiers: "", def_value:
  // None }]
  constexpr __MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
      ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* __4__this, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _hashesBeforeUpdate_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, _hashesBeforeUpdate_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, __u__1) == 0x38, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Type: BGLib.MetaRemoteAssets::MetaRemoteAssetsManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: ::BGLib.MetaRemoteAssets::MetaRemoteAssetsManager*
class CORDL_TYPE MetaRemoteAssetsManager : public ::System::Object {
public:
  // Declarations
  using AddResourceLocatorInput = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput;

  using _FetchTokenAsync_d__22 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22;

  using _InitializeInternalAsync_d__20 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20;

  using _Initialize_d__18 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18;

  using _UpdateCatalogsAsync_d__23 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23;

  using _UpdateCatalogsInternalAsync_d__24 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24;

  using _WaitInitAsync_d__19 = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19;

  using __c = ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c;

  /// @brief Field _accessToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__accessToken, put = __cordl_internal_set__accessToken))::StringW _accessToken;

  /// @brief Field _appId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__appId, put = __cordl_internal_set__appId))::StringW _appId;

  /// @brief Field _initializationCancellationTokenSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationCancellationTokenSource,
                      put = __cordl_internal_set__initializationCancellationTokenSource))::System::Threading::CancellationTokenSource* _initializationCancellationTokenSource;

  /// @brief Field _initializationTask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask))::System::Threading::Tasks::Task_1<bool>* _initializationTask;

  /// @brief Field _platform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform))::StringW _platform;

  /// @brief Field _platformUserModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserModel, put = __cordl_internal_set__platformUserModel))::GlobalNamespace::IPlatformUserModel* _platformUserModel;

  /// @brief Field _remoteCatalogLoader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__remoteCatalogLoader, put = __cordl_internal_set__remoteCatalogLoader))::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* _remoteCatalogLoader;

  /// @brief Field _updateCatalogTask, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__updateCatalogTask, put = __cordl_internal_set__updateCatalogTask))::System::Threading::Tasks::Task* _updateCatalogTask;

  /// @brief Field didCatalogLoadOrUpdateEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didCatalogLoadOrUpdateEvent, put = __cordl_internal_set_didCatalogLoadOrUpdateEvent))::System::Action* didCatalogLoadOrUpdateEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method ApplyAddressablesOverrides, addr 0x1089ec4, size 0x100, virtual false, abstract: false, final false
  inline void ApplyAddressablesOverrides();

  /// @brief Method CreateAddResourceLocatorInput, addr 0x108a6f4, size 0xf0, virtual false, abstract: false, final false
  static inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput*
  CreateAddResourceLocatorInput(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* resourceLocator);

  /// @brief Method Dispose, addr 0x108a41c, size 0x50, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FetchTokenAsync, addr 0x108a26c, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FetchTokenAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Initialize, addr 0x1089fc4, size 0x94, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeInternalAsync, addr 0x108a058, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalIdTransformFunc, addr 0x108a158, size 0x114, virtual false, abstract: false, final false
  inline ::StringW InternalIdTransformFunc(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* resourceLocation);

  /// @brief Method MakeRemoteCatalogTopPriority, addr 0x108a820, size 0x494, virtual false, abstract: false, final false
  static inline void MakeRemoteCatalogTopPriority();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IPlatformUserModel* platformUserModel,
                                                                             ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader, ::StringW platform);

  /// @brief Method UpdateCatalogsAsync, addr 0x1089a44, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateCatalogsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateCatalogsInternalAsync, addr 0x108a344, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateCatalogsInternalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WaitInitAsync, addr 0x108994c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* WaitInitAsync();

  /// @brief Method WebRequestOverride, addr 0x108a46c, size 0x288, virtual false, abstract: false, final false
  inline void WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request);

  constexpr ::StringW const& __cordl_internal_get__accessToken() const;

  constexpr ::StringW& __cordl_internal_get__accessToken();

  constexpr ::StringW const& __cordl_internal_get__appId() const;

  constexpr ::StringW& __cordl_internal_get__appId();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__initializationCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__initializationCancellationTokenSource() const;

  constexpr ::System::Threading::Tasks::Task_1<bool>*& __cordl_internal_get__initializationTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> const& __cordl_internal_get__initializationTask() const;

  constexpr ::StringW const& __cordl_internal_get__platform() const;

  constexpr ::StringW& __cordl_internal_get__platform();

  constexpr ::GlobalNamespace::IPlatformUserModel*& __cordl_internal_get__platformUserModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& __cordl_internal_get__platformUserModel() const;

  constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*& __cordl_internal_get__remoteCatalogLoader();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*> const& __cordl_internal_get__remoteCatalogLoader() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__updateCatalogTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__updateCatalogTask() const;

  constexpr ::System::Action*& __cordl_internal_get_didCatalogLoadOrUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didCatalogLoadOrUpdateEvent() const;

  constexpr void __cordl_internal_set__accessToken(::StringW value);

  constexpr void __cordl_internal_set__appId(::StringW value);

  constexpr void __cordl_internal_set__initializationCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task_1<bool>* value);

  constexpr void __cordl_internal_set__platform(::StringW value);

  constexpr void __cordl_internal_set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value);

  constexpr void __cordl_internal_set__remoteCatalogLoader(::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* value);

  constexpr void __cordl_internal_set__updateCatalogTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set_didCatalogLoadOrUpdateEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x1089ca4, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IPlatformUserModel* platformUserModel, ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* remoteCatalogLoader,
                    ::StringW platform);

  /// @brief Method add_didCatalogLoadOrUpdateEvent, addr 0x1089b6c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCatalogLoadOrUpdateEvent(::System::Action* value);

  /// @brief Method get_RemoteCatalogPath, addr 0x1089b2c, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_RemoteCatalogPath();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method remove_didCatalogLoadOrUpdateEvent, addr 0x1089c08, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Field didCatalogLoadOrUpdateEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___didCatalogLoadOrUpdateEvent;

  /// @brief Field MetaServerHost offset 0xffffffff size 0x8
  static constexpr ::ConstString MetaServerHost{ u"https://oculus.com" };

  /// @brief Field kMetaServerCatalogPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kMetaServerCatalogPath{ u"beat-saber/remote-assets/download/catalog.json" };

  /// @brief Field kPlatformInjectId offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformInjectId{ u"MetaRemoteAssetsManager_platform_injectId" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____accessToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____initializationCancellationTokenSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____initializationTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____updateCatalogTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____appId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____platformUserModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ____remoteCatalogLoader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager, ___didCatalogLoadOrUpdateEvent) == 0x50, "Offset mismatch!");

} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager__AddResourceLocatorInput*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/AddResourceLocatorInput");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager____c*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___FetchTokenAsync_d__22, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<FetchTokenAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___InitializeInternalAsync_d__20, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<InitializeInternalAsync>d__20");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___Initialize_d__18, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<Initialize>d__18");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsAsync_d__23, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<UpdateCatalogsAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___UpdateCatalogsInternalAsync_d__24, "BGLib.MetaRemoteAssets",
                       "MetaRemoteAssetsManager/<UpdateCatalogsInternalAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsManager___WaitInitAsync_d__19, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsManager/<WaitInitAsync>d__19");
