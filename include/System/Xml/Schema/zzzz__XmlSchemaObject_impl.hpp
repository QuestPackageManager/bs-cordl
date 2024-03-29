#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObject.OnAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*)>(&::System::Xml::Schema::XmlSchemaObject::OnAdd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a13f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObject.OnRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*)>(&::System::Xml::Schema::XmlSchemaObject::OnRemove)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a13f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObject.OnClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObject::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(
    &::System::Xml::Schema::XmlSchemaObject::OnClear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a13f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObject::*)()>(&::System::Xml::Schema::XmlSchemaObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a123e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlSchemaObject::OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, item);
}
inline void System::Xml::Schema::XmlSchemaObject::OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, item);
}
inline void System::Xml::Schema::XmlSchemaObject::OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaObject*>());
}
inline void System::Xml::Schema::XmlSchemaObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObject::XmlSchemaObject() {}
