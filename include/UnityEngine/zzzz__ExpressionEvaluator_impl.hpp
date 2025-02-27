#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Expression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExpressionEvaluator_Expression::*)(::StringW)>(
    &::UnityEngine::ExpressionEvaluator_Expression::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x487c76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_Expression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_rpnTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rpnTokens;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_rpnTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rpnTokens;
}
constexpr void UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_set_rpnTokens(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rpnTokens)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_hasVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasVariables;
}
constexpr bool const& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_hasVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasVariables;
}
constexpr void UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_set_hasVariables(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasVariables = value;
}
inline void UnityEngine::ExpressionEvaluator_Expression::_ctor(::StringW expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_Expression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expression);
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator_Expression::Evaluate(::ByRef<T> value, int32_t index, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_Expression*>::get(),
                                                                                  "Evaluate", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
                                                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, index, count);
}
inline ::UnityEngine::ExpressionEvaluator_Expression* UnityEngine::ExpressionEvaluator_Expression::New_ctor(::StringW expression) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ExpressionEvaluator_Expression*>(expression));
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_Expression::ExpressionEvaluator_Expression() {}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_PcgRandom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExpressionEvaluator_PcgRandom::*)(uint64_t, uint64_t)>(
    &::UnityEngine::ExpressionEvaluator_PcgRandom::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x487c704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_PcgRandom.GetUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ExpressionEvaluator_PcgRandom::*)()>(
    &::UnityEngine::ExpressionEvaluator_PcgRandom::GetUInt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x487c15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "GetUInt",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_PcgRandom.RotateRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::UnityEngine::ExpressionEvaluator_PcgRandom::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487c828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "RotateRight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_PcgRandom.XshRr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint64_t)>(&::UnityEngine::ExpressionEvaluator_PcgRandom::XshRr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x487c810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "XshRr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_PcgRandom.Step
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExpressionEvaluator_PcgRandom::*)()>(&::UnityEngine::ExpressionEvaluator_PcgRandom::Step)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x487c7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "Step",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ExpressionEvaluator_PcgRandom::_ctor(uint64_t state, uint64_t sequence) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, sequence);
}
inline uint32_t UnityEngine::ExpressionEvaluator_PcgRandom::GetUInt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "GetUInt",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::ExpressionEvaluator_PcgRandom::RotateRight(uint32_t v, int32_t rot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "RotateRight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, v, rot);
}
inline uint32_t UnityEngine::ExpressionEvaluator_PcgRandom::XshRr(uint64_t s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "XshRr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, s);
}
inline void UnityEngine::ExpressionEvaluator_PcgRandom::Step() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_PcgRandom>::get(), "Step",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "increment", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ExpressionEvaluator_PcgRandom::ExpressionEvaluator_PcgRandom(uint64_t increment, uint64_t state) noexcept {
  this->increment = increment;
  this->state = state;
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_PcgRandom::ExpressionEvaluator_PcgRandom() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ExpressionEvaluator_Op::ExpressionEvaluator_Op(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_Op::ExpressionEvaluator_Op() {}
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Add{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Sub{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Mul{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Div{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Mod{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Neg{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Pow{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Sqrt{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Sin{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Cos{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Tan{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Floor{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Ceil{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Round{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Rand{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::ExpressionEvaluator_Op UnityEngine::ExpressionEvaluator_Op::Linear{ static_cast<int32_t>(0xf) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ExpressionEvaluator_Associativity::ExpressionEvaluator_Associativity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_Associativity::ExpressionEvaluator_Associativity() {}
constexpr ::UnityEngine::ExpressionEvaluator_Associativity UnityEngine::ExpressionEvaluator_Associativity::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ExpressionEvaluator_Associativity UnityEngine::ExpressionEvaluator_Associativity::Right{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Operator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExpressionEvaluator_Operator::*)(
    ::UnityEngine::ExpressionEvaluator_Op, int32_t, int32_t, ::UnityEngine::ExpressionEvaluator_Associativity)>(&::UnityEngine::ExpressionEvaluator_Operator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x487c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_Operator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Op>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Associativity>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ExpressionEvaluator_Op& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___op;
}
constexpr ::UnityEngine::ExpressionEvaluator_Op const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___op;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_op(::UnityEngine::ExpressionEvaluator_Op value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___op = value;
}
constexpr int32_t& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_precedence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___precedence;
}
constexpr int32_t const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_precedence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___precedence;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_precedence(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___precedence = value;
}
constexpr ::UnityEngine::ExpressionEvaluator_Associativity& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_associativity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associativity;
}
constexpr ::UnityEngine::ExpressionEvaluator_Associativity const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_associativity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associativity;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_associativity(::UnityEngine::ExpressionEvaluator_Associativity value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___associativity = value;
}
constexpr int32_t& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_inputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr int32_t const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_inputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputs;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_inputs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputs = value;
}
inline void UnityEngine::ExpressionEvaluator_Operator::_ctor(::UnityEngine::ExpressionEvaluator_Op op, int32_t precedence, int32_t inputs,
                                                             ::UnityEngine::ExpressionEvaluator_Associativity associativity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator_Operator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Op>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Associativity>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, precedence, inputs, associativity);
}
inline ::UnityEngine::ExpressionEvaluator_Operator* UnityEngine::ExpressionEvaluator_Operator::New_ctor(::UnityEngine::ExpressionEvaluator_Op op, int32_t precedence, int32_t inputs,
                                                                                                        ::UnityEngine::ExpressionEvaluator_Associativity associativity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ExpressionEvaluator_Operator*>(op, precedence, inputs, associativity));
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_Operator::ExpressionEvaluator_Operator() {}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ExpressionEvaluator___c::*)()>(&::UnityEngine::ExpressionEvaluator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x487c88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator___c._ExpressionToTokens_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ExpressionEvaluator___c::*)(::StringW)>(
    &::UnityEngine::ExpressionEvaluator___c::_ExpressionToTokens_b__14_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x487c894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get(), "<ExpressionToTokens>b__14_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ExpressionEvaluator___c::setStaticF___9(::UnityEngine::ExpressionEvaluator___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ExpressionEvaluator___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get>(
      std::forward<::UnityEngine::ExpressionEvaluator___c*>(value));
}
inline ::UnityEngine::ExpressionEvaluator___c* UnityEngine::ExpressionEvaluator___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ExpressionEvaluator___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get>();
}
inline void UnityEngine::ExpressionEvaluator___c::setStaticF___9__14_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* UnityEngine::ExpressionEvaluator___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get>();
}
inline void UnityEngine::ExpressionEvaluator___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ExpressionEvaluator___c::_ExpressionToTokens_b__14_0(::StringW f) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator___c*>::get(), "<ExpressionToTokens>b__14_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline ::UnityEngine::ExpressionEvaluator___c* UnityEngine::ExpressionEvaluator___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ExpressionEvaluator___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator___c::ExpressionEvaluator___c() {}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.EvaluateDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::ByRef<double_t>, int32_t, int32_t)>(
    &::UnityEngine::ExpressionEvaluator::EvaluateDouble)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x487aa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.InfixToRPN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::ExpressionEvaluator::InfixToRPN)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x487b460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "InfixToRPN", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.NeedToPop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::Stack_1<::StringW>*, ::UnityEngine::ExpressionEvaluator_Operator*)>(
    &::UnityEngine::ExpressionEvaluator::NeedToPop)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x487b8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "NeedToPop", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<::StringW>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Operator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.ExpressionToTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::StringW, ::ByRef<bool>)>(
    &::UnityEngine::ExpressionEvaluator::ExpressionToTokens)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x487b9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "ExpressionToTokens", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsCommand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x487aff8;

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
  constexpr static std::size_t addrs = 0x487b3f8;

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
  constexpr static std::size_t addrs = 0x487b860;

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
  constexpr static std::size_t addrs = 0x487aed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "IsOperator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.TokenToOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ExpressionEvaluator_Operator* (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::TokenToOperator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x487af58;

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
  constexpr static std::size_t addrs = 0x487bdf0;

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
  constexpr static std::size_t addrs = 0x487bfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "FixUnaryOperators", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.EvaluateOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::ArrayW<double_t, ::Array<double_t>*>, ::UnityEngine::ExpressionEvaluator_Op, int32_t, int32_t)>(
    &::UnityEngine::ExpressionEvaluator::EvaluateOp)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x487b0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateOp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t, ::Array<double_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Op>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ExpressionEvaluator::setStaticF_s_Random(::UnityEngine::ExpressionEvaluator_PcgRandom value) {
  ::cordl_internals::setStaticField<::UnityEngine::ExpressionEvaluator_PcgRandom, "s_Random", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>(
      std::forward<::UnityEngine::ExpressionEvaluator_PcgRandom>(value));
}
inline ::UnityEngine::ExpressionEvaluator_PcgRandom UnityEngine::ExpressionEvaluator::getStaticF_s_Random() {
  return ::cordl_internals::getStaticField<::UnityEngine::ExpressionEvaluator_PcgRandom, "s_Random",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>();
}
inline void UnityEngine::ExpressionEvaluator::setStaticF_s_Operators(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>*, "s_Operators",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>* UnityEngine::ExpressionEvaluator::getStaticF_s_Operators() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>*, "s_Operators",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get>();
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator::Evaluate(::StringW expression, ::ByRef<T> value, ::ByRef<::UnityEngine::ExpressionEvaluator_Expression*> delayed) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "Evaluate",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ExpressionEvaluator_Expression*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, value, delayed);
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator::EvaluateTokens(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ::ByRef<T> value, int32_t index, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateTokens",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokens, value, index, count);
}
inline bool UnityEngine::ExpressionEvaluator::EvaluateDouble(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ::ByRef<double_t> value, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateDouble", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokens, value, index, count);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::ExpressionEvaluator::InfixToRPN(::ArrayW<::StringW, ::Array<::StringW>*> tokens) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "InfixToRPN", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, tokens);
}
inline bool UnityEngine::ExpressionEvaluator::NeedToPop(::System::Collections::Generic::Stack_1<::StringW>* operatorStack, ::UnityEngine::ExpressionEvaluator_Operator* newOperator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "NeedToPop", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<::StringW>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Operator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, operatorStack, newOperator);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::ExpressionEvaluator::ExpressionToTokens(::StringW expression, ::ByRef<bool> hasVariables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "ExpressionToTokens", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
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
inline ::UnityEngine::ExpressionEvaluator_Operator* UnityEngine::ExpressionEvaluator::TokenToOperator(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "TokenToOperator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ExpressionEvaluator_Operator*, false>(nullptr, ___internal_method, token);
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
inline double_t UnityEngine::ExpressionEvaluator::EvaluateOp(::ArrayW<double_t, ::Array<double_t>*> values, ::UnityEngine::ExpressionEvaluator_Op op, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "EvaluateOp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t, ::Array<double_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ExpressionEvaluator_Op>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, values, op, index, count);
}
template <typename T> inline bool UnityEngine::ExpressionEvaluator::TryParse(::StringW expression, ::ByRef<T> result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExpressionEvaluator*>::get(), "TryParse",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator::ExpressionEvaluator() {}
