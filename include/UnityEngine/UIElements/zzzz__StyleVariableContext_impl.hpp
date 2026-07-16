#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariable_def.hpp"
// Ctor Parameters [CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0::StyleVariableContext___c__DisplayClass7_0(int32_t hash) noexcept {
  this->hash = hash;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0::StyleVariableContext___c__DisplayClass7_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableContext::*)(::UnityEngine::UIElements::StyleVariable)>(
    &::UnityEngine::UIElements::StyleVariableContext::Add)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6c9a0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleVariable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext.AddInitialRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableContext::*)(::UnityEngine::UIElements::StyleVariableContext*)>(
    &::UnityEngine::UIElements::StyleVariableContext::AddInitialRange)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6c9a400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
                                                                                           { "AddInitialRange", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableContext::*)()>(&::UnityEngine::UIElements::StyleVariableContext::Clear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c9a55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableContext::*)()>(&::UnityEngine::UIElements::StyleVariableContext::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c9a624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariableContext::*)(::UnityEngine::UIElements::StyleVariableContext*)>(
    &::UnityEngine::UIElements::StyleVariableContext::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6c9a704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext.TryFindVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleVariableContext::*)(::StringW, ::by_ref<::UnityEngine::UIElements::StyleVariable>)>(
    &::UnityEngine::UIElements::StyleVariableContext::TryFindVariable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c9a814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
                                                             { "TryFindVariable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleVariable>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext.GetVariableHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleVariableContext::*)()>(&::UnityEngine::UIElements::StyleVariableContext::GetVariableHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9a900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { "GetVariableHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableContext._Add_g__ComputeOrderSensitiveHash_7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0>)>(
    &::UnityEngine::UIElements::StyleVariableContext::_Add_g__ComputeOrderSensitiveHash_7_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c9a3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
            { "<Add>g__ComputeOrderSensitiveHash|7_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_VariableHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VariableHash;
}
constexpr int32_t const& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_VariableHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VariableHash;
}
constexpr void UnityEngine::UIElements::StyleVariableContext::__cordl_internal_set_m_VariableHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VariableHash = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>*& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_Variables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* const& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_Variables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variables;
}
constexpr void UnityEngine::UIElements::StyleVariableContext::__cordl_internal_set_m_Variables(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Variables = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_SortedHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedHash;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_SortedHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedHash;
}
constexpr void UnityEngine::UIElements::StyleVariableContext::__cordl_internal_set_m_SortedHash(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortedHash = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_UnsortedHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnsortedHash;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::StyleVariableContext::__cordl_internal_get_m_UnsortedHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnsortedHash;
}
constexpr void UnityEngine::UIElements::StyleVariableContext::__cordl_internal_set_m_UnsortedHash(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnsortedHash = value;
}
inline void UnityEngine::UIElements::StyleVariableContext::setStaticF_none(::UnityEngine::UIElements::StyleVariableContext* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleVariableContext*, "none", ::UnityEngine::UIElements::StyleVariableContext*>(
      std::forward<::UnityEngine::UIElements::StyleVariableContext*>(value));
}
inline ::UnityEngine::UIElements::StyleVariableContext* UnityEngine::UIElements::StyleVariableContext::getStaticF_none() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleVariableContext*, "none", ::UnityEngine::UIElements::StyleVariableContext*>();
}
inline void UnityEngine::UIElements::StyleVariableContext::Add(::UnityEngine::UIElements::StyleVariable sv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleVariable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sv);
}
inline void UnityEngine::UIElements::StyleVariableContext::AddInitialRange(::UnityEngine::UIElements::StyleVariableContext* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
                                                                                         { "AddInitialRange", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::UIElements::StyleVariableContext::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleVariableContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleVariableContext::_ctor(::UnityEngine::UIElements::StyleVariableContext* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleVariableContext::TryFindVariable(::StringW name, ::by_ref<::UnityEngine::UIElements::StyleVariable> v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
                                                           { "TryFindVariable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleVariable>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, v);
}
inline int32_t UnityEngine::UIElements::StyleVariableContext::GetVariableHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(), { "GetVariableHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleVariableContext::_Add_g__ComputeOrderSensitiveHash_7_0(
    int32_t index, ::by_ref<::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleVariableContext*>(),
          { "<Add>g__ComputeOrderSensitiveHash|7_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::StyleVariableContext* UnityEngine::UIElements::StyleVariableContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleVariableContext*>());
}
inline ::UnityEngine::UIElements::StyleVariableContext* UnityEngine::UIElements::StyleVariableContext::New_ctor(::UnityEngine::UIElements::StyleVariableContext* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleVariableContext*>(other));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleVariableContext::StyleVariableContext() {}
