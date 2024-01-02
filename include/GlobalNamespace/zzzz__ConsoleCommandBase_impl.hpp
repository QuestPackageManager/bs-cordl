#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__DebugConsoleController_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230f0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0._GetUnmatchedArguments_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::*)(::GlobalNamespace::ArgumentBase*)>(
    &::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::_GetUnmatchedArguments_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x230f1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0*>::get(), "<GetUnmatchedArguments>b__1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArgumentBase*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*& GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::__get_matchedArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchedArguments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*> const&
GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::__get_matchedArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchedArguments;
}
constexpr void GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::__set_matchedArguments(::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___matchedArguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0* GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0*>());
}
inline void GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::_GetUnmatchedArguments_b__1(::GlobalNamespace::ArgumentBase* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0*>::get(), "<GetUnmatchedArguments>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArgumentBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, arg);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0::__ConsoleCommandBase____c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::__ConsoleCommandBase____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConsoleCommandBase____c::*)()>(&::GlobalNamespace::__ConsoleCommandBase____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230f29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConsoleCommandBase____c._GetUnmatchedArguments_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConsoleCommandBase____c::*)(::StringW)>(
    &::GlobalNamespace::__ConsoleCommandBase____c::_GetUnmatchedArguments_b__14_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x230f2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get(), "<GetUnmatchedArguments>b__14_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__ConsoleCommandBase____c::setStaticF___9(::GlobalNamespace::__ConsoleCommandBase____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__ConsoleCommandBase____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get>(
      std::forward<::GlobalNamespace::__ConsoleCommandBase____c*>(value));
}
inline ::GlobalNamespace::__ConsoleCommandBase____c* GlobalNamespace::__ConsoleCommandBase____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__ConsoleCommandBase____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get>();
}
inline void GlobalNamespace::__ConsoleCommandBase____c::setStaticF___9__14_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* GlobalNamespace::__ConsoleCommandBase____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get>();
}
inline ::GlobalNamespace::__ConsoleCommandBase____c* GlobalNamespace::__ConsoleCommandBase____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ConsoleCommandBase____c*>());
}
inline void GlobalNamespace::__ConsoleCommandBase____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConsoleCommandBase____c::_GetUnmatchedArguments_b__14_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConsoleCommandBase____c*>::get(), "<GetUnmatchedArguments>b__14_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConsoleCommandBase____c::__ConsoleCommandBase____c() {}
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.get_isAsyncCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::get_isAsyncCommand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x230dd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "Initialize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> (
    ::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::GetArguments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetArgumentsText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::ConsoleCommandBase::*)()>(
    &::GlobalNamespace::ConsoleCommandBase::GetArgumentsText)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x230dd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                               "GetArgumentsText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetShortHelpText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::ConsoleCommandBase::*)()>(
    &::GlobalNamespace::ConsoleCommandBase::GetShortHelpText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetLongUsageHelp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DebugConsoleController__ConsoleMessage (::GlobalNamespace::ConsoleCommandBase::*)()>(
    &::GlobalNamespace::ConsoleCommandBase::GetLongUsageHelp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetCommandName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::GetCommandName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::ConsoleCommandBase::Execute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x230df84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "Execute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::ConsoleCommandBase::*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::ExecuteAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x230e07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "ExecuteAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(&::GlobalNamespace::ConsoleCommandBase::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ConsoleCommandBase::*)(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
        &::GlobalNamespace::ConsoleCommandBase::ExecuteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.AreArgumentsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::AreArgumentsValid)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x230dfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "AreArgumentsValid", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetUnmatchedArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* (
    ::GlobalNamespace::ConsoleCommandBase::*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*,
                                              ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::GetUnmatchedArguments)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x230e6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetUnmatchedArguments", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetMatchedArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* (
    ::GlobalNamespace::ConsoleCommandBase::*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::GetMatchedArguments)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x230e14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetMatchedArguments", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x230f0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetInvalidArgumentMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::GetInvalidArgumentMessage)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x230eb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetInvalidArgumentMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ConsoleCommandBase::*)(::GlobalNamespace::ConsoleCommandBase*)>(
    &::GlobalNamespace::ConsoleCommandBase::CompareTo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x230f158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConsoleCommandBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230f1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
constexpr GlobalNamespace::ConsoleCommandBase::operator ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>& GlobalNamespace::ConsoleCommandBase::__get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> const& GlobalNamespace::ConsoleCommandBase::__get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void GlobalNamespace::ConsoleCommandBase::__set__arguments(::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::ConsoleCommandBase::get_isAsyncCommand() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleCommandBase::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "Initialize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GlobalNamespace::ConsoleCommandBase::GetArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::ConsoleCommandBase::GetArgumentsText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetArgumentsText",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::ConsoleCommandBase::GetShortHelpText() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GlobalNamespace::ConsoleCommandBase::GetLongUsageHelp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DebugConsoleController__ConsoleMessage, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConsoleCommandBase::GetCommandName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleCommandBase::Execute(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "Execute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args, messages);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::ConsoleCommandBase::ExecuteAsync(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                  ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "ExecuteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, args, messages);
}
inline void GlobalNamespace::ConsoleCommandBase::Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messages);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::ConsoleCommandBase::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::ConsoleCommandBase::AreArgumentsValid(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "AreArgumentsValid", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, args, messages);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
GlobalNamespace::ConsoleCommandBase::GetUnmatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments,
                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetUnmatchedArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*, false>(this, ___internal_method, args, matchedArguments, messages);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
GlobalNamespace::ConsoleCommandBase::GetMatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetMatchedArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*, false>(this, ___internal_method, args, messages);
}
inline void GlobalNamespace::ConsoleCommandBase::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleCommandBase::GetInvalidArgumentMessage(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>* missingArguments,
                                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "GetInvalidArgumentMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missingArguments, messages);
}
inline int32_t GlobalNamespace::ConsoleCommandBase::CompareTo(::GlobalNamespace::ConsoleCommandBase* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConsoleCommandBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline ::GlobalNamespace::ConsoleCommandBase* GlobalNamespace::ConsoleCommandBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConsoleCommandBase*>());
}
inline void GlobalNamespace::ConsoleCommandBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConsoleCommandBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleCommandBase::ConsoleCommandBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
