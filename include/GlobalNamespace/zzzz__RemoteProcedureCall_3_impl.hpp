#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteProcedureCall_3.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
template <typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>*& GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_get__value0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>* const& GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_get__value0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0, typename T1, typename T2>
constexpr void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_set__value0(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value0, value);
}
template <typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T1>*& GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_get__value1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value1;
}
template <typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T1>* const& GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_get__value1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value1;
}
template <typename T0, typename T1, typename T2>
constexpr void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_set__value1(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value1, value);
}
template <typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T2>*& GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_get__value2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value2;
}
template <typename T0, typename T1, typename T2>
constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T2>* const& GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_get__value2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value2;
}
template <typename T0, typename T1, typename T2>
constexpr void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::__cordl_internal_set__value2(::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value2, value);
}
template <typename T0, typename T1, typename T2> inline T0 GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::get_value0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(),
                                                                             "get_value0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T0, false>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2> inline T1 GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::get_value1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(),
                                                                             "get_value1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T1, false>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2> inline T2 GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::get_value2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(),
                                                                             "get_value2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T2, false>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2> inline void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, protocolVersion);
}
template <typename T0, typename T1, typename T2> inline void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, protocolVersion);
}
template <typename T0, typename T1, typename T2>
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::Init(int64_t syncTime, T0 value0, T1 value1, T2 value2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(this, ___internal_method, syncTime, value0, value1, value2);
}
template <typename T0, typename T1, typename T2> inline void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::Release() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2> inline void GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2> inline ::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>* GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>*>());
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2> constexpr ::GlobalNamespace::RemoteProcedureCall_3<T0, T1, T2>::RemoteProcedureCall_3() {}
