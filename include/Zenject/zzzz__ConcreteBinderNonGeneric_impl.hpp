#pragma once
// IWYU pragma private; include "Zenject/ConcreteBinderNonGeneric.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_impl.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConventionSelectTypesBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConcreteBinderNonGeneric::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(
    &::Zenject::ConcreteBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e472fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.ToSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)()>(&::Zenject::ConcreteBinderNonGeneric::ToSelf)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e47308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "ToSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.To
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)(::ArrayW<::System::Type*>)>(
    &::Zenject::ConcreteBinderNonGeneric::To)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e47440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "To", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.To
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(
    &::Zenject::ConcreteBinderNonGeneric::To)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e47444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(),
                                                                                           { "To", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.To
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*)>(
    &::Zenject::ConcreteBinderNonGeneric::To)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e47578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "To", {}, { ::i2c::type_of<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric._ToSelf_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::ConcreteBinderNonGeneric::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::ConcreteBinderNonGeneric::_ToSelf_b__1_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e47954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "<ToSelf>b__1_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::ConcreteBinderNonGeneric::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "ToSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method);
}
template <typename TConcrete> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "To", { ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To(::ArrayW<::System::Type*> concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "To", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, concreteTypes);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "To", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, concreteTypes);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(), { "To", {}, { ::i2c::type_of<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, generator);
}
inline ::Zenject::IProvider* Zenject::ConcreteBinderNonGeneric::_ToSelf_b__1_0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteBinderNonGeneric*>(),
                                                                                         { "<ToSelf>b__1_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConcreteBinderNonGeneric*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
constexpr ::Zenject::ConcreteBinderNonGeneric::ConcreteBinderNonGeneric() {}
