#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/UriDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__UriDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::UriDataContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::UriDataContract::*)()>(
    &::System::Runtime::Serialization::UriDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5faa118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::UriDataContract.get_WriteMethodName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::UriDataContract::*)()>(
    &::System::Runtime::Serialization::UriDataContract::get_WriteMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5faa1c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::UriDataContract.get_ReadMethodName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::UriDataContract::*)()>(
    &::System::Runtime::Serialization::UriDataContract::get_ReadMethodName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5faa20c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::UriDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::UriDataContract::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::UriDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5faa250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::UriDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::UriDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::UriDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5faa2ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 6));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::UriDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::UriDataContract::get_WriteMethodName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::UriDataContract::get_ReadMethodName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::UriDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                           ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::UriDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader,
                                                                                       ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::UriDataContract*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, context);
}
inline ::System::Runtime::Serialization::UriDataContract* System::Runtime::Serialization::UriDataContract::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::UriDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::UriDataContract::UriDataContract() {}
