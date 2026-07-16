#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlSerializedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::UxmlSerializedData_UxmlAttributeFlags(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::UxmlSerializedData_UxmlAttributeFlags() {}
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::Ignore{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::OverriddenInUxml{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::DefaultValue{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlSerializedData.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::UxmlSerializedData::*)()>(&::UnityEngine::UIElements::UxmlSerializedData::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlSerializedData.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlSerializedData::*)(::System::Object*)>(&::UnityEngine::UIElements::UxmlSerializedData::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlSerializedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlSerializedData::*)()>(&::UnityEngine::UIElements::UxmlSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cbde10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UxmlSerializedData::__cordl_internal_get_uxmlAssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uxmlAssetId;
}
constexpr int32_t const& UnityEngine::UIElements::UxmlSerializedData::__cordl_internal_get_uxmlAssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uxmlAssetId;
}
constexpr void UnityEngine::UIElements::UxmlSerializedData::__cordl_internal_set_uxmlAssetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uxmlAssetId = value;
}
inline void UnityEngine::UIElements::UxmlSerializedData::setStaticF_s_CurrentDeserializeFlags(::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, "s_CurrentDeserializeFlags", ::UnityEngine::UIElements::UxmlSerializedData*>(
      std::forward<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags>(value));
}
inline ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData::getStaticF_s_CurrentDeserializeFlags() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, "s_CurrentDeserializeFlags", ::UnityEngine::UIElements::UxmlSerializedData*>();
}
inline ::System::Object* UnityEngine::UIElements::UxmlSerializedData::CreateInstance() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlSerializedData::Deserialize(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::UxmlSerializedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlSerializedData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlSerializedData* UnityEngine::UIElements::UxmlSerializedData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlSerializedData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlSerializedData::UxmlSerializedData() {}
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData::k_DefaultFlags{ static_cast<uint8_t>(0x1u) };
