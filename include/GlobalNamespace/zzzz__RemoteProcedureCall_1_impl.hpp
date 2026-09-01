#pragma once
// IWYU pragma private; include "GlobalNamespace\RemoteProcedureCall_1.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
template <typename T0> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>*& GlobalNamespace::RemoteProcedureCall_1<T0>::__cordl_internal_get__value0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>* const& GlobalNamespace::RemoteProcedureCall_1<T0>::__cordl_internal_get__value0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0> constexpr void GlobalNamespace::RemoteProcedureCall_1<T0>::__cordl_internal_set__value0(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value0 = value;
}
template <typename T0> inline T0 GlobalNamespace::RemoteProcedureCall_1<T0>::get_value0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_1<T0>*>(), { "get_value0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T0>(this, ___internal_method);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_1<T0>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, protocolVersion);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_1<T0>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, protocolVersion);
}
template <typename T0> inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_1<T0>::Init(int64_t syncTime, T0 value0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_1<T0>*>(), { "Init", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<T0>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*>(this, ___internal_method, syncTime, value0);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_1<T0>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_1<T0>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0> inline ::GlobalNamespace::RemoteProcedureCall_1<T0>* GlobalNamespace::RemoteProcedureCall_1<T0>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteProcedureCall_1<T0>*>());
}
// Ctor Parameters []
template <typename T0> constexpr ::GlobalNamespace::RemoteProcedureCall_1<T0>::RemoteProcedureCall_1() {}
