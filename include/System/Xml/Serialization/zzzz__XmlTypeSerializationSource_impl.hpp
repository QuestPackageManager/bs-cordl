#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeSerializationSource.hpp"
#include "System/Xml/Serialization/zzzz__SerializationSource_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeSerializationSource_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeSerializationSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeSerializationSource::*)(
    ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::StringW, ::ArrayW<::System::Type*>)>(
    &::System::Xml::Serialization::XmlTypeSerializationSource::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x62ec6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                             ::i2c::type_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeSerializationSource.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeSerializationSource::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlTypeSerializationSource::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62eccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeSerializationSource.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlTypeSerializationSource::*)()>(
    &::System::Xml::Serialization::XmlTypeSerializationSource::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62ecd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(), 2 }));
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
  this->___attributeOverridesHash = value;
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
  this->___type = value;
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
  this->___rootHash = value;
}
inline void System::Xml::Serialization::XmlTypeSerializationSource::_ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                          ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace,
                                                                          ::ArrayW<::System::Type*> includedTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(),
                                           ::i2c::type_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, root, attributeOverrides, namspace, includedTypes);
}
inline bool System::Xml::Serialization::XmlTypeSerializationSource::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::Xml::Serialization::XmlTypeSerializationSource::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlTypeSerializationSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeSerializationSource*
System::Xml::Serialization::XmlTypeSerializationSource::New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                 ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW namspace, ::ArrayW<::System::Type*> includedTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeSerializationSource*>(type, root, attributeOverrides, namspace, includedTypes));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeSerializationSource::XmlTypeSerializationSource() {}
