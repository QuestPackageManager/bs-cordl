#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFuture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFuture)
namespace GlobalNamespace {
struct OVRFuture__When_d__0;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRFuture;
}
namespace GlobalNamespace {
struct OVRFuture__When_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRFuture);
MARK_VAL_T(::GlobalNamespace::OVRFuture__When_d__0);
// Dependencies OVRPlugin::Result, OVRTaskBuilder`1<T>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFuture/<When>d__0
struct CORDL_TYPE OVRFuture__When_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d42b70, size 0x274, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d42de4, size 0x3c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFuture__When_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None }, CppParam { name: "future", ty: "uint64_t", modifiers: "", def_value: None }, CppParam
  // { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
  constexpr OVRFuture__When_d__0(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder, uint64_t future,
                                 ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7805 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder;

  /// @brief Field future, offset: 0x28, size: 0x8, def value: None
  uint64_t future;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFuture__When_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFuture__When_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFuture__When_d__0, future) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFuture__When_d__0, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFuture__When_d__0, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFuture__When_d__0, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFuture
class CORDL_TYPE OVRFuture : public ::System::Object {
public:
  // Declarations
  using _When_d__0 = ::GlobalNamespace::OVRFuture__When_d__0;

  /// @brief Method When, addr 0x5d427d4, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> When(uint64_t future, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <When>g__CheckCancellationAndThrow|0_1, addr 0x5d429a4, size 0x1cc, virtual false, abstract: false, final false
  static inline void _When_g__CheckCancellationAndThrow_0_1(uint64_t futureToCancel, ::System::Threading::CancellationToken token);

  /// @brief Method <When>g__LogIfNotSuccess|0_0, addr 0x5d42898, size 0x10c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_Result _When_g__LogIfNotSuccess_0_0(::GlobalNamespace::OVRPlugin_Result value, ::StringW msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFuture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRFuture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRFuture(OVRFuture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRFuture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRFuture(OVRFuture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7806 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFuture, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRFuture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFuture*, "", "OVRFuture");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFuture__When_d__0, "", "OVRFuture/<When>d__0");
