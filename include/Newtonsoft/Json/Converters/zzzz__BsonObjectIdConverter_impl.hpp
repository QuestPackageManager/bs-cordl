#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__BsonObjectIdConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::BsonObjectIdConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::BsonObjectIdConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::BsonObjectIdConverter::WriteJson)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a82ca4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::BsonObjectIdConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::BsonObjectIdConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::BsonObjectIdConverter::ReadJson)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2a82da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::BsonObjectIdConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::BsonObjectIdConverter::*)(::System::Type*)>(
    &::Newtonsoft::Json::Converters::BsonObjectIdConverter::CanConvert)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a82f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::BsonObjectIdConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::BsonObjectIdConverter::*)()>(
    &::Newtonsoft::Json::Converters::BsonObjectIdConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a82fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Converters::BsonObjectIdConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::BsonObjectIdConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                       ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool Newtonsoft::Json::Converters::BsonObjectIdConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
inline ::Newtonsoft::Json::Converters::BsonObjectIdConverter* Newtonsoft::Json::Converters::BsonObjectIdConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>());
}
inline void Newtonsoft::Json::Converters::BsonObjectIdConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::BsonObjectIdConverter*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::BsonObjectIdConverter::BsonObjectIdConverter() {}
