#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatClassWriterDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassWriterDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatClassWriterDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatClassWriterDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Serialization::XmlFormatClassWriterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5faf96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatClassWriterDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatClassWriterDelegate::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*,
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatClassWriterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fafab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::XmlFormatClassWriterDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Runtime::Serialization::XmlFormatClassWriterDelegate::Invoke(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context,
                                                                                 ::System::Runtime::Serialization::ClassDataContract* dataContract) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, context, dataContract);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* System::Runtime::Serialization::XmlFormatClassWriterDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatClassWriterDelegate::XmlFormatClassWriterDelegate() {}
