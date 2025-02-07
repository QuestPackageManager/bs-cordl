#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeSerializationSource.hpp"
#include "System/Xml/Serialization/zzzz__SerializationSource_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeSerializationSource_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeSerializationSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeSerializationSource::*)(
    ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Xml::Serialization::XmlTypeSerializationSource::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x436d18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeSerializationSource.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlTypeSerializationSource::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlTypeSerializationSource::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x436d290;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeSerializationSource.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlTypeSerializationSource::*)()>(
    &::System::Xml::Serialization::XmlTypeSerializationSource::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x436d370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_get_attributeOverridesHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeOverridesHash;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_get_attributeOverridesHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeOverridesHash;
}
constexpr void System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_set_attributeOverridesHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeOverridesHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_get_rootHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootHash;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_get_rootHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootHash;
}
constexpr void System::Xml::Serialization::XmlTypeSerializationSource::__cordl_internal_set_rootHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rootHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Serialization::XmlTypeSerializationSource::_ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                          ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace,
                                                                          ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, root, attributeOverrides, namspace, includedTypes);
}
inline bool System::Xml::Serialization::XmlTypeSerializationSource::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline int32_t System::Xml::Serialization::XmlTypeSerializationSource::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeSerializationSource*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeSerializationSource*
System::Xml::Serialization::XmlTypeSerializationSource::New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                 ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace,
                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeSerializationSource*>(type, root, attributeOverrides, namspace, includedTypes));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeSerializationSource::XmlTypeSerializationSource() {}
