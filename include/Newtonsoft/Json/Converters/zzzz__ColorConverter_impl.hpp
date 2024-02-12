#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__ColorConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::ColorConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::ColorConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::ColorConverter::WriteJson)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x26d590c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::ColorConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::ColorConverter::*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::ColorConverter::CanConvert)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26d5ae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::ColorConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::ColorConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::ColorConverter::ReadJson)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x26d5ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::ColorConverter.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::ColorConverter::*)()>(
    &::Newtonsoft::Json::Converters::ColorConverter::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d5e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::ColorConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::ColorConverter::*)()>(&::Newtonsoft::Json::Converters::ColorConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d5e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::ColorConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline bool Newtonsoft::Json::Converters::ColorConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
inline ::System::Object* Newtonsoft::Json::Converters::ColorConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool Newtonsoft::Json::Converters::ColorConverter::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::ColorConverter* Newtonsoft::Json::Converters::ColorConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Converters::ColorConverter*>());
}
inline void Newtonsoft::Json::Converters::ColorConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::ColorConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::ColorConverter::ColorConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
