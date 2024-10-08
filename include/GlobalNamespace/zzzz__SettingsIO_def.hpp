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
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct __SettingsIO___LoadAsync_d__8;
}
namespace GlobalNamespace {
struct __SettingsIO___SaveAsync_d__7;
}
namespace GlobalNamespace {
struct __SettingsIO___WipeAsync_d__6;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
struct __SettingsIO___LoadAsync_d__8;
}
namespace GlobalNamespace {
struct __SettingsIO___SaveAsync_d__7;
}
namespace GlobalNamespace {
struct __SettingsIO___WipeAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsIO);
MARK_VAL_T(::GlobalNamespace::__SettingsIO___LoadAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__SettingsIO___SaveAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__SettingsIO___WipeAsync_d__6);
// Type: ::<LoadAsync>d__8
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 328, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SettingsIO::<LoadAsync>d__8
struct CORDL_TYPE __SettingsIO___LoadAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26bcafc, size 0xf8c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26bda88, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsIO___LoadAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings>", modifiers: "", def_value: None }, CppParam { name: "platform", ty:
  // "::GlobalNamespace::HardwareCategory", modifiers: "", def_value: None }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: None }, CppParam { name:
  // "_settings_5__2", ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "_mainData_5__3", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __SettingsIO___LoadAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings> __t__builder,
                                          ::GlobalNamespace::HardwareCategory platform, ::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::Settings::Settings _settings_5__2,
                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3, ::StringW _mainData_5__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings> __t__builder;

  /// @brief Field platform, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::HardwareCategory platform;

  /// @brief Field fileStorage, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field <settings>5__2, offset: 0x30, size: 0xe8, def value: None
  ::BeatSaber::Settings::Settings _settings_5__2;

  /// @brief Field <>u__1, offset: 0x118, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x120, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief Field <>u__3, offset: 0x128, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3;

  /// @brief Field <mainData>5__3, offset: 0x130, size: 0x8, def value: None
  ::StringW _mainData_5__3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x138 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsIO___LoadAsync_d__8, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, fileStorage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, _settings_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, __u__1) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, __u__2) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, __u__3) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, _mainData_5__3) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SaveAsync>d__7
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 312, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SettingsIO::<SaveAsync>d__7
struct CORDL_TYPE __SettingsIO___SaveAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26bdb04, size 0x788, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26be28c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsIO___SaveAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value: None
  // }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: None }, CppParam { name: "_data_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SettingsIO___SaveAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Settings::Settings settings,
                                          ::GlobalNamespace::IFileStorage* fileStorage, ::StringW _data_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field settings, offset: 0x20, size: 0xe8, def value: None
  ::BeatSaber::Settings::Settings settings;

  /// @brief Field fileStorage, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Field <data>5__2, offset: 0x110, size: 0x8, def value: None
  ::StringW _data_5__2;

  /// @brief Field <>u__1, offset: 0x118, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x120, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13268 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsIO___SaveAsync_d__7, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, fileStorage) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, _data_5__2) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, __u__1) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, __u__2) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<WipeAsync>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SettingsIO::<WipeAsync>d__6
struct CORDL_TYPE __SettingsIO___WipeAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26be2f4, size 0x1024, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26bf318, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsIO___WipeAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SettingsIO___WipeAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::IFileStorage* fileStorage,
                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13269 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsIO___WipeAsync_d__6, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___WipeAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___WipeAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___WipeAsync_d__6, fileStorage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___WipeAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsIO___WipeAsync_d__6, __u__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsIO
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsIO*
class CORDL_TYPE SettingsIO : public ::System::Object {
public:
  // Declarations
  using _LoadAsync_d__8 = ::GlobalNamespace::__SettingsIO___LoadAsync_d__8;

  using _SaveAsync_d__7 = ::GlobalNamespace::__SettingsIO___SaveAsync_d__7;

  using _WipeAsync_d__6 = ::GlobalNamespace::__SettingsIO___WipeAsync_d__6;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock)) ::System::Threading::SemaphoreSlim* _lock;

  /// @brief Method Decode, addr 0x26bc710, size 0xd8, virtual false, abstract: false, final false
  static inline bool Decode(ByRef<::BeatSaber::Settings::Settings> settings, ::StringW text);

  /// @brief Method Encode, addr 0x26bc92c, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW Encode(ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method Load, addr 0x26bc13c, size 0x440, virtual false, abstract: false, final false
  static inline ::BeatSaber::Settings::Settings Load(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::HardwareCategory platform);

  /// @brief Method LoadAsync, addr 0x26bc02c, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>* LoadAsync(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::HardwareCategory platform);

  /// @brief Method SaveAsync, addr 0x26bbf40, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* SaveAsync(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::Settings::Settings settings);

  /// @brief Method WipeAsync, addr 0x26bbe7c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WipeAsync(::GlobalNamespace::IFileStorage* fileStorage);

  static inline ::System::Threading::SemaphoreSlim* getStaticF__lock();

  static inline void setStaticF__lock(::System::Threading::SemaphoreSlim* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13270 };

  /// @brief Field kGraphicsSettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kGraphicsSettingsPath{ u"GraphicsSettings.json" };

  /// @brief Field kLegacySettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kLegacySettingsPath{ u"settings.cfg" };

  /// @brief Field kMainSettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainSettingsPath{ u"MainSettings.json" };

  /// @brief Field kSettingsPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kSettingsPath{ u"settings.ini" };

  /// @brief Field kStoragePreference value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::StoragePreference const kStoragePreference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsIO, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsIO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsIO*, "", "SettingsIO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsIO___LoadAsync_d__8, "", "SettingsIO/<LoadAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsIO___SaveAsync_d__7, "", "SettingsIO/<SaveAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsIO___WipeAsync_d__6, "", "SettingsIO/<WipeAsync>d__6");
