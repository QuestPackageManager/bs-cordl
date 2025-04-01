#pragma once
// IWYU pragma private; include "GlobalNamespace/PingUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PingUtility)
namespace GlobalNamespace {
struct PingUtility__PingAsync_d__0;
}
namespace GlobalNamespace {
class PingUtility___c;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Ping;
}
// Forward declare root types
namespace GlobalNamespace {
class PingUtility;
}
namespace GlobalNamespace {
class PingUtility___c;
}
namespace GlobalNamespace {
struct PingUtility__PingAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PingUtility);
MARK_REF_PTR_T(::GlobalNamespace::PingUtility___c);
MARK_VAL_T(::GlobalNamespace::PingUtility__PingAsync_d__0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PingUtility/<>c
class CORDL_TYPE PingUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PingUtility___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* __9__0_0;

  static inline ::GlobalNamespace::PingUtility___c* New_ctor();

  /// @brief Method <PingAsync>b__0_0, addr 0x22ddf1c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Ping* _PingAsync_b__0_0(::System::Net::IPAddress* ip);

  /// @brief Method .ctor, addr 0x22ddf14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PingUtility___c* getStaticF___9();

  static inline ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* getStaticF___9__0_0();

  static inline void setStaticF___9(::GlobalNamespace::PingUtility___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PingUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PingUtility___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PingUtility___c(PingUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PingUtility___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PingUtility___c(PingUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14929 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PingUtility___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PingUtility/<PingAsync>d__0
struct CORDL_TYPE PingUtility__PingAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22ddf98, size 0x590, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22de528, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PingUtility__PingAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>", modifiers: "", def_value: None }, CppParam { name: "_ping_5__3", ty: "int64_t", modifiers: "", def_value:
  // None }, CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: None }, CppParam { name: "_t_5__5", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr PingUtility__PingAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __t__builder, ::StringW url,
                                        ::ArrayW<::UnityEngine::Ping*, ::Array<::UnityEngine::Ping*>*> _pings_5__2, int64_t _ping_5__3, bool _found_5__4,
                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1, int32_t _t_5__5,
                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14930 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __t__builder;

  /// @brief Field url, offset: 0x20, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field <pings>5__2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Ping*, ::Array<::UnityEngine::Ping*>*> _pings_5__2;

  /// @brief Field <ping>5__3, offset: 0x30, size: 0x8, def value: None
  int64_t _ping_5__3;

  /// @brief Field <found>5__4, offset: 0x38, size: 0x1, def value: None
  bool _found_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1;

  /// @brief Field <t>5__5, offset: 0x48, size: 0x4, def value: None
  int32_t _t_5__5;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, _pings_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, _ping_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, _found_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, _t_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PingUtility__PingAsync_d__0, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PingUtility__PingAsync_d__0, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PingUtility
class CORDL_TYPE PingUtility : public ::System::Object {
public:
  // Declarations
  using _PingAsync_d__0 = ::GlobalNamespace::PingUtility__PingAsync_d__0;

  using __c = ::GlobalNamespace::PingUtility___c;

  /// @brief Method PingAsync, addr 0x22dddc0, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<int64_t>* PingAsync(::StringW url);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PingUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PingUtility(PingUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PingUtility(PingUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PingUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PingUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility*, "", "PingUtility");
NEED_NO_BOX(::GlobalNamespace::PingUtility___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility___c*, "", "PingUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility__PingAsync_d__0, "", "PingUtility/<PingAsync>d__0");
