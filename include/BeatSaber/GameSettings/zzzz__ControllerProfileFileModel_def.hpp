#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileFileModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerProfileFileModel)
namespace BeatSaber::GameSettings {
struct ControllerProfileFileModel__LoadAsync_d__5;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesSaveData;
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
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfileFileModel;
}
namespace BeatSaber::GameSettings {
struct ControllerProfileFileModel__LoadAsync_d__5;
}
// Write type traits
MARK_REF_T(::BeatSaber::GameSettings::ControllerProfileFileModel*);
MARK_VAL_T(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5);
DEFINE_IL2CPP_CLASS(::BeatSaber::GameSettings::ControllerProfileFileModel*, "BeatSaber.GameSettings", "ControllerProfileFileModel");
DEFINE_IL2CPP_CLASS(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5, "BeatSaber.GameSettings", "ControllerProfileFileModel/<LoadAsync>d__5");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: BeatSaber.GameSettings.ControllerProfileFileModel/<LoadAsync>d__5
struct CORDL_TYPE ControllerProfileFileModel__LoadAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x353b66c, size 0x290, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x353b8fc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfileFileModel__LoadAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfileFileModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "", def_value: None, comment: None }]
  constexpr ControllerProfileFileModel__LoadAsync_d__5(int32_t __1__state,
                                                       ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __t__builder,
                                                       ::BeatSaber::GameSettings::ControllerProfileFileModel* __4__this,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfileFileModel* __4__this;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5) == 0x30, "Size mismatch!");

} // namespace BeatSaber::GameSettings
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies StoragePreference, System.Object
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfileFileModel
class CORDL_TYPE ControllerProfileFileModel : public ::System::Object {
public:
  // Declarations
  using _LoadAsync_d__5 = ::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5;

  /// @brief Field _fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  __declspec(property(get = get_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// [AsyncStateMachine(typeof(BeatSaber.GameSettings.ControllerProfileFileModel::<LoadAsync>d__5))]
  /// @brief Method LoadAsync, addr 0x353b520, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* LoadAsync();

  static inline ::BeatSaber::GameSettings::ControllerProfileFileModel* New_ctor();

  /// @brief Method SaveAsync, addr 0x353b5fc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync(::BeatSaber::GameSettings::ControllerProfilesSaveData* profileSaveDataContainer);

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  /// @brief Method .ctor, addr 0x353b668, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fileStorage, addr 0x353b4c8, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IFileStorage* get_fileStorage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfileFileModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileFileModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfileFileModel(ControllerProfileFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileFileModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfileFileModel(ControllerProfileFileModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22870 };

  /// @brief Field kFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kFileName{ u"ControllerProfiles.dat" };

  /// @brief Field kStoragePreference value: I32(0)
  static ::GlobalNamespace::StoragePreference const kStoragePreference;

  /// [Nullable(2)]
  /// [Inject]
  /// @brief Field _fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileFileModel, ____fileStorage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::GameSettings::ControllerProfileFileModel) == 0x18, "Size mismatch!");

} // namespace BeatSaber::GameSettings
