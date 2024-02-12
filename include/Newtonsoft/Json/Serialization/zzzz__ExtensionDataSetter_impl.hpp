#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ExtensionDataSetter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::Object*, void*)>(
    &::Newtonsoft::Json::Serialization::ExtensionDataSetter::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2694548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::Object*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::ExtensionDataSetter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x269b63c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::Object*, ::StringW, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(
        &::Newtonsoft::Json::Serialization::ExtensionDataSetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x269b650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ExtensionDataSetter.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ExtensionDataSetter::*)(::System::IAsyncResult*)>(
    &::Newtonsoft::Json::Serialization::ExtensionDataSetter::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x269b67c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* Newtonsoft::Json::Serialization::ExtensionDataSetter::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(object, method));
}
inline void Newtonsoft::Json::Serialization::ExtensionDataSetter::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Newtonsoft::Json::Serialization::ExtensionDataSetter::Invoke(::System::Object* o, ::StringW key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, key, value);
}
inline ::System::IAsyncResult* Newtonsoft::Json::Serialization::ExtensionDataSetter::BeginInvoke(::System::Object* o, ::StringW key, ::System::Object* value, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, o, key, value, callback, object);
}
inline void Newtonsoft::Json::Serialization::ExtensionDataSetter::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter::ExtensionDataSetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
