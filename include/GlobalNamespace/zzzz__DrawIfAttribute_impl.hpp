#pragma once
// IWYU pragma private; include "GlobalNamespace/DrawIfAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType::DrawIfAttribute_DisablingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType::DrawIfAttribute_DisablingType() {}
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType GlobalNamespace::DrawIfAttribute_DisablingType::ReadOnly{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType GlobalNamespace::DrawIfAttribute_DisablingType::DontDraw{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(::StringW, ::System::Object*, ::GlobalNamespace::DrawIfAttribute_DisablingType)>(
    &::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3309960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DrawIfAttribute*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::DrawIfAttribute_DisablingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(::StringW, ::System::Object*, ::System::Object*, ::GlobalNamespace::DrawIfAttribute_DisablingType)>(
    &::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3309970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DrawIfAttribute*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::DrawIfAttribute_DisablingType>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyName = value;
}
constexpr ::System::Object*& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Object* const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::System::Object*& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_orValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orValue;
}
constexpr ::System::Object* const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_orValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orValue;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_orValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___orValue = value;
}
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_disablingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disablingType;
}
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_disablingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disablingType;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_disablingType(::GlobalNamespace::DrawIfAttribute_DisablingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disablingType = value;
}
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DrawIfAttribute*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::DrawIfAttribute_DisablingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, value, disablingType);
}
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DrawIfAttribute*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::DrawIfAttribute_DisablingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, value, orValue, disablingType);
}
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, disablingType));
}
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue,
                                                                                      ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, orValue, disablingType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawIfAttribute::DrawIfAttribute() {}
