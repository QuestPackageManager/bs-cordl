#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowedIfAttribute.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowedAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowedIfAttribute_def.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowedContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullAllowedIfAttribute::*)(::StringW, ::System::Object*, ::GlobalNamespace::NullAllowedContext)>(
    &::GlobalNamespace::NullAllowedIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33099b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIfAttribute*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullAllowedIfAttribute::*)(::StringW, ::GlobalNamespace::ComparisonOperation, ::System::Object*,
                                                                                                           ::GlobalNamespace::NullAllowedContext)>(&::GlobalNamespace::NullAllowedIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33099cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIfAttribute*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ComparisonOperation>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIfAttribute.IsNullAllowedForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NullAllowedIfAttribute::*)(::System::Object*, ::GlobalNamespace::NullAllowedContext)>(
    &::GlobalNamespace::NullAllowedIfAttribute::IsNullAllowedForValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x33099e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIfAttribute*>(),
                                                             { "IsNullAllowedForValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyName = value;
}
constexpr ::System::Object*& GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_get__valueToCompare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToCompare;
}
constexpr ::System::Object* const& GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_get__valueToCompare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToCompare;
}
constexpr void GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_set__valueToCompare(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueToCompare = value;
}
constexpr ::GlobalNamespace::ComparisonOperation& GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_get__comparisonOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparisonOperation;
}
constexpr ::GlobalNamespace::ComparisonOperation const& GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_get__comparisonOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparisonOperation;
}
constexpr void GlobalNamespace::NullAllowedIfAttribute::__cordl_internal_set__comparisonOperation(::GlobalNamespace::ComparisonOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparisonOperation = value;
}
inline void GlobalNamespace::NullAllowedIfAttribute::_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowedContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIfAttribute*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, equalsTo, context);
}
inline void GlobalNamespace::NullAllowedIfAttribute::_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare,
                                                           ::GlobalNamespace::NullAllowedContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIfAttribute*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ComparisonOperation>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, comparisonOperation, valueToCompare, context);
}
inline bool GlobalNamespace::NullAllowedIfAttribute::IsNullAllowedForValue(::System::Object* value, ::GlobalNamespace::NullAllowedContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullAllowedIfAttribute*>(),
                                                           { "IsNullAllowedForValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NullAllowedContext>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, context);
}
inline ::GlobalNamespace::NullAllowedIfAttribute* GlobalNamespace::NullAllowedIfAttribute::New_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowedContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullAllowedIfAttribute*>(propertyName, equalsTo, context));
}
inline ::GlobalNamespace::NullAllowedIfAttribute* GlobalNamespace::NullAllowedIfAttribute::New_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation,
                                                                                                    ::System::Object* valueToCompare, ::GlobalNamespace::NullAllowedContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullAllowedIfAttribute*>(propertyName, comparisonOperation, valueToCompare, context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowedIfAttribute::NullAllowedIfAttribute() {}
