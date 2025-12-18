#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatGetOnlyCollectionReaderDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatGetOnlyCollectionReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5faeedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5faf024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::Invoke(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                             ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                             ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                             ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlReader, context, itemName, itemNamespace, collectionContract);
}
inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate::XmlFormatGetOnlyCollectionReaderDelegate() {}
