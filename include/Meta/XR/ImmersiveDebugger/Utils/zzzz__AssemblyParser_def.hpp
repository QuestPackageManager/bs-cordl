#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/AssemblyParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyParser)
namespace Meta::XR::ImmersiveDebugger::Utils {
struct AssemblyParser__LoadAssembliesMainThread_d__18;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class AssemblyParser___c;
}
namespace Meta::XR::ImmersiveDebugger {
class RuntimeSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class AssemblyParser;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class AssemblyParser___c;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct AssemblyParser__LoadAssembliesMainThread_d__18;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c);
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser/<>c
class CORDL_TYPE AssemblyParser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0)) ::System::Func_2<::System::Type*, bool>* __9__19_0;

  /// @brief Field <>9__19_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_1, put = setStaticF___9__19_1)) ::System::Func_2<::System::Reflection::MemberInfo*, bool>* __9__19_1;

  static inline ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* New_ctor();

  /// @brief Method <LoadAssembliesAsync>b__19_0, addr 0x582fc18, size 0x12c, virtual false, abstract: false, final false
  inline bool _LoadAssembliesAsync_b__19_0(::System::Type* t);

  /// @brief Method <LoadAssembliesAsync>b__19_1, addr 0x582fd44, size 0x58, virtual false, abstract: false, final false
  inline bool _LoadAssembliesAsync_b__19_1(::System::Reflection::MemberInfo* m);

  /// @brief Method .ctor, addr 0x582fc14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__19_0();

  static inline ::System::Func_2<::System::Reflection::MemberInfo*, bool>* getStaticF___9__19_1();

  static inline void setStaticF___9(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* value);

  static inline void setStaticF___9__19_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__19_1(::System::Func_2<::System::Reflection::MemberInfo*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyParser___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyParser___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyParser___c(AssemblyParser___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyParser___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyParser___c(AssemblyParser___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser/<LoadAssembliesMainThread>d__18
struct CORDL_TYPE AssemblyParser__LoadAssembliesMainThread_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x582fd9c, size 0x398, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5830134, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyParser__LoadAssembliesMainThread_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "ignorePrebakedAsset", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AssemblyParser__LoadAssembliesMainThread_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, bool ignorePrebakedAsset,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18296 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field ignorePrebakedAsset, offset: 0x20, size: 0x1, def value: None
  bool ignorePrebakedAsset;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18, ignorePrebakedAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18, 0x30>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser
class CORDL_TYPE AssemblyParser : public ::System::Object {
public:
  // Declarations
  using _LoadAssembliesMainThread_d__18 = ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18;

  using __c = ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c;

  /// @brief Field OnAssemblyParsed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnAssemblyParsed, put = setStaticF_OnAssemblyParsed)) ::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* OnAssemblyParsed;

  /// @brief Field _assembliesDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__assembliesDelegate,
                      put = setStaticF__assembliesDelegate)) ::System::Func_1<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>>* _assembliesDelegate;

  /// @brief Field _assembliesParsed, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__assembliesParsed, put = setStaticF__assembliesParsed)) bool _assembliesParsed;

  /// @brief Field _enabledDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__enabledDelegate, put = setStaticF__enabledDelegate)) ::System::Func_1<bool>* _enabledDelegate;

  /// @brief Field _prebakedRuntimeSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__prebakedRuntimeSettings, put = setStaticF__prebakedRuntimeSettings)) ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> _prebakedRuntimeSettings;

  /// @brief Field _types, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__types, put = setStaticF__types)) ::System::Collections::Generic::List_1<::System::Type*>* _types;

  /// @brief Method GetAllAssemblies, addr 0x582ed34, size 0x1c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetAllAssemblies();

  /// @brief Method GetImmersiveDebuggerEnabled, addr 0x582ec64, size 0x60, virtual false, abstract: false, final false
  static inline bool GetImmersiveDebuggerEnabled();

  /// @brief Method Init, addr 0x582e940, size 0xb8, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method LoadAssembliesAsync, addr 0x582ef2c, size 0xa04, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* LoadAssembliesAsync();

  /// @brief Method LoadAssembliesMainThread, addr 0x582ee74, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* LoadAssembliesMainThread(bool ignorePrebakedAsset);

  /// @brief Method OnLoad, addr 0x582ed50, size 0x54, virtual false, abstract: false, final false
  static inline void OnLoad();

  /// @brief Method Refresh, addr 0x582eda4, size 0x7c, virtual false, abstract: false, final false
  static inline void Refresh(bool ignorePrebakedAsset);

  /// @brief Method RefreshWhenPlaying, addr 0x582ee20, size 0x54, virtual false, abstract: false, final false
  static inline void RefreshWhenPlaying();

  /// @brief Method RegisterAssemblyTypes, addr 0x582f930, size 0xec, virtual false, abstract: false, final false
  static inline void RegisterAssemblyTypes(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* del);

  /// @brief Method Unregister, addr 0x582fa1c, size 0x58, virtual false, abstract: false, final false
  static inline void Unregister(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* del);

  /// @brief Method add_OnAssemblyParsed, addr 0x582e9f8, size 0x108, virtual false, abstract: false, final false
  static inline void add_OnAssemblyParsed(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* value);

  static inline ::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* getStaticF_OnAssemblyParsed();

  static inline ::System::Func_1<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>>* getStaticF__assembliesDelegate();

  static inline bool getStaticF__assembliesParsed();

  static inline ::System::Func_1<bool>* getStaticF__enabledDelegate();

  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> getStaticF__prebakedRuntimeSettings();

  static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF__types();

  /// @brief Method get_Enabled, addr 0x582ecc4, size 0x70, virtual false, abstract: false, final false
  static inline bool get_Enabled();

  /// @brief Method get_Ready, addr 0x582ec08, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_Ready();

  /// @brief Method remove_OnAssemblyParsed, addr 0x582eb00, size 0x108, virtual false, abstract: false, final false
  static inline void remove_OnAssemblyParsed(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* value);

  static inline void setStaticF_OnAssemblyParsed(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* value);

  static inline void setStaticF__assembliesDelegate(::System::Func_1<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>>* value);

  static inline void setStaticF__assembliesParsed(bool value);

  static inline void setStaticF__enabledDelegate(::System::Func_1<bool>* value);

  static inline void setStaticF__prebakedRuntimeSettings(::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> value);

  static inline void setStaticF__types(::System::Collections::Generic::List_1<::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyParser(AssemblyParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyParser(AssemblyParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*, "Meta.XR.ImmersiveDebugger.Utils", "AssemblyParser");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*, "Meta.XR.ImmersiveDebugger.Utils", "AssemblyParser/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18, "Meta.XR.ImmersiveDebugger.Utils", "AssemblyParser/<LoadAssembliesMainThread>d__18");
