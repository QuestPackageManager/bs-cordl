#pragma once
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPropertyCollection_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonPropertyCollection::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2921c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.GetKeyForItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonPropertyCollection::GetKeyForItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x292debc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.AddProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonPropertyCollection::AddProperty)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2921dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "AddProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.GetClosestMatchProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW)>(&::Newtonsoft::Json::Serialization::JsonPropertyCollection::GetClosestMatchProperty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x292208c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "GetClosestMatchProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.TryGetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(
    ::StringW, ByRef<::Newtonsoft::Json::Serialization::JsonProperty*>)>(&::Newtonsoft::Json::Serialization::JsonPropertyCollection::TryGetProperty)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x292dfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "TryGetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonProperty*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPropertyCollection.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (
    ::Newtonsoft::Json::Serialization::JsonPropertyCollection::*)(::StringW, ::System::StringComparison)>(&::Newtonsoft::Json::Serialization::JsonPropertyCollection::GetProperty)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x292ded4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::StringComparison>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*& Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>*> const&
Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void Newtonsoft::Json::Serialization::JsonPropertyCollection::__cordl_internal_set__list(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Newtonsoft::Json::Serialization::JsonPropertyCollection::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(type));
}
inline void Newtonsoft::Json::Serialization::JsonPropertyCollection::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonPropertyCollection::GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Serialization::JsonPropertyCollection::AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* property) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "AddProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property);
}
inline ::Newtonsoft::Json::Serialization::JsonProperty* Newtonsoft::Json::Serialization::JsonPropertyCollection::GetClosestMatchProperty(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "GetClosestMatchProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonProperty*, false>(this, ___internal_method, propertyName);
}
inline bool Newtonsoft::Json::Serialization::JsonPropertyCollection::TryGetProperty(::StringW key, ByRef<::Newtonsoft::Json::Serialization::JsonProperty*> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "TryGetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonProperty*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, item);
}
inline ::Newtonsoft::Json::Serialization::JsonProperty* Newtonsoft::Json::Serialization::JsonPropertyCollection::GetProperty(::StringW propertyName, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::StringComparison>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonProperty*, false>(this, ___internal_method, propertyName, comparisonType);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection::JsonPropertyCollection() {}
