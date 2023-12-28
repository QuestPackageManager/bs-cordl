#pragma once
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__HelpConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.get_isAsyncCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::get_isAsyncCommand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230f2f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> (
    ::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::GetArguments)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x230f300;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetShortHelpText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::HelpConsoleCommand::*)()>(
    &::GlobalNamespace::HelpConsoleCommand::GetShortHelpText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x230f394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetLongUsageHelp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::HelpConsoleCommand::*)()>(
    &::GlobalNamespace::HelpConsoleCommand::GetLongUsageHelp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x230f3d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetCommandName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::GetCommandName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x230f41c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpConsoleCommand::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::HelpConsoleCommand::Execute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x230f45c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HelpConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
        &::GlobalNamespace::HelpConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x230f9b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetCommandUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpConsoleCommand::*)(
    ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::HelpConsoleCommand::GetCommandUsage)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x230f7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetCommandUsage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand.GetListOfCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpConsoleCommand::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::HelpConsoleCommand::GetListOfCommands)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x230f4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetListOfCommands", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpConsoleCommand::*)()>(&::GlobalNamespace::HelpConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x230fab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DebugConsoleController*& GlobalNamespace::HelpConsoleCommand::__get__console() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____console;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DebugConsoleController*> const& GlobalNamespace::HelpConsoleCommand::__get__console() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____console;
}
constexpr void GlobalNamespace::HelpConsoleCommand::__set__console(::GlobalNamespace::DebugConsoleController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____console)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::HelpConsoleCommand::__get__commandName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandName;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> const& GlobalNamespace::HelpConsoleCommand::__get__commandName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandName;
}
constexpr void GlobalNamespace::HelpConsoleCommand::__set__commandName(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::HelpConsoleCommand::get_isAsyncCommand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(),
                                                                             "get_isAsyncCommand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GlobalNamespace::HelpConsoleCommand::GetArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetArguments",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::HelpConsoleCommand::GetShortHelpText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetShortHelpText",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::HelpConsoleCommand::GetLongUsageHelp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetLongUsageHelp",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::HelpConsoleCommand::GetCommandName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetCommandName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::HelpConsoleCommand::Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "Execute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::HelpConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "ExecuteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messages);
}
inline void GlobalNamespace::HelpConsoleCommand::GetCommandUsage(::StringW commandName, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetCommandUsage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, commandName, messages);
}
inline void GlobalNamespace::HelpConsoleCommand::GetListOfCommands(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), "GetListOfCommands", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messages);
}
inline ::GlobalNamespace::HelpConsoleCommand* GlobalNamespace::HelpConsoleCommand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HelpConsoleCommand*>());
}
inline void GlobalNamespace::HelpConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpConsoleCommand*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpConsoleCommand::HelpConsoleCommand() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
