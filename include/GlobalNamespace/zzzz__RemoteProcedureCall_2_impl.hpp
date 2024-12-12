#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteProcedureCall_2.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
template <typename T0, typename T1> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>*& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__cordl_internal_get__value0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0, typename T1> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>* const& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__cordl_internal_get__value0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__cordl_internal_set__value0(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value0, value);
}
template <typename T0, typename T1> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T1>*& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__cordl_internal_get__value1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value1;
}
template <typename T0, typename T1> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T1>* const& GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__cordl_internal_get__value1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value1;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::__cordl_internal_set__value1(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value1, value);
}
template <typename T0, typename T1> inline T0 GlobalNamespace::RemoteProcedureCall_2<T0, T1>::get_value0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(),
                                                                             "get_value0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T0, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline T1 GlobalNamespace::RemoteProcedureCall_2<T0, T1>::get_value1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(),
                                                                             "get_value1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T1, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, protocolVersion);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, protocolVersion);
}
template <typename T0, typename T1> inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_2<T0, T1>::Init(int64_t syncTime, T0 value0, T1 value1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(this, ___internal_method, syncTime, value0, value1);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::Release() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::RemoteProcedureCall_2<T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline ::GlobalNamespace::RemoteProcedureCall_2<T0, T1>* GlobalNamespace::RemoteProcedureCall_2<T0, T1>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RemoteProcedureCall_2<T0, T1>*>());
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::GlobalNamespace::RemoteProcedureCall_2<T0, T1>::RemoteProcedureCall_2() {}
