#pragma once
// IWYU pragma private; include "System\Resources\ResourceLocator.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Resources::ResourceLocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceLocator::*)(int32_t, ::System::Object*)>(&::System::Resources::ResourceLocator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b74ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceLocator.get_DataPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::ResourceLocator::*)()>(&::System::Resources::ResourceLocator::get_DataPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "get_DataPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceLocator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceLocator::*)()>(&::System::Resources::ResourceLocator::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceLocator.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceLocator::*)(::System::Object*)>(&::System::Resources::ResourceLocator::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "set_Value", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceLocator.CanCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Resources::ResourceTypeCode)>(&::System::Resources::ResourceLocator::CanCache)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b74adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "CanCache", {}, { ::i2c::type_of<::System::Resources::ResourceTypeCode>() } })));
    return ___internal_method;
  }
};
inline void System::Resources::ResourceLocator::_ctor(int32_t dataPos, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataPos, value);
}
inline int32_t System::Resources::ResourceLocator::get_DataPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "get_DataPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceLocator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void System::Resources::ResourceLocator::set_Value(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "set_Value", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Resources::ResourceLocator::CanCache(::System::Resources::ResourceTypeCode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceLocator>(), { "CanCache", {}, { ::i2c::type_of<::System::Resources::ResourceTypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dataPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Resources::ResourceLocator::ResourceLocator(::System::Object* _value, int32_t _dataPos) noexcept {
  this->_value = _value;
  this->_dataPos = _dataPos;
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceLocator::ResourceLocator() {}
