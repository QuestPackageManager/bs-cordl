#pragma once
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapMethodAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.get_UseAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5d6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.get_XmlNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.SetReflectionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x24a5d7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseElement;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseElement;
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__responseElement(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseNamespace;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseNamespace;
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__responseNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__returnElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnElement;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__returnElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnElement;
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__returnElement(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__soapAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soapAction;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__soapAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soapAction;
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__soapAction(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soapAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__useAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAttribute;
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__useAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAttribute;
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__useAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAttribute = value;
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__namespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespace;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__namespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespace;
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__namespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____namespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Metadata::SoapMethodAttribute* System::Runtime::Remoting::Metadata::SoapMethodAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>());
}
inline void System::Runtime::Remoting::Metadata::SoapMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject(::System::Object* reflectionObject) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reflectionObject);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::SoapMethodAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
