#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyBeatmapDataAssetFileModel)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
struct __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3;
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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyBeatmapDataAssetFileModel);
MARK_VAL_T(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3);
// Type: ::<GetAssetBundleFileForBeatmapLevelAsync>d__3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)), TypeDefinitionIndex(TypeDefinitionIndex(10836)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 886 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 886 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(11007)) CS Name: ::SonyBeatmapDataAssetFileModel::<GetAssetBundleFileForBeatmapLevelAsync>d__3
struct CORDL_TYPE __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x12a9930, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12a9b8c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyBeatmapDataAssetFileModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11008))
// CS Name: ::SonyBeatmapDataAssetFileModel*
class CORDL_TYPE SonyBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using _GetAssetBundleFileForBeatmapLevelAsync_d__3 = ::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDataAssetDownloadUpdateEvent,
                      put = __cordl_internal_set_levelDataAssetDownloadUpdateEvent))::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __cordl_internal_get_levelDataAssetDownloadUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> const& __cordl_internal_get_levelDataAssetDownloadUpdateEvent() const;

  constexpr void __cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x12a9674, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x12a9724, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method GetAssetBundleFileForBeatmapLevelAsync, addr 0x12a97d4, size 0xec, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryDeleteAssetBundleFileForBeatmapLevelAsync, addr 0x12a98c0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::SonyBeatmapDataAssetFileModel* New_ctor();

  /// @brief Method .ctor, addr 0x12a9928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyBeatmapDataAssetFileModel(SonyBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyBeatmapDataAssetFileModel(SonyBeatmapDataAssetFileModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyBeatmapDataAssetFileModel();

public:
  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyBeatmapDataAssetFileModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyBeatmapDataAssetFileModel*, "", "SonyBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__3, "",
                       "SonyBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__3");
