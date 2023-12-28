#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RunSongConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__RunSongConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23100a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0._ExecuteAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::*)(
    ::GlobalNamespace::PreviewDifficultyBeatmapSet*)>(&::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::_ExecuteAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23100b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*>::get(), "<ExecuteAsync>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::__get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::__get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::__set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0* GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*>());
}
inline void GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::_ExecuteAsync_b__0(::GlobalNamespace::PreviewDifficultyBeatmapSet* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*>::get(), "<ExecuteAsync>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0::__RunSongConsoleCommand____c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RunSongConsoleCommand____c::*)()>(
    &::GlobalNamespace::__RunSongConsoleCommand____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2310140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand____c._ExecuteAsync_b__14_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RunSongConsoleCommand____c::*)(::GlobalNamespace::PreviewDifficultyBeatmapSet*)>(
    &::GlobalNamespace::__RunSongConsoleCommand____c::_ExecuteAsync_b__14_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2310148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get(), "<ExecuteAsync>b__14_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand____c._ExecuteAsync_b__14_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RunSongConsoleCommand____c::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::__RunSongConsoleCommand____c::_ExecuteAsync_b__14_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2310168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get(), "<ExecuteAsync>b__14_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RunSongConsoleCommand____c::setStaticF___9(::GlobalNamespace::__RunSongConsoleCommand____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RunSongConsoleCommand____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get>(
      std::forward<::GlobalNamespace::__RunSongConsoleCommand____c*>(value));
}
inline ::GlobalNamespace::__RunSongConsoleCommand____c* GlobalNamespace::__RunSongConsoleCommand____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RunSongConsoleCommand____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get>();
}
inline void GlobalNamespace::__RunSongConsoleCommand____c::setStaticF___9__14_1(::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>*, "<>9__14_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* GlobalNamespace::__RunSongConsoleCommand____c::getStaticF___9__14_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>*, "<>9__14_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get>();
}
inline void GlobalNamespace::__RunSongConsoleCommand____c::setStaticF___9__14_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__14_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* GlobalNamespace::__RunSongConsoleCommand____c::getStaticF___9__14_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__14_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get>();
}
inline ::GlobalNamespace::__RunSongConsoleCommand____c* GlobalNamespace::__RunSongConsoleCommand____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RunSongConsoleCommand____c*>());
}
inline void GlobalNamespace::__RunSongConsoleCommand____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__RunSongConsoleCommand____c::_ExecuteAsync_b__14_1(::GlobalNamespace::PreviewDifficultyBeatmapSet* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get(), "<ExecuteAsync>b__14_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__RunSongConsoleCommand____c::_ExecuteAsync_b__14_2(::GlobalNamespace::BeatmapDifficulty x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand____c*>::get(), "<ExecuteAsync>b__14_2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RunSongConsoleCommand____c::__RunSongConsoleCommand____c() {}
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::*)()>(
    &::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xd7c;
  constexpr static std::size_t addrs = 0x23101cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2310f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RunSongConsoleCommand*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::__RunSongConsoleCommand___ExecuteAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::RunSongConsoleCommand* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages, ::GlobalNamespace::__RunSongConsoleCommand____c__DisplayClass14_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RunSongConsoleCommand___ExecuteAsync_d__14::__RunSongConsoleCommand___ExecuteAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.get_isAsyncCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RunSongConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand::get_isAsyncCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230fb5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.GetArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> (
    ::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::GetArguments)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x230fb64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.GetShortHelpText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::RunSongConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand::GetShortHelpText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x230fca8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.GetLongUsageHelp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::RunSongConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand::GetLongUsageHelp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x230fcec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.GetCommandName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RunSongConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongConsoleCommand::GetCommandName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x230fd30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::RunSongConsoleCommand::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x230fd70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::RunSongConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
        &::GlobalNamespace::RunSongConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x230fd74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RunSongConsoleCommand::*)()>(&::GlobalNamespace::RunSongConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x230fe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::RunSongConsoleCommand::__get__songRunningHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongRunningHelper*> const& GlobalNamespace::RunSongConsoleCommand::__get__songRunningHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songRunningHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::RunSongConsoleCommand::__get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::RunSongConsoleCommand::__get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::RunSongConsoleCommand::__get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RequiredArgument_1<::StringW>*> const& GlobalNamespace::RunSongConsoleCommand::__get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__levelId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__get__runAutopilot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runAutopilot;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& GlobalNamespace::RunSongConsoleCommand::__get__runAutopilot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runAutopilot;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__runAutopilot(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runAutopilot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongConsoleCommand::__get__runUnityProfiler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runUnityProfiler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& GlobalNamespace::RunSongConsoleCommand::__get__runUnityProfiler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runUnityProfiler;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__runUnityProfiler(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runUnityProfiler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& GlobalNamespace::RunSongConsoleCommand::__get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& GlobalNamespace::RunSongConsoleCommand::__get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__difficulty(::GlobalNamespace::OptionalArgument_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongConsoleCommand::__get__characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> const& GlobalNamespace::RunSongConsoleCommand::__get__characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr void GlobalNamespace::RunSongConsoleCommand::__set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::RunSongConsoleCommand::get_isAsyncCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                             "get_isAsyncCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GlobalNamespace::RunSongConsoleCommand::GetArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), "GetArguments",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::RunSongConsoleCommand::GetShortHelpText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                             "GetShortHelpText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::RunSongConsoleCommand::GetLongUsageHelp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(),
                                                                             "GetLongUsageHelp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RunSongConsoleCommand::GetCommandName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), "GetCommandName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongConsoleCommand::Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), "Execute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::RunSongConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), "ExecuteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messages);
}
inline ::GlobalNamespace::RunSongConsoleCommand* GlobalNamespace::RunSongConsoleCommand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RunSongConsoleCommand*>());
}
inline void GlobalNamespace::RunSongConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongConsoleCommand*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongConsoleCommand::RunSongConsoleCommand() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
