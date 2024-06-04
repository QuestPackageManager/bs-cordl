#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/CamelCasePropertyNamesContractResolver.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__CamelCasePropertyNamesContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultJsonNameTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a3e10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.ResolveContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (
    ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolveContract)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2a3e2a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.GetNameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DefaultJsonNameTable* (
    ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(&::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::GetNameTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3e5d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 20));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::setStaticF_TypeContractCacheLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "TypeContractCacheLock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::getStaticF_TypeContractCacheLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "TypeContractCacheLock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get>();
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::setStaticF_NameTable(::Newtonsoft::Json::DefaultJsonNameTable* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::DefaultJsonNameTable*, "NameTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get>(
      std::forward<::Newtonsoft::Json::DefaultJsonNameTable*>(value));
}
inline ::Newtonsoft::Json::DefaultJsonNameTable* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::getStaticF_NameTable() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::DefaultJsonNameTable*, "NameTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get>();
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::setStaticF__contractCache(
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*,
      "_contractCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*
Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::getStaticF__contractCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*,
      "_contractCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get>();
}
inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>());
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolveContract(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*, false>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::DefaultJsonNameTable* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::GetNameTable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DefaultJsonNameTable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::CamelCasePropertyNamesContractResolver() {}
