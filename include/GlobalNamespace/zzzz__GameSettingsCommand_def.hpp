#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSettingsCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameSettingsCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
struct GameSettingsCommand__ExecuteAsync_d__13;
}
namespace GlobalNamespace {
struct GameSettingsCommand__SaveSettingsAsync_d__14;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSettingsCommand;
}
namespace GlobalNamespace {
struct GameSettingsCommand__ExecuteAsync_d__13;
}
namespace GlobalNamespace {
struct GameSettingsCommand__SaveSettingsAsync_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSettingsCommand*);
MARK_VAL_T(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13);
MARK_VAL_T(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSettingsCommand*, "", "GameSettingsCommand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, "", "GameSettingsCommand/<ExecuteAsync>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, "", "GameSettingsCommand/<SaveSettingsAsync>d__14");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameSettingsCommand/<ExecuteAsync>d__13
struct CORDL_TYPE GameSettingsCommand__ExecuteAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x355f38c, size 0x96c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x355fcf8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSettingsCommand__ExecuteAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameSettingsCommand*", modifiers: "", def_value: None, comment: None }, CppParam { name: "messages", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_success_5__2", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr GameSettingsCommand__ExecuteAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                    ::GlobalNamespace::GameSettingsCommand* __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages,
                                                    bool _success_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19731 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameSettingsCommand* __4__this;

  /// @brief Field messages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages;

  /// @brief Field <success>5__2, offset: 0x30, size: 0x1, def value: None
  bool _success_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, messages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, _success_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameSettingsCommand/<SaveSettingsAsync>d__14
struct CORDL_TYPE GameSettingsCommand__SaveSettingsAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x355fd78, size 0x310, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x3560088, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSettingsCommand__SaveSettingsAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameSettingsCommand*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
  constexpr GameSettingsCommand__SaveSettingsAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::GlobalNamespace::GameSettingsCommand* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameSettingsCommand* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// [UsedImplicitly]
