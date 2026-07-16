#pragma once
// IWYU pragma private; include "Unity/Properties/CreatePropertyAttribute.hpp"
#include "UnityEngine/Scripting/zzzz__RequiredMemberAttribute_impl.hpp"
#include "Unity/Properties/zzzz__CreatePropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Properties::CreatePropertyAttribute.get_ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::CreatePropertyAttribute::*)()>(&::Unity::Properties::CreatePropertyAttribute::get_ReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::CreatePropertyAttribute*>(), { "get_ReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::CreatePropertyAttribute.set_ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::CreatePropertyAttribute::*)(bool)>(&::Unity::Properties::CreatePropertyAttribute::set_ReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9af60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::CreatePropertyAttribute*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::CreatePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::CreatePropertyAttribute::*)()>(&::Unity::Properties::CreatePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::CreatePropertyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Unity::Properties::CreatePropertyAttribute::__cordl_internal_get__ReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReadOnly_k__BackingField;
}
constexpr bool const& Unity::Properties::CreatePropertyAttribute::__cordl_internal_get__ReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReadOnly_k__BackingField;
}
constexpr void Unity::Properties::CreatePropertyAttribute::__cordl_internal_set__ReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReadOnly_k__BackingField = value;
}
inline bool Unity::Properties::CreatePropertyAttribute::get_ReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::CreatePropertyAttribute*>(), { "get_ReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Properties::CreatePropertyAttribute::set_ReadOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::CreatePropertyAttribute*>(), { "set_ReadOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Properties::CreatePropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::CreatePropertyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::CreatePropertyAttribute* Unity::Properties::CreatePropertyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::CreatePropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::CreatePropertyAttribute::CreatePropertyAttribute() {}
