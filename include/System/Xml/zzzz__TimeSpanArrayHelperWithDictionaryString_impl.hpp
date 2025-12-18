#pragma once
// IWYU pragma private; include "System/Xml/TimeSpanArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Xml/zzzz__TimeSpanArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::TimeSpanArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::TimeSpanArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*>, int32_t, int32_t)>(
    &::System::Xml::TimeSpanArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f4abfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TimeSpanArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::TimeSpanArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*>, int32_t,
    int32_t)>(&::System::Xml::TimeSpanArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4ac34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TimeSpanArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::TimeSpanArrayHelperWithDictionaryString::*)()>(
    &::System::Xml::TimeSpanArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4ac70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::TimeSpanArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::TimeSpanArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::TimeSpanArrayHelperWithDictionaryString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get>(
      std::forward<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::TimeSpanArrayHelperWithDictionaryString* System::Xml::TimeSpanArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::TimeSpanArrayHelperWithDictionaryString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get>();
}
inline int32_t System::Xml::TimeSpanArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                               ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array,
                                                                               int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::TimeSpanArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                             ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array,
                                                                             int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::TimeSpanArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::TimeSpanArrayHelperWithDictionaryString* System::Xml::TimeSpanArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::TimeSpanArrayHelperWithDictionaryString::TimeSpanArrayHelperWithDictionaryString() {}
