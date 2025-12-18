#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/MockedPlatformFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlatformFactory)
namespace OculusStudios::Platform::Core {
class IPlatformFactory;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace OculusStudios::Platform::Core {
struct MockedPlatformFactory__CreateAsync_d__0;
}
namespace OculusStudios::Platform::Core {
class MockedPlatform;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class MockedPlatformFactory;
}
namespace OculusStudios::Platform::Core {
struct MockedPlatformFactory__CreateAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::MockedPlatformFactory);
MARK_VAL_T(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.MockedPlatformFactory/<CreateAsync>d__0
struct CORDL_TYPE MockedPlatformFactory__CreateAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d8216c, size 0x2b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d8241c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedPlatformFactory__CreateAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: None }, CppParam { name: "initParams", ty:
  // "::OculusStudios::Platform::Core::PlatformInitParams*", modifiers: "", def_value: None }, CppParam { name: "_result_5__2", ty: "::OculusStudios::Platform::Core::MockedPlatform*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MockedPlatformFactory__CreateAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::IPlatform*> __t__builder,
                                                    ::OculusStudios::Platform::Core::PlatformInitParams* initParams, ::OculusStudios::Platform::Core::MockedPlatform* _result_5__2,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22201 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::IPlatform*> __t__builder;

  /// @brief Field initParams, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::PlatformInitParams* initParams;

  /// @brief Field <result>5__2, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::MockedPlatform* _result_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, initParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, _result_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, 0x38>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.MockedPlatformFactory
class CORDL_TYPE MockedPlatformFactory : public ::System::Object {
public:
  // Declarations
  using _CreateAsync_d__0 = ::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformFactory"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformFactory*() noexcept;

  /// @brief Method CreateAsync, addr 0x5d82080, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>* CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  static inline ::OculusStudios::Platform::Core::MockedPlatformFactory* New_ctor();

  /// @brief Method OculusStudios.Platform.Core.IPlatformFactory.CreateAsync, addr 0x5d82160, size 0x8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*
  OculusStudios_Platform_Core_IPlatformFactory_CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method .ctor, addr 0x5d82168, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformFactory"
  constexpr ::OculusStudios::Platform::Core::IPlatformFactory* i___OculusStudios__Platform__Core__IPlatformFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedPlatformFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockedPlatformFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockedPlatformFactory(MockedPlatformFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockedPlatformFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockedPlatformFactory(MockedPlatformFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::MockedPlatformFactory, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::MockedPlatformFactory);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::MockedPlatformFactory*, "OculusStudios.Platform.Core", "MockedPlatformFactory");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::MockedPlatformFactory__CreateAsync_d__0, "OculusStudios.Platform.Core", "MockedPlatformFactory/<CreateAsync>d__0");
