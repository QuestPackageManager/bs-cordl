#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LabelInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__BranchLabel_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightCompiler_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo___c::*)()>(&::System::Linq::Expressions::Interpreter::LabelInfo___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f9f758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo___c._ValidateJump_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::Interpreter::LabelScopeInfo* (::System::Linq::Expressions::Interpreter::LabelInfo___c::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
        &::System::Linq::Expressions::Interpreter::LabelInfo___c::_ValidateJump_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f9f75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo___c*>(),
                                                             { "<ValidateJump>b__9_0", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LabelInfo___c::setStaticF___9(::System::Linq::Expressions::Interpreter::LabelInfo___c* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::LabelInfo___c*, "<>9", ::System::Linq::Expressions::Interpreter::LabelInfo___c*>(
      std::forward<::System::Linq::Expressions::Interpreter::LabelInfo___c*>(value));
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo___c* System::Linq::Expressions::Interpreter::LabelInfo___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::LabelInfo___c*, "<>9", ::System::Linq::Expressions::Interpreter::LabelInfo___c*>();
}
inline void System::Linq::Expressions::Interpreter::LabelInfo___c::setStaticF___9__9_0(
    ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*, "<>9__9_0",
                                    ::System::Linq::Expressions::Interpreter::LabelInfo___c*>(
      std::forward<::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*>(value));
}
inline ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*
System::Linq::Expressions::Interpreter::LabelInfo___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*, "<>9__9_0",
                                           ::System::Linq::Expressions::Interpreter::LabelInfo___c*>();
}
inline void System::Linq::Expressions::Interpreter::LabelInfo___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo*
System::Linq::Expressions::Interpreter::LabelInfo___c::_ValidateJump_b__9_0(::System::Linq::Expressions::Interpreter::LabelScopeInfo* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo___c*>(),
                                                           { "<ValidateJump>b__9_0", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(this, ___internal_method, b);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo___c* System::Linq::Expressions::Interpreter::LabelInfo___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LabelInfo___c*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelInfo___c::LabelInfo___c() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9eb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.GetLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::BranchLabel* (
    ::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::GetLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9ebc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "GetLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.Reference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::Reference)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f9ec10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "Reference", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.Define
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::Define)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5f9ef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "Define", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.ValidateJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::ValidateJump)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5f9ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "ValidateJump", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.ValidateFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(&::System::Linq::Expressions::Interpreter::LabelInfo::ValidateFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f9f670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "ValidateFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.EnsureLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::EnsureLabel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f9ebe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "EnsureLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.DefinedIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::DefinedIn)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f9f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "DefinedIn", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.get_HasDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(&::System::Linq::Expressions::Interpreter::LabelInfo::get_HasDefinitions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9ecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "get_HasDefinitions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.FirstDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LabelScopeInfo* (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::FirstDefinition)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5f9f4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "FirstDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.AddDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::AddDefinition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f9f194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                           { "AddDefinition", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.get_HasMultipleDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::get_HasMultipleDefinitions)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f9f38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "get_HasMultipleDefinitions", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LabelTarget*& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::System::Linq::Expressions::LabelTarget* const& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_set__node(::System::Linq::Expressions::LabelTarget* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
constexpr ::System::Linq::Expressions::Interpreter::BranchLabel*& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr ::System::Linq::Expressions::Interpreter::BranchLabel* const& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr void System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_set__label(::System::Linq::Expressions::Interpreter::BranchLabel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____label = value;
}
constexpr ::System::Object*& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__definitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____definitions;
}
constexpr ::System::Object* const& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__definitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____definitions;
}
constexpr void System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_set__definitions(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____definitions = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__references() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____references;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* const&
System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__references() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____references;
}
constexpr void
System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_set__references(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____references = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__acrossBlockJump() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acrossBlockJump;
}
constexpr bool const& System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_get__acrossBlockJump() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acrossBlockJump;
}
constexpr void System::Linq::Expressions::Interpreter::LabelInfo::__cordl_internal_set__acrossBlockJump(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____acrossBlockJump = value;
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::_ctor(::System::Linq::Expressions::LabelTarget* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::BranchLabel* System::Linq::Expressions::Interpreter::LabelInfo::GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "GetLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::BranchLabel*>(this, ___internal_method, compiler);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "Reference", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "Define", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* reference) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "ValidateJump", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reference);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::ValidateFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "ValidateFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "EnsureLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compiler);
}
inline bool System::Linq::Expressions::Interpreter::LabelInfo::DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "DefinedIn", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scope);
}
inline bool System::Linq::Expressions::Interpreter::LabelInfo::get_HasDefinitions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "get_HasDefinitions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* System::Linq::Expressions::Interpreter::LabelInfo::FirstDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "FirstDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                                                         { "AddDefinition", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scope);
}
inline bool System::Linq::Expressions::Interpreter::LabelInfo::get_HasMultipleDefinitions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(), { "get_HasMultipleDefinitions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T System::Linq::Expressions::Interpreter::LabelInfo::CommonNode(T first, T second, ::System::Func_2<T, T>* parent) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelInfo*>(),
                                                           { "CommonNode", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Func_2<T, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, first, second, parent);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LabelInfo::New_ctor(::System::Linq::Expressions::LabelTarget* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LabelInfo*>(node));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelInfo::LabelInfo() {}
