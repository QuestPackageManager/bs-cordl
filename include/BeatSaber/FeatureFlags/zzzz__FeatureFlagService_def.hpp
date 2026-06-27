#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlagService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureFlagService)
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService_State;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__InitializeAsync_d__11;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__IsFeatureEnabledAsync_d__14;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__QueryRemoteFlagsAsync_d__12;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__WaitForInitialization_d__17;
}
namespace BeatSaber::FeatureFlags {
class FeatureFlagService___c;
}
namespace BeatSaber::FeatureFlags {
struct Feature;
}
namespace BeatSaber::FeatureFlags {
class IFeatureFlagService;
}
namespace BeatSaber::FeatureFlags {
class IFeatureFlags;
}
namespace BeatSaber::GraphQL {
class IGraphQLClientProvider;
}
namespace GlobalNamespace {
class FeatureConfiguration_RemoteWithDependency;
}
namespace GlobalNamespace {
class FeatureConfiguration_Remote;
}
namespace Main::GraphQL::Models {
class FeatureFlagsEnabledModel;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService_State;
}
namespace BeatSaber::FeatureFlags {
class FeatureFlagService;
}
namespace BeatSaber::FeatureFlags {
class FeatureFlagService___c;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__InitializeAsync_d__11;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__IsFeatureEnabledAsync_d__14;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__QueryRemoteFlagsAsync_d__12;
}
namespace BeatSaber::FeatureFlags {
struct FeatureFlagService__WaitForInitialization_d__17;
}
// Write type traits
MARK_VAL_T(::BeatSaber::FeatureFlags::FeatureFlagService_State);
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::FeatureFlagService);
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::FeatureFlagService___c);
MARK_VAL_T(::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11);
MARK_VAL_T(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14);
MARK_VAL_T(::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12);
MARK_VAL_T(::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17);
// Dependencies 
namespace BeatSaber::FeatureFlags {
// Is value type: true
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService/State
struct CORDL_TYPE FeatureFlagService_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FeatureFlagService_State_Unwrapped
enum struct __FeatureFlagService_State_Unwrapped : int32_t {
__E_Initializing = static_cast<int32_t>(0x0),
__E_Ready = static_cast<int32_t>(0x1),
__E_Offline = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FeatureFlagService_State_Unwrapped () const noexcept {
return static_cast<__FeatureFlagService_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FeatureFlagService_State(int32_t  value__) noexcept;

/// @brief Field Initializing value: I32(0)
static ::BeatSaber::FeatureFlags::FeatureFlagService_State const Initializing;

/// @brief Field Offline value: I32(2)
static ::BeatSaber::FeatureFlags::FeatureFlagService_State const Offline;

/// @brief Field Ready value: I32(1)
static ::BeatSaber::FeatureFlags::FeatureFlagService_State const Ready;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22644};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService_State, 0x4>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
// Dependencies System.Object
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService/<>c
class CORDL_TYPE FeatureFlagService___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::BeatSaber::FeatureFlags::FeatureFlagService___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>*  __9__12_0;

static inline ::BeatSaber::FeatureFlags::FeatureFlagService___c* New_ctor() ;

/// @brief Method <QueryRemoteFlagsAsync>b__12_0, addr 0x31f687c, size 0x14, virtual false, abstract: false, final false
inline ::StringW _QueryRemoteFlagsAsync_b__12_0(::GlobalNamespace::FeatureConfiguration_Remote*  remote) ;

/// @brief Method .ctor, addr 0x31f6878, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::BeatSaber::FeatureFlags::FeatureFlagService___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::BeatSaber::FeatureFlags::FeatureFlagService___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_2<::GlobalNamespace::FeatureConfiguration_Remote*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagService___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureFlagService___c(FeatureFlagService___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagService___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureFlagService___c(FeatureFlagService___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService___c, 0x10>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
// Dependencies BeatSaber.FeatureFlags.FeatureFlagService::State, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::FeatureFlags {
// Is value type: true
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService/<InitializeAsync>d__11
struct CORDL_TYPE FeatureFlagService__InitializeAsync_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x31f6890, size 0x74c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x31f6fdc, size 0x80, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService__InitializeAsync_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FeatureFlagService__InitializeAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22646};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
// Dependencies BeatSaber.FeatureFlags.Feature, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::FeatureFlags {
// Is value type: true
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService/<IsFeatureEnabledAsync>d__14
struct CORDL_TYPE FeatureFlagService__IsFeatureEnabledAsync_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x31f705c, size 0x31c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x31f7378, size 0x80, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService__IsFeatureEnabledAsync_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: None }, CppParam { name: "feature", ty: "::BeatSaber::FeatureFlags::Feature", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FeatureFlagService__IsFeatureEnabledAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::BeatSaber::FeatureFlags::Feature  feature, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22647};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this;

