#pragma once
// IWYU pragma private; include "System/Xml/Int32ArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__Int32ArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Int32ArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(&::System::Xml::Int32ArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f499b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Int32ArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(&::System::Xml::Int32ArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f499ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Int32ArrayHelperWithString::*)()>(&::System::Xml::Int32ArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f49a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::Int32ArrayHelperWithString::setStaticF_Instance(::System::Xml::Int32ArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::Int32ArrayHelperWithString*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get>(
      std::forward<::System::Xml::Int32ArrayHelperWithString*>(value));
}
inline ::System::Xml::Int32ArrayHelperWithString* System::Xml::Int32ArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::Int32ArrayHelperWithString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get>();
}
inline int32_t System::Xml::Int32ArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t, ::Array<int32_t>*> array,
                                                                  int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int32ArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri,
                                                                ::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int32ArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Int32ArrayHelperWithString*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Int32ArrayHelperWithString* System::Xml::Int32ArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Int32ArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Int32ArrayHelperWithString::Int32ArrayHelperWithString() {}
