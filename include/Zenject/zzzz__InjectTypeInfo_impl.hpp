#pragma once
// IWYU pragma private; include "Zenject/InjectTypeInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectableInfo_impl.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__ZenFactoryMethod_def.hpp"
#include "Zenject/zzzz__ZenInjectMethod_def.hpp"
#include "Zenject/zzzz__ZenMemberSetterMethod_def.hpp"
//  Writing Method size for method: ::Zenject::InjectTypeInfo_InjectMemberInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectTypeInfo_InjectMemberInfo::*)(::Zenject::ZenMemberSetterMethod*, ::Zenject::InjectableInfo*)>(
    &::Zenject::InjectTypeInfo_InjectMemberInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo_InjectMemberInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::ZenMemberSetterMethod*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ZenMemberSetterMethod*& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Setter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
constexpr ::Zenject::ZenMemberSetterMethod* const& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Setter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
constexpr void Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_set_Setter(::Zenject::ZenMemberSetterMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Setter = value;
}
constexpr ::Zenject::InjectableInfo*& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Info;
}
constexpr ::Zenject::InjectableInfo* const& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Info;
}
constexpr void Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_set_Info(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Info = value;
}
inline void Zenject::InjectTypeInfo_InjectMemberInfo::_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo_InjectMemberInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::ZenMemberSetterMethod*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setter, info);
}
inline ::Zenject::InjectTypeInfo_InjectMemberInfo* Zenject::InjectTypeInfo_InjectMemberInfo::New_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectTypeInfo_InjectMemberInfo*>(setter, info));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo_InjectMemberInfo::InjectTypeInfo_InjectMemberInfo() {}
//  Writing Method size for method: ::Zenject::InjectTypeInfo_InjectConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectTypeInfo_InjectConstructorInfo::*)(::Zenject::ZenFactoryMethod*, ::ArrayW<::Zenject::InjectableInfo*>)>(
    &::Zenject::InjectTypeInfo_InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::ZenFactoryMethod*>(), ::i2c::type_of<::ArrayW<::Zenject::InjectableInfo*>>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ZenFactoryMethod*& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Factory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Factory;
}
constexpr ::Zenject::ZenFactoryMethod* const& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Factory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Factory;
}
constexpr void Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_set_Factory(::Zenject::ZenFactoryMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Factory = value;
}
constexpr ::ArrayW<::Zenject::InjectableInfo*>& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::ArrayW<::Zenject::InjectableInfo*> const& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Parameters = value;
}
inline void Zenject::InjectTypeInfo_InjectConstructorInfo::_ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::ZenFactoryMethod*>(), ::i2c::type_of<::ArrayW<::Zenject::InjectableInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory, parameters);
}
inline ::Zenject::InjectTypeInfo_InjectConstructorInfo* Zenject::InjectTypeInfo_InjectConstructorInfo::New_ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*> parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(factory, parameters));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo::InjectTypeInfo_InjectConstructorInfo() {}
//  Writing Method size for method: ::Zenject::InjectTypeInfo_InjectMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectTypeInfo_InjectMethodInfo::*)(::Zenject::ZenInjectMethod*, ::ArrayW<::Zenject::InjectableInfo*>, ::StringW)>(
    &::Zenject::InjectTypeInfo_InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3a8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo_InjectMethodInfo*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::ZenInjectMethod*>(), ::i2c::type_of<::ArrayW<::Zenject::InjectableInfo*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::Zenject::ZenInjectMethod*& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr ::Zenject::ZenInjectMethod* const& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr void Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_set_Action(::Zenject::ZenInjectMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Action = value;
}
constexpr ::ArrayW<::Zenject::InjectableInfo*>& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::ArrayW<::Zenject::InjectableInfo*> const& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Parameters = value;
}
inline void Zenject::InjectTypeInfo_InjectMethodInfo::_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*> parameters, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo_InjectMethodInfo*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Zenject::ZenInjectMethod*>(), ::i2c::type_of<::ArrayW<::Zenject::InjectableInfo*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, parameters, name);
}
inline ::Zenject::InjectTypeInfo_InjectMethodInfo* Zenject::InjectTypeInfo_InjectMethodInfo::New_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*> parameters,
                                                                                                      ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectTypeInfo_InjectMethodInfo*>(action, parameters, name));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo_InjectMethodInfo::InjectTypeInfo_InjectMethodInfo() {}
