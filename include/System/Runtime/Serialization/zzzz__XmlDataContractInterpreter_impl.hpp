#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlDataContractInterpreter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContractInterpreter_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContract_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContractInterpreter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContractInterpreter::*)(
    ::System::Runtime::Serialization::XmlDataContract*)>(&::System::Runtime::Serialization::XmlDataContractInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc84d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContractInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContractInterpreter.CreateXmlSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::IXmlSerializable* (::System::Runtime::Serialization::XmlDataContractInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlDataContractInterpreter::CreateXmlSerializable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5fc84e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContractInterpreter*>::get(), "CreateXmlSerializable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContractInterpreter.GetConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::XmlDataContractInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlDataContractInterpreter::GetConstructor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5fc8618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContractInterpreter*>::get(), "GetConstructor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlDataContract*& System::Runtime::Serialization::XmlDataContractInterpreter::__cordl_internal_get_contract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr ::System::Runtime::Serialization::XmlDataContract* const& System::Runtime::Serialization::XmlDataContractInterpreter::__cordl_internal_get_contract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr void System::Runtime::Serialization::XmlDataContractInterpreter::__cordl_internal_set_contract(::System::Runtime::Serialization::XmlDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlDataContractInterpreter::_ctor(::System::Runtime::Serialization::XmlDataContract* contract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContractInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contract);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Runtime::Serialization::XmlDataContractInterpreter::CreateXmlSerializable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContractInterpreter*>::get(), "CreateXmlSerializable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::XmlDataContractInterpreter::GetConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContractInterpreter*>::get(), "GetConstructor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlDataContractInterpreter* System::Runtime::Serialization::XmlDataContractInterpreter::New_ctor(::System::Runtime::Serialization::XmlDataContract* contract) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlDataContractInterpreter*>(contract));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataContractInterpreter::XmlDataContractInterpreter() {}