/// @brief Field feature, offset: 0x28, size: 0x4, def value: None
 ::BeatSaber::FeatureFlags::Feature  feature;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, feature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::FeatureFlags {
// Is value type: true
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService/<QueryRemoteFlagsAsync>d__12
struct CORDL_TYPE FeatureFlagService__QueryRemoteFlagsAsync_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x31f73f8, size 0x898, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x31f7cb8, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService__QueryRemoteFlagsAsync_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>", modifiers: "", def_value: None }]
constexpr FeatureFlagService__QueryRemoteFlagsAsync_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22648};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::FeatureFlags {
// Is value type: true
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService/<WaitForInitialization>d__17
struct CORDL_TYPE FeatureFlagService__WaitForInitialization_d__17 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x31f7d24, size 0x1cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x31f7ef0, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService__WaitForInitialization_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::FeatureFlags::FeatureFlagService*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FeatureFlagService__WaitForInitialization_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22649};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::FeatureFlags::FeatureFlagService*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
// Dependencies BeatSaber.FeatureFlags.FeatureFlagService::State, System.Object, System.TimeSpan
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureFlagService
class CORDL_TYPE FeatureFlagService : public ::System::Object {
public:
// Declarations
using State = ::BeatSaber::FeatureFlags::FeatureFlagService_State;

using _InitializeAsync_d__11 = ::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11;

using _IsFeatureEnabledAsync_d__14 = ::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14;

using _QueryRemoteFlagsAsync_d__12 = ::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12;

using _WaitForInitialization_d__17 = ::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17;

using __c = ::BeatSaber::FeatureFlags::FeatureFlagService___c;

/// @brief Field _features, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__features, put=__cordl_internal_set__features)) ::BeatSaber::FeatureFlags::IFeatureFlags*  _features;

/// @brief Field _graphQLClient, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__graphQLClient, put=__cordl_internal_set__graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  _graphQLClient;

/// @brief Field _graphQlClientProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__graphQlClientProvider, put=__cordl_internal_set__graphQlClientProvider)) ::BeatSaber::GraphQL::IGraphQLClientProvider*  _graphQlClientProvider;

/// @brief Field _initializationTask, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__initializationTask, put=__cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task*  _initializationTask;

/// @brief Field _initializationTimeout, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__initializationTimeout, put=__cordl_internal_set__initializationTimeout)) ::System::TimeSpan  _initializationTimeout;

/// @brief Field _remoteFlagsResponse, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteFlagsResponse, put=__cordl_internal_set__remoteFlagsResponse)) ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  _remoteFlagsResponse;

/// @brief Field _state, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::BeatSaber::FeatureFlags::FeatureFlagService_State  _state;

/// @brief Field kLogPrefix, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_kLogPrefix, put=__cordl_internal_set_kLogPrefix)) ::StringW  kLogPrefix;

/// @brief Convert operator to "::BeatSaber::FeatureFlags::IFeatureFlagService"
constexpr operator  ::BeatSaber::FeatureFlags::IFeatureFlagService*() noexcept;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Method GetRemoteFlag, addr 0x31f64ac, size 0x128, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> GetRemoteFlag(::GlobalNamespace::FeatureConfiguration_Remote*  remoteFlag) ;

/// @brief Method GetRemoteFlagWithDependency, addr 0x31f63ec, size 0xc0, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> GetRemoteFlagWithDependency(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*  remoteWithDep) ;

/// @brief Method Initialize, addr 0x31f5ec4, size 0xc4, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InitializeAsync, addr 0x31f5f88, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>* InitializeAsync() ;

/// @brief Method IsFeatureEnabled, addr 0x31f6114, size 0x2d8, virtual true, abstract: false, final true
inline ::System::Nullable_1<bool> IsFeatureEnabled(::BeatSaber::FeatureFlags::Feature  feature) ;

/// @brief Method IsFeatureEnabledAsync, addr 0x31f65d4, size 0xf0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<bool>* IsFeatureEnabledAsync(::BeatSaber::FeatureFlags::Feature  feature) ;

static inline ::BeatSaber::FeatureFlags::FeatureFlagService* New_ctor(::BeatSaber::GraphQL::IGraphQLClientProvider*  graphQlClientProvider, ::BeatSaber::FeatureFlags::IFeatureFlags*  features, int32_t  initializationTimeoutSecs) ;

/// @brief Method QueryRemoteFlagsAsync, addr 0x31f6064, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* QueryRemoteFlagsAsync() ;

/// @brief Method WaitForInitialization, addr 0x31f66c4, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForInitialization() ;

/// @brief Method <Initialize>b__10_0, addr 0x31f6774, size 0xb0, virtual false, abstract: false, final false
inline void _Initialize_b__10_0(::System::Threading::Tasks::Task_1<::BeatSaber::FeatureFlags::FeatureFlagService_State>*  task) ;

constexpr ::BeatSaber::FeatureFlags::IFeatureFlags* const& __cordl_internal_get__features() const;

constexpr ::BeatSaber::FeatureFlags::IFeatureFlags*& __cordl_internal_get__features() ;

constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& __cordl_internal_get__graphQLClient() const;

constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& __cordl_internal_get__graphQLClient() ;

constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider* const& __cordl_internal_get__graphQlClientProvider() const;

constexpr ::BeatSaber::GraphQL::IGraphQLClientProvider*& __cordl_internal_get__graphQlClientProvider() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__initializationTimeout() const;

constexpr ::System::TimeSpan& __cordl_internal_get__initializationTimeout() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& __cordl_internal_get__remoteFlagsResponse() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& __cordl_internal_get__remoteFlagsResponse() ;

constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State const& __cordl_internal_get__state() const;

constexpr ::BeatSaber::FeatureFlags::FeatureFlagService_State& __cordl_internal_get__state() ;

constexpr ::StringW const& __cordl_internal_get_kLogPrefix() const;

constexpr ::StringW& __cordl_internal_get_kLogPrefix() ;

constexpr void __cordl_internal_set__features(::BeatSaber::FeatureFlags::IFeatureFlags*  value) ;

constexpr void __cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  value) ;

