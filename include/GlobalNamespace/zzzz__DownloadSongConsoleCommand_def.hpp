#pragma once
// IWYU pragma private; include "GlobalNamespace/DownloadSongConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadSongConsoleCommand)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
struct DownloadSongConsoleCommand_AssetLookup;
}
namespace GlobalNamespace {
struct DownloadSongConsoleCommand__ExecuteAsync_d__12;
}
namespace GlobalNamespace {
struct DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
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
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
struct DownloadSongConsoleCommand_AssetLookup;
}
namespace GlobalNamespace {
class DownloadSongConsoleCommand;
}
namespace GlobalNamespace {
struct DownloadSongConsoleCommand__ExecuteAsync_d__12;
}
namespace GlobalNamespace {
struct DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup);
MARK_REF_T(::GlobalNamespace::DownloadSongConsoleCommand*);
MARK_VAL_T(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12);
MARK_VAL_T(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, "", "DownloadSongConsoleCommand/AssetLookup");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DownloadSongConsoleCommand*, "", "DownloadSongConsoleCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, "", "DownloadSongConsoleCommand/<ExecuteAsync>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13, "", "DownloadSongConsoleCommand/<FindAssetByBundleNameAsync>d__13");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: DownloadSongConsoleCommand/AssetLookup
struct CORDL_TYPE DownloadSongConsoleCommand_AssetLookup {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DownloadSongConsoleCommand_AssetLookup_Unwrapped
  enum struct __DownloadSongConsoleCommand_AssetLookup_Unwrapped : int32_t {
    __E_Found = static_cast<int32_t>(0x0),
    __E_NotFound = static_cast<int32_t>(0x1),
    __E_ListError = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DownloadSongConsoleCommand_AssetLookup_Unwrapped() const noexcept {
    return static_cast<__DownloadSongConsoleCommand_AssetLookup_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadSongConsoleCommand_AssetLookup();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DownloadSongConsoleCommand_AssetLookup(int32_t value__) noexcept;

  /// @brief Field Found value: I32(0)
  static ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup const Found;

  /// @brief Field ListError value: I32(2)
  static ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup const ListError;

  /// @brief Field NotFound value: I32(1)
  static ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup const NotFound;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19353 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, DownloadSongConsoleCommand::AssetLookup, EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DownloadSongConsoleCommand/<ExecuteAsync>d__12
struct CORDL_TYPE DownloadSongConsoleCommand__ExecuteAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32cd720, size 0x145c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32ceb7c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadSongConsoleCommand__ExecuteAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DownloadSongConsoleCommand*",
  // modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None }, CppParam { name:
  // "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_cancellationTokenSource_5__3", ty: "::System::Threading::CancellationTokenSource*", modifiers: "",
  // def_value: None }, CppParam { name: "_cancellationToken_5__4", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_assetBundleName_5__5", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup,uint64_t,::StringW>>", modifiers: "", def_value:
  // None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr DownloadSongConsoleCommand__ExecuteAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::DownloadSongConsoleCommand* __4__this,
      ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::StringW _levelId_5__2, ::System::Threading::CancellationTokenSource* _cancellationTokenSource_5__3,
      ::System::Threading::CancellationToken _cancellationToken_5__4, ::StringW _assetBundleName_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>> __u__3,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19354 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DownloadSongConsoleCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <levelId>5__2, offset: 0x30, size: 0x8, def value: None
  ::StringW _levelId_5__2;

  /// @brief Field <cancellationTokenSource>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _cancellationTokenSource_5__3;

  /// @brief Field <cancellationToken>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__4;

  /// @brief Field <assetBundleName>5__5, offset: 0x48, size: 0x8, def value: None
  ::StringW _assetBundleName_5__5;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__2;

  /// @brief Field <>u__3, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>> __u__3;

  /// @brief Field <>u__4, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, _levelId_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, _cancellationTokenSource_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, _cancellationToken_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, _assetBundleName_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __u__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12, __u__4) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12) == 0x70, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DownloadSongConsoleCommand::AssetLookup, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: DownloadSongConsoleCommand/<FindAssetByBundleNameAsync>d__13
struct CORDL_TYPE DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32cebfc, size 0x5cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32cf1c8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup,uint64_t,::StringW>>", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "assetBundleName", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>", modifiers:
  // "", def_value: None }]
  constexpr DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::StringW assetBundleName,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19355 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field assetBundleName, offset: 0x28, size: 0x8, def value: None
  ::StringW assetBundleName;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13, assetBundleName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: DownloadSongConsoleCommand
class CORDL_TYPE DownloadSongConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using AssetLookup = ::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup;

  using _ExecuteAsync_d__12 = ::GlobalNamespace::DownloadSongConsoleCommand__ExecuteAsync_d__12;

  using _FindAssetByBundleNameAsync_d__13 = ::GlobalNamespace::DownloadSongConsoleCommand__FindAssetByBundleNameAsync_d__13;

  /// @brief Field _beatmapLevelsModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _downloadError, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadError, put = __cordl_internal_set__downloadError)) ::StringW _downloadError;

  /// @brief Field _downloadFailed, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__downloadFailed, put = __cordl_internal_set__downloadFailed)) bool _downloadFailed;

  /// @brief Field _levelId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::GlobalNamespace::RequiredArgument_1<::StringW>* _levelId;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32cd388, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method FindAssetByBundleNameAsync, addr 0x32cd47c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::GlobalNamespace::DownloadSongConsoleCommand_AssetLookup, uint64_t, ::StringW>>*
  FindAssetByBundleNameAsync(::StringW assetBundleName, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::DownloadSongConsoleCommand* New_ctor();

  /// @brief Method <ExecuteAsync>b__12_0, addr 0x32cd61c, size 0x104, virtual false, abstract: false, final false
  inline void _ExecuteAsync_b__12_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* message);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::StringW const& __cordl_internal_get__downloadError() const;

  constexpr ::StringW& __cordl_internal_get__downloadError();

  constexpr bool const& __cordl_internal_get__downloadFailed() const;

  constexpr bool& __cordl_internal_get__downloadFailed();

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& __cordl_internal_get__levelId() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__levelId();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__downloadError(::StringW value);

  constexpr void __cordl_internal_set__downloadFailed(bool value);

  constexpr void __cordl_internal_set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x32cd56c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32cd300, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32cd344, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadSongConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadSongConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadSongConsoleCommand(DownloadSongConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadSongConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadSongConsoleCommand(DownloadSongConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19356 };

  /// @brief Field kDownloadTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr float_t kDownloadTimeoutSeconds{ static_cast<float_t>(300.0f) };

  /// @brief Field kInstalledStatus offset 0xffffffff size 0x8
  static constexpr ::ConstString kInstalledStatus{ u"installed" };

  /// @brief Field kPollIntervalSeconds offset 0xffffffff size 0x4
  static constexpr float_t kPollIntervalSeconds{ static_cast<float_t>(2.0f) };

  /// @brief Field _beatmapLevelsModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _downloadError, offset: 0x40, size: 0x8, def value: None
  ::StringW ____downloadError;

  /// @brief Field _downloadFailed, offset: 0x48, size: 0x1, def value: None
  bool ____downloadFailed;

  /// @brief Field _levelId, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand, ____beatmapLevelsModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand, ____downloadError) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand, ____downloadFailed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadSongConsoleCommand, ____levelId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DownloadSongConsoleCommand) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
