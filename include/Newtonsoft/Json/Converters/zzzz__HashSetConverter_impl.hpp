#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__HashSetConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::HashSetConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::HashSetConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::HashSetConverter::WriteJson)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b3dec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::HashSetConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::HashSetConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::HashSetConverter::ReadJson)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x26b3df0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::HashSetConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::HashSetConverter::*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::HashSetConverter::CanConvert)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26b3fe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::HashSetConverter.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::HashSetConverter::*)()>(
    &::Newtonsoft::Json::Converters::HashSetConverter::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b409c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::HashSetConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::HashSetConverter::*)()>(
    &::Newtonsoft::Json::Converters::HashSetConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b40a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::HashSetConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), "WriteJson", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::HashSetConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                  ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), "ReadJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool Newtonsoft::Json::Converters::HashSetConverter::CanConvert(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), "CanConvert",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
inline bool Newtonsoft::Json::Converters::HashSetConverter::get_CanWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(),
                                                                             "get_CanWrite", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::HashSetConverter* Newtonsoft::Json::Converters::HashSetConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Converters::HashSetConverter*>());
}
inline void Newtonsoft::Json::Converters::HashSetConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::HashSetConverter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::HashSetConverter::HashSetConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
