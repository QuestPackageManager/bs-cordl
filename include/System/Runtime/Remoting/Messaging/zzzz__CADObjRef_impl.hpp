#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADObjRef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADObjRef::*)(::System::Runtime::Remoting::ObjRef*, int32_t)>(
    &::System::Runtime::Remoting::Messaging::CADObjRef::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x259a94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADObjRef*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::ObjRef*& System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_get_objref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objref;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ObjRef*> const& System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_get_objref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objref;
}
constexpr void System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_set_objref(::System::Runtime::Remoting::ObjRef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_get_SourceDomain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SourceDomain;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_get_SourceDomain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SourceDomain;
}
constexpr void System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_set_SourceDomain(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SourceDomain = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_get_TypeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeInfo;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_get_TypeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeInfo;
}
constexpr void System::Runtime::Remoting::Messaging::CADObjRef::__cordl_internal_set_TypeInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::CADObjRef* System::Runtime::Remoting::Messaging::CADObjRef::New_ctor(::System::Runtime::Remoting::ObjRef* o, int32_t sourceDomain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::CADObjRef*>(o, sourceDomain));
}
inline void System::Runtime::Remoting::Messaging::CADObjRef::_ctor(::System::Runtime::Remoting::ObjRef* o, int32_t sourceDomain) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADObjRef*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, sourceDomain);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADObjRef::CADObjRef() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
