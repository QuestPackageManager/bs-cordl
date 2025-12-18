#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ScopedKnownTypes.hpp"
#include "System/Runtime/Serialization/zzzz__ScopedKnownTypes_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ScopedKnownTypes.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ScopedKnownTypes::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*)>(&::System::Runtime::Serialization::ScopedKnownTypes::Push)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fabcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ScopedKnownTypes>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ScopedKnownTypes.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ScopedKnownTypes::*)()>(
    &::System::Runtime::Serialization::ScopedKnownTypes::Pop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fabdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ScopedKnownTypes>::get(), "Pop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ScopedKnownTypes.GetDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::ScopedKnownTypes::*)(::System::Xml::XmlQualifiedName*)>(&::System::Runtime::Serialization::ScopedKnownTypes::GetDataContract)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fabdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ScopedKnownTypes>::get(), "GetDataContract", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ScopedKnownTypes::Push(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* dataContractDictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ScopedKnownTypes>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataContractDictionary);
}
inline void System::Runtime::Serialization::ScopedKnownTypes::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ScopedKnownTypes>::get(), "Pop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::ScopedKnownTypes::GetDataContract(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ScopedKnownTypes>::get(), "GetDataContract", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*, false>(this, ___internal_method, qname);
}
// Ctor Parameters [CppParam { name: "dataContractDictionaries", ty:
// "::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Runtime::Serialization::DataContract*>*,::Array<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Runtime::Serialization::DataContract*>*>*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::ScopedKnownTypes::ScopedKnownTypes(
    ::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*,
             ::Array<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>*>
        dataContractDictionaries,
    int32_t count) noexcept {
  this->dataContractDictionaries = dataContractDictionaries;
  this->count = count;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ScopedKnownTypes::ScopedKnownTypes() {}
