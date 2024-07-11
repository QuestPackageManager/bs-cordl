#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberFlatList.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberFlatList_def.hpp"
#include "System/Xml/Serialization/zzzz__ListMap_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberFlatList.get_ListMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::ListMap* (::System::Xml::Serialization::XmlTypeMapMemberFlatList::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberFlatList::get_ListMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f1c924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>::get(),
                                                                               "get_ListMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberFlatList.set_ListMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberFlatList::*)(::System::Xml::Serialization::ListMap*)>(
    &::System::Xml::Serialization::XmlTypeMapMemberFlatList::set_ListMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f1c92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>::get(), "set_ListMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ListMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberFlatList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberFlatList::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberFlatList::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f1c934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::ListMap*& System::Xml::Serialization::XmlTypeMapMemberFlatList::__cordl_internal_get__listMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::ListMap*> const& System::Xml::Serialization::XmlTypeMapMemberFlatList::__cordl_internal_get__listMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listMap;
}
constexpr void System::Xml::Serialization::XmlTypeMapMemberFlatList::__cordl_internal_set__listMap(::System::Xml::Serialization::ListMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::ListMap* System::Xml::Serialization::XmlTypeMapMemberFlatList::get_ListMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>::get(),
                                                                             "get_ListMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::ListMap*, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMemberFlatList::set_ListMap(::System::Xml::Serialization::ListMap* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>::get(), "set_ListMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ListMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberFlatList* System::Xml::Serialization::XmlTypeMapMemberFlatList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>());
}
inline void System::Xml::Serialization::XmlTypeMapMemberFlatList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberFlatList::XmlTypeMapMemberFlatList() {}
