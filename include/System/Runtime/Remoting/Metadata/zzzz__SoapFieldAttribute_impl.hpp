#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Metadata/SoapFieldAttribute.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapFieldAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce57ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute.get_XmlElementName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce57f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(), "get_XmlElementName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute.IsInteropXmlElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce57fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(), "IsInteropXmlElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapFieldAttribute.SetReflectionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3ce5804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementName;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementName;
}
constexpr void System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_set__elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__isElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isElement;
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_get__isElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isElement;
}
constexpr void System::Runtime::Remoting::Metadata::SoapFieldAttribute::__cordl_internal_set__isElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isElement = value;
}
inline void System::Runtime::Remoting::Metadata::SoapFieldAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(),
                                                                             "get_XmlElementName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(),
                                                                             "IsInteropXmlElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject(::System::Object* reflectionObject) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reflectionObject);
}
inline ::System::Runtime::Remoting::Metadata::SoapFieldAttribute* System::Runtime::Remoting::Metadata::SoapFieldAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Metadata::SoapFieldAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapFieldAttribute::SoapFieldAttribute() {}
