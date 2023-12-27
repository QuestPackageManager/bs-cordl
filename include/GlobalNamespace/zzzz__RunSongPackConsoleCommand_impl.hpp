#pragma once
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RunSongPackConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "GlobalNamespace/zzzz__RunSongPackConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::*)()>(
    &::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2311b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0._Execute_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::*)(
    ::GlobalNamespace::PreviewDifficultyBeatmapSet*)>(&::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::_Execute_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2311df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0*>::get(), "<Execute>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>*& GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>*> const&
GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__0;
}
constexpr void GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__set___9__0(::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0* GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0*>());
}
inline void GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::_Execute_b__0(::GlobalNamespace::PreviewDifficultyBeatmapSet* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0*>::get(), "<Execute>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RunSongPackConsoleCommand____c__DisplayClass12_0::__RunSongPackConsoleCommand____c__DisplayClass12_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RunSongPackConsoleCommand____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RunSongPackConsoleCommand____c::*)()>(
    &::GlobalNamespace::__RunSongPackConsoleCommand____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2311e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongPackConsoleCommand____c._Execute_b__12_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RunSongPackConsoleCommand____c::*)(::GlobalNamespace::PreviewDifficultyBeatmapSet*)>(
    &::GlobalNamespace::__RunSongPackConsoleCommand____c::_Execute_b__12_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2311e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get(), "<Execute>b__12_1", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RunSongPackConsoleCommand____c._Execute_b__12_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RunSongPackConsoleCommand____c::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::__RunSongPackConsoleCommand____c::_Execute_b__12_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2311eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get(), "<Execute>b__12_2", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RunSongPackConsoleCommand____c::setStaticF___9(::GlobalNamespace::__RunSongPackConsoleCommand____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RunSongPackConsoleCommand____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get>(
      std::forward<::GlobalNamespace::__RunSongPackConsoleCommand____c*>(value));
}
inline ::GlobalNamespace::__RunSongPackConsoleCommand____c* GlobalNamespace::__RunSongPackConsoleCommand____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RunSongPackConsoleCommand____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get>();
}
inline void GlobalNamespace::__RunSongPackConsoleCommand____c::setStaticF___9__12_1(::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>*, "<>9__12_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>* GlobalNamespace::__RunSongPackConsoleCommand____c::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PreviewDifficultyBeatmapSet*, ::StringW>*, "<>9__12_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get>();
}
inline void GlobalNamespace::__RunSongPackConsoleCommand____c::setStaticF___9__12_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__12_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>* GlobalNamespace::__RunSongPackConsoleCommand____c::getStaticF___9__12_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, ::StringW>*, "<>9__12_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get>();
}
inline ::GlobalNamespace::__RunSongPackConsoleCommand____c* GlobalNamespace::__RunSongPackConsoleCommand____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RunSongPackConsoleCommand____c*>());
}
inline void GlobalNamespace::__RunSongPackConsoleCommand____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__RunSongPackConsoleCommand____c::_Execute_b__12_1(::GlobalNamespace::PreviewDifficultyBeatmapSet* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get(), "<Execute>b__12_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__RunSongPackConsoleCommand____c::_Execute_b__12_2(::GlobalNamespace::BeatmapDifficulty x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RunSongPackConsoleCommand____c*>::get(), "<Execute>b__12_2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RunSongPackConsoleCommand____c::__RunSongPackConsoleCommand____c() {}
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.get_isAsyncCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RunSongPackConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongPackConsoleCommand::get_isAsyncCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2310f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.GetArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> (
    ::GlobalNamespace::RunSongPackConsoleCommand::*)()>(&::GlobalNamespace::RunSongPackConsoleCommand::GetArguments)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2310f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.GetShortHelpText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::RunSongPackConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongPackConsoleCommand::GetShortHelpText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23110a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.GetLongUsageHelp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::RunSongPackConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongPackConsoleCommand::GetLongUsageHelp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23110e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.GetCommandName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RunSongPackConsoleCommand::*)()>(
    &::GlobalNamespace::RunSongPackConsoleCommand::GetCommandName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2311128;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RunSongPackConsoleCommand::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::RunSongPackConsoleCommand::Execute)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x2311168;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::RunSongPackConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::RunSongPackConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2311b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunSongPackConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RunSongPackConsoleCommand::*)()>(&::GlobalNamespace::RunSongPackConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2311b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::RunSongPackConsoleCommand::__get__songRunningHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songRunningHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongRunningHelper*> const& GlobalNamespace::RunSongPackConsoleCommand::__get__songRunningHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songRunningHelper;
}
constexpr void GlobalNamespace::RunSongPackConsoleCommand::__set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songRunningHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::RunSongPackConsoleCommand::__get__packId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____packId;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RequiredArgument_1<::StringW>*> const& GlobalNamespace::RunSongPackConsoleCommand::__get__packId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____packId;
}
constexpr void GlobalNamespace::RunSongPackConsoleCommand::__set__packId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongPackConsoleCommand::__get__runAutopilot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____runAutopilot;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& GlobalNamespace::RunSongPackConsoleCommand::__get__runAutopilot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____runAutopilot;
}
constexpr void GlobalNamespace::RunSongPackConsoleCommand::__set__runAutopilot(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runAutopilot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::RunSongPackConsoleCommand::__get__runUnityProfiler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____runUnityProfiler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<bool>*> const& GlobalNamespace::RunSongPackConsoleCommand::__get__runUnityProfiler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____runUnityProfiler;
}
constexpr void GlobalNamespace::RunSongPackConsoleCommand::__set__runUnityProfiler(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runUnityProfiler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& GlobalNamespace::RunSongPackConsoleCommand::__get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficulty;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<int32_t>*> const& GlobalNamespace::RunSongPackConsoleCommand::__get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::RunSongPackConsoleCommand::__set__difficulty(::GlobalNamespace::OptionalArgument_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::RunSongPackConsoleCommand::__get__characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____characteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> const& GlobalNamespace::RunSongPackConsoleCommand::__get__characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____characteristic;
}
constexpr void GlobalNamespace::RunSongPackConsoleCommand::__set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::RunSongPackConsoleCommand::get_isAsyncCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                             "get_isAsyncCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GlobalNamespace::RunSongPackConsoleCommand::GetArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                             "GetArguments", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::RunSongPackConsoleCommand::GetShortHelpText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                             "GetShortHelpText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::RunSongPackConsoleCommand::GetLongUsageHelp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                             "GetLongUsageHelp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RunSongPackConsoleCommand::GetCommandName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(),
                                                                             "GetCommandName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RunSongPackConsoleCommand::Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), "Execute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::RunSongPackConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), "ExecuteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messages);
}
inline ::GlobalNamespace::RunSongPackConsoleCommand* GlobalNamespace::RunSongPackConsoleCommand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RunSongPackConsoleCommand*>());
}
inline void GlobalNamespace::RunSongPackConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunSongPackConsoleCommand*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunSongPackConsoleCommand::RunSongPackConsoleCommand() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
