#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/Vector2IntConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "BGLib/JsonExtension/zzzz__Vector2IntConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2IntConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::BGLib::JsonExtension::Vector2IntConverter::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::UnityEngine::Vector2Int, bool, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector2IntConverter::ReadJson)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22a64c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2IntConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::JsonExtension::Vector2IntConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::UnityEngine::Vector2Int, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector2IntConverter::WriteJson)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22a6564;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector2IntConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::JsonExtension::Vector2IntConverter::*)()>(&::BGLib::JsonExtension::Vector2IntConverter::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a6654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2Int BGLib::JsonExtension::Vector2IntConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Vector2Int existingValue,
                                                                                     bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
inline void BGLib::JsonExtension::Vector2IntConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Vector2Int value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline void BGLib::JsonExtension::Vector2IntConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::Vector2IntConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::JsonExtension::Vector2IntConverter* BGLib::JsonExtension::Vector2IntConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::JsonExtension::Vector2IntConverter*>());
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::Vector2IntConverter::Vector2IntConverter() {}
