#pragma once
// IWYU pragma private; include "System/Xml/GuidArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/Xml/zzzz__GuidArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::System::Xml::GuidArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::GuidArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Guid, ::Array<::System::Guid>*>, int32_t, int32_t)>(
    &::System::Xml::GuidArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f4a98c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::GuidArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::GuidArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Guid, ::Array<::System::Guid>*>, int32_t, int32_t)>(
    &::System::Xml::GuidArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a9c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::GuidArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::GuidArrayHelperWithDictionaryString::*)()>(
    &::System::Xml::GuidArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4aa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::GuidArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::GuidArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::GuidArrayHelperWithDictionaryString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get>(
      std::forward<::System::Xml::GuidArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::GuidArrayHelperWithDictionaryString* System::Xml::GuidArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::GuidArrayHelperWithDictionaryString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get>();
}
inline int32_t System::Xml::GuidArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                           ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset,
                                                                           int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::GuidArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                         ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset,
                                                                         int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::GuidArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithDictionaryString*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::GuidArrayHelperWithDictionaryString* System::Xml::GuidArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::GuidArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::GuidArrayHelperWithDictionaryString::GuidArrayHelperWithDictionaryString() {}
