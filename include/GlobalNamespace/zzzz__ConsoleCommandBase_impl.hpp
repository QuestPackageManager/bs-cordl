#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleCommandBase.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase___c::*)()>(&::GlobalNamespace::ConsoleCommandBase___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cc850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase___c._AreArgumentsValid_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase___c::*)(::StringW)>(&::GlobalNamespace::ConsoleCommandBase___c::_AreArgumentsValid_b__23_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32cc854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c*>(), { "<AreArgumentsValid>b__23_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConsoleCommandBase___c::setStaticF___9(::GlobalNamespace::ConsoleCommandBase___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ConsoleCommandBase___c*, "<>9", ::GlobalNamespace::ConsoleCommandBase___c*>(std::forward<::GlobalNamespace::ConsoleCommandBase___c*>(value));
}
inline ::GlobalNamespace::ConsoleCommandBase___c* GlobalNamespace::ConsoleCommandBase___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ConsoleCommandBase___c*, "<>9", ::GlobalNamespace::ConsoleCommandBase___c*>();
}
inline void GlobalNamespace::ConsoleCommandBase___c::setStaticF___9__23_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__23_0", ::GlobalNamespace::ConsoleCommandBase___c*>(std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* GlobalNamespace::ConsoleCommandBase___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__23_0", ::GlobalNamespace::ConsoleCommandBase___c*>();
}
inline void GlobalNamespace::ConsoleCommandBase___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ConsoleCommandBase___c::_AreArgumentsValid_b__23_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c*>(), { "<AreArgumentsValid>b__23_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ConsoleCommandBase___c* GlobalNamespace::ConsoleCommandBase___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsoleCommandBase___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleCommandBase___c::ConsoleCommandBase___c() {}
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::*)()>(&::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0._AreArgumentsValid_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::*)(::GlobalNamespace::ArgumentBase*)>(
    &::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::_AreArgumentsValid_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32cc884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*>(),
                                                                                           { "<AreArgumentsValid>b__1", {}, { ::i2c::type_of<::GlobalNamespace::ArgumentBase*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*& GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::__cordl_internal_get_matchedArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchedArguments;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* const& GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::__cordl_internal_get_matchedArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchedArguments;
}
constexpr void GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::__cordl_internal_set_matchedArguments(::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___matchedArguments = value;
}
inline void GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::_AreArgumentsValid_b__1(::GlobalNamespace::ArgumentBase* arg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*>(),
                                                                                         { "<AreArgumentsValid>b__1", {}, { ::i2c::type_of<::GlobalNamespace::ArgumentBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, arg);
}
inline ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0* GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0::ConsoleCommandBase___c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.get_arguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ArgumentBase*> (::GlobalNamespace::ConsoleCommandBase::*)()>(
    &::GlobalNamespace::ConsoleCommandBase::get_arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cafec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "get_arguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.get_unknownArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::get_unknownArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32caff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "get_unknownArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.get_AllowsUnknownArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::get_AllowsUnknownArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32caffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32cb004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GenerateDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::GenerateDescriptions)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x32cb27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GenerateDescriptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::get_commandName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::get_description)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetFullDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::GetFullDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cb5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetFullDescription", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ArgumentBase*> (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::GetArguments)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x32cb024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetAllArgumentFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::GlobalNamespace::ConsoleCommandBase::*)(::System::Type*)>(
    &::GlobalNamespace::ConsoleCommandBase::GetAllArgumentFields)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x32cb5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetAllArgumentFields", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetArgumentsText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::GetArgumentsText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cb6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetArgumentsText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::ConsoleCommandBase::*)(::ArrayW<::StringW>, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::ConsoleCommandBase::ExecuteAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32cb6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                            { "ExecuteAsync", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::ConsoleCommandBase::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::ConsoleCommandBase::ExecuteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.AreArgumentsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase::*)(
    ::ArrayW<::StringW>, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::ConsoleCommandBase::AreArgumentsValid)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x32cb794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                            { "AreArgumentsValid", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.ParseUnmatchedArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConsoleCommandBase::*)(::ArrayW<::StringW>, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*,
                                                                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*, bool)>(
    &::GlobalNamespace::ConsoleCommandBase::ParseUnmatchedArguments)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x32cbf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                                                             { "ParseUnmatchedArguments",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.ParseMatchedArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* (
    ::GlobalNamespace::ConsoleCommandBase::*)(::ArrayW<::StringW>, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::ParseMatchedArguments)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x32cba20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                            { "ParseMatchedArguments", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32cc74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.GetInvalidArgumentMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>*,
                                                                                                       ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::ConsoleCommandBase::GetInvalidArgumentMessage)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x32cc310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                                                                                           { "GetInvalidArgumentMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ConsoleCommandBase::*)(::GlobalNamespace::ConsoleCommandBase*)>(&::GlobalNamespace::ConsoleCommandBase::CompareTo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32cc7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsoleCommandBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsoleCommandBase::*)()>(&::GlobalNamespace::ConsoleCommandBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cc7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TerminalController*& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__console() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____console;
}
constexpr ::GlobalNamespace::TerminalController* const& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__console() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____console;
}
constexpr void GlobalNamespace::ConsoleCommandBase::__cordl_internal_set__console(::GlobalNamespace::TerminalController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____console = value;
}
constexpr ::StringW& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__argumentsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentsText;
}
constexpr ::StringW const& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__argumentsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentsText;
}
constexpr void GlobalNamespace::ConsoleCommandBase::__cordl_internal_set__argumentsText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argumentsText = value;
}
constexpr ::StringW& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__fullDescriptionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullDescriptionText;
}
constexpr ::StringW const& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__fullDescriptionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullDescriptionText;
}
constexpr void GlobalNamespace::ConsoleCommandBase::__cordl_internal_set__fullDescriptionText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullDescriptionText = value;
}
constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*>& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*> const& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void GlobalNamespace::ConsoleCommandBase::__cordl_internal_set__arguments(::ArrayW<::GlobalNamespace::ArgumentBase*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__unknownArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unknownArguments;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::ConsoleCommandBase::__cordl_internal_get__unknownArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unknownArguments;
}
constexpr void GlobalNamespace::ConsoleCommandBase::__cordl_internal_set__unknownArguments(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unknownArguments = value;
}
inline ::ArrayW<::GlobalNamespace::ArgumentBase*> GlobalNamespace::ConsoleCommandBase::get_arguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "get_arguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ArgumentBase*>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::ConsoleCommandBase::get_unknownArguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "get_unknownArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool GlobalNamespace::ConsoleCommandBase::get_AllowsUnknownArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleCommandBase::Initialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleCommandBase::GenerateDescriptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GenerateDescriptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConsoleCommandBase::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConsoleCommandBase::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConsoleCommandBase::GetFullDescription() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetFullDescription", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::ArgumentBase*> GlobalNamespace::ConsoleCommandBase::GetArguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ArgumentBase*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> GlobalNamespace::ConsoleCommandBase::GetAllArgumentFields(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetAllArgumentFields", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, type);
}
inline ::StringW GlobalNamespace::ConsoleCommandBase::GetArgumentsText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "GetArgumentsText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::ConsoleCommandBase::ExecuteAsync(::ArrayW<::StringW> args,
                                                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                          { "ExecuteAsync", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, args, messages);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::ConsoleCommandBase::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::ConsoleCommandBase::AreArgumentsValid(::ArrayW<::StringW> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                          { "AreArgumentsValid", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, args, messages);
}
inline bool GlobalNamespace::ConsoleCommandBase::ParseUnmatchedArguments(::ArrayW<::StringW> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments,
                                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, bool parseOnlyRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                                                           { "ParseUnmatchedArguments",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, args, matchedArguments, messages, parseOnlyRequired);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
GlobalNamespace::ConsoleCommandBase::ParseMatchedArguments(::ArrayW<::StringW> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                          { "ParseMatchedArguments", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*>(this, ___internal_method, args, messages);
}
inline void GlobalNamespace::ConsoleCommandBase::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsoleCommandBase::GetInvalidArgumentMessage(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>* missingArguments,
                                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(),
                                                                                         { "GetInvalidArgumentMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missingArguments, messages);
}
inline int32_t GlobalNamespace::ConsoleCommandBase::CompareTo(::GlobalNamespace::ConsoleCommandBase* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void GlobalNamespace::ConsoleCommandBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConsoleCommandBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsoleCommandBase* GlobalNamespace::ConsoleCommandBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsoleCommandBase*>());
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
constexpr GlobalNamespace::ConsoleCommandBase::operator ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
constexpr ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>* GlobalNamespace::ConsoleCommandBase::i___System__IComparable_1___GlobalNamespace__ConsoleCommandBase__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleCommandBase::ConsoleCommandBase() {}
