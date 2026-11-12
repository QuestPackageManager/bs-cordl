#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarDataModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarOrigin_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarDataModel)
namespace BeatSaber::BeatAvatarSDK {
struct AvatarDataModel__DeleteAsyncInternal_d__36;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarDataModel__LoadInternalAsync_d__32;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarDataModel__SaveInternalAsync_d__30;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarOrigin;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarSaveData;
}
namespace GlobalNamespace {
class IFileStorage;
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
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarDataModel__DeleteAsyncInternal_d__36;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarDataModel__LoadInternalAsync_d__32;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarDataModel__SaveInternalAsync_d__30;
}
// Write type traits
MARK_REF_T(::BeatSaber::BeatAvatarSDK::AvatarDataModel*);
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36);
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32);
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30);
DEFINE_IL2CPP_CLASS(::BeatSaber::BeatAvatarSDK::AvatarDataModel*, "BeatSaber.BeatAvatarSDK", "AvatarDataModel");
DEFINE_IL2CPP_CLASS(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36, "BeatSaber.BeatAvatarSDK", "AvatarDataModel/<DeleteAsyncInternal>d__36");
DEFINE_IL2CPP_CLASS(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32, "BeatSaber.BeatAvatarSDK", "AvatarDataModel/<LoadInternalAsync>d__32");
DEFINE_IL2CPP_CLASS(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30, "BeatSaber.BeatAvatarSDK", "AvatarDataModel/<SaveInternalAsync>d__30");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: BeatSaber.BeatAvatarSDK.AvatarDataModel/<DeleteAsyncInternal>d__36
struct CORDL_TYPE AvatarDataModel__DeleteAsyncInternal_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3524ca8, size 0x2ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x3524f54, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDataModel__DeleteAsyncInternal_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::BeatAvatarSDK::AvatarDataModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None, comment: None }]
  constexpr AvatarDataModel__DeleteAsyncInternal_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                       ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36) == 0x30, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: BeatSaber.BeatAvatarSDK.AvatarDataModel/<LoadInternalAsync>d__32
struct CORDL_TYPE AvatarDataModel__LoadInternalAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3524fd4, size 0x26c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x3525240, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDataModel__LoadInternalAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::BeatAvatarSDK::AvatarDataModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>", modifiers: "", def_value: None, comment: None }]
  constexpr AvatarDataModel__LoadInternalAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                     ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32) == 0x30, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// [CompilerGenerated]
// Dependencies BeatSaber.BeatAvatarSDK.AvatarOrigin, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: BeatSaber.BeatAvatarSDK.AvatarDataModel/<SaveInternalAsync>d__30
struct CORDL_TYPE AvatarDataModel__SaveInternalAsync_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x35252c0, size 0x3a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x3525668, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDataModel__SaveInternalAsync_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "origin", ty: "::BeatSaber::BeatAvatarSDK::AvatarOrigin",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr AvatarDataModel__SaveInternalAsync_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                     ::BeatSaber::BeatAvatarSDK::AvatarOrigin origin, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23152 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field origin, offset: 0x20, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarOrigin origin;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30, origin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30) == 0x38, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
// Dependencies BeatSaber.BeatAvatarSDK.AvatarOrigin, System.Object
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarDataModel
class CORDL_TYPE AvatarDataModel : public ::System::Object {
public:
  // Declarations
  using _DeleteAsyncInternal_d__36 = ::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__36;

  using _LoadInternalAsync_d__32 = ::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__32;

  using _SaveInternalAsync_d__30 = ::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__30;

  /// @brief Field _avatarCreatedTask, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarCreatedTask, put = __cordl_internal_set__avatarCreatedTask)) ::System::Threading::Tasks::Task_1<bool>* _avatarCreatedTask;

  /// @brief Field _avatarData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarData, put = __cordl_internal_set__avatarData)) ::BeatSaber::BeatAvatarSDK::AvatarData* _avatarData;

  /// @brief Field _avatarOrigin, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__avatarOrigin, put = __cordl_internal_set__avatarOrigin)) ::BeatSaber::BeatAvatarSDK::AvatarOrigin _avatarOrigin;

