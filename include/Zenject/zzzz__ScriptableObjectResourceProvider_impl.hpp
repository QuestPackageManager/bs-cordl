#pragma once
// IWYU pragma private; include "Zenject\ScriptableObjectResourceProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectResourceProvider_def.hpp"
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
#include "Zenject/zzzz__ScriptableObjectResourceProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::*)()>(
    &::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0._GetAllInstancesWithInjectSplit_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::*)()>(
    &::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::_GetAllInstancesWithInjectSplit_b__0)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6e8a0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(), { "<GetAllInstancesWithInjectSplit>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e8a27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e8a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_set_buffer(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr ::Zenject::ScriptableObjectResourceProvider*& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::ScriptableObjectResourceProvider* const& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_set___4__this(::Zenject::ScriptableObjectResourceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___args = value;
}
constexpr ::Zenject::InjectContext*& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Zenject::InjectContext* const& Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__cordl_internal_set_context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
inline void Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::_GetAllInstancesWithInjectSplit_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(), { "<GetAllInstancesWithInjectSplit>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0* Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ScriptableObjectResourceProvider___c__DisplayClass13_0::ScriptableObjectResourceProvider___c__DisplayClass13_0() {}
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScriptableObjectResourceProvider::*)(
    ::StringW, ::System::Type*, ::Zenject::DiContainer*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, bool, ::System::Object*,
    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::ScriptableObjectResourceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e89d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ScriptableObjectResourceProvider::*)()>(&::Zenject::ScriptableObjectResourceProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e89e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(), { "get_IsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ScriptableObjectResourceProvider::*)()>(&::Zenject::ScriptableObjectResourceProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e89e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::ScriptableObjectResourceProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::ScriptableObjectResourceProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e89e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectResourceProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScriptableObjectResourceProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::by_ref<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::ScriptableObjectResourceProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6e89e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Type*& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__resourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceType;
}
constexpr ::System::Type* const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__resourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceType;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__resourceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resourceType = value;
}
constexpr ::StringW& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr ::StringW const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resourcePath = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__extraArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__extraArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extraArguments = value;
}
constexpr bool& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__createNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNew;
}
constexpr bool const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__createNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNew;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__createNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createNew = value;
}
constexpr ::System::Object*& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__concreteIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteIdentifier;
}
constexpr ::System::Object* const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__concreteIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteIdentifier;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__concreteIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____concreteIdentifier = value;
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__instantiateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& Zenject::ScriptableObjectResourceProvider::__cordl_internal_get__instantiateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr void Zenject::ScriptableObjectResourceProvider::__cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantiateCallback = value;
}
inline void Zenject::ScriptableObjectResourceProvider::_ctor(::StringW resourcePath, ::System::Type* resourceType, ::Zenject::DiContainer* container,
                                                             ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, bool createNew,
                                                             ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourcePath, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::ScriptableObjectResourceProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(), { "get_IsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::ScriptableObjectResourceProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(), { "get_TypeVariesBasedOnMemberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Zenject::ScriptableObjectResourceProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(), { "GetInstanceType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline void Zenject::ScriptableObjectResourceProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                      ::by_ref<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectResourceProvider*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Action*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::ScriptableObjectResourceProvider* Zenject::ScriptableObjectResourceProvider::New_ctor(::StringW resourcePath, ::System::Type* resourceType, ::Zenject::DiContainer* container,
                                                                                                        ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                                                        bool createNew, ::System::Object* concreteIdentifier,
                                                                                                        ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::ScriptableObjectResourceProvider*>(resourcePath, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::ScriptableObjectResourceProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::ScriptableObjectResourceProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::ScriptableObjectResourceProvider::ScriptableObjectResourceProvider() {}
