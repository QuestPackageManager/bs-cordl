#pragma once
// IWYU pragma private; include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__SubContainerPrefabBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
#include "Zenject/zzzz__SubContainerPrefabBindingFinalizer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::*)()>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e656fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e6570c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(),
                                                             { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e657ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e657f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerPrefabBindingFinalizer*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerPrefabBindingFinalizer* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set___4__this(::Zenject::SubContainerPrefabBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(),
                                                           { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0() {}
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::*)()>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e65700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e65984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(),
                                                             { "<FinalizeBindingConcrete>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e65a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e65a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorCached*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_containerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr ::Zenject::SubContainerCreatorCached* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_containerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___containerCreator = value;
}
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(),
                                                           { "<FinalizeBindingConcrete>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1::SubContainerPrefabBindingFinalizer___c__DisplayClass5_1() {}
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::*)()>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e65704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0._FinalizeBindingSelf_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e65be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(),
                                                             { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e65c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e65cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerPrefabBindingFinalizer*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::SubContainerPrefabBindingFinalizer* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_set___4__this(::Zenject::SubContainerPrefabBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(),
                                                           { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::*)()>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e65708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1._FinalizeBindingSelf_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e65e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(),
                                                             { "<FinalizeBindingSelf>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e65edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e65f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorCached*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_containerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr ::Zenject::SubContainerCreatorCached* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_containerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___containerCreator;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_set_containerCreator(::Zenject::SubContainerCreatorCached* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___containerCreator = value;
}
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0*& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* const& Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::_FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(),
                                                           { "<FinalizeBindingSelf>b__1", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1* Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1::SubContainerPrefabBindingFinalizer___c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(
    ::Zenject::BindInfo*, ::System::Object*, bool, ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*)>(&::Zenject::SubContainerPrefabBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e59f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e652d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(), { ::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer.FinalizeBindingConcrete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6e6552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(),
                            { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerPrefabBindingFinalizer.FinalizeBindingSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SubContainerPrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(
    &::Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6e65364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr ::System::Object* const& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subIdentifier;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_set__subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subIdentifier = value;
}
constexpr bool& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__resolveAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr bool const& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__resolveAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_set__resolveAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolveAll = value;
}
constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subContainerCreatorFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerCreatorFactory;
}
constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* const& Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_get__subContainerCreatorFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerCreatorFactory;
}
constexpr void Zenject::SubContainerPrefabBindingFinalizer::__cordl_internal_set__subContainerCreatorFactory(::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subContainerCreatorFactory = value;
}
inline void Zenject::SubContainerPrefabBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                               ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* subContainerCreatorFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, subIdentifier, resolveAll, subContainerCreatorFactory);
}
inline void Zenject::SubContainerPrefabBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(),
                                       { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::SubContainerPrefabBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerPrefabBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::Zenject::SubContainerPrefabBindingFinalizer*
Zenject::SubContainerPrefabBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo, ::System::Object* subIdentifier, bool resolveAll,
                                                      ::System::Func_2<::Zenject::DiContainer*, ::Zenject::ISubContainerCreator*>* subContainerCreatorFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SubContainerPrefabBindingFinalizer*>(bindInfo, subIdentifier, resolveAll, subContainerCreatorFactory));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerPrefabBindingFinalizer::SubContainerPrefabBindingFinalizer() {}