  /// @brief Field _avatarPartsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPartsModel, put = __cordl_internal_set__avatarPartsModel)) ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _fileStorage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _isBeingEdited, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__isBeingEdited, put = __cordl_internal_set__isBeingEdited)) bool _isBeingEdited;

  __declspec(property(get = get_avatarData, put = set_avatarData)) ::BeatSaber::BeatAvatarSDK::AvatarData* avatarData;

  __declspec(property(get = get_avatarOrigin)) ::BeatSaber::BeatAvatarSDK::AvatarOrigin avatarOrigin;

  /// @brief Field didChangeAvatarDataEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeAvatarDataEvent,
                      put = __cordl_internal_set_didChangeAvatarDataEvent)) ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* didChangeAvatarDataEvent;

  /// @brief Field didEndAvatarEditEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didEndAvatarEditEvent, put = __cordl_internal_set_didEndAvatarEditEvent)) ::System::Action* didEndAvatarEditEvent;

  /// @brief Field didSaveAvatarDataEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_didSaveAvatarDataEvent, put = __cordl_internal_set_didSaveAvatarDataEvent)) ::System::Action* didSaveAvatarDataEvent;

  __declspec(property(get = get_isBeingEdited)) bool isBeingEdited;

  /// @brief Method BeginEdit, addr 0x35244d4, size 0xc, virtual false, abstract: false, final false
  inline void BeginEdit();

  /// @brief Method CreateDefaultAvatarData, addr 0x35249a8, size 0x4, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateDefaultAvatarData();

  /// @brief Method CreateRandomAvatarData, addr 0x3524aa0, size 0xb4, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateRandomAvatarData();

  /// @brief Method DeleteAsync, addr 0x35249ac, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DeleteAsync();

  /// [AsyncStateMachine(typeof(BeatSaber.BeatAvatarSDK.AvatarDataModel::<DeleteAsyncInternal>d__36))]
  /// @brief Method DeleteAsyncInternal, addr 0x35249c4, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* DeleteAsyncInternal();

  /// @brief Method EndEdit, addr 0x35244e0, size 0x20, virtual false, abstract: false, final false
  inline void EndEdit();

  /// [Inject]
  /// [UsedImplicitly]
  /// @brief Method Init, addr 0x35243d8, size 0xf4, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Load, addr 0x35247a8, size 0x6c, virtual false, abstract: false, final false
  inline bool Load(::BeatSaber::BeatAvatarSDK::AvatarSaveData* avatarSaveData);

  /// @brief Method LoadAsync, addr 0x3524648, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadAsync();

  /// @brief Method LoadFromCurrentVersion, addr 0x3524814, size 0x194, virtual false, abstract: false, final false
  static inline ::BeatSaber::BeatAvatarSDK::AvatarData* LoadFromCurrentVersion(::BeatSaber::BeatAvatarSDK::AvatarSaveData* avatarSaveData);

  /// @brief Method LoadFromSaveDataAsync, addr 0x352473c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>* LoadFromSaveDataAsync(::GlobalNamespace::IFileStorage* fileStorage);

  /// [AsyncStateMachine(typeof(BeatSaber.BeatAvatarSDK.AvatarDataModel::<LoadInternalAsync>d__32))]
  /// @brief Method LoadInternalAsync, addr 0x3524660, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* LoadInternalAsync();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarDataModel* New_ctor();

  /// @brief Method ReportAvatarChanged, addr 0x3523f78, size 0x20, virtual false, abstract: false, final false
  inline void ReportAvatarChanged();

  /// @brief Method RequestIsAvatarCreatedAsync, addr 0x35244cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RequestIsAvatarCreatedAsync();

  /// @brief Method SaveAccountAvatarAsync, addr 0x352462c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAccountAvatarAsync();

  /// @brief Method SaveAsync, addr 0x3524500, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  /// @brief Method SaveGeneratedPlaceholderAsync, addr 0x3524610, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveGeneratedPlaceholderAsync();

  /// [AsyncStateMachine(typeof(BeatSaber.BeatAvatarSDK.AvatarDataModel::<SaveInternalAsync>d__30))]
  /// @brief Method SaveInternalAsync, addr 0x352451c, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* SaveInternalAsync(::BeatSaber::BeatAvatarSDK::AvatarOrigin origin);

  constexpr ::System::Threading::Tasks::Task_1<bool>* const& __cordl_internal_get__avatarCreatedTask() const;

  constexpr ::System::Threading::Tasks::Task_1<bool>*& __cordl_internal_get__avatarCreatedTask();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarData* const& __cordl_internal_get__avatarData() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& __cordl_internal_get__avatarData();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin const& __cordl_internal_get__avatarOrigin() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin& __cordl_internal_get__avatarOrigin();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* const& __cordl_internal_get__avatarPartsModel() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __cordl_internal_get__avatarPartsModel();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr bool const& __cordl_internal_get__isBeingEdited() const;

  constexpr bool& __cordl_internal_get__isBeingEdited();

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* const& __cordl_internal_get_didChangeAvatarDataEvent() const;

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*& __cordl_internal_get_didChangeAvatarDataEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didEndAvatarEditEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didEndAvatarEditEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didSaveAvatarDataEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didSaveAvatarDataEvent();

  constexpr void __cordl_internal_set__avatarCreatedTask(::System::Threading::Tasks::Task_1<bool>* value);

  constexpr void __cordl_internal_set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value);

  constexpr void __cordl_internal_set__avatarOrigin(::BeatSaber::BeatAvatarSDK::AvatarOrigin value);

  constexpr void __cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__isBeingEdited(bool value);

  constexpr void __cordl_internal_set_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value);

  constexpr void __cordl_internal_set_didEndAvatarEditEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didSaveAvatarDataEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3524c2c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_didChangeAvatarDataEvent, addr 0x3523fa8, size 0xc0, virtual false, abstract: false, final false
  inline void add_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value);

  /// [CompilerGenerated]
  /// @brief Method add_didEndAvatarEditEvent, addr 0x3524280, size 0xac, virtual false, abstract: false, final false
  inline void add_didEndAvatarEditEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_didSaveAvatarDataEvent, addr 0x3524128, size 0xac, virtual false, abstract: false, final false
  inline void add_didSaveAvatarDataEvent(::System::Action* value);

  /// @brief Method get_avatarData, addr 0x3523ef8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* get_avatarData();

  /// @brief Method get_avatarOrigin, addr 0x3523f98, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarOrigin get_avatarOrigin();

  /// @brief Method get_isBeingEdited, addr 0x3523fa0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBeingEdited();

  /// [CompilerGenerated]
  /// @brief Method remove_didChangeAvatarDataEvent, addr 0x3524068, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_didEndAvatarEditEvent, addr 0x352432c, size 0xac, virtual false, abstract: false, final false
  inline void remove_didEndAvatarEditEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_didSaveAvatarDataEvent, addr 0x35241d4, size 0xac, virtual false, abstract: false, final false
  inline void remove_didSaveAvatarDataEvent(::System::Action* value);

  /// @brief Method set_avatarData, addr 0x3523f00, size 0x78, virtual false, abstract: false, final false
  inline void set_avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDataModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarDataModel(AvatarDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarDataModel(AvatarDataModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23153 };

  /// @brief Field kAvatarDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kAvatarDataFileName{ u"AvatarData.dat" };

  /// [CompilerGenerated]
  /// @brief Field didChangeAvatarDataEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* ___didChangeAvatarDataEvent;

  /// [CompilerGenerated]
  /// @brief Field didSaveAvatarDataEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didSaveAvatarDataEvent;

  /// [CompilerGenerated]
  /// @brief Field didEndAvatarEditEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didEndAvatarEditEvent;

  /// [Inject]
  /// @brief Field _avatarPartsModel, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* ____avatarPartsModel;

  /// [Inject]
  /// @brief Field _fileStorage, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _avatarData, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarData* ____avatarData;

  /// @brief Field _avatarCreatedTask, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* ____avatarCreatedTask;

  /// @brief Field _avatarOrigin, offset: 0x48, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarOrigin ____avatarOrigin;

  /// @brief Field _isBeingEdited, offset: 0x4c, size: 0x1, def value: None
  bool ____isBeingEdited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ___didChangeAvatarDataEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ___didSaveAvatarDataEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ___didEndAvatarEditEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarPartsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____fileStorage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarCreatedTask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarOrigin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____isBeingEdited) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::BeatAvatarSDK::AvatarDataModel) == 0x50, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
