#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__Expression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ExpressionEvaluator__Expression::*)(::StringW)>(
    &::UnityEngine::__ExpressionEvaluator__Expression::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x480bce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__Expression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::__ExpressionEvaluator__Expression::__cordl_internal_get_rpnTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rpnTokens;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::__ExpressionEvaluator__Expression::__cordl_internal_get_rpnTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rpnTokens;
}
constexpr void UnityEngine::__ExpressionEvaluator__Expression::__cordl_internal_set_rpnTokens(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rpnTokens)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::__ExpressionEvaluator__Expression::__cordl_internal_get_hasVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasVariables;
}
constexpr bool const& UnityEngine::__ExpressionEvaluator__Expression::__cordl_internal_get_hasVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasVariables;
}
constexpr void UnityEngine::__ExpressionEvaluator__Expression::__cordl_internal_set_hasVariables(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasVariables = value;
}
inline ::UnityEngine::__ExpressionEvaluator__Expression* UnityEngine::__ExpressionEvaluator__Expression::New_ctor(::StringW expression) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__ExpressionEvaluator__Expression*>(expression));
}
inline void UnityEngine::__ExpressionEvaluator__Expression::_ctor(::StringW expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__Expression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expression);
}
/// @param index: int32_t (default: static_cast<int32_t>(0x0))
/// @param count: int32_t (default: static_cast<int32_t>(0x1))
template <typename T> inline bool UnityEngine::__ExpressionEvaluator__Expression::Evaluate(ByRef<T> value, int32_t index, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__Expression*>::get(),
                                                                                  "Evaluate", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(),
                                                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, index, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::__ExpressionEvaluator__Expression::__ExpressionEvaluator__Expression() {}
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__PcgRandom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ExpressionEvaluator__PcgRandom::*)(uint64_t, uint64_t)>(
    &::UnityEngine::__ExpressionEvaluator__PcgRandom::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x480bc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__PcgRandom.GetUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::__ExpressionEvaluator__PcgRandom::*)()>(
    &::UnityEngine::__ExpressionEvaluator__PcgRandom::GetUInt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x480b6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(),
                                                                               "GetUInt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__PcgRandom.RotateRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::UnityEngine::__ExpressionEvaluator__PcgRandom::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x480bd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "RotateRight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__PcgRandom.XshRr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint64_t)>(&::UnityEngine::__ExpressionEvaluator__PcgRandom::XshRr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x480bd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "XshRr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__PcgRandom.Step
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ExpressionEvaluator__PcgRandom::*)()>(
    &::UnityEngine::__ExpressionEvaluator__PcgRandom::Step)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x480bd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "Step",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @param state: uint64_t (default: static_cast<uint64_t>(0x0u))
