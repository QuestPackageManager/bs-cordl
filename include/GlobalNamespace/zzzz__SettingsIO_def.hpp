#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsIO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsIO)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
struct HardwareCategory;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
struct SettingsIO__LoadAsync_d__15;
}
namespace GlobalNamespace {
struct SettingsIO__SaveAsync_d__14;
}
namespace GlobalNamespace {
struct SettingsIO__WipeAsync_d__13;
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
namespace System::Threading {
class SemaphoreSlim;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsIO;
}
namespace GlobalNamespace {
struct SettingsIO__LoadAsync_d__15;
}
namespace GlobalNamespace {
struct SettingsIO__SaveAsync_d__14;
}
namespace GlobalNamespace {
struct SettingsIO__WipeAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsIO);
MARK_VAL_T(::GlobalNamespace::SettingsIO__LoadAsync_d__15);
MARK_VAL_T(::GlobalNamespace::SettingsIO__SaveAsync_d__14);
MARK_VAL_T(::GlobalNamespace::SettingsIO__WipeAsync_d__13);
// Dependencies BeatSaber.Settings.Settings, HardwareCategory, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsIO/<LoadAsync>d__15
struct CORDL_TYPE SettingsIO__LoadAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x318f250, size 0x10a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31902f8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsIO__LoadAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings>", modifiers: "", def_value: None }, CppParam { name: "platform", ty:
  // "::GlobalNamespace::HardwareCategory", modifiers: "", def_value: None }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: None }, CppParam { name:
  // "_settings_5__2", ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "_mainData_5__3", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr SettingsIO__LoadAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings> __t__builder,
                                        ::GlobalNamespace::HardwareCategory platform, ::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::Settings::Settings _settings_5__2,
                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3, ::StringW _mainData_5__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x140 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings> __t__builder;

  /// @brief Field platform, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::HardwareCategory platform;

  /// @brief Field fileStorage, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field <settings>5__2, offset: 0x30, size: 0xf0, def value: None
  ::BeatSaber::Settings::Settings _settings_5__2;

  /// @brief Field <>u__1, offset: 0x120, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x128, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief Field <>u__3, offset: 0x130, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3;

  /// @brief Field <mainData>5__3, offset: 0x138, size: 0x8, def value: None
  ::StringW _mainData_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, fileStorage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, _settings_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, __u__1) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, __u__2) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, __u__3) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__LoadAsync_d__15, _mainData_5__3) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsIO__LoadAsync_d__15, 0x140>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.Settings.Settings, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsIO/<SaveAsync>d__14
struct CORDL_TYPE SettingsIO__SaveAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3190378, size 0x77c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3190af4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsIO__SaveAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value: None
  // }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: None }, CppParam { name: "_data_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr SettingsIO__SaveAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Settings::Settings settings,
                                        ::GlobalNamespace::IFileStorage* fileStorage, ::StringW _data_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x130 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field settings, offset: 0x20, size: 0xf0, def value: None
  ::BeatSaber::Settings::Settings settings;

  /// @brief Field fileStorage, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field <data>5__2, offset: 0x118, size: 0x8, def value: None
  ::StringW _data_5__2;

  /// @brief Field <>u__1, offset: 0x120, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x128, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, fileStorage) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, _data_5__2) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, __u__1) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__SaveAsync_d__14, __u__2) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsIO__SaveAsync_d__14, 0x130>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsIO/<WipeAsync>d__13
struct CORDL_TYPE SettingsIO__WipeAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3190b60, size 0x1168, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3191cc8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsIO__WipeAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr SettingsIO__WipeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::IFileStorage* fileStorage,
                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field fileStorage, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsIO__WipeAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__WipeAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__WipeAsync_d__13, fileStorage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__WipeAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsIO__WipeAsync_d__13, __u__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsIO__WipeAsync_d__13, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies StoragePreference, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsIO
class CORDL_TYPE SettingsIO : public ::System::Object {
public:
  // Declarations
  using _LoadAsync_d__15 = ::GlobalNamespace::SettingsIO__LoadAsync_d__15;

  using _SaveAsync_d__14 = ::GlobalNamespace::SettingsIO__SaveAsync_d__14;

  using _WipeAsync_d__13 = ::GlobalNamespace::SettingsIO__WipeAsync_d__13;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lock, put = setStaticF__lock)) ::System::Threading::SemaphoreSlim* _lock;

  /// @brief Field _settingsPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__settingsPath, put = setStaticF__settingsPath)) ::StringW _settingsPath;

  /// @brief Method Decode, addr 0x318ee14, size 0x12c, virtual false, abstract: false, final false
  static inline bool Decode(::ByRef<::BeatSaber::Settings::Settings> settings, ::StringW text);

  /// @brief Method Encode, addr 0x318f048, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW Encode(::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method Init, addr 0x318e508, size 0x78, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method Load, addr 0x318e7fc, size 0x534, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::Settings Load(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::HardwareCategory platform);

  /// @brief Method LoadAsync, addr 0x318e708, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>* LoadAsync(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::HardwareCategory platform);

  /// @brief Method SaveAsync, addr 0x318e634, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* SaveAsync(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::Settings::Settings settings);

  /// @brief Method WipeAsync, addr 0x318e580, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WipeAsync(::GlobalNamespace::IFileStorage* fileStorage);

  static inline ::System::Threading::SemaphoreSlim* getStaticF__lock();

  static inline ::StringW getStaticF__settingsPath();

  /// @brief Method get_SettingsPath, addr 0x318e2b8, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW get_SettingsPath();

  static inline void setStaticF__lock(::System::Threading::SemaphoreSlim* value);

  static inline void setStaticF__settingsPath(::StringW value);

  /// @brief Method set_SettingsPath, addr 0x318e3cc, size 0x13c, virtual false, abstract: false, final false
  static inline void set_SettingsPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsIO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsIO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsIO(SettingsIO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsIO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsIO(SettingsIO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21841 };

  /// @brief Field kGraphicsSettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kGraphicsSettingsPath{ u"GraphicsSettings.json" };

  /// @brief Field kLegacySettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kLegacySettingsPath{ u"settings.cfg" };

  /// @brief Field kLegacyV2StoragePreference value: I32(1)
  static ::GlobalNamespace::StoragePreference const kLegacyV2StoragePreference;

  /// @brief Field kMainSettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainSettingsPath{ u"MainSettings.json" };

  /// @brief Field kSettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kSettingsPath{ u"settings.ini" };

  /// @brief Field kStorageLoadPreference value: I32(1)
  static ::GlobalNamespace::StoragePreference const kStorageLoadPreference;

  /// @brief Field kStorageSavePreference value: I32(1)
  static ::GlobalNamespace::StoragePreference const kStorageSavePreference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsIO, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsIO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsIO*, "", "SettingsIO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsIO__LoadAsync_d__15, "", "SettingsIO/<LoadAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsIO__SaveAsync_d__14, "", "SettingsIO/<SaveAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsIO__WipeAsync_d__13, "", "SettingsIO/<WipeAsync>d__13");
