#pragma once
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c8c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaObjectCollection::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::XmlSchemaObjectCollection::Add)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28c7bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectCollection.OnInsert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectCollection::*)(int32_t, ::System::Object*)>(
    &::System::Xml::Schema::XmlSchemaObjectCollection::OnInsert)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c8c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectCollection.OnSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectCollection::*)(int32_t, ::System::Object*, ::System::Object*)>(
    &::System::Xml::Schema::XmlSchemaObjectCollection::OnSet)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28c8c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectCollection.OnClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectCollection::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectCollection::OnClear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c8ca8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectCollection.OnRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectCollection::*)(int32_t, ::System::Object*)>(
    &::System::Xml::Schema::XmlSchemaObjectCollection::OnRemove)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28c8cc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 23));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaObject*& System::Xml::Schema::XmlSchemaObjectCollection::__get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& System::Xml::Schema::XmlSchemaObjectCollection::__get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void System::Xml::Schema::XmlSchemaObjectCollection::__set_parent(::System::Xml::Schema::XmlSchemaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaObjectCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaObjectCollection*>());
}
inline void System::Xml::Schema::XmlSchemaObjectCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XmlSchemaObjectCollection::Add(::System::Xml::Schema::XmlSchemaObject* item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
inline void System::Xml::Schema::XmlSchemaObjectCollection::OnInsert(int32_t index, ::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
inline void System::Xml::Schema::XmlSchemaObjectCollection::OnSet(int32_t index, ::System::Object* oldValue, ::System::Object* newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, oldValue, newValue);
}
inline void System::Xml::Schema::XmlSchemaObjectCollection::OnClear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectCollection::OnRemove(int32_t index, ::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection::XmlSchemaObjectCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
