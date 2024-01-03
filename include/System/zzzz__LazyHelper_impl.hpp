#pragma once
#include "System/zzzz__LazyState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LazyHelper_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__LazyState_def.hpp"
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
//  Writing Method size for method: ::System::LazyHelper.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LazyState (::System::LazyHelper::*)()>(&::System::LazyHelper::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25add1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "get_State",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LazyHelper::*)(::System::LazyState)>(&::System::LazyHelper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25add24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LazyState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LazyHelper::*)(::System::Threading::LazyThreadSafetyMode, ::System::Exception*)>(
    &::System::LazyHelper::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25add4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LazyThreadSafetyMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper.ThrowException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LazyHelper::*)()>(&::System::LazyHelper::ThrowException)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25add9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "ThrowException",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LazyHelper* (*)(::System::Threading::LazyThreadSafetyMode, bool)>(&::System::LazyHelper::Create)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x25addb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LazyThreadSafetyMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LazyHelper.CreateViaDefaultConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::LazyHelper::CreateViaDefaultConstructor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x25adef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "CreateViaDefaultConstructor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::LazyState& System::LazyHelper::__get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::System::LazyState const& System::LazyHelper::__get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void System::LazyHelper::__set__State_k__BackingField(::System::LazyState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____State_k__BackingField = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::LazyHelper::__get__exceptionDispatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionDispatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const& System::LazyHelper::__get__exceptionDispatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionDispatch;
}
constexpr void System::LazyHelper::__set__exceptionDispatch(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionDispatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::LazyHelper::setStaticF_NoneViaConstructor(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "NoneViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>(
      std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_NoneViaConstructor() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "NoneViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>();
}
inline void System::LazyHelper::setStaticF_NoneViaFactory(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "NoneViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>(
      std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_NoneViaFactory() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "NoneViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>();
}
inline void System::LazyHelper::setStaticF_PublicationOnlyViaConstructor(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "PublicationOnlyViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>(
      std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_PublicationOnlyViaConstructor() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "PublicationOnlyViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>();
}
inline void System::LazyHelper::setStaticF_PublicationOnlyViaFactory(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "PublicationOnlyViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>(
      std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_PublicationOnlyViaFactory() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "PublicationOnlyViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>();
}
inline void System::LazyHelper::setStaticF_PublicationOnlyWaitForOtherThreadToPublish(::System::LazyHelper* value) {
  ::cordl_internals::setStaticField<::System::LazyHelper*, "PublicationOnlyWaitForOtherThreadToPublish", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>(
      std::forward<::System::LazyHelper*>(value));
}
inline ::System::LazyHelper* System::LazyHelper::getStaticF_PublicationOnlyWaitForOtherThreadToPublish() {
  return ::cordl_internals::getStaticField<::System::LazyHelper*, "PublicationOnlyWaitForOtherThreadToPublish", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get>();
}
inline ::System::LazyState System::LazyHelper::get_State() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "get_State", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::LazyState, false>(this, ___internal_method);
}
inline ::System::LazyHelper* System::LazyHelper::New_ctor(::System::LazyState state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::LazyHelper*>(state));
}
inline void System::LazyHelper::_ctor(::System::LazyState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LazyState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::LazyHelper* System::LazyHelper::New_ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::LazyHelper*>(mode, exception));
}
inline void System::LazyHelper::_ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LazyThreadSafetyMode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, exception);
}
inline void System::LazyHelper::ThrowException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "ThrowException",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::LazyHelper* System::LazyHelper::Create(::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LazyThreadSafetyMode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::LazyHelper*, false>(nullptr, ___internal_method, mode, useDefaultConstructor);
}
inline ::System::Object* System::LazyHelper::CreateViaDefaultConstructor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LazyHelper*>::get(), "CreateViaDefaultConstructor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::LazyHelper::LazyHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
