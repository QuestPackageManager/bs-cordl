#pragma once
// IWYU pragma private; include "System/ComponentModel/ExtenderProvidedPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ExtenderProvidedPropertyAttribute_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::ExtenderProvidedPropertyAttribute* (*)(::System::ComponentModel::PropertyDescriptor*, ::System::Type*, ::System::ComponentModel::IExtenderProvider*)>(
        &::System::ComponentModel::ExtenderProvidedPropertyAttribute::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63bc408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
            { "Create", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(&::System::ComponentModel::ExtenderProvidedPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63bc858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.get_ExtenderProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::get_ExtenderProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "get_ExtenderProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.set_ExtenderProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::set_ExtenderProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                           { "set_ExtenderProperty", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.get_Provider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IExtenderProvider* (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::get_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "get_Provider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.set_Provider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)(::System::ComponentModel::IExtenderProvider*)>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::set_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                           { "set_Provider", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.get_ReceiverType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::get_ReceiverType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "get_ReceiverType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.set_ReceiverType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)(::System::Type*)>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::set_ReceiverType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "set_ReceiverType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x63bc88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtenderProvidedPropertyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(
    &::System::ComponentModel::ExtenderProvidedPropertyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63bc970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::PropertyDescriptor*& System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_get__ExtenderProperty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtenderProperty_k__BackingField;
}
constexpr ::System::ComponentModel::PropertyDescriptor* const& System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_get__ExtenderProperty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtenderProperty_k__BackingField;
}
constexpr void System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_set__ExtenderProperty_k__BackingField(::System::ComponentModel::PropertyDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExtenderProperty_k__BackingField = value;
}
constexpr ::System::ComponentModel::IExtenderProvider*& System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_get__Provider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Provider_k__BackingField;
}
constexpr ::System::ComponentModel::IExtenderProvider* const& System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_get__Provider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Provider_k__BackingField;
}
constexpr void System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_set__Provider_k__BackingField(::System::ComponentModel::IExtenderProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Provider_k__BackingField = value;
}
constexpr ::System::Type*& System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_get__ReceiverType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReceiverType_k__BackingField;
}
constexpr ::System::Type* const& System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_get__ReceiverType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReceiverType_k__BackingField;
}
constexpr void System::ComponentModel::ExtenderProvidedPropertyAttribute::__cordl_internal_set__ReceiverType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReceiverType_k__BackingField = value;
}
inline ::System::ComponentModel::ExtenderProvidedPropertyAttribute* System::ComponentModel::ExtenderProvidedPropertyAttribute::Create(::System::ComponentModel::PropertyDescriptor* extenderProperty,
                                                                                                                                      ::System::Type* receiverType,
                                                                                                                                      ::System::ComponentModel::IExtenderProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
          { "Create", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(nullptr, ___internal_method, extenderProperty, receiverType, provider);
}
inline void System::ComponentModel::ExtenderProvidedPropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ExtenderProvidedPropertyAttribute::get_ExtenderProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "get_ExtenderProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline void System::ComponentModel::ExtenderProvidedPropertyAttribute::set_ExtenderProperty(::System::ComponentModel::PropertyDescriptor* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                         { "set_ExtenderProperty", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::IExtenderProvider* System::ComponentModel::ExtenderProvidedPropertyAttribute::get_Provider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "get_Provider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IExtenderProvider*>(this, ___internal_method);
}
inline void System::ComponentModel::ExtenderProvidedPropertyAttribute::set_Provider(::System::ComponentModel::IExtenderProvider* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(),
                                                                                         { "set_Provider", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::ComponentModel::ExtenderProvidedPropertyAttribute::get_ReceiverType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "get_ReceiverType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::ComponentModel::ExtenderProvidedPropertyAttribute::set_ReceiverType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), { "set_ReceiverType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::ExtenderProvidedPropertyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ExtenderProvidedPropertyAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ExtenderProvidedPropertyAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::ExtenderProvidedPropertyAttribute* System::ComponentModel::ExtenderProvidedPropertyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ExtenderProvidedPropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ExtenderProvidedPropertyAttribute::ExtenderProvidedPropertyAttribute() {}
