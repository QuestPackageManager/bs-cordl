#pragma once
// IWYU pragma private; include "System\ComponentModel\ReflectEventDescriptor.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectEventDescriptor_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Type*, ::System::Reflection::EventInfo*)>(
    &::System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x63c7a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::EventInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Collections::IList*)>(
    &::System::ComponentModel::ReflectEventDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63c7b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillEventInfoAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::EventInfo*, ::System::Collections::IList*)>(
    &::System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x63c7fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                                                { "FillEventInfoAttribute", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillMethods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)()>(&::System::ComponentModel::ReflectEventDescriptor::FillMethods)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x63c7bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), { "FillMethods", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillSingleMethodAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::MethodInfo*, ::System::Collections::IList*)>(
    &::System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x63c82ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                                                { "FillSingleMethodAttribute", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::System::Type*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__componentClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentClass;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__componentClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentClass;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__componentClass(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____componentClass = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__addMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__addMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addMethod;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__addMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addMethod = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__removeMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__removeMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeMethod;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__removeMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____removeMethod = value;
}
constexpr ::System::Reflection::EventInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__realEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____realEvent;
}
constexpr ::System::Reflection::EventInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__realEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____realEvent;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__realEvent(::System::Reflection::EventInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____realEvent = value;
}
constexpr bool& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__filledMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filledMethods;
}
constexpr bool const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__filledMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filledMethods;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__filledMethods(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filledMethods = value;
}
inline void System::ComponentModel::ReflectEventDescriptor::_ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::EventInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentClass, eventInfo);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillAttributes(::System::Collections::IList* attributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute(::System::Reflection::EventInfo* realEventInfo, ::System::Collections::IList* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                                                           { "FillEventInfoAttribute", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, realEventInfo, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillMethods() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), { "FillMethods", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute(::System::Reflection::MethodInfo* realMethodInfo, ::System::Collections::IList* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                                              { "FillSingleMethodAttribute", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, realMethodInfo, attributes);
}
inline ::System::ComponentModel::ReflectEventDescriptor* System::ComponentModel::ReflectEventDescriptor::New_ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectEventDescriptor*>(componentClass, eventInfo));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReflectEventDescriptor::ReflectEventDescriptor() {}
