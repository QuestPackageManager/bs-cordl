#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/PlatformUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformUser)
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementProgress;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
}
namespace OculusStudios::Platform::Core {
class IPlatformUser;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
struct UserAgeCategory;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__GetAccessTokenAsync_d__12;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__GetAgeCategoryInternalAsync_d__17;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__GetUnlockedAchievementIdsAsync_d__21;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__InternalGetAccessTokenAsync_d__13;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__IsAchievementUnlockedAsync_d__20;
}
namespace OculusStudios::Platform::Oculus {
class PlatformUser___c__DisplayClass19_0;
}
namespace OculusStudios::Platform::Oculus {
class PlatformUser___c__DisplayClass20_0;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
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
namespace OculusStudios::Platform::Oculus {
class PlatformUser;
}
namespace OculusStudios::Platform::Oculus {
class PlatformUser___c__DisplayClass19_0;
}
namespace OculusStudios::Platform::Oculus {
class PlatformUser___c__DisplayClass20_0;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__GetAccessTokenAsync_d__12;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__GetAgeCategoryInternalAsync_d__17;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__GetUnlockedAchievementIdsAsync_d__21;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__InternalGetAccessTokenAsync_d__13;
}
namespace OculusStudios::Platform::Oculus {
struct PlatformUser__IsAchievementUnlockedAsync_d__20;
}
// Write type traits
MARK_REF_T(::OculusStudios::Platform::Oculus::PlatformUser*);
MARK_REF_T(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass19_0*);
MARK_REF_T(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0*);
MARK_VAL_T(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12);
MARK_VAL_T(::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17);
MARK_VAL_T(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21);
MARK_VAL_T(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13);
MARK_VAL_T(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20);
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser*, "OculusStudios.Platform.Oculus", "PlatformUser");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass19_0*, "OculusStudios.Platform.Oculus", "PlatformUser/<>c__DisplayClass19_0");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0*, "OculusStudios.Platform.Oculus", "PlatformUser/<>c__DisplayClass20_0");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12, "OculusStudios.Platform.Oculus", "PlatformUser/<GetAccessTokenAsync>d__12");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17, "OculusStudios.Platform.Oculus", "PlatformUser/<GetAgeCategoryInternalAsync>d__17");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21, "OculusStudios.Platform.Oculus", "PlatformUser/<GetUnlockedAchievementIdsAsync>d__21");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, "OculusStudios.Platform.Oculus", "PlatformUser/<InternalGetAccessTokenAsync>d__13");
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, "OculusStudios.Platform.Oculus", "PlatformUser/<IsAchievementUnlockedAsync>d__20");
// [CompilerGenerated]
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<>c__DisplayClass19_0
class CORDL_TYPE PlatformUser___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field achievementId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementId, put = __cordl_internal_set_achievementId)) ::StringW achievementId;

  static inline ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass19_0* New_ctor();

  /// @brief Method <UnlockAchievement>b__0, addr 0x638d870, size 0x10, virtual false, abstract: false, final false
  inline bool _UnlockAchievement_b__0(::StringW x);

  constexpr ::StringW const& __cordl_internal_get_achievementId() const;

  constexpr ::StringW& __cordl_internal_get_achievementId();

  constexpr void __cordl_internal_set_achievementId(::StringW value);

  /// @brief Method .ctor, addr 0x638d6a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUser___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUser___c__DisplayClass19_0(PlatformUser___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUser___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUser___c__DisplayClass19_0(PlatformUser___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23034 };

  /// @brief Field achievementId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___achievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass19_0, ___achievementId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass19_0) == 0x18, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// [CompilerGenerated]
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<>c__DisplayClass20_0
class CORDL_TYPE PlatformUser___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field achievementId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementId, put = __cordl_internal_set_achievementId)) ::StringW achievementId;

  static inline ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0* New_ctor();

  /// @brief Method <IsAchievementUnlockedAsync>b__0, addr 0x638d884, size 0x10, virtual false, abstract: false, final false
  inline bool _IsAchievementUnlockedAsync_b__0(::StringW x);

  /// @brief Method <IsAchievementUnlockedAsync>b__1, addr 0x638d894, size 0x40, virtual false, abstract: false, final false
  inline bool _IsAchievementUnlockedAsync_b__1(::Oculus::Platform::Models::AchievementProgress* x);

  constexpr ::StringW const& __cordl_internal_get_achievementId() const;

  constexpr ::StringW& __cordl_internal_get_achievementId();

  constexpr void __cordl_internal_set_achievementId(::StringW value);

  /// @brief Method .ctor, addr 0x638d880, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUser___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUser___c__DisplayClass20_0(PlatformUser___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUser___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUser___c__DisplayClass20_0(PlatformUser___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23035 };

  /// @brief Field achievementId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___achievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0, ___achievementId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0) == 0x18, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<GetAccessTokenAsync>d__12
