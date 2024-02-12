#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatformInit_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusInit)
namespace GlobalNamespace {
struct __OculusInit___CheckEntitlementsAsync_d__5;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeCoreAsync_d__4;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__2;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeOculusAsync_d__3;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
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
// Forward declare root types
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
struct __OculusInit___CheckEntitlementsAsync_d__5;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeCoreAsync_d__4;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__2;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeOculusAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusInit);
MARK_VAL_T(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3);
// Type: ::<InitializeInternalAsync>d__2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3398)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 77
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(15967)) CS Name: ::OculusInit::<InitializeInternalAsync>d__2
struct CORDL_TYPE __OculusInit___InitializeInternalAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe38208, size 0x258, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe38460, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __OculusInit___InitializeInternalAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusInit* __4__this,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeInternalAsync_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeOculusAsync>d__3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15968))
// CS Name: ::OculusInit::<InitializeOculusAsync>d__3
struct CORDL_TYPE __OculusInit___InitializeOculusAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe384b8, size 0x2e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe38798, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __OculusInit___InitializeOculusAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeOculusAsync_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeCoreAsync>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(13162)),
// TypeDefinitionIndex(TypeDefinitionIndex(13421)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 5030 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(13162), inst: 4584 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(15969)) CS Name: ::OculusInit::<InitializeCoreAsync>d__4
struct CORDL_TYPE __OculusInit___InitializeCoreAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe387a4, size 0x3b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe38b58, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>", modifiers: "", def_value: None }]
  constexpr __OculusInit___InitializeCoreAsync_d__4(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeCoreAsync_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckEntitlementsAsync>d__5
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(13166)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 4216 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(15970)) CS Name: ::OculusInit::<CheckEntitlementsAsync>d__5
struct CORDL_TYPE __OculusInit___CheckEntitlementsAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe38b64, size 0x23c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe38e98, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: None }]
  constexpr __OculusInit___CheckEntitlementsAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___CheckEntitlementsAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusInit
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16354))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15971))
// CS Name: ::OculusInit*
class CORDL_TYPE OculusInit : public ::GlobalNamespace::BasePlatformInit {
public:
  // Declarations
  using _CheckEntitlementsAsync_d__5 = ::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5;

  using _InitializeCoreAsync_d__4 = ::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4;

  using _InitializeOculusAsync_d__3 = ::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3;

  using _InitializeInternalAsync_d__2 = ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2;

  static inline ::GlobalNamespace::OculusInit* New_ctor();

  /// @brief Method .ctor, addr 0xe37e34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method InitializeInternalAsync, addr 0xe37e3c, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync();

  /// @brief Method InitializeOculusAsync, addr 0xe37f34, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeOculusAsync();

  /// @brief Method InitializeCoreAsync, addr 0xe37ff8, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InitializeCoreAsync();

  /// @brief Method CheckEntitlementsAsync, addr 0xe380bc, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CheckEntitlementsAsync();

  /// @brief Method CheckUserAgeCategoryAsync, addr 0xe38180, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CheckUserAgeCategoryAsync();

  // Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusInit(OculusInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusInit(OculusInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusInit();

public:
  /// @brief Field kPlatformNotInstalledMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformNotInstalledMessage{
    u"Install the Oculus app to support Oculus platform on PC from: https://www.meta.com/help/quest/articles/getting-started/getting-started-with-rift-s/install-oculus-pc-app/"
  };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusInit, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInit*, "", "OculusInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__5, "", "OculusInit/<CheckEntitlementsAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__4, "", "OculusInit/<InitializeCoreAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__2, "", "OculusInit/<InitializeInternalAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__3, "", "OculusInit/<InitializeOculusAsync>d__3");
