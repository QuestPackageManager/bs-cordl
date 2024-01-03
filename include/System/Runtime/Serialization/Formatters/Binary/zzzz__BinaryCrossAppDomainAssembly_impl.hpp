#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryCrossAppDomainAssembly_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c1e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Read)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24c1e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly.Dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24c1ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>::get(),
                                                 "Dump", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::__get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::__get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::__set_assemId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::__get_assemblyIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyIndex;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::__get_assemblyIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyIndex;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::__set_assemblyIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyIndex = value;
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly* System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*>::get(),
                                               "Dump", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly::BinaryCrossAppDomainAssembly() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
