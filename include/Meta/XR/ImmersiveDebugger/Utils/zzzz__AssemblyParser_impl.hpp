#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/AssemblyParser.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__AssemblyParser_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__AssemblyParser_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__RuntimeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a438c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c._LoadAssembliesAsync_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::_LoadAssembliesAsync_b__19_0)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a438c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(), { "<LoadAssembliesAsync>b__19_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c._LoadAssembliesAsync_b__19_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::*)(::System::Reflection::MemberInfo*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::_LoadAssembliesAsync_b__19_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a439f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(),
                                                                                           { "<LoadAssembliesAsync>b__19_1", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::setStaticF___9(::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(
      std::forward<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::setStaticF___9__19_1(::System::Func_2<::System::Reflection::MemberInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MemberInfo*, bool>*, "<>9__19_1", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(
      std::forward<::System::Func_2<::System::Reflection::MemberInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::MemberInfo*, bool>* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::getStaticF___9__19_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MemberInfo*, bool>*, "<>9__19_1", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::setStaticF___9__19_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__19_0", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__19_0", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::_LoadAssembliesAsync_b__19_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(), { "<LoadAssembliesAsync>b__19_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::_LoadAssembliesAsync_b__19_1(::System::Reflection::MemberInfo* m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>(),
                                                                                         { "<LoadAssembliesAsync>b__19_1", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser___c::AssemblyParser___c() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::*)()>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5a43a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a43de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "ignorePrebakedAsset", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::AssemblyParser__LoadAssembliesMainThread_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, bool ignorePrebakedAsset, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->ignorePrebakedAsset = ignorePrebakedAsset;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser__LoadAssembliesMainThread_d__18::AssemblyParser__LoadAssembliesMainThread_d__18() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::Init)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a425f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.add_OnAssemblyParsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::add_OnAssemblyParsed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a426a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                             { "add_OnAssemblyParsed", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.remove_OnAssemblyParsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::remove_OnAssemblyParsed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a427b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                             { "remove_OnAssemblyParsed", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.get_Ready
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::get_Ready)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a428b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "get_Ready", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.GetImmersiveDebuggerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::GetImmersiveDebuggerEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a42914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "GetImmersiveDebuggerEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.get_Enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::get_Enabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a42974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "get_Enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.GetAllAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::GetAllAssemblies)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a429e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "GetAllAssemblies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.OnLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::OnLoad)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a42a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "OnLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.RefreshWhenPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::RefreshWhenPlaying)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a42ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "RefreshWhenPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::Refresh)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a42a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "Refresh", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.LoadAssembliesMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(bool)>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::LoadAssembliesMainThread)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a42b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "LoadAssembliesMainThread", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.LoadAssembliesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::LoadAssembliesAsync)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0x5a42bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "LoadAssembliesAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.RegisterAssemblyTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::RegisterAssemblyTypes)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a435e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                             { "RegisterAssemblyTypes", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::Unregister)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a436cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                             { "Unregister", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::setStaticF__types(::System::Collections::Generic::List_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "_types", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(
      std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::getStaticF__types() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "_types", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::setStaticF__assembliesParsed(bool value) {
  ::cordl_internals::setStaticField<bool, "_assembliesParsed", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(std::forward<bool>(value));
}
inline bool Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::getStaticF__assembliesParsed() {
  return ::cordl_internals::getStaticField<bool, "_assembliesParsed", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::setStaticF_OnAssemblyParsed(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*, "OnAssemblyParsed", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(
      std::forward<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>(value));
}
inline ::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::getStaticF_OnAssemblyParsed() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*, "OnAssemblyParsed", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::setStaticF__enabledDelegate(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "_enabledDelegate", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::getStaticF__enabledDelegate() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "_enabledDelegate", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::setStaticF__assembliesDelegate(::System::Func_1<::ArrayW<::System::Reflection::Assembly*>>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::ArrayW<::System::Reflection::Assembly*>>*, "_assembliesDelegate", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(
      std::forward<::System::Func_1<::ArrayW<::System::Reflection::Assembly*>>*>(value));
}
inline ::System::Func_1<::ArrayW<::System::Reflection::Assembly*>>* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::getStaticF__assembliesDelegate() {
  return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<::System::Reflection::Assembly*>>*, "_assembliesDelegate", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::setStaticF__prebakedRuntimeSettings(::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, "_prebakedRuntimeSettings", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(
      std::forward<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>>(value));
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::getStaticF__prebakedRuntimeSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings>, "_prebakedRuntimeSettings", ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>();
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::add_OnAssemblyParsed(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                           { "add_OnAssemblyParsed", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::remove_OnAssemblyParsed(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                           { "remove_OnAssemblyParsed", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::get_Ready() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "get_Ready", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::GetImmersiveDebuggerEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "GetImmersiveDebuggerEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "get_Enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Reflection::Assembly*> Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::GetAllAssemblies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "GetAllAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::OnLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "OnLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::RefreshWhenPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "RefreshWhenPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::Refresh(bool ignorePrebakedAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "Refresh", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ignorePrebakedAsset);
}
inline ::System::Threading::Tasks::Task* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::LoadAssembliesMainThread(bool ignorePrebakedAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "LoadAssembliesMainThread", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, ignorePrebakedAsset);
}
inline ::System::Threading::Tasks::Task* Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::LoadAssembliesAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(), { "LoadAssembliesAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::RegisterAssemblyTypes(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* del) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                           { "RegisterAssemblyTypes", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, del);
}
inline void Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::Unregister(::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>* del) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser*>(),
                                                           { "Unregister", {}, { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::System::Type*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, del);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::AssemblyParser::AssemblyParser() {}
