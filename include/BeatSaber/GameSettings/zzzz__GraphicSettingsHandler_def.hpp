#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/GraphicSettingsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/SaveDataCore/zzzz__SaveDataHandler_1_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicSettingsHandler)
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
namespace BeatSaber::GameSettings {
class GraphicSettings;
}
namespace BeatSaber::GameSettings {
struct __GraphicSettingsHandler___InternalLoadAsync_d__16;
}
namespace BeatSaber::GameSettings {
struct __GraphicSettingsHandler___PerformPostLoadAsync_d__15;
}
namespace BeatSaber::GameSettings {
struct __GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14;
}
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
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
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
class Version;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
struct __GraphicSettingsHandler___InternalLoadAsync_d__16;
}
namespace BeatSaber::GameSettings {
struct __GraphicSettingsHandler___PerformPostLoadAsync_d__15;
}
namespace BeatSaber::GameSettings {
struct __GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::GraphicSettingsHandler);
MARK_VAL_T(::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16);
MARK_VAL_T(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15);
MARK_VAL_T(::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14);
// Type: ::<TryUpdateCurrentPerformancePresetAsync>d__14
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::GraphicSettingsHandler::<TryUpdateCurrentPerformancePresetAsync>d__14
struct CORDL_TYPE __GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x106ca9c, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x106ce1c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::GameSettings::GraphicSettingsHandler*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: None }]
  constexpr __GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
      ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14, __u__1) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
// Type: ::<PerformPostLoadAsync>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::GraphicSettingsHandler::<PerformPostLoadAsync>d__15
struct CORDL_TYPE __GraphicSettingsHandler___PerformPostLoadAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x106ce74, size 0x4c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x106d33c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicSettingsHandler___PerformPostLoadAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::GameSettings::GraphicSettingsHandler*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: None }]
  constexpr __GraphicSettingsHandler___PerformPostLoadAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
      ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, __u__2) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
// Type: ::<InternalLoadAsync>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::GraphicSettingsHandler::<InternalLoadAsync>d__16
struct CORDL_TYPE __GraphicSettingsHandler___InternalLoadAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x106d394, size 0x2ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x106d640, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicSettingsHandler___InternalLoadAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::GameSettings::GraphicSettingsHandler*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __GraphicSettingsHandler___InternalLoadAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
                                                               ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
// Type: BeatSaber.GameSettings::GraphicSettingsHandler
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::GraphicSettingsHandler*
class CORDL_TYPE GraphicSettingsHandler : public ::BGLib::SaveDataCore::SaveDataHandler_1<::BeatSaber::GameSettings::GraphicSettings*> {
public:
  // Declarations
  using _InternalLoadAsync_d__16 = ::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16;

  using _PerformPostLoadAsync_d__15 = ::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15;

  using _TryUpdateCurrentPerformancePresetAsync_d__14 = ::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14;

  /// @brief Field _currentPreset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPreset, put = __cordl_internal_set__currentPreset))::BeatSaber::PerformancePresets::PerformancePreset* _currentPreset;

  /// @brief Field _currentPresetKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPresetKey, put = __cordl_internal_set__currentPresetKey))::StringW _currentPresetKey;

  __declspec(property(get = get_fileNameWithExtension))::StringW fileNameWithExtension;

  __declspec(property(get = get_firstVersion))::System::Version* firstVersion;

  __declspec(property(get = get_preferredStorageLocation))::GlobalNamespace::StoragePreference preferredStorageLocation;

  __declspec(property(get = get_version))::System::Version* version;

  /// @brief Method InternalLoadAsync, addr 0x106c8d8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* InternalLoadAsync();

  /// @brief Method Load, addr 0x106c9c8, size 0x8c, virtual true, abstract: false, final false
  inline ::BGLib::SaveDataCore::SaveDataResult Load();

  static inline ::BeatSaber::GameSettings::GraphicSettingsHandler* New_ctor(::GlobalNamespace::IFileStorage* fileStorage);

  static inline ::BeatSaber::GameSettings::GraphicSettingsHandler* New_ctor(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::GameSettings::GraphicSettings* instance);

  /// @brief Method PerformPostLoadAsync, addr 0x106c7e4, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* PerformPostLoadAsync();

  /// @brief Method TryGetCurrentPerformancePreset, addr 0x106c514, size 0x9c, virtual false, abstract: false, final false
  inline bool TryGetCurrentPerformancePreset(ByRef<::BeatSaber::PerformancePresets::PerformancePreset*> currentPreset);

  /// @brief Method TryGetCurrentPerformancePreset, addr 0x106c5b0, size 0x144, virtual false, abstract: false, final false
  inline bool TryGetCurrentPerformancePreset(::StringW serializedEnvironmentName, ByRef<::BeatSaber::PerformancePresets::PerformancePreset*> currentPreset);

  /// @brief Method TryUpdateCurrentPerformancePresetAsync, addr 0x106c6f4, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* TryUpdateCurrentPerformancePresetAsync();

  constexpr ::BeatSaber::PerformancePresets::PerformancePreset*& __cordl_internal_get__currentPreset();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::PerformancePreset*> const& __cordl_internal_get__currentPreset() const;

  constexpr ::StringW const& __cordl_internal_get__currentPresetKey() const;

  constexpr ::StringW& __cordl_internal_get__currentPresetKey();

  constexpr void __cordl_internal_set__currentPreset(::BeatSaber::PerformancePresets::PerformancePreset* value);

  constexpr void __cordl_internal_set__currentPresetKey(::StringW value);

  /// @brief Method <>n__0, addr 0x106ca54, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* __n__0();

  /// @brief Method .ctor, addr 0x106c45c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage);

  /// @brief Method .ctor, addr 0x106c4b4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::GameSettings::GraphicSettings* instance);

  /// @brief Method get_fileNameWithExtension, addr 0x106c414, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_fileNameWithExtension();

  /// @brief Method get_firstVersion, addr 0x106c3a0, size 0x74, virtual true, abstract: false, final false
  inline ::System::Version* get_firstVersion();

  /// @brief Method get_preferredStorageLocation, addr 0x106c454, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::StoragePreference get_preferredStorageLocation();

  /// @brief Method get_version, addr 0x106c32c, size 0x74, virtual true, abstract: false, final false
  inline ::System::Version* get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettingsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicSettingsHandler(GraphicSettingsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicSettingsHandler(GraphicSettingsHandler const&) = delete;

  /// @brief Field _currentPreset, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::PerformancePresets::PerformancePreset* ____currentPreset;

  /// @brief Field _currentPresetKey, offset: 0x40, size: 0x8, def value: None
  ::StringW ____currentPresetKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::GraphicSettingsHandler, 0x48>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::GraphicSettingsHandler, ____currentPreset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::GraphicSettingsHandler, ____currentPresetKey) == 0x40, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::GraphicSettingsHandler);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::GraphicSettingsHandler*, "BeatSaber.GameSettings", "GraphicSettingsHandler");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16, "BeatSaber.GameSettings", "GraphicSettingsHandler/<InternalLoadAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15, "BeatSaber.GameSettings", "GraphicSettingsHandler/<PerformPostLoadAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14, "BeatSaber.GameSettings",
                       "GraphicSettingsHandler/<TryUpdateCurrentPerformancePresetAsync>d__14");
