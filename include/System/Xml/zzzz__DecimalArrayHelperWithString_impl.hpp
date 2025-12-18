#pragma once
// IWYU pragma private; include "System/Xml/DecimalArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Xml/zzzz__DecimalArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::DecimalArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>, int32_t, int32_t)>(&::System::Xml::DecimalArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f4a374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DecimalArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>, int32_t, int32_t)>(
    &::System::Xml::DecimalArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a3ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DecimalArrayHelperWithString::*)()>(&::System::Xml::DecimalArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f4a3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::DecimalArrayHelperWithString::setStaticF_Instance(::System::Xml::DecimalArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::DecimalArrayHelperWithString*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get>(
      std::forward<::System::Xml::DecimalArrayHelperWithString*>(value));
}
inline ::System::Xml::DecimalArrayHelperWithString* System::Xml::DecimalArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::DecimalArrayHelperWithString*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get>();
}
inline int32_t System::Xml::DecimalArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri,
                                                                    ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DecimalArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri,
                                                                  ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DecimalArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DecimalArrayHelperWithString*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::DecimalArrayHelperWithString* System::Xml::DecimalArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::DecimalArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::DecimalArrayHelperWithString::DecimalArrayHelperWithString() {}
