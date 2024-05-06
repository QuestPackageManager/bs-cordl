#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x282a65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(
    ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::_ctor)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x282a6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x282aa68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetArguments",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x282aba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetArgs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetReturnValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x282abb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetReturnValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x282abc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.get_PropertiesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282ac6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "get_PropertiesCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__returnValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__returnValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValue;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_set__returnValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADArgHolder*> const&
System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_set__exception(::System::Runtime::Remoting::Messaging::CADArgHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sig;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_get__sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sig;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__cordl_internal_set__sig(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, false>(nullptr, ___internal_method, callMsg);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*
System::Runtime::Remoting::Messaging::CADMethodReturnMessage::New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(retMsg));
}
inline void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, retMsg);
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetArguments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetArgs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, args);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetReturnValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, args);
}
inline ::System::Exception* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, args);
}
inline int32_t System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(), "get_PropertiesCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::CADMethodReturnMessage() {}