struct CORDL_TYPE PlatformUser__GetAccessTokenAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x638d8d4, size 0x314, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x638dbe8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser__GetAccessTokenAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }]
  constexpr PlatformUser__GetAccessTokenAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                    ::OculusStudios::Platform::Oculus::PlatformUser* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23036 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::PlatformUser* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12) == 0x30, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// [CompilerGenerated]
// Dependencies OculusStudios.Platform.Core.UserAgeCategory, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<GetAgeCategoryInternalAsync>d__17
struct CORDL_TYPE PlatformUser__GetAgeCategoryInternalAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x638dc68, size 0x38c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x638dff4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser__GetAgeCategoryInternalAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::UserAgeCategory>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>", modifiers: "", def_value: None, comment: None }]
  constexpr PlatformUser__GetAgeCategoryInternalAsync_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::UserAgeCategory> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23037 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::UserAgeCategory> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17) == 0x28, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<GetUnlockedAchievementIdsAsync>d__21
struct CORDL_TYPE PlatformUser__GetUnlockedAchievementIdsAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x638e074, size 0x6e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x638e758, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser__GetUnlockedAchievementIdsAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "__4__this", ty: "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>", modifiers: "", def_value: None, comment: None }]
  constexpr PlatformUser__GetUnlockedAchievementIdsAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*> __t__builder,
      ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23038 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::PlatformUser* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21) == 0x30, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<InternalGetAccessTokenAsync>d__13
struct CORDL_TYPE PlatformUser__InternalGetAccessTokenAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x638e7d8, size 0x844, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x638f01c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser__InternalGetAccessTokenAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_messageTask_5__2", ty:
  // "::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::StringW>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeoutTask_5__3", ty:
  // "::System::Threading::Tasks::Task*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::StringW>*>", modifiers: "", def_value: None, comment: None }]
  constexpr PlatformUser__InternalGetAccessTokenAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                            ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
                                                            ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::StringW>*>* _messageTask_5__2,
                                                            ::System::Threading::Tasks::Task* _timeoutTask_5__3,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::StringW>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::PlatformUser* __4__this;

  /// @brief Field <messageTask>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::StringW>*>* _messageTask_5__2;

  /// @brief Field <timeoutTask>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::StringW>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, _messageTask_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, _timeoutTask_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13) == 0x48, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.PlatformUser/<IsAchievementUnlockedAsync>d__20
struct CORDL_TYPE PlatformUser__IsAchievementUnlockedAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x638f09c, size 0x51c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x638f5b8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser__IsAchievementUnlockedAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "achievementId", ty: "::StringW", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1",
  // ty: "::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>", modifiers: "", def_value: None, comment: None }]
  constexpr PlatformUser__IsAchievementUnlockedAsync_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW achievementId, ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
      ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23040 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field achievementId, offset: 0x20, size: 0x8, def value: None
  ::StringW achievementId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::PlatformUser* __4__this;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, achievementId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20) == 0x40, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.PlatformUser
class CORDL_TYPE PlatformUser : public ::System::Object {
public:
  // Declarations
  using _GetAccessTokenAsync_d__12 = ::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__12;

  using _GetAgeCategoryInternalAsync_d__17 = ::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryInternalAsync_d__17;

  using _GetUnlockedAchievementIdsAsync_d__21 = ::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__21;

  using _InternalGetAccessTokenAsync_d__13 = ::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__13;

  using _IsAchievementUnlockedAsync_d__20 = ::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__20;

  using __c__DisplayClass19_0 = ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass19_0;

  using __c__DisplayClass20_0 = ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass20_0;

  /// @brief Field accessToken, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_accessToken, put = __cordl_internal_set_accessToken)) ::StringW accessToken;