//  Writing Method size for method: ::Zenject::InjectTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectTypeInfo::*)(
    ::System::Type*, ::Zenject::InjectTypeInfo_InjectConstructorInfo*, ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*>, ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*>)>(
    &::Zenject::InjectTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(),
                                             ::i2c::type_of<::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*>>(), ::i2c::type_of<::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo.get_BaseTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (::Zenject::InjectTypeInfo::*)()>(&::Zenject::InjectTypeInfo::get_BaseTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "get_BaseTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo.set_BaseTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectTypeInfo::*)(::Zenject::InjectTypeInfo*)>(&::Zenject::InjectTypeInfo::set_BaseTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "set_BaseTypeInfo", {}, { ::i2c::type_of<::Zenject::InjectTypeInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo.get_AllInjectables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* (::Zenject::InjectTypeInfo::*)()>(
    &::Zenject::InjectTypeInfo::get_AllInjectables)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6e3a6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "get_AllInjectables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo._get_AllInjectables_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectableInfo* (*)(::Zenject::InjectTypeInfo_InjectMemberInfo*)>(&::Zenject::InjectTypeInfo::_get_AllInjectables_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3a88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "<get_AllInjectables>b__0", {}, { ::i2c::type_of<::Zenject::InjectTypeInfo_InjectMemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo._get_AllInjectables_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* (*)(::Zenject::InjectTypeInfo_InjectMethodInfo*)>(
    &::Zenject::InjectTypeInfo::_get_AllInjectables_b__1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3a8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "<get_AllInjectables>b__1", {}, { ::i2c::type_of<::Zenject::InjectTypeInfo_InjectMethodInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::InjectTypeInfo::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::System::Type* const& Zenject::InjectTypeInfo::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*>& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*> const& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_InjectMethods(::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectMethods = value;
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*>& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMembers;
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*> const& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMembers;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_InjectMembers(::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectMembers = value;
}
constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo*& Zenject::InjectTypeInfo::__cordl_internal_get_InjectConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo* const& Zenject::InjectTypeInfo::__cordl_internal_get_InjectConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_InjectConstructor(::Zenject::InjectTypeInfo_InjectConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectConstructor = value;
}
constexpr ::Zenject::InjectTypeInfo*& Zenject::InjectTypeInfo::__cordl_internal_get__BaseTypeInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTypeInfo_k__BackingField;
}
constexpr ::Zenject::InjectTypeInfo* const& Zenject::InjectTypeInfo::__cordl_internal_get__BaseTypeInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTypeInfo_k__BackingField;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set__BaseTypeInfo_k__BackingField(::Zenject::InjectTypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BaseTypeInfo_k__BackingField = value;
}
inline void Zenject::InjectTypeInfo::setStaticF_CS$__9__CachedAnonymousMethodDelegate2(::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>*, "CS$<>9__CachedAnonymousMethodDelegate2", ::Zenject::InjectTypeInfo*>(
      std::forward<::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>*>(value));
}
inline ::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::getStaticF_CS$__9__CachedAnonymousMethodDelegate2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>*, "CS$<>9__CachedAnonymousMethodDelegate2",
                                           ::Zenject::InjectTypeInfo*>();
}
inline void Zenject::InjectTypeInfo::setStaticF_CS$__9__CachedAnonymousMethodDelegate3(
    ::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*,
                                    "CS$<>9__CachedAnonymousMethodDelegate3", ::Zenject::InjectTypeInfo*>(
      std::forward<::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*>(value));
}
inline ::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*
Zenject::InjectTypeInfo::getStaticF_CS$__9__CachedAnonymousMethodDelegate3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*,
                                           "CS$<>9__CachedAnonymousMethodDelegate3", ::Zenject::InjectTypeInfo*>();
}
inline void Zenject::InjectTypeInfo::_ctor(::System::Type* type, ::Zenject::InjectTypeInfo_InjectConstructorInfo* injectConstructor,
                                           ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*> injectMethods, ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*> injectMembers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(),
                                           ::i2c::type_of<::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*>>(), ::i2c::type_of<::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, injectConstructor, injectMethods, injectMembers);
}
inline ::Zenject::InjectTypeInfo* Zenject::InjectTypeInfo::get_BaseTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "get_BaseTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(this, ___internal_method);
}
inline void Zenject::InjectTypeInfo::set_BaseTypeInfo(::Zenject::InjectTypeInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "set_BaseTypeInfo", {}, { ::i2c::type_of<::Zenject::InjectTypeInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::get_AllInjectables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "get_AllInjectables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>(this, ___internal_method);
}
inline ::Zenject::InjectableInfo* Zenject::InjectTypeInfo::_get_AllInjectables_b__0(::Zenject::InjectTypeInfo_InjectMemberInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "<get_AllInjectables>b__0", {}, { ::i2c::type_of<::Zenject::InjectTypeInfo_InjectMemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*>(nullptr, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::_get_AllInjectables_b__1(::Zenject::InjectTypeInfo_InjectMethodInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectTypeInfo*>(), { "<get_AllInjectables>b__1", {}, { ::i2c::type_of<::Zenject::InjectTypeInfo_InjectMethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>(nullptr, ___internal_method, x);
}
inline ::Zenject::InjectTypeInfo* Zenject::InjectTypeInfo::New_ctor(::System::Type* type, ::Zenject::InjectTypeInfo_InjectConstructorInfo* injectConstructor,
                                                                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*> injectMethods,
                                                                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*> injectMembers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectTypeInfo*>(type, injectConstructor, injectMethods, injectMembers));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo::InjectTypeInfo() {}
