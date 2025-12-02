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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeKind)>(&::System::Linq::Expressions::Interpreter::LabelScopeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d8308c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.get_CanJumpInto
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::LabelScopeInfo::get_CanJumpInto)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d82f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(),
                                                                               "get_CanJumpInto", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.ContainsTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(::System::Linq::Expressions::LabelTarget*)>(
    &::System::Linq::Expressions::Interpreter::LabelScopeInfo::ContainsTarget)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d82a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), "ContainsTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.TryGetLabelInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(
    ::System::Linq::Expressions::LabelTarget*, ::ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*>)>(&::System::Linq::Expressions::Interpreter::LabelScopeInfo::TryGetLabelInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d83098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), "TryGetLabelInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LabelScopeInfo.AddLabelInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(
    ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*)>(&::System::Linq::Expressions::Interpreter::LabelScopeInfo::AddLabelInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d82c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), "AddLabelInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelInfo*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::LabelScopeInfo::_ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent,
                                                                          ::System::Linq::Expressions::Interpreter::LabelScopeKind kind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, kind);
}
inline bool System::Linq::Expressions::Interpreter::LabelScopeInfo::get_CanJumpInto() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(),
                                                                             "get_CanJumpInto", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::LabelScopeInfo::ContainsTarget(::System::Linq::Expressions::LabelTarget* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), "ContainsTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target);
}
inline bool System::Linq::Expressions::Interpreter::LabelScopeInfo::TryGetLabelInfo(::System::Linq::Expressions::LabelTarget* target,
                                                                                    ::ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*> info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), "TryGetLabelInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target, info);
}
inline void System::Linq::Expressions::Interpreter::LabelScopeInfo::AddLabelInfo(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Interpreter::LabelInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>::get(), "AddLabelInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, info);
}
inline ::System::Linq::Expressions::Interpreter::LabelScopeInfo* System::Linq::Expressions::Interpreter::LabelScopeInfo::New_ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent,
                                                                                                                                  ::System::Linq::Expressions::Interpreter::LabelScopeKind kind) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LabelScopeInfo*>(parent, kind));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo::LabelScopeInfo() {}
