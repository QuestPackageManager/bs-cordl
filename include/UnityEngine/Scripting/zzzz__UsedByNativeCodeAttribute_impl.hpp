#pragma once
// IWYU pragma private; include "UnityEngine\Scripting\UsedByNativeCodeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/zzzz__UsedByNativeCodeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::UsedByNativeCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::UsedByNativeCodeAttribute::*)()>(&::UnityEngine::Scripting::UsedByNativeCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::UsedByNativeCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::UsedByNativeCodeAttribute::*)(::StringW)>(&::UnityEngine::Scripting::UsedByNativeCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb6580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::UsedByNativeCodeAttribute.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::UsedByNativeCodeAttribute::*)(::StringW)>(&::UnityEngine::Scripting::UsedByNativeCodeAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb6588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Scripting::UsedByNativeCodeAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Scripting::UsedByNativeCodeAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Scripting::UsedByNativeCodeAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
inline void UnityEngine::Scripting::UsedByNativeCodeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Scripting::UsedByNativeCodeAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Scripting::UsedByNativeCodeAttribute::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* UnityEngine::Scripting::UsedByNativeCodeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>());
}
inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* UnityEngine::Scripting::UsedByNativeCodeAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::UsedByNativeCodeAttribute*>(name));
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::UsedByNativeCodeAttribute::UsedByNativeCodeAttribute() {}
