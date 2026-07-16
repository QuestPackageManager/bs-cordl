#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializableEnum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SerializableEnum_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SerializableEnum.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Enum* (::UnityEngine::Rendering::SerializableEnum::*)()>(&::UnityEngine::Rendering::SerializableEnum::get_value)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6753ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializableEnum*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SerializableEnum.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SerializableEnum::*)(::System::Enum*)>(&::UnityEngine::Rendering::SerializableEnum::set_value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6753bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializableEnum*>(), { "set_value", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SerializableEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SerializableEnum::*)(::System::Type*)>(&::UnityEngine::Rendering::SerializableEnum::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6753c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializableEnum*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumValueAsString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumValueAsString;
}
constexpr ::StringW const& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumValueAsString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumValueAsString;
}
constexpr void UnityEngine::Rendering::SerializableEnum::__cordl_internal_set_m_EnumValueAsString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnumValueAsString = value;
}
constexpr ::StringW& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumTypeAsString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumTypeAsString;
}
constexpr ::StringW const& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumTypeAsString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumTypeAsString;
}
constexpr void UnityEngine::Rendering::SerializableEnum::__cordl_internal_set_m_EnumTypeAsString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnumTypeAsString = value;
}
inline ::System::Enum* UnityEngine::Rendering::SerializableEnum::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializableEnum*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Enum*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SerializableEnum::set_value(::System::Enum* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializableEnum*>(), { "set_value", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::SerializableEnum::_ctor(::System::Type* enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializableEnum*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumType);
}
inline ::UnityEngine::Rendering::SerializableEnum* UnityEngine::Rendering::SerializableEnum::New_ctor(::System::Type* enumType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SerializableEnum*>(enumType));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SerializableEnum::SerializableEnum() {}
