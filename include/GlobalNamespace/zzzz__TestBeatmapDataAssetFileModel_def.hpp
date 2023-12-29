#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TestBeatmapDataAssetFileModel)
namespace GlobalNamespace {
struct __TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TestBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct __TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;
}
namespace GlobalNamespace {
struct __TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestBeatmapDataAssetFileModel);
MARK_VAL_T(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4);
MARK_VAL_T(::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5);
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__4
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 865 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(4433)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 865 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4436)) CS Name:
// ::TestBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__4
struct CORDL_TYPE __TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2200aa0 size 0x64c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22010ec size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty:
  // "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::TestBeatmapDataAssetFileModel*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "uint32_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
      ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::TestBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::StringW _path_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, uint32_t _i_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field previewBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::TestBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <path>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _path_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <i>5__3, offset: 0x48, size: 0x4, def value: None
  uint32_t _i_5__3;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, previewBeatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, _path_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, _i_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, __u__2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 112 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4437)) CS
// Name: ::TestBeatmapDataAssetFileModel::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5
struct CORDL_TYPE __TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2201144 size 0x20c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2201350 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TestBeatmapDataAssetFileModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4438))
// CS Name: ::TestBeatmapDataAssetFileModel*
class CORDL_TYPE TestBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using _TryDeleteAssetBundleFileForPreviewLevelAsync_d__5 = ::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5;

  using _GetAssetBundleFileForPreviewLevelAsync_d__4 = ::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_levelDataAssetDownloadUpdateEvent,
                      put = __set_levelDataAssetDownloadUpdateEvent))::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __get_levelDataAssetDownloadUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> const& __get_levelDataAssetDownloadUpdateEvent() const;

  constexpr void __set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x2200738 size 0xb0 virtual true final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x22007e8 size 0xb0 virtual true final true
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x2200898 size 0x114 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x22009ac size 0xec virtual true final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::TestBeatmapDataAssetFileModel* New_ctor();

  /// @brief Method .ctor addr 0x2200a98 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TestBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestBeatmapDataAssetFileModel(TestBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestBeatmapDataAssetFileModel(TestBeatmapDataAssetFileModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestBeatmapDataAssetFileModel();

public:
  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  /// @brief Field kAssetsDir offset 0xffffffff size 0x8
  static constexpr ::ConstString kAssetsDir{ u"BeatmapDataAssets" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestBeatmapDataAssetFileModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TestBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestBeatmapDataAssetFileModel*, "", "TestBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, "",
                       "TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5, "",
                       "TestBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5");
