#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameVersionProvider)
namespace BeatSaber::Init {
struct GameVersionProvider__GetVersionInternalAsync_d__9;
}
namespace BeatSaber::Init {
struct GameVersionProvider__Initialize_d__5;
}
namespace BeatSaber::Init {
struct GameVersion_Content;
}
namespace BeatSaber::Init {
class GameVersion;
}
namespace BeatSaber::Init {
class IPlatformInit;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace BeatSaber::Init {
class GameVersionProvider;
}
namespace BeatSaber::Init {
struct GameVersionProvider__GetVersionInternalAsync_d__9;
}
namespace BeatSaber::Init {
struct GameVersionProvider__Initialize_d__5;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::GameVersionProvider);
MARK_VAL_T(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9);
MARK_VAL_T(::BeatSaber::Init::GameVersionProvider__Initialize_d__5);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersionProvider/<GetVersionInternalAsync>d__9
struct CORDL_TYPE GameVersionProvider__GetVersionInternalAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22713ec, size 0x3ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2271798, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersionProvider__GetVersionInternalAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Init::GameVersion*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::Init::GameVersionProvider*", modifiers: "", def_value: None }, CppParam { name: "_version_5__2", ty: "::BeatSaber::Init::GameVersion*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr GameVersionProvider__GetVersionInternalAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Init::GameVersion*> __t__builder,
                                                              ::BeatSaber::Init::GameVersionProvider* __4__this, ::BeatSaber::Init::GameVersion* _version_5__2,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18394 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Init::GameVersion*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Init::GameVersionProvider* __4__this;

  /// @brief Field <version>5__2, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Init::GameVersion* _version_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, _version_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, 0x38>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersionProvider/<Initialize>d__5
struct CORDL_TYPE GameVersionProvider__Initialize_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2271814, size 0x274, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2271a88, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersionProvider__Initialize_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Init::GameVersionProvider*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Init::GameVersion*>", modifiers: "", def_value: None }]
  constexpr GameVersionProvider__Initialize_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BeatSaber::Init::GameVersionProvider* __4__this,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Init::GameVersion*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18395 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Init::GameVersionProvider* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Init::GameVersion*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__Initialize_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__Initialize_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__Initialize_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider__Initialize_d__5, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersionProvider__Initialize_d__5, 0x38>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies BeatSaber.Init.GameVersion::Content, System.Nullable`1<T>, System.Object, Zenject.IInitializable
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersionProvider
class CORDL_TYPE GameVersionProvider : public ::System::Object {
public:
  // Declarations
  using _GetVersionInternalAsync_d__9 = ::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9;

  using _Initialize_d__5 = ::BeatSaber::Init::GameVersionProvider__Initialize_d__5;

  /// @brief Field _contentVersion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__contentVersion, put = setStaticF__contentVersion)) ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> _contentVersion;

  /// @brief Field _platformInit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit)) ::BeatSaber::Init::IPlatformInit* _platformInit;

  /// @brief Field _versionTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__versionTask, put = __cordl_internal_set__versionTask)) ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* _versionTask;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method GetBuildId, addr 0x2271190, size 0x94, virtual false, abstract: false, final false
  static inline uint64_t GetBuildId();

  /// @brief Method GetBuildTimeGameVersion, addr 0x2271224, size 0x1c0, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion* GetBuildTimeGameVersion();

  /// @brief Method GetContentVersion, addr 0x226dcbc, size 0xfc, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content GetContentVersion();

  /// @brief Method GetVersionAsync, addr 0x2271084, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* GetVersionAsync();

  /// @brief Method GetVersionInternalAsync, addr 0x22710a8, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* GetVersionInternalAsync();

  /// @brief Method Initialize, addr 0x2270ff4, size 0x90, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::BeatSaber::Init::GameVersionProvider* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x2270fac, size 0x48, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  constexpr ::BeatSaber::Init::IPlatformInit* const& __cordl_internal_get__platformInit() const;

  constexpr ::BeatSaber::Init::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* const& __cordl_internal_get__versionTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>*& __cordl_internal_get__versionTask();

  constexpr void __cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value);

  constexpr void __cordl_internal_set__versionTask(::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* value);

  /// @brief Method .ctor, addr 0x22713e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> getStaticF__contentVersion();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  static inline void setStaticF__contentVersion(::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameVersionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameVersionProvider(GameVersionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameVersionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameVersionProvider(GameVersionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18396 };

  /// @brief Field _versionTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* ____versionTask;

  /// @brief Field _platformInit, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Init::IPlatformInit* ____platformInit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersionProvider, ____versionTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider, ____platformInit) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersionProvider, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::GameVersionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersionProvider*, "BeatSaber.Init", "GameVersionProvider");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersionProvider__GetVersionInternalAsync_d__9, "BeatSaber.Init", "GameVersionProvider/<GetVersionInternalAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersionProvider__Initialize_d__5, "BeatSaber.Init", "GameVersionProvider/<Initialize>d__5");
