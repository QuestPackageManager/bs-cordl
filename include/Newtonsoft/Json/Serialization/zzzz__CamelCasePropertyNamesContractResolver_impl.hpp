#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\CamelCasePropertyNamesContractResolver.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d34fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.ResolveContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (
    ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolveContract)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5d35140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.GetNameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DefaultJsonNameTable* (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(
    &::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::GetNameTable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d35498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(), 20 }));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::setStaticF_TypeContractCacheLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "TypeContractCacheLock", ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::getStaticF_TypeContractCacheLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "TypeContractCacheLock", ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>();
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::setStaticF_NameTable(::Newtonsoft::Json::DefaultJsonNameTable* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::DefaultJsonNameTable*, "NameTable", ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(
      std::forward<::Newtonsoft::Json::DefaultJsonNameTable*>(value));
}
inline ::Newtonsoft::Json::DefaultJsonNameTable* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::getStaticF_NameTable() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::DefaultJsonNameTable*, "NameTable", ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>();
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::setStaticF__contractCache(
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*,
      "_contractCache", ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*
Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::getStaticF__contractCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::Newtonsoft::Json::Serialization::JsonContract*>*,
      "_contractCache", ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>();
}
inline void Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolveContract(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::DefaultJsonNameTable* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::GetNameTable() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DefaultJsonNameTable*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::CamelCasePropertyNamesContractResolver() {}
