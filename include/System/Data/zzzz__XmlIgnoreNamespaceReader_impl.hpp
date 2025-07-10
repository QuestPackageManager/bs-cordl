#pragma once
// IWYU pragma private; include "System/Data/XmlIgnoreNamespaceReader.hpp"
#include "System/Xml/zzzz__XmlNodeReader_impl.hpp"
#include "System/Data/zzzz__XmlIgnoreNamespaceReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: ::System::Data::XmlIgnoreNamespaceReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::XmlIgnoreNamespaceReader::*)(::System::Xml::XmlDocument*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Data::XmlIgnoreNamespaceReader::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x41a22a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlIgnoreNamespaceReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlIgnoreNamespaceReader::*)()>(
    &::System::Data::XmlIgnoreNamespaceReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x41a2340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlIgnoreNamespaceReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XmlIgnoreNamespaceReader::*)()>(
    &::System::Data::XmlIgnoreNamespaceReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x41a2450;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(), 28));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Data::XmlIgnoreNamespaceReader::__cordl_internal_get__namespacesToIgnore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespacesToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Data::XmlIgnoreNamespaceReader::__cordl_internal_get__namespacesToIgnore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespacesToIgnore;
}
constexpr void System::Data::XmlIgnoreNamespaceReader::__cordl_internal_set__namespacesToIgnore(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____namespacesToIgnore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XmlIgnoreNamespaceReader::_ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW, ::Array<::StringW>*> namespacesToIgnore) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xdoc, namespacesToIgnore);
}
inline bool System::Data::XmlIgnoreNamespaceReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::XmlIgnoreNamespaceReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlIgnoreNamespaceReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Data::XmlIgnoreNamespaceReader* System::Data::XmlIgnoreNamespaceReader::New_ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW, ::Array<::StringW>*> namespacesToIgnore) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlIgnoreNamespaceReader*>(xdoc, namespacesToIgnore));
}
// Ctor Parameters []
constexpr ::System::Data::XmlIgnoreNamespaceReader::XmlIgnoreNamespaceReader() {}
