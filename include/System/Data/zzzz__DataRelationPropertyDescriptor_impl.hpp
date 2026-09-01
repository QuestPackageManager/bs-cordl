#pragma once
// IWYU pragma private; include "System\Data\DataRelationPropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_impl.hpp"
#include "System/Data/zzzz__DataRelationPropertyDescriptor_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationPropertyDescriptor::*)(::System::Data::DataRelation*)>(
    &::System::Data::DataRelationPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x602a398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.get_Relation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::System::Data::DataRelationPropertyDescriptor::*)()>(
    &::System::Data::DataRelationPropertyDescriptor::get_Relation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { "get_Relation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.get_ComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataRelationPropertyDescriptor::*)()>(&::System::Data::DataRelationPropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602a3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRelationPropertyDescriptor::*)()>(&::System::Data::DataRelationPropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataRelationPropertyDescriptor::*)()>(&::System::Data::DataRelationPropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602a454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRelationPropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataRelationPropertyDescriptor::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x602a4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRelationPropertyDescriptor::*)()>(&::System::Data::DataRelationPropertyDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602a530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.CanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRelationPropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataRelationPropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataRelationPropertyDescriptor::*)(::System::Object*)>(
    &::System::Data::DataRelationPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x602a554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.ResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationPropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataRelationPropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRelationPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::Data::DataRelationPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRelationPropertyDescriptor.ShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRelationPropertyDescriptor::*)(::System::Object*)>(
    &::System::Data::DataRelationPropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataRelation*& System::Data::DataRelationPropertyDescriptor::__cordl_internal_get__Relation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Relation_k__BackingField;
}
constexpr ::System::Data::DataRelation* const& System::Data::DataRelationPropertyDescriptor::__cordl_internal_get__Relation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Relation_k__BackingField;
}
constexpr void System::Data::DataRelationPropertyDescriptor::__cordl_internal_set__Relation_k__BackingField(::System::Data::DataRelation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Relation_k__BackingField = value;
}
inline void System::Data::DataRelationPropertyDescriptor::_ctor(::System::Data::DataRelation* dataRelation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataRelation);
}
inline ::System::Data::DataRelation* System::Data::DataRelationPropertyDescriptor::get_Relation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), { "get_Relation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataRelationPropertyDescriptor::get_ComponentType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Data::DataRelationPropertyDescriptor::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataRelationPropertyDescriptor::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Data::DataRelationPropertyDescriptor::Equals(::System::Object* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::Data::DataRelationPropertyDescriptor::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Data::DataRelationPropertyDescriptor::CanResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Object* System::Data::DataRelationPropertyDescriptor::GetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void System::Data::DataRelationPropertyDescriptor::ResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::Data::DataRelationPropertyDescriptor::SetValue(::System::Object* component, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::Data::DataRelationPropertyDescriptor::ShouldSerializeValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRelationPropertyDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Data::DataRelationPropertyDescriptor* System::Data::DataRelationPropertyDescriptor::New_ctor(::System::Data::DataRelation* dataRelation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRelationPropertyDescriptor*>(dataRelation));
}
// Ctor Parameters []
constexpr ::System::Data::DataRelationPropertyDescriptor::DataRelationPropertyDescriptor() {}
