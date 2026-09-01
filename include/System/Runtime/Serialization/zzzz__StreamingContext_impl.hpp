#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\StreamingContext.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContextStates_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContextStates_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::StreamingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::StreamingContext::*)(::System::Runtime::Serialization::StreamingContextStates)>(
    &::System::Runtime::Serialization::StreamingContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b56464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContextStates>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StreamingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::StreamingContext::*)(::System::Runtime::Serialization::StreamingContextStates, ::System::Object*)>(
    &::System::Runtime::Serialization::StreamingContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b56470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContextStates>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StreamingContext.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::StreamingContext::*)()>(&::System::Runtime::Serialization::StreamingContext::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), { "get_Context", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StreamingContext.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::StreamingContext::*)(::System::Object*)>(&::System::Runtime::Serialization::StreamingContext::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b56484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), { ::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StreamingContext.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::StreamingContext::*)()>(&::System::Runtime::Serialization::StreamingContext::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b56514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), { ::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::StreamingContext.get_State
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContextStates (::System::Runtime::Serialization::StreamingContext::*)()>(
    &::System::Runtime::Serialization::StreamingContext::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), { "get_State", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::StreamingContext::_ctor(::System::Runtime::Serialization::StreamingContextStates state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContextStates>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
inline void System::Runtime::Serialization::StreamingContext::_ctor(::System::Runtime::Serialization::StreamingContextStates state, ::System::Object* additional) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContextStates>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, additional);
}
inline ::System::Object* System::Runtime::Serialization::StreamingContext::get_Context() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), { "get_Context", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline bool System::Runtime::Serialization::StreamingContext::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Runtime::Serialization::StreamingContext::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Runtime::Serialization::StreamingContextStates System::Runtime::Serialization::StreamingContext::get_State() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::StreamingContext>(), { "get_State", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContextStates>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_additionalContext", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_state", ty:
// "::System::Runtime::Serialization::StreamingContextStates", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::StreamingContext::StreamingContext(::System::Object* m_additionalContext, ::System::Runtime::Serialization::StreamingContextStates m_state) noexcept {
  this->m_additionalContext = m_additionalContext;
  this->m_state = m_state;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::StreamingContext::StreamingContext() {}
