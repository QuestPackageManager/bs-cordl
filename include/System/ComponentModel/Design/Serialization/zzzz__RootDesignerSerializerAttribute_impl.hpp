#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/Serialization/RootDesignerSerializerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/Design/Serialization/zzzz__RootDesignerSerializerAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)(::StringW, ::StringW, bool)>(
    &::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63e7454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute.get_SerializerBaseTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(
    &::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e7460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(), { "get_SerializerBaseTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute.get_TypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(
    &::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63e7468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__typeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
constexpr ::StringW const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__typeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__typeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeId = value;
}
constexpr bool& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__Reloadable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reloadable_k__BackingField;
}
constexpr bool const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__Reloadable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reloadable_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__Reloadable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Reloadable_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerTypeName_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__SerializerTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SerializerTypeName_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerBaseTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerBaseTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerBaseTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerBaseTypeName_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__SerializerBaseTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SerializerBaseTypeName_k__BackingField = value;
}
inline void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerTypeName, baseSerializerTypeName, reloadable);
}
inline ::StringW System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(), { "get_SerializerBaseTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*
System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::New_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(serializerTypeName, baseSerializerTypeName, reloadable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::RootDesignerSerializerAttribute() {}
