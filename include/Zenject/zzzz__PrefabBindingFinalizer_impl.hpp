#pragma once
// IWYU pragma private; include "Zenject\PrefabBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PrefabBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PrefabBindingFinalizer_def.hpp"
#include "Zenject/zzzz__PrefabInstantiatorCached_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e63998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e64264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(),
                                                             { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e643c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabBindingFinalizer*& Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::PrefabBindingFinalizer* const& Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set___4__this(::Zenject::PrefabBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_concreteTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteTypes;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_concreteTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteTypes;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteTypes = value;
}
inline void Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(),
                                                           { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0::PrefabBindingFinalizer___c__DisplayClass5_0() {}
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e64088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(),
                                                             { "<FinalizeBindingConcrete>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e6459c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e645e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiatorCached*& Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_prefabCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr ::Zenject::PrefabInstantiatorCached* const& Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_prefabCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefabCreator = value;
}
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0*& Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* const& Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Zenject::PrefabBindingFinalizer___c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(),
                                                           { "<FinalizeBindingConcrete>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1* Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass5_1::PrefabBindingFinalizer___c__DisplayClass5_1() {}
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e6408c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0._FinalizeBindingSelf_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e64774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(),
                                                             { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e648d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabBindingFinalizer*& Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::PrefabBindingFinalizer* const& Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_set___4__this(::Zenject::PrefabBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(),
                                                           { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0::PrefabBindingFinalizer___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e64260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1._FinalizeBindingSelf_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(),
                                                             { "<FinalizeBindingSelf>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e64af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::PrefabInstantiatorCached*& Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_prefabCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr ::Zenject::PrefabInstantiatorCached* const& Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_prefabCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefabCreator;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefabCreator = value;
}
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0*& Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* const& Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::Zenject::PrefabBindingFinalizer___c__DisplayClass6_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::_FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(),
                                                           { "<FinalizeBindingSelf>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1* Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::PrefabBindingFinalizer___c__DisplayClass6_1::PrefabBindingFinalizer___c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::BindInfo*, ::Zenject::GameObjectCreationParameters*, ::UnityEngine::Object*,
                                                                                                   ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*)>(
    &::Zenject::PrefabBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e632c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                    ::i2c::type_of<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::PrefabBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e632d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(), { ::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer.FinalizeBindingConcrete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(
    &::Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6e63680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(),
                            { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabBindingFinalizer.FinalizeBindingSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::PrefabBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6e6336c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::PrefabBindingFinalizer::__cordl_internal_get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::PrefabBindingFinalizer::__cordl_internal_get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::PrefabBindingFinalizer::__cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectBindInfo = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Zenject::PrefabBindingFinalizer::__cordl_internal_get__prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
constexpr ::UnityW<::UnityEngine::Object> const& Zenject::PrefabBindingFinalizer::__cordl_internal_get__prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
constexpr void Zenject::PrefabBindingFinalizer::__cordl_internal_set__prefab(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefab = value;
}
constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& Zenject::PrefabBindingFinalizer::__cordl_internal_get__providerFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* const& Zenject::PrefabBindingFinalizer::__cordl_internal_get__providerFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr void Zenject::PrefabBindingFinalizer::__cordl_internal_set__providerFactory(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providerFactory = value;
}
inline void Zenject::PrefabBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::UnityEngine::Object* prefab,
                                                   ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                  ::i2c::type_of<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, gameObjectBindInfo, prefab, providerFactory);
}
inline void Zenject::PrefabBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(),
                                       { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::PrefabBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::Zenject::PrefabBindingFinalizer* Zenject::PrefabBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                    ::UnityEngine::Object* prefab,
                                                                                    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabBindingFinalizer*>(bindInfo, gameObjectBindInfo, prefab, providerFactory));
}
// Ctor Parameters []
constexpr ::Zenject::PrefabBindingFinalizer::PrefabBindingFinalizer() {}
