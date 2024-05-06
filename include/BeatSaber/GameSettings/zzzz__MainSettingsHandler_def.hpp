#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/SaveDataCore/zzzz__SaveDataHandler_1_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsHandler)
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
namespace BeatSaber::GameSettings {
class MainSettings;
}
namespace BeatSaber::GameSettings {
struct __MainSettingsHandler___InternalLoadAsync_d__11;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
struct StoragePreference;
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
namespace System {
class Version;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace BeatSaber::GameSettings {
struct __MainSettingsHandler___InternalLoadAsync_d__11;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::MainSettingsHandler);
MARK_VAL_T(::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11);
// Type: ::<InternalLoadAsync>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::MainSettingsHandler::<InternalLoadAsync>d__11
struct CORDL_TYPE __MainSettingsHandler___InternalLoadAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x10610fc, size 0x214, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1061310, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsHandler___InternalLoadAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::GameSettings::MainSettingsHandler*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __MainSettingsHandler___InternalLoadAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
                                                            ::BeatSaber::GameSettings::MainSettingsHandler* __4__this,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
// Type: BeatSaber.GameSettings::MainSettingsHandler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::MainSettingsHandler*
class CORDL_TYPE MainSettingsHandler : public ::BGLib::SaveDataCore::SaveDataHandler_1<::BeatSaber::GameSettings::MainSettings*> {
public:
  // Declarations
  using _InternalLoadAsync_d__11 = ::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11;

  __declspec(property(get = get_fileNameWithExtension))::StringW fileNameWithExtension;

  __declspec(property(get = get_firstVersion))::System::Version* firstVersion;

  __declspec(property(get = get_preferredStorageLocation))::GlobalNamespace::StoragePreference preferredStorageLocation;

  __declspec(property(get = get_version))::System::Version* version;

  /// @brief Method InternalLoadAsync, addr 0x1060fc4, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* InternalLoadAsync();

  static inline ::BeatSaber::GameSettings::MainSettingsHandler* New_ctor(::GlobalNamespace::IFileStorage* fileStorage);

  static inline ::BeatSaber::GameSettings::MainSettingsHandler* New_ctor(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::GameSettings::MainSettings* instance);

  /// @brief Method PerformPostLoad, addr 0x1060b5c, size 0x468, virtual false, abstract: false, final false
  inline ::BGLib::SaveDataCore::SaveDataResult PerformPostLoad();

  /// @brief Method <>n__0, addr 0x10610b4, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* __n__0();

  /// @brief Method .ctor, addr 0x1060aa4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage);

  /// @brief Method .ctor, addr 0x1060afc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::GameSettings::MainSettings* instance);

  /// @brief Method get_fileNameWithExtension, addr 0x1060a5c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_fileNameWithExtension();

  /// @brief Method get_firstVersion, addr 0x10609e8, size 0x74, virtual true, abstract: false, final false
  inline ::System::Version* get_firstVersion();

  /// @brief Method get_preferredStorageLocation, addr 0x1060a9c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::StoragePreference get_preferredStorageLocation();

  /// @brief Method get_version, addr 0x1060974, size 0x74, virtual true, abstract: false, final false
  inline ::System::Version* get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsHandler(MainSettingsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsHandler(MainSettingsHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::MainSettingsHandler, 0x38>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::MainSettingsHandler);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::MainSettingsHandler*, "BeatSaber.GameSettings", "MainSettingsHandler");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::__MainSettingsHandler___InternalLoadAsync_d__11, "BeatSaber.GameSettings", "MainSettingsHandler/<InternalLoadAsync>d__11");
