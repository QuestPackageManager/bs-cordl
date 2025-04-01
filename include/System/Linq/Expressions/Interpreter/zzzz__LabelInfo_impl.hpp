#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LabelInfo.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo___c::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d0c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo___c._ValidateJump_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Linq::Expressions::Interpreter::LabelScopeInfo* (::System::Linq::Expressions::Interpreter::LabelInfo___c::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(
        &::System::Linq::Expressions::Interpreter::LabelInfo___c::_ValidateJump_b__9_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40d0c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get(), "<ValidateJump>b__9_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LabelInfo___c::setStaticF___9(::System::Linq::Expressions::Interpreter::LabelInfo___c* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::LabelInfo___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::LabelInfo___c*>(value));
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo___c* System::Linq::Expressions::Interpreter::LabelInfo___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::LabelInfo___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LabelInfo___c::setStaticF___9__9_0(
    ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get>(
      std::forward<::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*>(value));
}
inline ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*
System::Linq::Expressions::Interpreter::LabelInfo___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LabelInfo___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo*
System::Linq::Expressions::Interpreter::LabelInfo___c::_ValidateJump_b__9_0(::System::Linq::Expressions::Interpreter::LabelScopeInfo* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo___c*>::get(), "<ValidateJump>b__9_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, false>(this, ___internal_method, b);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo___c* System::Linq::Expressions::Interpreter::LabelInfo___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LabelInfo___c*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelInfo___c::LabelInfo___c() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x40d000c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.GetLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::BranchLabel* (
    ::System::Linq::Expressions::Interpreter::LabelInfo::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::GetLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x40d0094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "GetLabel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.Reference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::Reference)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40d00dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "Reference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.Define
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::Define)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x40d0444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "Define", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.ValidateJump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::ValidateJump)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x40d01a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "ValidateJump", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.ValidateFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::ValidateFinish)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40d0b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                               "ValidateFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.EnsureLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(
    ::System::Linq::Expressions::Interpreter::LightCompiler*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::EnsureLabel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40d00ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "EnsureLabel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.DefinedIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::DefinedIn)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x40d08fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "DefinedIn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.get_HasDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::get_HasDefinitions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x40d0198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                               "get_HasDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.FirstDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LabelScopeInfo* (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::FirstDefinition)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x40d09bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                               "FirstDefinition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.AddDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&::System::Linq::Expressions::Interpreter::LabelInfo::AddDefinition)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x40d06a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "AddDefinition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelInfo.get_HasMultipleDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelInfo::get_HasMultipleDefinitions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40d0880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                               "get_HasMultipleDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____definitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____references)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::BranchLabel* System::Linq::Expressions::Interpreter::LabelInfo::GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "GetLabel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::BranchLabel*, false>(this, ___internal_method, compiler);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "Reference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "Define", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* reference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "ValidateJump", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reference);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::ValidateFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                             "ValidateFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* compiler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "EnsureLabel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compiler);
}
inline bool System::Linq::Expressions::Interpreter::LabelInfo::DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "DefinedIn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scope);
}
inline bool System::Linq::Expressions::Interpreter::LabelInfo::get_HasDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                             "get_HasDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* System::Linq::Expressions::Interpreter::LabelInfo::FirstDefinition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                             "FirstDefinition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LabelInfo::AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "AddDefinition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scope);
}
inline bool System::Linq::Expressions::Interpreter::LabelInfo::get_HasMultipleDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(),
                                                                             "get_HasMultipleDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T System::Linq::Expressions::Interpreter::LabelInfo::CommonNode(T first, T second, ::System::Func_2<T, T>* parent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelInfo*>::get(), "CommonNode",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, first, second, parent);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LabelInfo::New_ctor(::System::Linq::Expressions::LabelTarget* node) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LabelInfo*>(node));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelInfo::LabelInfo() {}
