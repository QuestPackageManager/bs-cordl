#pragma once
// IWYU pragma private; include "Zenject/PrefabResourceBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PrefabResourceBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PrefabInstantiatorCached_def.hpp"
#include "Zenject/zzzz__PrefabResourceBindingFinalizer_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::*)()>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e61db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e61dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(),
                                                             { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e61ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e61f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabResourceBindingFinalizer*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::PrefabResourceBindingFinalizer* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set___4__this(::Zenject::PrefabResourceBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_concreteTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteTypes;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_concreteTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteTypes;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteTypes = value;
}
inline void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(),
                                                           { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0::PrefabResourceBindingFinalizer___c__DisplayClass5_0() {}
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::*)()>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e61db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e620ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(),
                                                             { "<FinalizeBindingConcrete>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e620f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e62134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiatorCached*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_prefabCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr ::Zenject::PrefabInstantiatorCached* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_prefabCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefabCreator = value;
}
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(),
                                                           { "<FinalizeBindingConcrete>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass5_1::PrefabResourceBindingFinalizer___c__DisplayClass5_1() {}
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::*)()>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e61dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0._FinalizeBindingSelf_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e622c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(),
                                                             { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e623dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e62420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabResourceBindingFinalizer*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::PrefabResourceBindingFinalizer* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__cordl_internal_set___4__this(::Zenject::PrefabResourceBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(),
                                                           { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0::PrefabResourceBindingFinalizer___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::*)()>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e61dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1._FinalizeBindingSelf_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e625b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(),
                                                             { "<FinalizeBindingSelf>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e625f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e6263c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiatorCached*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_prefabCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr ::Zenject::PrefabInstantiatorCached* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_prefabCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefabCreator = value;
}
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0*& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0* const& Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::_FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(),
                                                           { "<FinalizeBindingSelf>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1* Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabResourceBindingFinalizer___c__DisplayClass6_1::PrefabResourceBindingFinalizer___c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::BindInfo*, ::Zenject::GameObjectCreationParameters*, ::StringW,
                                                                                                           ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*)>(
    &::Zenject::PrefabResourceBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e61700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::PrefabResourceBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e6170c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(), { ::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer.FinalizeBindingConcrete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(
    &::Zenject::PrefabResourceBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6e61aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(),
                            { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabResourceBindingFinalizer.FinalizeBindingSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabResourceBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::PrefabResourceBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6e617a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::PrefabResourceBindingFinalizer::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::PrefabResourceBindingFinalizer::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::PrefabResourceBindingFinalizer::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectBindInfo = value;
}
constexpr ::StringW& Zenject::PrefabResourceBindingFinalizer::__cordl_internal_get__resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr ::StringW const& Zenject::PrefabResourceBindingFinalizer::__cordl_internal_get__resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourcePath;
}
constexpr void Zenject::PrefabResourceBindingFinalizer::__cordl_internal_set__resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resourcePath = value;
}
constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& Zenject::PrefabResourceBindingFinalizer::__cordl_internal_get__providerFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* const& Zenject::PrefabResourceBindingFinalizer::__cordl_internal_get__providerFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr void Zenject::PrefabResourceBindingFinalizer::__cordl_internal_set__providerFactory(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providerFactory = value;
}
inline void Zenject::PrefabResourceBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath,
                                                           ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, gameObjectBindInfo, resourcePath, providerFactory);
}
inline void Zenject::PrefabResourceBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::PrefabResourceBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(),
                                       { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::PrefabResourceBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::Zenject::PrefabResourceBindingFinalizer*
Zenject::PrefabResourceBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath,
                                                  ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabResourceBindingFinalizer*>(bindInfo, gameObjectBindInfo, resourcePath, providerFactory));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabResourceBindingFinalizer::PrefabResourceBindingFinalizer() {}
