#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsScribeConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsScribeConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsScribeConverter_def.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::*)()>(
    &::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d280b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0._CacheAndWriteTypePropertiesForType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::*)(::System::Reflection::PropertyInfo*)>(
    &::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::_CacheAndWriteTypePropertiesForType_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d2816c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0*>::get(), "<CacheAndWriteTypePropertiesForType>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::_CacheAndWriteTypePropertiesForType_b__0(::System::Reflection::PropertyInfo* prop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0*>::get(), "<CacheAndWriteTypePropertiesForType>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prop);
}
inline ::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0* OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsScribeConverter___c__DisplayClass4_0::AnalyticsScribeConverter___c__DisplayClass4_0() {}
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::AnalyticsScribeConverter::*)(::System::Type*)>(
    &::OSCE::Analytics::AnalyticsScribeConverter::CanConvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d277c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::OSCE::Analytics::AnalyticsScribeConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::OSCE::Analytics::AnalyticsScribeConverter::ReadJson)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d277c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsScribeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::OSCE::Analytics::AnalyticsScribeConverter::WriteJson)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5d27800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter.CacheAndWriteTypePropertiesForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsScribeConverter::*)(
    ::OSCE::Analytics::BaseAnalyticsEvent*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::StringW, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::OSCE::Analytics::AnalyticsScribeConverter::CacheAndWriteTypePropertiesForType)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x5d27a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), "CacheAndWriteTypePropertiesForType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsScribeConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsScribeConverter::*)()>(&::OSCE::Analytics::AnalyticsScribeConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d280b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OSCE::Analytics::AnalyticsScribeConverter::setStaticF__cachedPropertyInfoByType(
    ::System::Collections::Generic::Dictionary_2<::System::Type*,
                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<
                                        ::System::Type*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>*,
                                    "_cachedPropertyInfoByType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<
          ::System::Type*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,
                                                    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>*
OSCE::Analytics::AnalyticsScribeConverter::getStaticF__cachedPropertyInfoByType() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::System::Type*,
                                                   ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>*>*,
      "_cachedPropertyInfoByType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get>();
}
inline bool OSCE::Analytics::AnalyticsScribeConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
inline ::System::Object* OSCE::Analytics::AnalyticsScribeConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                             ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline void OSCE::Analytics::AnalyticsScribeConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline void OSCE::Analytics::AnalyticsScribeConverter::CacheAndWriteTypePropertiesForType(::OSCE::Analytics::BaseAnalyticsEvent* baseAnalyticsEvent,
                                                                                          ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typesForScribeObject, ::StringW scribeTypeString,
                                                                                          ::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), "CacheAndWriteTypePropertiesForType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseAnalyticsEvent, typesForScribeObject, scribeTypeString, writer, serializer);
}
inline void OSCE::Analytics::AnalyticsScribeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsScribeConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OSCE::Analytics::AnalyticsScribeConverter* OSCE::Analytics::AnalyticsScribeConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Analytics::AnalyticsScribeConverter*>());
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsScribeConverter::AnalyticsScribeConverter() {}
