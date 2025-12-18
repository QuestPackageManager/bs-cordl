#pragma once
// IWYU pragma private; include "System/Xml/GuidArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/Xml/zzzz__GuidArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::System::Xml::GuidArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::GuidArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<::System::Guid, ::Array<::System::Guid>*>, int32_t, int32_t)>(&::System::Xml::GuidArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f4a854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::GuidArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::GuidArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::Guid, ::Array<::System::Guid>*>, int32_t, int32_t)>(
    &::System::Xml::GuidArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a88c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::GuidArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::GuidArrayHelperWithString::*)()>(&::System::Xml::GuidArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::GuidArrayHelperWithString::setStaticF_Instance(::System::Xml::GuidArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::GuidArrayHelperWithString*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get>(
      std::forward<::System::Xml::GuidArrayHelperWithString*>(value));
}
inline ::System::Xml::GuidArrayHelperWithString* System::Xml::GuidArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::GuidArrayHelperWithString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get>();
}
inline int32_t System::Xml::GuidArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri,
                                                                 ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::GuidArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri,
                                                               ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::GuidArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::GuidArrayHelperWithString*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::GuidArrayHelperWithString* System::Xml::GuidArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::GuidArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::GuidArrayHelperWithString::GuidArrayHelperWithString() {}
