#pragma once
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
template <typename T0> constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*& GlobalNamespace::RemoteProcedureCall_1<T0>::__get__value0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> const& GlobalNamespace::RemoteProcedureCall_1<T0>::__get__value0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value0;
}
template <typename T0> constexpr void GlobalNamespace::RemoteProcedureCall_1<T0>::__set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0> inline T0 GlobalNamespace::RemoteProcedureCall_1<T0>::get_value0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_1<T0>*>::get(), "get_value0",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T0, false>(this, ___internal_method);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_1<T0>*>::get(), "SerializeData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, protocolVersion);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_1<T0>*>::get(), "DeserializeData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, protocolVersion);
}
template <typename T0> inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_1<T0>::Init(int64_t syncTime, T0 value0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_1<T0>*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(this, ___internal_method, syncTime, value0);
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_1<T0>*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0> inline ::GlobalNamespace::RemoteProcedureCall_1<T0>* GlobalNamespace::RemoteProcedureCall_1<T0>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteProcedureCall_1<T0>*>());
}
template <typename T0> inline void GlobalNamespace::RemoteProcedureCall_1<T0>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_1<T0>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T0> constexpr ::GlobalNamespace::RemoteProcedureCall_1<T0>::RemoteProcedureCall_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
