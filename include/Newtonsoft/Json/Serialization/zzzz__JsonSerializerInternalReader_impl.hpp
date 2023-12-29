#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDictionaryContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonArrayContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenReader_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence::__JsonSerializerInternalReader__PropertyPresence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence::__JsonSerializerInternalReader__PropertyPresence() {}
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence::None{
  static_cast<int32_t>(0x0)
};
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence::Null{
  static_cast<int32_t>(0x1)
};
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence::Value{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::*)()>(
    &::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2524198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>::get(), ".ctor",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const&
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__set_Property(::Newtonsoft::Json::Serialization::JsonProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_ConstructorProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorProperty;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const&
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_ConstructorProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorProperty;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__set_ConstructorProperty(::Newtonsoft::Json::Serialization::JsonProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConstructorProperty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>&
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> const&
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__set_Presence(
    ::System::Nullable_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Presence = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__set_Value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Used;
}
constexpr bool const& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__get_Used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Used;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__set_Used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Used = value;
}
inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext* Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>());
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext::__JsonSerializerInternalReader__CreatorPropertyContext() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::*)()>(
    &::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25241a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0*>::get(), ".ctor",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0._CreateObjectUsingCreatorWithParameters_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::*)(
    ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*)>(
    &::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::_CreateObjectUsingCreatorWithParameters_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25241a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0*>::get(),
        "<CreateObjectUsingCreatorWithParameters>b__1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::__get_property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const&
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::__get_property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___property;
}
constexpr void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::__set_property(::Newtonsoft::Json::Serialization::JsonProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0* Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0*>());
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::_CreateObjectUsingCreatorWithParameters_b__1(
    ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0*>::get(),
      "<CreateObjectUsingCreatorWithParameters>b__1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c__DisplayClass36_0::__JsonSerializerInternalReader____c__DisplayClass36_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::*)()>(
    &::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2524230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c._CreateObjectUsingCreatorWithParameters_b__36_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2524238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<CreateObjectUsingCreatorWithParameters>b__36_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c._CreateObjectUsingCreatorWithParameters_b__36_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2524250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<CreateObjectUsingCreatorWithParameters>b__36_2",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c._PopulateObject_b__41_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::Serialization::JsonProperty* (::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
        &::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_PopulateObject_b__41_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2524268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<PopulateObject>b__41_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c._PopulateObject_b__41_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence (
    ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::*)(::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_PopulateObject_b__41_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2524270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<PopulateObject>b__41_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::setStaticF___9(::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>(
      std::forward<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>(value));
}
inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>();
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::setStaticF___9__36_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__36_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::getStaticF___9__36_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__36_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>();
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::setStaticF___9__36_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__36_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>* Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::getStaticF___9__36_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW>*, "<>9__36_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>();
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::setStaticF___9__41_0(
    ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*, "<>9__41_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::getStaticF___9__41_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*>*, "<>9__41_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>();
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::setStaticF___9__41_1(
    ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*,
                                    "<>9__41_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::getStaticF___9__41_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*,
                                           "<>9__41_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get>();
}
inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c* Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>());
}
inline void Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_0(::Newtonsoft::Json::Serialization::JsonProperty* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<CreateObjectUsingCreatorWithParameters>b__36_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, p);
}
inline ::StringW Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_2(::Newtonsoft::Json::Serialization::JsonProperty* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<CreateObjectUsingCreatorWithParameters>b__36_2",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, p);
}
inline ::Newtonsoft::Json::Serialization::JsonProperty*
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_PopulateObject_b__41_0(::Newtonsoft::Json::Serialization::JsonProperty* m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<PopulateObject>b__41_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonProperty*, false>(this, ___internal_method, m);
}
inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence
Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::_PopulateObject_b__41_1(::Newtonsoft::Json::Serialization::JsonProperty* m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c*>::get(), "<PopulateObject>b__41_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, false>(this, ___internal_method, m);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader____c::__JsonSerializerInternalReader____c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25180d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.Populate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Populate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x25180dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "Populate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetContractSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContractSafe)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2519e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetContractSafe",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, bool)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Deserialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2519ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetInternalSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerProxy* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)()>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x251ad64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(),
                                                 "GetInternalSerializer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateJToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJToken)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x251add4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateJToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateJObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJObject)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x251b0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateJObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateValueInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateValueInternal)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x251a864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateValueInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CoerceEmptyStringToNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CoerceEmptyStringToNull)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x251c9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CoerceEmptyStringToNull", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetExpectedDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonContract*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetExpectedDescription)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x251cac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetExpectedDescription", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::JsonConverter*,
                                                                        ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetConverter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x251a228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetConverter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObject)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x251b510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadMetadataPropertiesToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Linq::JTokenReader*, ByRef<::System::Type*>, ByRef<::Newtonsoft::Json::Serialization::JsonContract*>, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ByRef<::System::Object*>, ByRef<::StringW>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataPropertiesToken)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x251cb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadMetadataPropertiesToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadMetadataProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ByRef<::System::Type*>, ByRef<::Newtonsoft::Json::Serialization::JsonContract*>, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ByRef<::System::Object*>, ByRef<::StringW>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataProperties)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x251d2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadMetadataProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ResolveTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ByRef<::System::Type*>, ByRef<::Newtonsoft::Json::Serialization::JsonContract*>, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolveTypeName)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x251e3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ResolveTypeName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EnsureArrayContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonArrayContract* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureArrayContract)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x251e8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "EnsureArrayContract", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateList)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x251bf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateList", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HasNoDefinedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonContract*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasNoDefinedType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x251d92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "HasNoDefinedType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EnsureType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Globalization::CultureInfo*,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureType)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x251c628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "EnsureType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetPropertyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::JsonReader*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyValue)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x251f364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "SetPropertyValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CalculatePropertyDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*, ByRef<::Newtonsoft::Json::JsonConverter*>, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ByRef<bool>, ByRef<::System::Object*>,
    ByRef<::Newtonsoft::Json::Serialization::JsonContract*>, ByRef<bool>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CalculatePropertyDetails)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x251f7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CalculatePropertyDetails", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::JsonConverter*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.AddReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::AddReference)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x251fc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "AddReference", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HasFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x251fc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "HasFlag", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ShouldSetPropertyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldSetPropertyValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x251fb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ShouldSetPropertyValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ByRef<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewList)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x251ea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateNewList", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ByRef<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewDictionary)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x251dbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateNewDictionary", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserializing)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x252002c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "OnDeserializing", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserialized)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2520258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "OnDeserialized", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Collections::IDictionary*, ::Newtonsoft::Json::JsonReader*,
                                                                        ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateDictionary)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x2518b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateDictionary", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateMultidimensionalArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateMultidimensionalArray)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x251ecc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateMultidimensionalArray", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ThrowUnexpectedEndException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ThrowUnexpectedEndException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2520484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ThrowUnexpectedEndException", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateList)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x2518614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateList", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializable)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x251dda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateISerializable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateISerializableItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Linq::JToken*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializableItem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x250a30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateISerializableItem", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateObjectUsingCreatorWithParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*,
                                                                        ::StringW)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters)> {
  constexpr static std::size_t size = 0x1b6c;
  constexpr static std::size_t addrs = 0x25205b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateObjectUsingCreatorWithParameters",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.DeserializeConvertable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::DeserializeConvertable)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x251a450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "DeserializeConvertable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ResolvePropertyAndCreatorValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>* (
        ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                            ::Newtonsoft::Json::JsonReader*, ::System::Type*)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolvePropertyAndCreatorValues)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x2522124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ResolvePropertyAndCreatorValues", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, bool)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadForType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x251a294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadForType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW, ByRef<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewObject)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x251d9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateNewObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*,
                                                                        ::Newtonsoft::Json::Serialization::JsonProperty*, ::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateObject)> {
  constexpr static std::size_t size = 0xa28;
  constexpr static std::size_t addrs = 0x25193f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ShouldDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldDeserialize)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2522e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ShouldDeserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CheckPropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::StringW)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CheckPropertyName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x251b3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CheckPropertyName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetExtensionData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2522ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "SetExtensionData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadExtensionDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
                                                                        ::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadExtensionDataValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2522be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadExtensionDataValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EndProcessProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, int32_t, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence, bool)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EndProcessProperty)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2522744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "EndProcessProperty", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetPropertyPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyPresence)> {
  constexpr static std::size_t size = 0x1110;
  constexpr static std::size_t addrs = 0x2523088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "SetPropertyPresence", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                                              ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HandleError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(
    ::Newtonsoft::Json::JsonReader*, bool, int32_t)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HandleError)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x251acf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "HandleError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::New_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(serializer));
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "Populate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, target);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContractSafe(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetContractSafe",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*, false>(this, ___internal_method, type);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, bool checkAdditionalContent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, checkAdditionalContent);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetInternalSerializer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetInternalSerializer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerProxy*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJToken(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                     ::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateJToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, reader, contract);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJObject(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateJObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, reader);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateValueInternal(
    ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
    ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateValueInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CoerceEmptyStringToNull(::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::StringW s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CoerceEmptyStringToNull", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, objectType, contract, s);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetExpectedDescription", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, contract);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetConverter(::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                                      ::Newtonsoft::Json::JsonConverter* memberConverter,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "GetConverter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*, false>(this, ___internal_method, contract, memberConverter, containerContract, containerProperty);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObject(
    ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
    ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* reader, ByRef<::System::Type*> objectType,
                                                                                                       ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* containerMember,
                                                                                                       ::System::Object* existingValue, ByRef<::System::Object*> newValue, ByRef<::StringW> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadMetadataPropertiesToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataProperties(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Type*> objectType,
                                                                                                  ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue,
                                                                                                  ByRef<::System::Object*> newValue, ByRef<::StringW> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadMetadataProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolveTypeName(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Type*> objectType,
                                                                                           ByRef<::Newtonsoft::Json::Serialization::JsonContract*> contract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                           ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::StringW qualifiedTypeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ResolveTypeName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, objectType, contract, member, containerContract, containerMember, qualifiedTypeName);
}
inline ::Newtonsoft::Json::Serialization::JsonArrayContract*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureArrayContract(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "EnsureArrayContract", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonArrayContract*, false>(this, ___internal_method, reader, objectType, contract);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateList(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                   ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Object* existingValue,
                                                                                                   ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateList", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, contract, member, existingValue, id);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* contract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "HasNoDefinedType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contract);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureType(::Newtonsoft::Json::JsonReader* reader, ::System::Object* value,
                                                                                                   ::System::Globalization::CultureInfo* culture,
                                                                                                   ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "EnsureType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, value, culture, contract, targetType);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                            ::Newtonsoft::Json::JsonConverter* propertyConverter,
                                                                                            ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader,
                                                                                            ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "SetPropertyValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, property, propertyConverter, containerContract, containerProperty, reader, target);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CalculatePropertyDetails(
    ::Newtonsoft::Json::Serialization::JsonProperty* property, ByRef<::Newtonsoft::Json::JsonConverter*> propertyConverter, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
    ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target, ByRef<bool> useExistingValue,
    ByRef<::System::Object*> currentValue, ByRef<::Newtonsoft::Json::Serialization::JsonContract*> propertyContract, ByRef<bool> gottenCurrentValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CalculatePropertyDetails", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::JsonConverter*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, property, propertyConverter, containerContract, containerProperty, reader, target, useExistingValue, currentValue,
                                                          propertyContract, gottenCurrentValue);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::AddReference(::Newtonsoft::Json::JsonReader* reader, ::StringW id, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "AddReference", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, id, value);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "HasFlag", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, flag);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ShouldSetPropertyValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, property, value);
}
inline ::System::Collections::IList* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewList(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                  ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                                  ByRef<bool> createdFromNonDefaultCreator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateNewList", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method, reader, contract, createdFromNonDefaultCreator);
}
inline ::System::Collections::IDictionary* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewDictionary(::Newtonsoft::Json::JsonReader* reader,
                                                                                                                              ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                                                                              ByRef<bool> createdFromNonDefaultCreator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateNewDictionary", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, reader, contract, createdFromNonDefaultCreator);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserializing(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                           ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "OnDeserializing", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, contract, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserialized(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                          ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "OnDeserialized", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, contract, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateDictionary(::System::Collections::IDictionary* dictionary, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                           ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateDictionary", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, dictionary, reader, contract, containerProperty, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateMultidimensionalArray(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                                      ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                                                                      ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateMultidimensionalArray", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, list, reader, contract, containerProperty, id);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* reader,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* currentObject,
                                                                                                       ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ThrowUnexpectedEndException", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, contract, currentObject, message);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateList(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateList", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, list, reader, contract, containerProperty, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializable(::Newtonsoft::Json::JsonReader* reader,
                                                                                                            ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateISerializable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, contract, member, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* token, ::System::Type* type,
                                                                                                                ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                                                                                ::Newtonsoft::Json::Serialization::JsonProperty* member) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateISerializableItem", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, token, type, contract, member);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters(
    ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateObjectUsingCreatorWithParameters",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, contract, containerProperty, creator, id);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::DeserializeConvertable(::Newtonsoft::Json::JsonConverter* converter, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                               ::System::Type* objectType, ::System::Object* existingValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "DeserializeConvertable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, converter, reader, objectType, existingValue);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>*
Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty,
                                                                                               ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ResolvePropertyAndCreatorValues", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__CreatorPropertyContext*>*, false>(
      this, ___internal_method, contract, containerProperty, reader, objectType);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadForType(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                       bool hasConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadForType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, contract, hasConverter);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewObject(::Newtonsoft::Json::JsonReader* reader,
                                                                                                        ::Newtonsoft::Json::Serialization::JsonObjectContract* objectContract,
                                                                                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerMember,
                                                                                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::StringW id,
                                                                                                        ByRef<bool> createdFromNonDefaultCreator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CreateNewObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectContract, containerMember, containerProperty, id, createdFromNonDefaultCreator);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateObject(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                                       ::Newtonsoft::Json::Serialization::JsonProperty* member, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "PopulateObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, newObject, reader, contract, member, id);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldDeserialize(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                             ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ShouldDeserialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, property, target);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CheckPropertyName(::Newtonsoft::Json::JsonReader* reader, ::StringW memberName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "CheckPropertyName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, memberName);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader,
                                                                                            ::StringW memberName, ::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "SetExtensionData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contract, member, reader, memberName, o);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                               ::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "ReadExtensionDataValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, contract, member, reader);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EndProcessProperty(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader,
                                                                                              ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, int32_t initialDepth,
                                                                                              ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                              ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence presence,
                                                                                              bool setDefaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "EndProcessProperty", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newObject, reader, contract, initialDepth, property, presence, setDefaultValue);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyPresence(
    ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property,
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*
        requiredProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "SetPropertyPresence", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                                            ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::__JsonSerializerInternalReader__PropertyPresence>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, property, requiredProperties);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HandleError(::Newtonsoft::Json::JsonReader* reader, bool readPastError, int32_t initialDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>::get(), "HandleError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, readPastError, initialDepth);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::JsonSerializerInternalReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
