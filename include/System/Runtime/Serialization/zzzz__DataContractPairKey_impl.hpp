#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\DataContractPairKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractPairKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractPairKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractPairKey::*)(::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::DataContractPairKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6147b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractPairKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractPairKey::*)(::System::Object*)>(
    &::System::Runtime::Serialization::DataContractPairKey::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x614b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractPairKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::DataContractPairKey::*)()>(&::System::Runtime::Serialization::DataContractPairKey::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x614b48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Serialization::DataContractPairKey::__cordl_internal_get_object1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object1;
}
constexpr ::System::Object* const& System::Runtime::Serialization::DataContractPairKey::__cordl_internal_get_object1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object1;
}
constexpr void System::Runtime::Serialization::DataContractPairKey::__cordl_internal_set_object1(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___object1 = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::DataContractPairKey::__cordl_internal_get_object2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object2;
}
constexpr ::System::Object* const& System::Runtime::Serialization::DataContractPairKey::__cordl_internal_get_object2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object2;
}
constexpr void System::Runtime::Serialization::DataContractPairKey::__cordl_internal_set_object2(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___object2 = value;
}
inline void System::Runtime::Serialization::DataContractPairKey::_ctor(::System::Object* object1, ::System::Object* object2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object1, object2);
}
inline bool System::Runtime::Serialization::DataContractPairKey::Equals(::System::Object* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::Runtime::Serialization::DataContractPairKey::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractPairKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContractPairKey* System::Runtime::Serialization::DataContractPairKey::New_ctor(::System::Object* object1, ::System::Object* object2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContractPairKey*>(object1, object2));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractPairKey::DataContractPairKey() {}
