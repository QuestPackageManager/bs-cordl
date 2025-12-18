#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlSerializableServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlSerializableServices_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableServices.ReadNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> (*)(::System::Xml::XmlReader*)>(
    &::System::Runtime::Serialization::XmlSerializableServices::ReadNodes)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5fc384c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get(), "ReadNodes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlSerializableServices.IsValidAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::XmlReader*)>(&::System::Runtime::Serialization::XmlSerializableServices::IsValidAttribute)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fc3bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get(), "IsValidAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlSerializableServices::setStaticF_ReadNodesMethodName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ReadNodesMethodName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Serialization::XmlSerializableServices::getStaticF_ReadNodesMethodName() {
  return ::cordl_internals::getStaticField<::StringW, "ReadNodesMethodName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get>();
}
inline void System::Runtime::Serialization::XmlSerializableServices::setStaticF_WriteNodesMethodName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "WriteNodesMethodName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Serialization::XmlSerializableServices::getStaticF_WriteNodesMethodName() {
  return ::cordl_internals::getStaticField<::StringW, "WriteNodesMethodName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get>();
}
inline void System::Runtime::Serialization::XmlSerializableServices::setStaticF_AddDefaultSchemaMethodName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "AddDefaultSchemaMethodName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Serialization::XmlSerializableServices::getStaticF_AddDefaultSchemaMethodName() {
  return ::cordl_internals::getStaticField<::StringW, "AddDefaultSchemaMethodName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get>();
}
inline ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> System::Runtime::Serialization::XmlSerializableServices::ReadNodes(::System::Xml::XmlReader* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get(), "ReadNodes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>, false>(nullptr, ___internal_method, xmlReader);
}
inline bool System::Runtime::Serialization::XmlSerializableServices::IsValidAttribute(::System::Xml::XmlReader* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlSerializableServices*>::get(), "IsValidAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xmlReader);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlSerializableServices::XmlSerializableServices() {}