// Dependencies ConsoleCommandBase, System.IConvertible
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSettingsCommand
class CORDL_TYPE GameSettingsCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  using _ExecuteAsync_d__13 = ::GlobalNamespace::GameSettingsCommand__ExecuteAsync_d__13;

  using _SaveSettingsAsync_d__14 = ::GlobalNamespace::GameSettingsCommand__SaveSettingsAsync_d__14;

  /// @brief Field PropertyGetters, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyGetters,
                      put = __cordl_internal_set_PropertyGetters)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* PropertyGetters;

  /// @brief Field PropertySetters, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertySetters,
                      put = __cordl_internal_set_PropertySetters)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* PropertySetters;

  /// @brief Field _apply, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__apply, put = __cordl_internal_set__apply)) ::GlobalNamespace::OptionalArgument_1<bool>* _apply;

  /// @brief Field _setting, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__setting, put = __cordl_internal_set__setting)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _setting;

  /// @brief Field _settingsApplicator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _value, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _value;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Field fileStorage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// [AsyncStateMachine(typeof(GameSettingsCommand::<ExecuteAsync>d__13))]
  /// @brief Method ExecuteAsync, addr 0x355bfb0, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GetPropertyString, addr 0x355c14c, size 0xb0, virtual false, abstract: false, final false
  inline bool GetPropertyString(::StringW propertyName, ::by_ref<::StringW> propertyValue);

  /// @brief Method Initialize, addr 0x3558cc4, size 0x32ec, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::GameSettingsCommand* New_ctor();

  /// [AsyncStateMachine(typeof(GameSettingsCommand::<SaveSettingsAsync>d__14))]
  /// @brief Method SaveSettingsAsync, addr 0x355c09c, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveSettingsAsync();

  /// @brief Method SetPropertyValue, addr 0x355c1fc, size 0x1a8, virtual false, abstract: false, final false
  inline bool SetPropertyValue(::StringW propertyName, ::StringW propertyValue, ::by_ref<::StringW> log);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetValue(::StringW text, ::by_ref<T> value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IConvertible*>)
  static inline ::StringW ToString(/* [IsReadOnly] */ ::by_ref<T const> value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_0, addr 0x355c564, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_0();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_1, addr 0x355c5bc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_1();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_10, addr 0x355c8d4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_10();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_100, addr 0x355ea34, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_100(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_101, addr 0x355ea9c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_101(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_102, addr 0x355eb04, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_102(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_103, addr 0x355eb6c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_103(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_104, addr 0x355ebd4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_104(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_105, addr 0x355ec3c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_105(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_106, addr 0x355eca4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_106(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_107, addr 0x355ed0c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_107(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_108, addr 0x355ed74, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_108(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_109, addr 0x355eddc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_109(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_11, addr 0x355c92c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_11();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_110, addr 0x355ee44, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_110(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_111, addr 0x355eeac, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_111(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_112, addr 0x355ef14, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_112(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_113, addr 0x355ef7c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_113(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_114, addr 0x355efe4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_114(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_115, addr 0x355f04c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_115(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_116, addr 0x355f0b4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_116(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_117, addr 0x355f11c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_117(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_118, addr 0x355f184, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_118(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_119, addr 0x355f1ec, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_119(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_12, addr 0x355c984, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_12();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_120, addr 0x355f254, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_120(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_121, addr 0x355f2bc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_121(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_122, addr 0x355f324, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_122(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_13, addr 0x355c9dc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_13();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_14, addr 0x355ca34, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_14();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_15, addr 0x355ca8c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_15();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_16, addr 0x355cae4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_16();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_17, addr 0x355cb3c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_17();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_18, addr 0x355cb94, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_18();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_19, addr 0x355cbec, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_19();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_2, addr 0x355c614, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_2();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_20, addr 0x355cc44, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_20();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_21, addr 0x355cc9c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_21();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_22, addr 0x355ccf4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_22();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_23, addr 0x355cd4c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_23();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_24, addr 0x355cda4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_24();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_25, addr 0x355cdfc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_25();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_26, addr 0x355ce54, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_26();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_27, addr 0x355ceac, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_27();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_28, addr 0x355cf04, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_28();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_29, addr 0x355cf5c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_29();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_3, addr 0x355c66c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_3();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_30, addr 0x355cfb4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_30();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_31, addr 0x355d00c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_31();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_32, addr 0x355d064, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_32();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_33, addr 0x355d0bc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_33();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_34, addr 0x355d114, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_34();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_35, addr 0x355d16c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_35();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_36, addr 0x355d1c4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_36();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_37, addr 0x355d21c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_37();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_38, addr 0x355d274, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_38();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_39, addr 0x355d2cc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_39();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_4, addr 0x355c6c4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_4();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_40, addr 0x355d324, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_40();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_41, addr 0x355d37c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_41();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_42, addr 0x355d3d4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_42();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_43, addr 0x355d42c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_43();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_44, addr 0x355d484, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_44();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_45, addr 0x355d4dc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_45();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_46, addr 0x355d534, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_46();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_47, addr 0x355d58c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_47();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_48, addr 0x355d5e4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_48();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_49, addr 0x355d63c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_49();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_5, addr 0x355c71c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_5();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_50, addr 0x355d694, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_50();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_51, addr 0x355d6ec, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_51();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_52, addr 0x355d744, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_52();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_53, addr 0x355d79c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_53();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_54, addr 0x355d7f4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_54();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_55, addr 0x355d84c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_55();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_56, addr 0x355d8a4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_56();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_57, addr 0x355d8fc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_57();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_58, addr 0x355d954, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_58();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_59, addr 0x355d9ac, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_59();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_6, addr 0x355c774, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_6();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_60, addr 0x355da04, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_60();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_61, addr 0x355da5c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_61(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_62, addr 0x355dac4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_62(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_63, addr 0x355db2c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_63(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_64, addr 0x355db94, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_64(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_65, addr 0x355dbfc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_65(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_66, addr 0x355dc64, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_66(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_67, addr 0x355dccc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_67(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_68, addr 0x355dd34, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_68(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_69, addr 0x355dd9c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_69(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_7, addr 0x355c7cc, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_7();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_70, addr 0x355de04, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_70(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_71, addr 0x355de6c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_71(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_72, addr 0x355ded4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_72(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_73, addr 0x355df3c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_73(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_74, addr 0x355dfa4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_74(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_75, addr 0x355e00c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_75(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_76, addr 0x355e074, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_76(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_77, addr 0x355e0dc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_77(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_78, addr 0x355e144, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_78(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_79, addr 0x355e1ac, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_79(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_8, addr 0x355c824, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_8();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_80, addr 0x355e214, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_80(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_81, addr 0x355e27c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_81(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_82, addr 0x355e2e4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_82(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_83, addr 0x355e34c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_83(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_84, addr 0x355e3b4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_84(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_85, addr 0x355e41c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_85(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_86, addr 0x355e484, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_86(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_87, addr 0x355e4ec, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_87(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_88, addr 0x355e554, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_88(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_89, addr 0x355e5bc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_89(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_9, addr 0x355c87c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _Initialize_b__12_9();

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_90, addr 0x355e624, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_90(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_91, addr 0x355e68c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_91(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_92, addr 0x355e6f4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_92(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_93, addr 0x355e75c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_93(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_94, addr 0x355e7c4, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_94(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_95, addr 0x355e82c, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_95(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_96, addr 0x355e894, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_96(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_97, addr 0x355e8fc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_97(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_98, addr 0x355e964, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_98(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method <Initialize>b__12_99, addr 0x355e9cc, size 0x68, virtual false, abstract: false, final false
  inline bool _Initialize_b__12_99(::StringW value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* const& __cordl_internal_get_PropertyGetters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>*& __cordl_internal_get_PropertyGetters();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* const& __cordl_internal_get_PropertySetters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>*& __cordl_internal_get_PropertySetters();

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& __cordl_internal_get__apply() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& __cordl_internal_get__apply();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__setting() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__setting();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__value() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__value();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr void __cordl_internal_set_PropertyGetters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* value);

  constexpr void __cordl_internal_set_PropertySetters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* value);

  constexpr void __cordl_internal_set__apply(::GlobalNamespace::OptionalArgument_1<bool>* value);

  constexpr void __cordl_internal_set__setting(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__value(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  /// @brief Method .ctor, addr 0x355c3a4, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x3558c3c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x3558c80, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSettingsCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameSettingsCommand", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameSettingsCommand(GameSettingsCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameSettingsCommand", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameSettingsCommand(GameSettingsCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19733 };

  /// [Inject]
  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// [Inject]
  /// @brief Field _settingsApplicator, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// [Inject]
  /// @brief Field fileStorage, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field _setting, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____setting;

  /// @brief Field _value, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____value;

  /// @brief Field _apply, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<bool>* ____apply;

  /// @brief Field PropertyGetters, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_1<::StringW>*>* ___PropertyGetters;

  /// @brief Field PropertySetters, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Func_2<::StringW, bool>*>* ___PropertySetters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____settingsApplicator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ___fileStorage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____setting) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____value) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ____apply) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ___PropertyGetters) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSettingsCommand, ___PropertySetters) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSettingsCommand) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
