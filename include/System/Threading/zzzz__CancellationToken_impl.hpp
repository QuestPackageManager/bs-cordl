#pragma once
// IWYU pragma private; include "System/Threading/CancellationToken.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::CancellationToken___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationToken___c::*)()>(&::System::Threading::CancellationToken___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca7ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken___c.__cctor_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationToken___c::*)(::System::Object*)>(&::System::Threading::CancellationToken___c::__cctor_b__26_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ca7ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken___c*>(), { "<.cctor>b__26_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::CancellationToken___c::setStaticF___9(::System::Threading::CancellationToken___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::CancellationToken___c*, "<>9", ::System::Threading::CancellationToken___c*>(std::forward<::System::Threading::CancellationToken___c*>(value));
}
inline ::System::Threading::CancellationToken___c* System::Threading::CancellationToken___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::CancellationToken___c*, "<>9", ::System::Threading::CancellationToken___c*>();
}
inline void System::Threading::CancellationToken___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::CancellationToken___c::__cctor_b__26_0(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken___c*>(), { "<.cctor>b__26_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Threading::CancellationToken___c* System::Threading::CancellationToken___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::CancellationToken___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationToken___c::CancellationToken___c() {}
//  Writing Method size for method: ::System::Threading::CancellationToken.get_None
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)()>(&::System::Threading::CancellationToken::get_None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca710c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "get_None", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.get_IsCancellationRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationToken::*)()>(&::System::Threading::CancellationToken::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ca7114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "get_IsCancellationRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.get_CanBeCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationToken::*)()>(&::System::Threading::CancellationToken::get_CanBeCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca714c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "get_CanBeCanceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationToken::*)(::System::Threading::CancellationTokenSource*)>(
    &::System::Threading::CancellationToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca715c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::CancellationTokenSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationToken::*)(bool)>(&::System::Threading::CancellationToken::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ca7164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (::System::Threading::CancellationToken::*)(::System::Action*)>(
    &::System::Threading::CancellationToken::Register)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ca7208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "Register", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (::System::Threading::CancellationToken::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::System::Threading::CancellationToken::Register)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca743c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                                             { "Register", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.InternalRegisterWithoutEC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (::System::Threading::CancellationToken::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::System::Threading::CancellationToken::InternalRegisterWithoutEC)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca74dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                                             { "InternalRegisterWithoutEC", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (::System::Threading::CancellationToken::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, bool, bool)>(&::System::Threading::CancellationToken::Register)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ca7304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                            { "Register", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationToken::*)(::System::Threading::CancellationToken)>(&::System::Threading::CancellationToken::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca78dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "Equals", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationToken::*)(::System::Object*)>(&::System::Threading::CancellationToken::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ca78ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { ::i2c::class_of<::System::Threading::CancellationToken>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::CancellationToken::*)()>(&::System::Threading::CancellationToken::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ca799c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { ::i2c::class_of<::System::Threading::CancellationToken>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(
    &::System::Threading::CancellationToken::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca7a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(
    &::System::Threading::CancellationToken::op_Inequality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca7a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.ThrowIfCancellationRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationToken::*)()>(&::System::Threading::CancellationToken::ThrowIfCancellationRequested)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ca7ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "ThrowIfCancellationRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationToken.ThrowOperationCanceledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationToken::*)()>(&::System::Threading::CancellationToken::ThrowOperationCanceledException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ca7b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "ThrowOperationCanceledException", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::CancellationToken::setStaticF_s_actionToActionObjShunt(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_actionToActionObjShunt", ::System::Threading::CancellationToken>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::CancellationToken::getStaticF_s_actionToActionObjShunt() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_actionToActionObjShunt", ::System::Threading::CancellationToken>();
}
inline ::System::Threading::CancellationToken System::Threading::CancellationToken::get_None() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "get_None", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method);
}
inline bool System::Threading::CancellationToken::get_IsCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "get_IsCancellationRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Threading::CancellationToken::get_CanBeCanceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "get_CanBeCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Threading::CancellationToken::_ctor(::System::Threading::CancellationTokenSource* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::CancellationTokenSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source);
}
inline void System::Threading::CancellationToken::_ctor(bool canceled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, canceled);
}
inline ::System::Threading::CancellationTokenRegistration System::Threading::CancellationToken::Register(::System::Action* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "Register", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(*this, ___internal_method, callback);
}
inline ::System::Threading::CancellationTokenRegistration System::Threading::CancellationToken::Register(::System::Action_1<::System::Object*>* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                                           { "Register", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(*this, ___internal_method, callback, state);
}
inline ::System::Threading::CancellationTokenRegistration System::Threading::CancellationToken::InternalRegisterWithoutEC(::System::Action_1<::System::Object*>* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                                           { "InternalRegisterWithoutEC", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(*this, ___internal_method, callback, state);
}
inline ::System::Threading::CancellationTokenRegistration System::Threading::CancellationToken::Register(::System::Action_1<::System::Object*>* callback, ::System::Object* state,
                                                                                                         bool useSynchronizationContext, bool useExecutionContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                          { "Register", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(*this, ___internal_method, callback, state, useSynchronizationContext, useExecutionContext);
}
inline bool System::Threading::CancellationToken::Equals(::System::Threading::CancellationToken other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "Equals", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::Threading::CancellationToken::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::CancellationToken>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Threading::CancellationToken::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::CancellationToken>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Threading::CancellationToken::op_Equality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Threading::CancellationToken::op_Inequality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline void System::Threading::CancellationToken::ThrowIfCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "ThrowIfCancellationRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Threading::CancellationToken::ThrowOperationCanceledException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationToken>(), { "ThrowOperationCanceledException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::CancellationToken::CancellationToken(::System::Threading::CancellationTokenSource* _source) noexcept {
  this->_source = _source;
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationToken::CancellationToken() {}
