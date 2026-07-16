#pragma once
// IWYU pragma private; include "System/LazyHelper.hpp"
#include "System/zzzz__LazyState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LazyHelper_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__LazyState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::LazyHelper.get_State
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LazyState (::System::LazyHelper::*)()>(&::System::LazyHelper::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c46b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "get_State", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LazyHelper::*)(::System::LazyState)>(&::System::LazyHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c46b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::LazyState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LazyHelper::*)(::System::Threading::LazyThreadSafetyMode, ::System::Exception*)>(&::System::LazyHelper::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c46b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::LazyThreadSafetyMode>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper.ThrowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LazyHelper::*)()>(&::System::LazyHelper::ThrowException)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c46b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "ThrowException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LazyHelper* (*)(::System::Threading::LazyThreadSafetyMode, bool)>(&::System::LazyHelper::Create)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c46b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "Create", {}, { ::i2c::type_of<::System::Threading::LazyThreadSafetyMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper.CreateViaDefaultConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::LazyHelper::CreateViaDefaultConstructor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c46ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "CreateViaDefaultConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::LazyState& System::LazyHelper::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::System::LazyState const& System::LazyHelper::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void System::LazyHelper::__cordl_internal_set__State_k__BackingField(::System::LazyState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____State_k__BackingField = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::LazyHelper::__cordl_internal_get__exceptionDispatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionDispatch;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::LazyHelper::__cordl_internal_get__exceptionDispatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionDispatch;
}
constexpr void System::LazyHelper::__cordl_internal_set__exceptionDispatch(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exceptionDispatch = value;
}
inline void System::LazyHelper::setStaticF_NoneViaConstructor(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "NoneViaConstructor", ::System::LazyHelper*>(std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_NoneViaConstructor() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "NoneViaConstructor", ::System::LazyHelper*>();
}
inline void System::LazyHelper::setStaticF_NoneViaFactory(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "NoneViaFactory", ::System::LazyHelper*>(std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_NoneViaFactory() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "NoneViaFactory", ::System::LazyHelper*>();
}
inline void System::LazyHelper::setStaticF_PublicationOnlyViaConstructor(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "PublicationOnlyViaConstructor", ::System::LazyHelper*>(std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_PublicationOnlyViaConstructor() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "PublicationOnlyViaConstructor", ::System::LazyHelper*>();
}
inline void System::LazyHelper::setStaticF_PublicationOnlyViaFactory(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "PublicationOnlyViaFactory", ::System::LazyHelper*>(std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_PublicationOnlyViaFactory() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "PublicationOnlyViaFactory", ::System::LazyHelper*>();
}
inline void System::LazyHelper::setStaticF_PublicationOnlyWaitForOtherThreadToPublish(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "PublicationOnlyWaitForOtherThreadToPublish", ::System::LazyHelper*>(std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_PublicationOnlyWaitForOtherThreadToPublish() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "PublicationOnlyWaitForOtherThreadToPublish", ::System::LazyHelper*>();
}
inline ::System::LazyState System::LazyHelper::get_State() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "get_State", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LazyState>(this, ___internal_method);
}
inline void System::LazyHelper::_ctor(::System::LazyState state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::LazyState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::LazyHelper::_ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::LazyThreadSafetyMode>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, exception);
}
inline void System::LazyHelper::ThrowException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "ThrowException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::LazyHelper* System::LazyHelper::Create(::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "Create", {}, { ::i2c::type_of<::System::Threading::LazyThreadSafetyMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::LazyHelper*>(nullptr, ___internal_method, mode, useDefaultConstructor);
}
inline ::System::Object* System::LazyHelper::CreateViaDefaultConstructor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LazyHelper*>(), { "CreateViaDefaultConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::LazyHelper* System::LazyHelper::New_ctor(::System::LazyState state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LazyHelper*>(state));
}
inline ::System::LazyHelper* System::LazyHelper::New_ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LazyHelper*>(mode, exception));
}
// Ctor Parameters []
constexpr ::System::LazyHelper::LazyHelper() {}
