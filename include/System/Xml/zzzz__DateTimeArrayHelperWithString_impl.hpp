#pragma once
// IWYU pragma private; include "System/Xml/DateTimeArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Xml/zzzz__DateTimeArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Xml::DateTimeArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DateTimeArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>, int32_t, int32_t)>(
    &::System::Xml::DateTimeArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f4a5e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DateTimeArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DateTimeArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>, int32_t, int32_t)>(
    &::System::Xml::DateTimeArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a61c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DateTimeArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DateTimeArrayHelperWithString::*)()>(&::System::Xml::DateTimeArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::DateTimeArrayHelperWithString::setStaticF_Instance(::System::Xml::DateTimeArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::DateTimeArrayHelperWithString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get>(
      std::forward<::System::Xml::DateTimeArrayHelperWithString*>(value));
}
inline ::System::Xml::DateTimeArrayHelperWithString* System::Xml::DateTimeArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::DateTimeArrayHelperWithString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get>();
}
inline int32_t System::Xml::DateTimeArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri,
                                                                     ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DateTimeArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri,
                                                                   ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DateTimeArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DateTimeArrayHelperWithString*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::DateTimeArrayHelperWithString* System::Xml::DateTimeArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::DateTimeArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::DateTimeArrayHelperWithString::DateTimeArrayHelperWithString() {}
