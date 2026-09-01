#pragma once
// IWYU pragma private; include "GlobalNamespace\CommandNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CommandNode_def.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "GlobalNamespace/zzzz__CommandNode_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandNode___c__DisplayClass6_0::*)()>(&::GlobalNamespace::CommandNode___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cbb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass6_0._IntegrateCommand_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CommandNode___c__DisplayClass6_0::*)(::GlobalNamespace::CommandNode*)>(
    &::GlobalNamespace::CommandNode___c__DisplayClass6_0::_IntegrateCommand_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32cc328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass6_0*>(),
                                                                                           { "<IntegrateCommand>b__0", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CommandNode___c__DisplayClass6_0::__cordl_internal_get_commandNameSubstring() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandNameSubstring;
}
constexpr ::StringW const& GlobalNamespace::CommandNode___c__DisplayClass6_0::__cordl_internal_get_commandNameSubstring() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandNameSubstring;
}
constexpr void GlobalNamespace::CommandNode___c__DisplayClass6_0::__cordl_internal_set_commandNameSubstring(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandNameSubstring = value;
}
inline void GlobalNamespace::CommandNode___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CommandNode___c__DisplayClass6_0::_IntegrateCommand_b__0(::GlobalNamespace::CommandNode* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass6_0*>(),
                                                                                         { "<IntegrateCommand>b__0", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::GlobalNamespace::CommandNode___c__DisplayClass6_0* GlobalNamespace::CommandNode___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandNode___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandNode___c__DisplayClass6_0::CommandNode___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandNode___c__DisplayClass7_0::*)()>(&::GlobalNamespace::CommandNode___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cbcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass7_0._FindAutocompleteArgumentNames_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CommandNode___c__DisplayClass7_0::*)(::StringW)>(
    &::GlobalNamespace::CommandNode___c__DisplayClass7_0::_FindAutocompleteArgumentNames_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32cc350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass7_0*>(), { "<FindAutocompleteArgumentNames>b__0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CommandNode___c__DisplayClass7_0::__cordl_internal_get_inputArgumentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputArgumentName;
}
constexpr ::StringW const& GlobalNamespace::CommandNode___c__DisplayClass7_0::__cordl_internal_get_inputArgumentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputArgumentName;
}
constexpr void GlobalNamespace::CommandNode___c__DisplayClass7_0::__cordl_internal_set_inputArgumentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputArgumentName = value;
}
inline void GlobalNamespace::CommandNode___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CommandNode___c__DisplayClass7_0::_FindAutocompleteArgumentNames_b__0(::StringW arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass7_0*>(), { "<FindAutocompleteArgumentNames>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, arg);
}
inline ::GlobalNamespace::CommandNode___c__DisplayClass7_0* GlobalNamespace::CommandNode___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandNode___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandNode___c__DisplayClass7_0::CommandNode___c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandNode___c__DisplayClass8_0::*)()>(&::GlobalNamespace::CommandNode___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cbeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass8_0._FindAutocompleteArgumentValues_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CommandNode___c__DisplayClass8_0::*)(::StringW)>(
    &::GlobalNamespace::CommandNode___c__DisplayClass8_0::_FindAutocompleteArgumentValues_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32cc370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass8_0*>(), { "<FindAutocompleteArgumentValues>b__0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CommandNode___c__DisplayClass8_0::__cordl_internal_get_inputArgumentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputArgumentValue;
}
constexpr ::StringW const& GlobalNamespace::CommandNode___c__DisplayClass8_0::__cordl_internal_get_inputArgumentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputArgumentValue;
}
constexpr void GlobalNamespace::CommandNode___c__DisplayClass8_0::__cordl_internal_set_inputArgumentValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputArgumentValue = value;
}
inline void GlobalNamespace::CommandNode___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CommandNode___c__DisplayClass8_0::_FindAutocompleteArgumentValues_b__0(::StringW autocompleteValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass8_0*>(), { "<FindAutocompleteArgumentValues>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, autocompleteValue);
}
inline ::GlobalNamespace::CommandNode___c__DisplayClass8_0* GlobalNamespace::CommandNode___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandNode___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandNode___c__DisplayClass8_0::CommandNode___c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandNode___c__DisplayClass9_0::*)()>(&::GlobalNamespace::CommandNode___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cc1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass9_0._FindAutocompleteNodes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CommandNode___c__DisplayClass9_0::*)(::GlobalNamespace::CommandNode*)>(
    &::GlobalNamespace::CommandNode___c__DisplayClass9_0::_FindAutocompleteNodes_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32cc3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>(),
                                                                                           { "<FindAutocompleteNodes>b__0", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode___c__DisplayClass9_0._FindAutocompleteNodes_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CommandNode___c__DisplayClass9_0::*)(::GlobalNamespace::CommandNode*)>(
    &::GlobalNamespace::CommandNode___c__DisplayClass9_0::_FindAutocompleteNodes_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32cc45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>(),
                                                                                           { "<FindAutocompleteNodes>b__1", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CommandNode___c__DisplayClass9_0::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::StringW const& GlobalNamespace::CommandNode___c__DisplayClass9_0::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void GlobalNamespace::CommandNode___c__DisplayClass9_0::__cordl_internal_set_input(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
inline void GlobalNamespace::CommandNode___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CommandNode___c__DisplayClass9_0::_FindAutocompleteNodes_b__0(::GlobalNamespace::CommandNode* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>(),
                                                                                         { "<FindAutocompleteNodes>b__0", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool GlobalNamespace::CommandNode___c__DisplayClass9_0::_FindAutocompleteNodes_b__1(::GlobalNamespace::CommandNode* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>(),
                                                                                         { "<FindAutocompleteNodes>b__1", {}, { ::i2c::type_of<::GlobalNamespace::CommandNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::GlobalNamespace::CommandNode___c__DisplayClass9_0* GlobalNamespace::CommandNode___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandNode___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandNode___c__DisplayClass9_0::CommandNode___c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::CommandNode.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CommandNode::*)()>(&::GlobalNamespace::CommandNode::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cb750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { ::i2c::class_of<::GlobalNamespace::CommandNode*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode.IntegrateCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandNode::*)(::GlobalNamespace::ConsoleCommandBase*)>(&::GlobalNamespace::CommandNode::IntegrateCommand)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x32cb758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "IntegrateCommand", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode.FindAutocompleteArgumentNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::CommandNode::*)(::StringW)>(&::GlobalNamespace::CommandNode::FindAutocompleteArgumentNames)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x32cbb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "FindAutocompleteArgumentNames", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode.FindAutocompleteArgumentValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::CommandNode::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::CommandNode::FindAutocompleteArgumentValues)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x32cbcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "FindAutocompleteArgumentValues", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode.FindAutocompleteNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::CommandNode*> (::GlobalNamespace::CommandNode::*)(::StringW, bool)>(
    &::GlobalNamespace::CommandNode::FindAutocompleteNodes)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x32cbedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "FindAutocompleteNodes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandNode::*)()>(&::GlobalNamespace::CommandNode::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x32cc1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>*& GlobalNamespace::CommandNode::__cordl_internal_get_argumentsMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argumentsMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>* const& GlobalNamespace::CommandNode::__cordl_internal_get_argumentsMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argumentsMap;
}
constexpr void GlobalNamespace::CommandNode::__cordl_internal_set_argumentsMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___argumentsMap = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::CommandNode::__cordl_internal_get_arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::CommandNode::__cordl_internal_get_arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr void GlobalNamespace::CommandNode::__cordl_internal_set_arguments(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arguments = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>*& GlobalNamespace::CommandNode::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>* const& GlobalNamespace::CommandNode::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void GlobalNamespace::CommandNode::__cordl_internal_set_nodes(::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodes = value;
}
constexpr ::StringW& GlobalNamespace::CommandNode::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::StringW const& GlobalNamespace::CommandNode::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::CommandNode::__cordl_internal_set_text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
constexpr bool& GlobalNamespace::CommandNode::__cordl_internal_get_isCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCommand;
}
constexpr bool const& GlobalNamespace::CommandNode::__cordl_internal_get_isCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCommand;
}
constexpr void GlobalNamespace::CommandNode::__cordl_internal_set_isCommand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCommand = value;
}
inline ::StringW GlobalNamespace::CommandNode::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandNode*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CommandNode::IntegrateCommand(::GlobalNamespace::ConsoleCommandBase* newCommand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "IntegrateCommand", {}, { ::i2c::type_of<::GlobalNamespace::ConsoleCommandBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCommand);
}
inline ::ArrayW<::StringW> GlobalNamespace::CommandNode::FindAutocompleteArgumentNames(::StringW inputArgumentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "FindAutocompleteArgumentNames", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, inputArgumentName);
}
inline ::ArrayW<::StringW> GlobalNamespace::CommandNode::FindAutocompleteArgumentValues(::StringW inputArgumentName, ::StringW inputArgumentValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "FindAutocompleteArgumentValues", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, inputArgumentName, inputArgumentValue);
}
inline ::ArrayW<::GlobalNamespace::CommandNode*> GlobalNamespace::CommandNode::FindAutocompleteNodes(::StringW input, bool exact) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { "FindAutocompleteNodes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::CommandNode*>>(this, ___internal_method, input, exact);
}
inline void GlobalNamespace::CommandNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandNode* GlobalNamespace::CommandNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandNode::CommandNode() {}
