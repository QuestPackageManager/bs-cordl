#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfoType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ArgInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ArgInfo::*)(
    ::System::Reflection::MethodBase*, ::System::Runtime::Remoting::Messaging::ArgInfoType)>(&::System::Runtime::Remoting::Messaging::ArgInfo::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x24a7594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ArgInfoType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ArgInfo.GetInOutArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Runtime::Remoting::Messaging::ArgInfo::*)(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24a7748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo*>::get(), "GetInOutArgs", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Remoting::Messaging::ArgInfo::__get__paramMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Remoting::Messaging::ArgInfo::__get__paramMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramMap;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfo::__set__paramMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Remoting::Messaging::ArgInfo::__get__inoutArgCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inoutArgCount;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::ArgInfo::__get__inoutArgCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inoutArgCount;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfo::__set__inoutArgCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inoutArgCount = value;
}
constexpr ::System::Reflection::MethodBase*& System::Runtime::Remoting::Messaging::ArgInfo::__get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& System::Runtime::Remoting::Messaging::ArgInfo::__get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfo::__set__method(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::ArgInfo* System::Runtime::Remoting::Messaging::ArgInfo::New_ctor(::System::Reflection::MethodBase* method,
                                                                                                                ::System::Runtime::Remoting::Messaging::ArgInfoType type) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::ArgInfo*>(method, type));
}
inline void System::Runtime::Remoting::Messaging::ArgInfo::_ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ArgInfoType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, type);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo*>::get(), "GetInOutArgs", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, args);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ArgInfo::ArgInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
