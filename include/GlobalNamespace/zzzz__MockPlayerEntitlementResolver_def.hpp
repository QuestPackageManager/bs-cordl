#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerEntitlementResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerEntitlementResolver)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class IMockPlayerEntitlementResolver;
}
namespace GlobalNamespace {
struct MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4;
}
namespace GlobalNamespace {
class MockPlayerSettings;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerEntitlementResolver;
}
namespace GlobalNamespace {
struct MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MockPlayerEntitlementResolver*);
MARK_VAL_T(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlayerEntitlementResolver*, "", "MockPlayerEntitlementResolver");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, "", "MockPlayerEntitlementResolver/<GetLevelEntitlementStatusAsync>d__4");
// [CompilerGenerated]
// Dependencies EntitlementStatus, EntitlementsStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockPlayerEntitlementResolver/<GetLevelEntitlementStatusAsync>d__4
struct CORDL_TYPE MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5e25b34, size 0x320, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x5e25e54, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MockPlayerEntitlementResolver*", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None, comment: None }]
  constexpr MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4(int32_t __1__state,
                                                                               ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder,
                                                                               ::GlobalNamespace::MockPlayerEntitlementResolver* __4__this, ::StringW levelId,
                                                                               ::System::Threading::CancellationToken cancellationToken,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerEntitlementResolver* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerEntitlementResolver
class CORDL_TYPE MockPlayerEntitlementResolver : public ::System::Object {
public:
  // Declarations
  using _GetLevelEntitlementStatusAsync_d__4 = ::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _entitlementModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::GlobalNamespace::MockPlayerSettings* _settings;

  /// @brief Convert operator to "::GlobalNamespace::IMockPlayerEntitlementResolver"
  constexpr operator ::GlobalNamespace::IMockPlayerEntitlementResolver*() noexcept;

  /// [AsyncStateMachine(typeof(MockPlayerEntitlementResolver::<GetLevelEntitlementStatusAsync>d__4))]
  /// @brief Method GetLevelEntitlementStatusAsync, addr 0x5e25a14, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsDlcLevel, addr 0x5e25b04, size 0x30, virtual false, abstract: false, final false
  inline bool IsDlcLevel(::StringW levelId);

  static inline ::GlobalNamespace::MockPlayerEntitlementResolver* New_ctor(::GlobalNamespace::MockPlayerSettings* settings, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                           ::GlobalNamespace::IEntitlementModel* entitlementModel);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::GlobalNamespace::MockPlayerSettings* const& __cordl_internal_get__settings() const;

  constexpr ::GlobalNamespace::MockPlayerSettings*& __cordl_internal_get__settings();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__settings(::GlobalNamespace::MockPlayerSettings* value);

  /// @brief Method .ctor, addr 0x5e2571c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MockPlayerSettings* settings, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IEntitlementModel* entitlementModel);

  /// @brief Convert to "::GlobalNamespace::IMockPlayerEntitlementResolver"
  constexpr ::GlobalNamespace::IMockPlayerEntitlementResolver* i___GlobalNamespace__IMockPlayerEntitlementResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerEntitlementResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerEntitlementResolver", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerEntitlementResolver(MockPlayerEntitlementResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerEntitlementResolver", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerEntitlementResolver(MockPlayerEntitlementResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6239 };

  /// @brief Field _settings, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerSettings* ____settings;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _entitlementModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver, ____settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerEntitlementResolver, ____entitlementModel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockPlayerEntitlementResolver) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