/// @param sequence: uint64_t (default: static_cast<uint64_t>(0x0u))
inline void UnityEngine::__ExpressionEvaluator__PcgRandom::_ctor(uint64_t state, uint64_t sequence) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, sequence);
}
inline uint32_t UnityEngine::__ExpressionEvaluator__PcgRandom::GetUInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "GetUInt",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::__ExpressionEvaluator__PcgRandom::RotateRight(uint32_t v, int32_t rot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "RotateRight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, v, rot);
}
inline uint32_t UnityEngine::__ExpressionEvaluator__PcgRandom::XshRr(uint64_t s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "XshRr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, s);
}
inline void UnityEngine::__ExpressionEvaluator__PcgRandom::Step() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__PcgRandom>::get(), "Step",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "increment", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ExpressionEvaluator__PcgRandom::__ExpressionEvaluator__PcgRandom(uint64_t increment, uint64_t state) noexcept {
  this->increment = increment;
  this->state = state;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ExpressionEvaluator__PcgRandom::__ExpressionEvaluator__PcgRandom() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ExpressionEvaluator__Op::__ExpressionEvaluator__Op(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ExpressionEvaluator__Op::__ExpressionEvaluator__Op() {}
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Add{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Sub{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Mul{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Div{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Mod{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Neg{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Pow{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Sqrt{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Sin{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Cos{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Tan{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Floor{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Ceil{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Round{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Rand{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::__ExpressionEvaluator__Op UnityEngine::__ExpressionEvaluator__Op::Linear{ static_cast<int32_t>(0xf) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ExpressionEvaluator__Associativity::__ExpressionEvaluator__Associativity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ExpressionEvaluator__Associativity::__ExpressionEvaluator__Associativity() {}
constexpr ::UnityEngine::__ExpressionEvaluator__Associativity UnityEngine::__ExpressionEvaluator__Associativity::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__ExpressionEvaluator__Associativity UnityEngine::__ExpressionEvaluator__Associativity::Right{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator__Operator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ExpressionEvaluator__Operator::*)(
    ::UnityEngine::__ExpressionEvaluator__Op, int32_t, int32_t, ::UnityEngine::__ExpressionEvaluator__Associativity)>(&::UnityEngine::__ExpressionEvaluator__Operator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x480bca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__Operator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Op>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Associativity>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::__ExpressionEvaluator__Op& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___op;
}
constexpr ::UnityEngine::__ExpressionEvaluator__Op const& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___op;
}
constexpr void UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_set_op(::UnityEngine::__ExpressionEvaluator__Op value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___op = value;
}
constexpr int32_t& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_precedence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___precedence;
}
constexpr int32_t const& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_precedence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___precedence;
}
constexpr void UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_set_precedence(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___precedence = value;
}
constexpr ::UnityEngine::__ExpressionEvaluator__Associativity& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_associativity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associativity;
}
constexpr ::UnityEngine::__ExpressionEvaluator__Associativity const& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_associativity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associativity;
}
constexpr void UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_set_associativity(::UnityEngine::__ExpressionEvaluator__Associativity value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___associativity = value;
}
constexpr int32_t& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_inputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr int32_t const& UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_get_inputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr void UnityEngine::__ExpressionEvaluator__Operator::__cordl_internal_set_inputs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputs = value;
}
inline ::UnityEngine::__ExpressionEvaluator__Operator* UnityEngine::__ExpressionEvaluator__Operator::New_ctor(::UnityEngine::__ExpressionEvaluator__Op op, int32_t precedence, int32_t inputs,
                                                                                                              ::UnityEngine::__ExpressionEvaluator__Associativity associativity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__ExpressionEvaluator__Operator*>(op, precedence, inputs, associativity));
}
inline void UnityEngine::__ExpressionEvaluator__Operator::_ctor(::UnityEngine::__ExpressionEvaluator__Op op, int32_t precedence, int32_t inputs,
                                                                ::UnityEngine::__ExpressionEvaluator__Associativity associativity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator__Operator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Op>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Associativity>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, precedence, inputs, associativity);
}
// Ctor Parameters []
constexpr ::UnityEngine::__ExpressionEvaluator__Operator::__ExpressionEvaluator__Operator() {}
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ExpressionEvaluator____c::*)()>(&::UnityEngine::__ExpressionEvaluator____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x480be00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ExpressionEvaluator____c._ExpressionToTokens_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::__ExpressionEvaluator____c::*)(::StringW)>(
    &::UnityEngine::__ExpressionEvaluator____c::_ExpressionToTokens_b__14_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x480be08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get(), "<ExpressionToTokens>b__14_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ExpressionEvaluator____c::setStaticF___9(::UnityEngine::__ExpressionEvaluator____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__ExpressionEvaluator____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get>(
      std::forward<::UnityEngine::__ExpressionEvaluator____c*>(value));
}
inline ::UnityEngine::__ExpressionEvaluator____c* UnityEngine::__ExpressionEvaluator____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::__ExpressionEvaluator____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get>();
}
inline void UnityEngine::__ExpressionEvaluator____c::setStaticF___9__14_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* UnityEngine::__ExpressionEvaluator____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get>();
}
inline ::UnityEngine::__ExpressionEvaluator____c* UnityEngine::__ExpressionEvaluator____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__ExpressionEvaluator____c*>());
}
inline void UnityEngine::__ExpressionEvaluator____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::__ExpressionEvaluator____c::_ExpressionToTokens_b__14_0(::StringW f) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ExpressionEvaluator____c*>::get(), "<ExpressionToTokens>b__14_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::UnityEngine::__ExpressionEvaluator____c::__ExpressionEvaluator____c() {}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.EvaluateDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>, ByRef<double_t>, int32_t, int32_t)>(
    &::UnityEngine::ExpressionEvaluator::EvaluateDouble)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x4809f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.InfixToRPN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::ExpressionEvaluator::InfixToRPN)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x480a9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "InfixToRPN", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.NeedToPop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::Stack_1<::StringW>*, ::UnityEngine::__ExpressionEvaluator__Operator*)>(
    &::UnityEngine::ExpressionEvaluator::NeedToPop)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x480ae40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "NeedToPop", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<::StringW>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Operator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.ExpressionToTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::StringW, ByRef<bool>)>(
    &::UnityEngine::ExpressionEvaluator::ExpressionToTokens)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x480af28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "ExpressionToTokens", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsCommand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x480a56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsCommand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsVariable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x480a96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsVariable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsDelayedFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsDelayedFunction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x480add4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsDelayedFunction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsOperator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x480a44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsOperator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.TokenToOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ExpressionEvaluator__Operator* (*)(::StringW)>(
    &::UnityEngine::ExpressionEvaluator::TokenToOperator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x480a4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "TokenToOperator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.PreFormatExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::PreFormatExpression)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x480b364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "PreFormatExpression", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.FixUnaryOperators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::ExpressionEvaluator::FixUnaryOperators)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x480b554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "FixUnaryOperators", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.EvaluateOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::ArrayW<double_t, ::Array<double_t>*>, ::UnityEngine::__ExpressionEvaluator__Op, int32_t, int32_t)>(
    &::UnityEngine::ExpressionEvaluator::EvaluateOp)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x480a618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateOp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t, ::Array<double_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Op>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ExpressionEvaluator::setStaticF_s_Random(::UnityEngine::__ExpressionEvaluator__PcgRandom value) {
  ::cordl_internals::setStaticField<::UnityEngine::__ExpressionEvaluator__PcgRandom, "s_Random", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>(
      std::forward<::UnityEngine::__ExpressionEvaluator__PcgRandom>(value));
}
inline ::UnityEngine::__ExpressionEvaluator__PcgRandom UnityEngine::ExpressionEvaluator::getStaticF_s_Random() {
  return ::cordl_internals::getStaticField<::UnityEngine::__ExpressionEvaluator__PcgRandom, "s_Random",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>();
}
inline void UnityEngine::ExpressionEvaluator::setStaticF_s_Operators(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>*, "s_Operators",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>* UnityEngine::ExpressionEvaluator::getStaticF_s_Operators() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>*, "s_Operators",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>();
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator::Evaluate(::StringW expression, ByRef<T> value, ByRef<::UnityEngine::__ExpressionEvaluator__Expression*> delayed) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "Evaluate",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ExpressionEvaluator__Expression*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, value, delayed);
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator::EvaluateTokens(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ByRef<T> value, int32_t index, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateTokens",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokens, value, index, count);
}
inline bool UnityEngine::ExpressionEvaluator::EvaluateDouble(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ByRef<double_t> value, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateDouble", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokens, value, index, count);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::ExpressionEvaluator::InfixToRPN(::ArrayW<::StringW, ::Array<::StringW>*> tokens) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "InfixToRPN", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, tokens);
}
inline bool UnityEngine::ExpressionEvaluator::NeedToPop(::System::Collections::Generic::Stack_1<::StringW>* operatorStack, ::UnityEngine::__ExpressionEvaluator__Operator* newOperator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "NeedToPop", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<::StringW>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Operator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, operatorStack, newOperator);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::ExpressionEvaluator::ExpressionToTokens(::StringW expression, ByRef<bool> hasVariables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "ExpressionToTokens", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, expression, hasVariables);
}
inline bool UnityEngine::ExpressionEvaluator::IsCommand(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsCommand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::ExpressionEvaluator::IsVariable(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsVariable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::ExpressionEvaluator::IsDelayedFunction(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsDelayedFunction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::ExpressionEvaluator::IsOperator(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsOperator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline ::UnityEngine::__ExpressionEvaluator__Operator* UnityEngine::ExpressionEvaluator::TokenToOperator(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "TokenToOperator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ExpressionEvaluator__Operator*, false>(nullptr, ___internal_method, token);
}
inline ::StringW UnityEngine::ExpressionEvaluator::PreFormatExpression(::StringW expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "PreFormatExpression", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, expression);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::ExpressionEvaluator::FixUnaryOperators(::ArrayW<::StringW, ::Array<::StringW>*> tokens) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "FixUnaryOperators", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, tokens);
}
inline double_t UnityEngine::ExpressionEvaluator::EvaluateOp(::ArrayW<double_t, ::Array<double_t>*> values, ::UnityEngine::__ExpressionEvaluator__Op op, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateOp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t, ::Array<double_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ExpressionEvaluator__Op>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, values, op, index, count);
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator::TryParse(::StringW expression, ByRef<T> result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "TryParse",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator::ExpressionEvaluator() {}
