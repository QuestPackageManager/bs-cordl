#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/ColorConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "BGLib/JsonExtension/zzzz__ColorConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BGLib::JsonExtension::ColorConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::BGLib::JsonExtension::ColorConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::UnityEngine::Color, bool, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::ColorConverter::ReadJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x31edc80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::ColorConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::JsonExtension::ColorConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::UnityEngine::Color, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::ColorConverter::WriteJson)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x31edd3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::ColorConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::JsonExtension::ColorConverter::*)()>(&::BGLib::JsonExtension::ColorConverter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x31eded4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color BGLib::JsonExtension::ColorConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Color existingValue,
                                                                           bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
inline void BGLib::JsonExtension::ColorConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Color value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline void BGLib::JsonExtension::ColorConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::ColorConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::JsonExtension::ColorConverter* BGLib::JsonExtension::ColorConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::JsonExtension::ColorConverter*>());
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::ColorConverter::ColorConverter() {}
