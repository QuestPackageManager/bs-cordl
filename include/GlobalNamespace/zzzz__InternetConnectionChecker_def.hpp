#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternetConnectionChecker)
namespace GlobalNamespace {
struct __InternetConnectionChecker___IsConnectedToInternetAsync_d__0;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class InternetConnectionChecker;
}
namespace GlobalNamespace {
struct __InternetConnectionChecker___IsConnectedToInternetAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InternetConnectionChecker);
MARK_VAL_T(::GlobalNamespace::__InternetConnectionChecker___IsConnectedToInternetAsync_d__0);
// Type: ::<IsConnectedToInternetAsync>d__0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5895)) CS
// Name: ::InternetConnectionChecker::<IsConnectedToInternetAsync>d__0
struct CORDL_TYPE __InternetConnectionChecker___IsConnectedToInternetAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22fbdd8 size 0x21c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22fbff4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __InternetConnectionChecker___IsConnectedToInternetAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InternetConnectionChecker___IsConnectedToInternetAsync_d__0();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InternetConnectionChecker___IsConnectedToInternetAsync_d__0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InternetConnectionChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5896))
// CS Name: ::InternetConnectionChecker*
class CORDL_TYPE InternetConnectionChecker : public ::System::Object {
public:
  // Declarations
  using _IsConnectedToInternetAsync_d__0 = ::GlobalNamespace::__InternetConnectionChecker___IsConnectedToInternetAsync_d__0;

  /// @brief Method IsConnectedToInternetAsync addr 0x22fbce4 size 0xec virtual false final false
  static inline ::System::Threading::Tasks::Task_1<bool>* IsConnectedToInternetAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::InternetConnectionChecker* New_ctor();

  /// @brief Method .ctor addr 0x22fbdd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InternetConnectionChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternetConnectionChecker(InternetConnectionChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternetConnectionChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternetConnectionChecker(InternetConnectionChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternetConnectionChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InternetConnectionChecker, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InternetConnectionChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InternetConnectionChecker*, "", "InternetConnectionChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InternetConnectionChecker___IsConnectedToInternetAsync_d__0, "", "InternetConnectionChecker/<IsConnectedToInternetAsync>d__0");
