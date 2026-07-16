#pragma once
// IWYU pragma private; include "Zenject/ScopableBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__ScopableBindingFinalizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ScopableBindingFinalizer_def.hpp"
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::*)()>(&::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e63fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0._FinalizeBindingConcrete_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e63ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(),
                                                             { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e6406c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ScopableBindingFinalizer*& Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::ScopableBindingFinalizer* const& Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__cordl_internal_set___4__this(::Zenject::ScopableBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(),
                                                           { "<FinalizeBindingConcrete>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0* Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0::ScopableBindingFinalizer___c__DisplayClass3_0() {}
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::*)()>(&::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e63ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0._FinalizeBindingSelf_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e64200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(),
                                                             { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e64234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e64278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ScopableBindingFinalizer*& Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::ScopableBindingFinalizer* const& Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__cordl_internal_set___4__this(::Zenject::ScopableBindingFinalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::DiContainer*& Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(),
                                                           { "<FinalizeBindingSelf>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0* Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0::ScopableBindingFinalizer___c__DisplayClass4_0() {}
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(
    ::Zenject::BindInfo*, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*)>(&::Zenject::ScopableBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e63cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer.OnFinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::ScopableBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e63cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(), { ::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer.FinalizeBindingConcrete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(
    &::Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e63ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(),
                            { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer.FinalizeBindingSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::ScopableBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e63d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*& Zenject::ScopableBindingFinalizer::__cordl_internal_get__providerFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* const& Zenject::ScopableBindingFinalizer::__cordl_internal_get__providerFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providerFactory;
}
constexpr void Zenject::ScopableBindingFinalizer::__cordl_internal_set__providerFactory(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providerFactory = value;
}
inline void Zenject::ScopableBindingFinalizer::_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, providerFactory);
}
inline void Zenject::ScopableBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(),
                                       { "FinalizeBindingConcrete", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, concreteTypes);
}
inline void Zenject::ScopableBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopableBindingFinalizer*>(), { "FinalizeBindingSelf", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::Zenject::ScopableBindingFinalizer* Zenject::ScopableBindingFinalizer::New_ctor(::Zenject::BindInfo* bindInfo,
                                                                                        ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScopableBindingFinalizer*>(bindInfo, providerFactory));
}
// Ctor Parameters []
constexpr ::Zenject::ScopableBindingFinalizer::ScopableBindingFinalizer() {}