  /// @brief Field achievementIdDefinitions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementIdDefinitions,
                      put = __cordl_internal_set_achievementIdDefinitions)) ::System::Collections::Generic::HashSet_1<::StringW>* achievementIdDefinitions;

  /// @brief Field ageCategoryTask, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ageCategoryTask,
                      put = __cordl_internal_set_ageCategoryTask)) ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* ageCategoryTask;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  /// @brief Field internalGetAccessTokenTask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_internalGetAccessTokenTask,
                      put = __cordl_internal_set_internalGetAccessTokenTask)) ::System::Threading::Tasks::Task_1<::StringW>* internalGetAccessTokenTask;

  /// @brief Field logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::OculusStudios::Platform::Core::IPlatformLogger* logger;

  /// @brief Field user, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_user, put = __cordl_internal_set_user)) ::Oculus::Platform::Models::User* user;

  __declspec(property(get = get_userId)) uint64_t userId;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformUser"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformUser*() noexcept;

  /// @brief Method FlushAchievements, addr 0x638d86c, size 0x4, virtual true, abstract: false, final true
  inline void FlushAchievements();

  /// [AsyncStateMachine(typeof(OculusStudios.Platform.Oculus.PlatformUser::<GetAccessTokenAsync>d__12))]
  /// @brief Method GetAccessTokenAsync, addr 0x638d260, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAccessTokenAsync();

  /// @brief Method GetAgeCategoryAsync, addr 0x638d428, size 0x54, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* GetAgeCategoryAsync();

  /// [AsyncStateMachine(typeof(OculusStudios.Platform.Oculus.PlatformUser::<GetAgeCategoryInternalAsync>d__17))]
  /// @brief Method GetAgeCategoryInternalAsync, addr 0x638d47c, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* GetAgeCategoryInternalAsync();

  /// @brief Method GetAllAchievementIds, addr 0x638d554, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* GetAllAchievementIds();

  /// @brief Method GetLocale, addr 0x638d420, size 0x8, virtual true, abstract: false, final true
  inline ::StringW GetLocale();

  /// [AsyncStateMachine(typeof(OculusStudios.Platform.Oculus.PlatformUser::<GetUnlockedAchievementIdsAsync>d__21))]
  /// @brief Method GetUnlockedAchievementIdsAsync, addr 0x638d790, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* GetUnlockedAchievementIdsAsync();

  /// @brief Method GetXPlatformAccessTokenAsync, addr 0x638d41c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetXPlatformAccessTokenAsync(bool skipCache);

  /// [AsyncStateMachine(typeof(OculusStudios.Platform.Oculus.PlatformUser::<InternalGetAccessTokenAsync>d__13))]
  /// @brief Method InternalGetAccessTokenAsync, addr 0x638d33c, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* InternalGetAccessTokenAsync();

  /// [AsyncStateMachine(typeof(OculusStudios.Platform.Oculus.PlatformUser::<IsAchievementUnlockedAsync>d__20))]
  /// @brief Method IsAchievementUnlockedAsync, addr 0x638d6a4, size 0xec, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsAchievementUnlockedAsync(::StringW achievementId);

  static inline ::OculusStudios::Platform::Oculus::PlatformUser* New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams, ::Oculus::Platform::Models::User* user);

  /// @brief Method UnlockAchievement, addr 0x638d55c, size 0x144, virtual true, abstract: false, final true
  inline void UnlockAchievement(::StringW achievementId);

  constexpr ::StringW const& __cordl_internal_get_accessToken() const;

  constexpr ::StringW& __cordl_internal_get_accessToken();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_achievementIdDefinitions() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_achievementIdDefinitions();

  constexpr ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* const& __cordl_internal_get_ageCategoryTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>*& __cordl_internal_get_ageCategoryTask();

  constexpr ::System::Threading::Tasks::Task_1<::StringW>* const& __cordl_internal_get_internalGetAccessTokenTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::StringW>*& __cordl_internal_get_internalGetAccessTokenTask();

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& __cordl_internal_get_logger() const;

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& __cordl_internal_get_logger();

  constexpr ::Oculus::Platform::Models::User* const& __cordl_internal_get_user() const;

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_user();

  constexpr void __cordl_internal_set_accessToken(::StringW value);

  constexpr void __cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set_ageCategoryTask(::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* value);

  constexpr void __cordl_internal_set_internalGetAccessTokenTask(::System::Threading::Tasks::Task_1<::StringW>* value);

  constexpr void __cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value);

  constexpr void __cordl_internal_set_user(::Oculus::Platform::Models::User* value);

  /// @brief Method .ctor, addr 0x638bfb4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams, ::Oculus::Platform::Models::User* user);

  /// @brief Method get_displayName, addr 0x638d23c, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_userId, addr 0x638d224, size 0x18, virtual true, abstract: false, final true
  inline uint64_t get_userId();

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformUser"
  constexpr ::OculusStudios::Platform::Core::IPlatformUser* i___OculusStudios__Platform__Core__IPlatformUser() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUser", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUser(PlatformUser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUser", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUser(PlatformUser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23041 };

  /// @brief Field kCancelCheckUserAgeRequestTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr float_t kCancelCheckUserAgeRequestTimeoutSeconds{ static_cast<float_t>(5.0f) };

  /// @brief Field logger, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatformLogger* ___logger;

  /// @brief Field user, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___user;

  /// @brief Field achievementIdDefinitions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___achievementIdDefinitions;

  /// @brief Field internalGetAccessTokenTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::StringW>* ___internalGetAccessTokenTask;

  /// @brief Field accessToken, offset: 0x30, size: 0x8, def value: None
  ::StringW ___accessToken;

  /// @brief Field ageCategoryTask, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* ___ageCategoryTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser, ___user) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser, ___achievementIdDefinitions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser, ___internalGetAccessTokenTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser, ___accessToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::PlatformUser, ___ageCategoryTask) == 0x38, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::Platform::Oculus::PlatformUser) == 0x40, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
