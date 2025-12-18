#pragma once
// IWYU pragma private; include "System/Xml/Int32ArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__Int32ArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Int32ArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(
    &::System::Xml::Int32ArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f49aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Int32ArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(
    &::System::Xml::Int32ArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Int32ArrayHelperWithDictionaryString::*)()>(
    &::System::Xml::Int32ArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::Int32ArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::Int32ArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::Int32ArrayHelperWithDictionaryString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get>(
      std::forward<::System::Xml::Int32ArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::Int32ArrayHelperWithDictionaryString* System::Xml::Int32ArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::Int32ArrayHelperWithDictionaryString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get>();
}
inline int32_t System::Xml::Int32ArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                            ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t offset,
                                                                            int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int32ArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                          ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int32ArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithDictionaryString*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Int32ArrayHelperWithDictionaryString* System::Xml::Int32ArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Int32ArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Int32ArrayHelperWithDictionaryString::Int32ArrayHelperWithDictionaryString() {}
