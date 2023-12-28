#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PingUtility)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class __PingUtility____c;
}
namespace GlobalNamespace {
struct __PingUtility___PingAsync_d__0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Ping;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PingUtility;
}
namespace GlobalNamespace {
class __PingUtility____c;
}
namespace GlobalNamespace {
struct __PingUtility___PingAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PingUtility);
MARK_REF_PTR_T(::GlobalNamespace::__PingUtility____c);
MARK_VAL_T(::GlobalNamespace::__PingUtility___PingAsync_d__0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12921))
// CS Name: ::PingUtility::<>c*
class CORDL_TYPE __PingUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PingUtility____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* __9__0_0;

  static inline void setStaticF___9(::GlobalNamespace::__PingUtility____c* value);

  static inline ::GlobalNamespace::__PingUtility____c* getStaticF___9();

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* value);

  static inline ::System::Func_2<::System::Net::IPAddress*, ::UnityEngine::Ping*>* getStaticF___9__0_0();

  static inline ::GlobalNamespace::__PingUtility____c* New_ctor();

  /// @brief Method .ctor addr 0xe51740 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PingAsync>b__0_0 addr 0xe51748 size 0x80 virtual false final false
  inline ::UnityEngine::Ping* _PingAsync_b__0_0(::System::Net::IPAddress* ip);

  // Ctor Parameters [CppParam { name: "", ty: "__PingUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PingUtility____c(__PingUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PingUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PingUtility____c(__PingUtility____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PingUtility____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PingUtility____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<PingAsync>d__0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3393)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 333 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5061 }),
// TypeDefinitionIndex(TypeDefinitionIndex(9030))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12922)) CS Name: ::PingUtility::<PingAsync>d__0
struct CORDL_TYPE __PingUtility___PingAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe517c8 size 0x52c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe51cf4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping*,::Array<::UnityEngine::Ping*>*>", modifiers: "", def_value: None }, CppParam { name: "_ping_5__3", ty: "int64_t", modifiers: "", def_value:
  // None }, CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: None }, CppParam { name: "_t_5__5", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __PingUtility___PingAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __t__builder, ::StringW url,
                                           ::ArrayW<::UnityEngine::Ping*, ::Array<::UnityEngine::Ping*>*> _pings_5__2, int64_t _ping_5__3, bool _found_5__4,
                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1, int32_t _t_5__5,
                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PingUtility___PingAsync_d__0();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PingUtility___PingAsync_d__0, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PingUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12923))
// CS Name: ::PingUtility*
class CORDL_TYPE PingUtility : public ::System::Object {
public:
  // Declarations
  using _PingAsync_d__0 = ::GlobalNamespace::__PingUtility___PingAsync_d__0;

  using __c = ::GlobalNamespace::__PingUtility____c;

  /// @brief Method PingAsync addr 0xe515dc size 0x100 virtual false final false
  static inline ::System::Threading::Tasks::Task_1<int64_t>* PingAsync(::StringW url);

  // Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PingUtility(PingUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PingUtility(PingUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PingUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PingUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PingUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility*, "", "PingUtility");
NEED_NO_BOX(::GlobalNamespace::__PingUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PingUtility____c*, "", "PingUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PingUtility___PingAsync_d__0, "", "PingUtility/<PingAsync>d__0");
