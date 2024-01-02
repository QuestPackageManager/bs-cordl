#pragma once
#include "System/Xml/zzzz__XmlNodeList_impl.hpp"
#include "System/Xml/zzzz__XmlChildNodes_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlChildNodes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlChildNodes::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlChildNodes::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2883ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlChildNodes::*)()>(&::System::Xml::XmlChildNodes::get_Count)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2883f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlChildNodes::*)()>(
    &::System::Xml::XmlChildNodes::GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2883f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNode*& System::Xml::XmlChildNodes::__get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& System::Xml::XmlChildNodes::__get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void System::Xml::XmlChildNodes::__set_container(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlChildNodes* System::Xml::XmlChildNodes::New_ctor(::System::Xml::XmlNode* container) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlChildNodes*>(container));
}
inline void System::Xml::XmlChildNodes::_ctor(::System::Xml::XmlNode* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline int32_t System::Xml::XmlChildNodes::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlChildNodes::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlChildNodes*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlChildNodes::XmlChildNodes() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
