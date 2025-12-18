#pragma once
// IWYU pragma private; include "System/Xml/Int64ArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__Int64ArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Int64ArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Int64ArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int64_t, ::Array<int64_t>*>, int32_t, int32_t)>(
    &::System::Xml::Int64ArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f49d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int64ArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Int64ArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int64_t, ::Array<int64_t>*>, int32_t, int32_t)>(
    &::System::Xml::Int64ArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int64ArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Int64ArrayHelperWithDictionaryString::*)()>(
    &::System::Xml::Int64ArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::Int64ArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::Int64ArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::Int64ArrayHelperWithDictionaryString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get>(
      std::forward<::System::Xml::Int64ArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::Int64ArrayHelperWithDictionaryString* System::Xml::Int64ArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::Int64ArrayHelperWithDictionaryString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get>();
}
inline int32_t System::Xml::Int64ArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                            ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t, ::Array<int64_t>*> array, int32_t offset,
                                                                            int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int64ArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                          ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t, ::Array<int64_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int64ArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int64ArrayHelperWithDictionaryString*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Int64ArrayHelperWithDictionaryString* System::Xml::Int64ArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Int64ArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Int64ArrayHelperWithDictionaryString::Int64ArrayHelperWithDictionaryString() {}
