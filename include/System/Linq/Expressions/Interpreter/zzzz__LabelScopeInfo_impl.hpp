#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LabelScopeInfo.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__HybridReferenceDictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeKind_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeKind)>(&::System::Linq::Expressions::Interpreter::LabelScopeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f99f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.get_CanJumpInto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelScopeInfo::get_CanJumpInto)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f99e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(), { "get_CanJumpInto", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.ContainsTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::Interpreter::LabelScopeInfo::ContainsTarget)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f9990c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
                                                                                           { "ContainsTarget", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.TryGetLabelInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(
    ::System::Linq::Expressions::LabelTarget*, ::by_ref<::System::Linq::Expressions::Interpreter::LabelInfo*>)>(&::System::Linq::Expressions::Interpreter::LabelScopeInfo::TryGetLabelInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f99f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
            { "TryGetLabelInfo", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::LabelInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.AddLabelInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(
    ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*)>(&::System::Linq::Expressions::Interpreter::LabelScopeInfo::AddLabelInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f99acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
                            { "AddLabelInfo", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>*&
System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* const&
System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr void System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_set__labels(
    ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labels = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind& System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_get_Kind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Kind;
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeKind const& System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_get_Kind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Kind;
}
constexpr void System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_set_Kind(::System::Linq::Expressions::Interpreter::LabelScopeKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Kind = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo*& System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_get_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parent;
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo* const& System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_get_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parent;
}
constexpr void System::Linq::Expressions::Interpreter::LabelScopeInfo::__cordl_internal_set_Parent(::System::Linq::Expressions::Interpreter::LabelScopeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Parent = value;
}
inline void System::Linq::Expressions::Interpreter::LabelScopeInfo::_ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent,
                                                                          ::System::Linq::Expressions::Interpreter::LabelScopeKind kind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, kind);
}
inline bool System::Linq::Expressions::Interpreter::LabelScopeInfo::get_CanJumpInto() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(), { "get_CanJumpInto", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::LabelScopeInfo::ContainsTarget(::System::Linq::Expressions::LabelTarget* target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
                                                                                         { "ContainsTarget", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline bool System::Linq::Expressions::Interpreter::LabelScopeInfo::TryGetLabelInfo(::System::Linq::Expressions::LabelTarget* target,
                                                                                    ::by_ref<::System::Linq::Expressions::Interpreter::LabelInfo*> info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
                       { "TryGetLabelInfo", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::LabelInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, info);
}
inline void System::Linq::Expressions::Interpreter::LabelScopeInfo::AddLabelInfo(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Interpreter::LabelInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(),
                          { "AddLabelInfo", {}, { ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, info);
}
inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* System::Linq::Expressions::Interpreter::LabelScopeInfo::New_ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent,
                                                                                                                                  ::System::Linq::Expressions::Interpreter::LabelScopeKind kind) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(parent, kind));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo::LabelScopeInfo() {}
