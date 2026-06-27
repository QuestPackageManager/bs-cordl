#pragma once
// IWYU pragma private; include "DataModels/RemoteLocalizationModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteLocalizationModel)
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsManager;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace DataModels {
struct RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
class TextAsset;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace DataModels {
class RemoteLocalizationModel;
}
namespace DataModels {
struct RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::DataModels::RemoteLocalizationModel);
MARK_VAL_T(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6);
// Dependencies System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace DataModels {
// Is value type: true
// CS Name: DataModels.RemoteLocalizationModel/<LoadAdditionalLocalizationAsync>d__6
struct CORDL_TYPE RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x369fb1c, size 0x898, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x36a03b4, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "prevLoadingTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::DataModels::RemoteLocalizationModel*", modifiers: "", def_value: None }, CppParam { name: "_loadAdditionalLocalizationHandle_5__2", ty: "::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>", modifiers: "", def_value: None }]
constexpr RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  prevLoadingTask, ::DataModels::RemoteLocalizationModel*  __4__this, ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>>  _loadAdditionalLocalizationHandle_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15404};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field prevLoadingTask, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  prevLoadingTask;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::DataModels::RemoteLocalizationModel*  __4__this;

/// @brief Field <loadAdditionalLocalizationHandle>5__2, offset: 0x30, size: 0x20, def value: None
 ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>>  _loadAdditionalLocalizationHandle_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, prevLoadingTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, _loadAdditionalLocalizationHandle_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, 0x60>, "Size mismatch!");

} // namespace end def DataModels
// Dependencies System.Object
namespace DataModels {
// Is value type: false
// CS Name: DataModels.RemoteLocalizationModel
class CORDL_TYPE RemoteLocalizationModel : public ::System::Object {
public:
// Declarations
using _LoadAdditionalLocalizationAsync_d__6 = ::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6;

/// @brief Field _loadingTask, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingTask, put=__cordl_internal_set__loadingTask)) ::System::Threading::Tasks::Task*  _loadingTask;

/// @brief Field _localizationModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizationModel, put=__cordl_internal_set__localizationModel)) ::BGLib::Polyglot::LocalizationModel*  _localizationModel;

/// @brief Field _metaRemoteAssetsManager, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__metaRemoteAssetsManager, put=__cordl_internal_set__metaRemoteAssetsManager)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  _metaRemoteAssetsManager;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Method HandleDidCatalogLoadOrUpdate, addr 0x369fb00, size 0x1c, virtual false, abstract: false, final false
inline void HandleDidCatalogLoadOrUpdate() ;

/// @brief Method Initialize, addr 0x369fa14, size 0x28, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method LoadAdditionalLocalizationAsync, addr 0x369fa3c, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadAdditionalLocalizationAsync(::System::Threading::Tasks::Task*  prevLoadingTask) ;

static inline ::DataModels::RemoteLocalizationModel* New_ctor(::BGLib::Polyglot::LocalizationModel*  localizationModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  metaRemoteAssetsManager) ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__loadingTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__loadingTask() ;

constexpr ::BGLib::Polyglot::LocalizationModel* const& __cordl_internal_get__localizationModel() const;

constexpr ::BGLib::Polyglot::LocalizationModel*& __cordl_internal_get__localizationModel() ;

constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* const& __cordl_internal_get__metaRemoteAssetsManager() const;

constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& __cordl_internal_get__metaRemoteAssetsManager() ;

constexpr void __cordl_internal_set__loadingTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel*  value) ;

constexpr void __cordl_internal_set__metaRemoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  value) ;

/// @brief Method .ctor, addr 0x369f974, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::BGLib::Polyglot::LocalizationModel*  localizationModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  metaRemoteAssetsManager) ;

/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteLocalizationModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteLocalizationModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteLocalizationModel(RemoteLocalizationModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteLocalizationModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteLocalizationModel(RemoteLocalizationModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15405};

/// @brief Field _localizationModel, offset: 0x10, size: 0x8, def value: None
 ::BGLib::Polyglot::LocalizationModel*  ____localizationModel;

/// @brief Field _metaRemoteAssetsManager, offset: 0x18, size: 0x8, def value: None
 ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*  ____metaRemoteAssetsManager;

/// @brief Field _loadingTask, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____loadingTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DataModels::RemoteLocalizationModel, ____localizationModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel, ____metaRemoteAssetsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DataModels::RemoteLocalizationModel, ____loadingTask) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DataModels::RemoteLocalizationModel, 0x28>, "Size mismatch!");

} // namespace end def DataModels
NEED_NO_BOX(::DataModels::RemoteLocalizationModel);
DEFINE_IL2CPP_ARG_TYPE(::DataModels::RemoteLocalizationModel*, "DataModels", "RemoteLocalizationModel");
DEFINE_IL2CPP_ARG_TYPE(::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6, "DataModels", "RemoteLocalizationModel/<LoadAdditionalLocalizationAsync>d__6");
