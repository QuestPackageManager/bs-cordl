#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatformInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusInit)
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass9_0;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__7;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass10_0;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __OculusInit____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusInit);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusInit____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7);
// Type: ::<InitializeInternalAsync>d__7
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4030)) CS Name:
// ::OculusInit::<InitializeInternalAsync>d__7
struct CORDL_TYPE __OculusInit___InitializeInternalAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2228f08 size 0x318 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2229220 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __OculusInit___InitializeInternalAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusInit* __4__this,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeInternalAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4031))
// CS Name: ::OculusInit::<>c__DisplayClass8_0*
class CORDL_TYPE __OculusInit____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  static inline ::GlobalNamespace::__OculusInit____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x2228d2c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <TryToInitialize>b__0 addr 0x2229278 size 0xe0 virtual false final false
  inline void _TryToInitialize_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusInit____c__DisplayClass8_0(__OculusInit____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusInit____c__DisplayClass8_0(__OculusInit____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit____c__DisplayClass8_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4032))
// CS Name: ::OculusInit::<>c__DisplayClass9_0*
class CORDL_TYPE __OculusInit____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusInit* __4__this;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::GlobalNamespace::OculusInit*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusInit*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusInit* value);

  static inline ::GlobalNamespace::__OculusInit____c__DisplayClass9_0* New_ctor();

  /// @brief Method .ctor addr 0x2228ef8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CheckUserAgeCategory>b__0 addr 0x22293f0 size 0x174 virtual false final false
  inline void _CheckUserAgeCategory_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>* uacMessage);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusInit____c__DisplayClass9_0(__OculusInit____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusInit____c__DisplayClass9_0(__OculusInit____c__DisplayClass9_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit____c__DisplayClass9_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4033))
// CS Name: ::OculusInit::<>c__DisplayClass10_0*
class CORDL_TYPE __OculusInit____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  static inline ::GlobalNamespace::__OculusInit____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor addr 0x2228f00 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CheckEntitlements>b__0 addr 0x2229564 size 0x104 virtual false final false
  inline void _CheckEntitlements_b__0(::Oculus::Platform::Message* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusInit____c__DisplayClass10_0(__OculusInit____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusInit____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusInit____c__DisplayClass10_0(__OculusInit____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit____c__DisplayClass10_0();

public:
  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit____c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusInit
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15978))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4034))
// CS Name: ::OculusInit*
class CORDL_TYPE OculusInit : public ::GlobalNamespace::BasePlatformInit {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::GlobalNamespace::__OculusInit____c__DisplayClass10_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__OculusInit____c__DisplayClass9_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__OculusInit____c__DisplayClass8_0;

  using _InitializeInternalAsync_d__7 = ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7;

  /// @brief Field _playerDataModel, offset 0x20, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field <userAgeCategoryReceivedOrTimedOut>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __get__userAgeCategoryReceivedOrTimedOut_k__BackingField,
                      put = __set__userAgeCategoryReceivedOrTimedOut_k__BackingField)) bool _userAgeCategoryReceivedOrTimedOut_k__BackingField;

  __declspec(property(get = get_userAgeCategoryReceivedOrTimedOut, put = set_userAgeCategoryReceivedOrTimedOut)) bool userAgeCategoryReceivedOrTimedOut;

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr bool& __get__userAgeCategoryReceivedOrTimedOut_k__BackingField();

  constexpr bool const& __get__userAgeCategoryReceivedOrTimedOut_k__BackingField() const;

  constexpr void __set__userAgeCategoryReceivedOrTimedOut_k__BackingField(bool value);

  /// @brief Method get_userAgeCategoryReceivedOrTimedOut addr 0x2228954 size 0x8 virtual false final false
  inline bool get_userAgeCategoryReceivedOrTimedOut();

  /// @brief Method set_userAgeCategoryReceivedOrTimedOut addr 0x222895c size 0xc virtual false final false
  inline void set_userAgeCategoryReceivedOrTimedOut(bool value);

  static inline ::GlobalNamespace::OculusInit* New_ctor();

  /// @brief Method .ctor addr 0x2228968 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method InitializeInternalAsync addr 0x2228970 size 0xf8 virtual true final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync();

  /// @brief Method TryToInitialize addr 0x2228a68 size 0x2c4 virtual false final false
  inline void TryToInitialize(::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs);

  /// @brief Method CheckUserAgeCategory addr 0x2228d34 size 0xe8 virtual false final false
  inline void CheckUserAgeCategory(::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs);

  /// @brief Method CheckEntitlements addr 0x2228e1c size 0xc8 virtual false final false
  inline void CheckEntitlements(::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs);

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
  /// @brief Field _playerDataModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field <userAgeCategoryReceivedOrTimedOut>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____userAgeCategoryReceivedOrTimedOut_k__BackingField;

  /// @brief Field kPlatformNotInstalledMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformNotInstalledMessage{
    u"Install the Oculus app to support Oculus platform on PC from: https://www.meta.com/help/quest/articles/getting-started/getting-started-with-rift-s/install-oculus-pc-app/"
  };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusInit, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInit*, "", "OculusInit");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c__DisplayClass10_0*, "", "OculusInit/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c__DisplayClass8_0*, "", "OculusInit/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__OculusInit____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit____c__DisplayClass9_0*, "", "OculusInit/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7, "", "OculusInit/<InitializeInternalAsync>d__7");
