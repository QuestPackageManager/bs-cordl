#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelLoader)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelLoader);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4);
// Type: ::LoadBeatmapLevelResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4339))
// CS Name: ::BeatmapLevelLoader::LoadBeatmapLevelResult
struct CORDL_TYPE __BeatmapLevelLoader__LoadBeatmapLevelResult {
public:
  // Declarations
  /// @brief Method .ctor addr 0x23405b8 size 0x10 virtual false final false
  inline void _ctor(bool isError, ::GlobalNamespace::IBeatmapLevel* beatmapLevel);

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None
  // }]
  constexpr __BeatmapLevelLoader__LoadBeatmapLevelResult(bool isError, ::GlobalNamespace::IBeatmapLevel* beatmapLevel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__LoadBeatmapLevelResult();

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field beatmapLevel, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* beatmapLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__4
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4413)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 904
// }), TypeDefinitionIndex(TypeDefinitionIndex(4339)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 887 }), TypeDefinitionIndex(TypeDefinitionIndex(4391)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 882 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4340)) CS Name:
// ::BeatmapLevelLoader::<LoadBeatmapLevelAsync>d__4
struct CORDL_TYPE __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23405c8 size 0x6d0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2340c98 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "previewLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_level_5__2", ty: "::GlobalNamespace::IBeatmapLevel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None
  // }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> __t__builder,
      ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* previewLevel, ::System::Threading::CancellationToken cancellationToken,
      ::GlobalNamespace::IBeatmapLevel* _level_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> __u__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* __4__this;

  /// @brief Field previewLevel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewLevel;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <level>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* _level_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4341))
// CS Name: ::BeatmapLevelLoader*
class CORDL_TYPE BeatmapLevelLoader : public ::System::Object {
public:
  // Declarations
  using _LoadBeatmapLevelAsync_d__4 = ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;

  using LoadBeatmapLevelResult = ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult;

  /// @brief Field _beatmapLevelDataLoader, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelDataLoader, put = __set__beatmapLevelDataLoader))::GlobalNamespace::BeatmapLevelDataLoader* _beatmapLevelDataLoader;

  /// @brief Field _beatmapDataAssetFileModel, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapDataAssetFileModel, put = __set__beatmapDataAssetFileModel))::GlobalNamespace::IBeatmapDataAssetFileModel* _beatmapDataAssetFileModel;

  constexpr ::GlobalNamespace::BeatmapLevelDataLoader*& __get__beatmapLevelDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> const& __get__beatmapLevelDataLoader() const;

  constexpr void __set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader* value);

  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel*& __get__beatmapDataAssetFileModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> const& __get__beatmapDataAssetFileModel() const;

  constexpr void __set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel* value);

  static inline ::GlobalNamespace::BeatmapLevelLoader* New_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader,
                                                                ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel);

  /// @brief Method .ctor addr 0x2340478 size 0x2c virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel);

  /// @brief Method LoadBeatmapLevelAsync addr 0x23404a4 size 0x114 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* LoadBeatmapLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel,
                                                                                                                                    ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelLoader(BeatmapLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelLoader(BeatmapLevelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelLoader();

public:
  /// @brief Field _beatmapLevelDataLoader, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoader* ____beatmapLevelDataLoader;

  /// @brief Field _beatmapDataAssetFileModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapDataAssetFileModel* ____beatmapDataAssetFileModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelLoader, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelLoader*, "", "BeatmapLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, "", "BeatmapLevelLoader/LoadBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4, "", "BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4");
