#pragma once
// IWYU pragma private; include "System/Xml/BooleanArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__BooleanArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::BooleanArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::BooleanArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool, ::Array<bool>*>, int32_t, int32_t)>(
    &::System::Xml::BooleanArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f4960c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BooleanArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::BooleanArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<bool, ::Array<bool>*>, int32_t, int32_t)>(
    &::System::Xml::BooleanArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BooleanArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::BooleanArrayHelperWithDictionaryString::*)()>(
    &::System::Xml::BooleanArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::BooleanArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::BooleanArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::BooleanArrayHelperWithDictionaryString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get>(
      std::forward<::System::Xml::BooleanArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::BooleanArrayHelperWithDictionaryString* System::Xml::BooleanArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::BooleanArrayHelperWithDictionaryString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get>();
}
inline int32_t System::Xml::BooleanArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                              ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool, ::Array<bool>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::BooleanArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                            ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool, ::Array<bool>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::BooleanArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BooleanArrayHelperWithDictionaryString*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::BooleanArrayHelperWithDictionaryString* System::Xml::BooleanArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::BooleanArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::BooleanArrayHelperWithDictionaryString::BooleanArrayHelperWithDictionaryString() {}
