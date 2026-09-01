#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonDynamicContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDynamicContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPropertyCollection_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonPropertyCollection* (::Newtonsoft::Json::Serialization::JsonDynamicContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonDynamicContract::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d42e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.get_PropertyNameResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::StringW, ::StringW>* (::Newtonsoft::Json::Serialization::JsonDynamicContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonDynamicContract::get_PropertyNameResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d42e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "get_PropertyNameResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.set_PropertyNameResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonDynamicContract::*)(::System::Func_2<::StringW, ::StringW>*)>(
    &::Newtonsoft::Json::Serialization::JsonDynamicContract::set_PropertyNameResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d42e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                                                                                           { "set_PropertyNameResolver", {}, { ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.CreateCallSiteGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>* (*)(::StringW)>(
        &::Newtonsoft::Json::Serialization::JsonDynamicContract::CreateCallSiteGetter)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d42e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "CreateCallSiteGetter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.CreateCallSiteSetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>* (*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonDynamicContract::CreateCallSiteSetter)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d42f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "CreateCallSiteSetter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonDynamicContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonDynamicContract::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5d3d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.TryGetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonDynamicContract::*)(
    ::System::Dynamic::IDynamicMetaObjectProvider*, ::StringW, ::by_ref<::System::Object*>)>(&::Newtonsoft::Json::Serialization::JsonDynamicContract::TryGetMember)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d43080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                            { "TryGetMember", {}, { ::i2c::type_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonDynamicContract.TrySetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonDynamicContract::*)(::System::Dynamic::IDynamicMetaObjectProvider*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonDynamicContract::TrySetMember)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d4318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                            { "TrySetMember", {}, { ::i2c::type_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__Properties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection* const& Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__Properties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_set__Properties_k__BackingField(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Properties_k__BackingField = value;
}
constexpr ::System::Func_2<::StringW, ::StringW>*& Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__PropertyNameResolver_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyNameResolver_k__BackingField;
}
constexpr ::System::Func_2<::StringW, ::StringW>* const& Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__PropertyNameResolver_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyNameResolver_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_set__PropertyNameResolver_k__BackingField(::System::Func_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PropertyNameResolver_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
    ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>*&
Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__callSiteGetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callSiteGetters;
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
    ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>* const&
Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__callSiteGetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callSiteGetters;
}
constexpr void Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_set__callSiteGetters(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
        ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callSiteGetters = value;
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
    ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>*&
Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__callSiteSetters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callSiteSetters;
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
    ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>* const&
Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_get__callSiteSetters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callSiteSetters;
}
constexpr void Newtonsoft::Json::Serialization::JsonDynamicContract::__cordl_internal_set__callSiteSetters(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
        ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callSiteSetters = value;
}
inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Newtonsoft::Json::Serialization::JsonDynamicContract::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(this, ___internal_method);
}
inline ::System::Func_2<::StringW, ::StringW>* Newtonsoft::Json::Serialization::JsonDynamicContract::get_PropertyNameResolver() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "get_PropertyNameResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::StringW, ::StringW>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonDynamicContract::set_PropertyNameResolver(::System::Func_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                                                                                         { "set_PropertyNameResolver", {}, { ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*
Newtonsoft::Json::Serialization::JsonDynamicContract::CreateCallSiteGetter(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "CreateCallSiteGetter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>(
      nullptr, ___internal_method, name);
}
inline ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*
Newtonsoft::Json::Serialization::JsonDynamicContract::CreateCallSiteSetter(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { "CreateCallSiteSetter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>(
      nullptr, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::JsonDynamicContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, underlyingType);
}
inline bool Newtonsoft::Json::Serialization::JsonDynamicContract::TryGetMember(::System::Dynamic::IDynamicMetaObjectProvider* dynamicProvider, ::StringW name, ::by_ref<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                          { "TryGetMember", {}, { ::i2c::type_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dynamicProvider, name, value);
}
inline bool Newtonsoft::Json::Serialization::JsonDynamicContract::TrySetMember(::System::Dynamic::IDynamicMetaObjectProvider* dynamicProvider, ::StringW name, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(),
                          { "TrySetMember", {}, { ::i2c::type_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dynamicProvider, name, value);
}
inline ::Newtonsoft::Json::Serialization::JsonDynamicContract* Newtonsoft::Json::Serialization::JsonDynamicContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonDynamicContract::JsonDynamicContract() {}
