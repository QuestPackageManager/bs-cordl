#pragma once
// IWYU pragma private; include "Zenject\TransientProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__TransientProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TransientProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::TransientProvider___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TransientProvider___c__DisplayClass11_0::*)()>(&::Zenject::TransientProvider___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8d01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider___c__DisplayClass11_0._GetAllInstancesWithInjectSplit_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TransientProvider___c__DisplayClass11_0::*)()>(
    &::Zenject::TransientProvider___c__DisplayClass11_0::_GetAllInstancesWithInjectSplit_b__0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e8d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { "<GetAllInstancesWithInjectSplit>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider___c__DisplayClass11_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::TransientProvider___c__DisplayClass11_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8d124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider___c__DisplayClass11_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::TransientProvider___c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e8d168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::TransientProvider*& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::TransientProvider* const& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_set___4__this(::Zenject::TransientProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Object*& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr ::System::Object* const& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr void Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_set_instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instance = value;
}
constexpr ::System::Type*& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_instanceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceType;
}
constexpr ::System::Type* const& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_instanceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instanceType;
}
constexpr void Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_set_instanceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instanceType = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_extraArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraArgs;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_extraArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraArgs;
}
constexpr void Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_set_extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraArgs = value;
}
constexpr ::Zenject::InjectContext*& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Zenject::InjectContext* const& Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Zenject::TransientProvider___c__DisplayClass11_0::__cordl_internal_set_context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
inline void Zenject::TransientProvider___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::TransientProvider___c__DisplayClass11_0::_GetAllInstancesWithInjectSplit_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { "<GetAllInstancesWithInjectSplit>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::TransientProvider___c__DisplayClass11_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::TransientProvider___c__DisplayClass11_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider___c__DisplayClass11_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::TransientProvider___c__DisplayClass11_0* Zenject::TransientProvider___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TransientProvider___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::TransientProvider___c__DisplayClass11_0::TransientProvider___c__DisplayClass11_0() {}
//  Writing Method size for method: ::Zenject::TransientProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Zenject::TransientProvider::*)(::System::Type*, ::Zenject::DiContainer*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, ::StringW, ::System::Object*,
                                                       ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::TransientProvider::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e8caf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::TransientProvider::*)()>(&::Zenject::TransientProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::TransientProvider::*)()>(&::Zenject::TransientProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e8ccbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::TransientProvider::*)(::Zenject::InjectContext*)>(&::Zenject::TransientProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8cd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TransientProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                              ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::TransientProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6e8cdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::TransientProvider.GetTypeToCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::TransientProvider::*)(::System::Type*)>(&::Zenject::TransientProvider::GetTypeToCreate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e8cdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "GetTypeToCreate", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::TransientProvider::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::TransientProvider::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::TransientProvider::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Type*& Zenject::TransientProvider::__cordl_internal_get__concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteType;
}
constexpr ::System::Type* const& Zenject::TransientProvider::__cordl_internal_get__concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteType;
}
constexpr void Zenject::TransientProvider::__cordl_internal_set__concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____concreteType = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::TransientProvider::__cordl_internal_get__extraArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::TransientProvider::__cordl_internal_get__extraArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr void Zenject::TransientProvider::__cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extraArguments = value;
}
constexpr ::System::Object*& Zenject::TransientProvider::__cordl_internal_get__concreteIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteIdentifier;
}
constexpr ::System::Object* const& Zenject::TransientProvider::__cordl_internal_get__concreteIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteIdentifier;
}
constexpr void Zenject::TransientProvider::__cordl_internal_set__concreteIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____concreteIdentifier = value;
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& Zenject::TransientProvider::__cordl_internal_get__instantiateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& Zenject::TransientProvider::__cordl_internal_get__instantiateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr void Zenject::TransientProvider::__cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantiateCallback = value;
}
inline void Zenject::TransientProvider::_ctor(::System::Type* concreteType, ::Zenject::DiContainer* container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                              ::StringW bindingContext, ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, concreteType, container, extraArguments, bindingContext, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::TransientProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::TransientProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::TransientProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::TransientProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                       ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::System::Type* Zenject::TransientProvider::GetTypeToCreate(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TransientProvider*>(), { "GetTypeToCreate", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, contractType);
}
inline ::Zenject::TransientProvider* Zenject::TransientProvider::New_ctor(::System::Type* concreteType, ::Zenject::DiContainer* container,
                                                                          ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::StringW bindingContext,
                                                                          ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::TransientProvider*>(concreteType, container, extraArguments, bindingContext, concreteIdentifier, instantiateCallback));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::TransientProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::TransientProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::TransientProvider::TransientProvider() {}