constexpr void __cordl_internal_set__graphQlClientProvider(::BeatSaber::GraphQL::IGraphQLClientProvider*  value) ;

constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__initializationTimeout(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__remoteFlagsResponse(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set__state(::BeatSaber::FeatureFlags::FeatureFlagService_State  value) ;

constexpr void __cordl_internal_set_kLogPrefix(::StringW  value) ;

/// @brief Method .ctor, addr 0x31f5db4, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::BeatSaber::GraphQL::IGraphQLClientProvider*  graphQlClientProvider, ::BeatSaber::FeatureFlags::IFeatureFlags*  features, int32_t  initializationTimeoutSecs) ;

/// @brief Convert to "::BeatSaber::FeatureFlags::IFeatureFlagService"
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* i___BeatSaber__FeatureFlags__IFeatureFlagService() noexcept;

/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureFlagService(FeatureFlagService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureFlagService(FeatureFlagService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22650};

/// @brief Field _graphQlClientProvider, offset: 0x10, size: 0x8, def value: None
 ::BeatSaber::GraphQL::IGraphQLClientProvider*  ____graphQlClientProvider;

/// @brief Field _features, offset: 0x18, size: 0x8, def value: None
 ::BeatSaber::FeatureFlags::IFeatureFlags*  ____features;

/// @brief Field kLogPrefix, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___kLogPrefix;

/// @brief Field _initializationTask, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____initializationTask;

/// @brief Field _initializationTimeout, offset: 0x30, size: 0x8, def value: None
 ::System::TimeSpan  ____initializationTimeout;

/// @brief Field _state, offset: 0x38, size: 0x4, def value: None
 ::BeatSaber::FeatureFlags::FeatureFlagService_State  ____state;

/// @brief Field _remoteFlagsResponse, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  ____remoteFlagsResponse;

/// @brief Field _graphQLClient, offset: 0x48, size: 0x8, def value: None
 ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*  ____graphQLClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____graphQlClientProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____features) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ___kLogPrefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____initializationTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____initializationTimeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____state) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____remoteFlagsResponse) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlagService, ____graphQLClient) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagService, 0x50>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService_State, "BeatSaber.FeatureFlags", "FeatureFlagService/State");
NEED_NO_BOX(::BeatSaber::FeatureFlags::FeatureFlagService);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService*, "BeatSaber.FeatureFlags", "FeatureFlagService");
NEED_NO_BOX(::BeatSaber::FeatureFlags::FeatureFlagService___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService___c*, "BeatSaber.FeatureFlags", "FeatureFlagService/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService__InitializeAsync_d__11, "BeatSaber.FeatureFlags", "FeatureFlagService/<InitializeAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService__IsFeatureEnabledAsync_d__14, "BeatSaber.FeatureFlags", "FeatureFlagService/<IsFeatureEnabledAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService__QueryRemoteFlagsAsync_d__12, "BeatSaber.FeatureFlags", "FeatureFlagService/<QueryRemoteFlagsAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagService__WaitForInitialization_d__17, "BeatSaber.FeatureFlags", "FeatureFlagService/<WaitForInitialization>d__17");
