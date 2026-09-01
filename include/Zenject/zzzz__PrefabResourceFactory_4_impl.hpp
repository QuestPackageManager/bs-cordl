#pragma once
// IWYU pragma private; include "Zenject\PrefabResourceFactory_4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabResourceFactory_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_5_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename P1, typename P2, typename P3, typename T> constexpr ::Zenject::DiContainer*& Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename P3, typename T> constexpr ::Zenject::DiContainer* const& Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename P3, typename T> constexpr void Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
template <typename P1, typename P2, typename P3, typename T> inline ::Zenject::DiContainer* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename T> inline T Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::Create(::StringW prefabResourceName, P1 param, P2 param2, P3 param3) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefabResourceName, param, param2, param3);
}
template <typename P1, typename P2, typename P3, typename T> inline void Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename T> inline ::System::Object* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename P1, typename P2, typename P3, typename T> inline void Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>(),
                                                                                         { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename P1, typename P2, typename P3, typename T> inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename T> inline ::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>());
}
/// @brief Convert operator to "::Zenject::IFactory_5<::StringW,P1,P2,P3,T>"
template <typename P1, typename P2, typename P3, typename T> constexpr Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::operator ::Zenject::IFactory_5<::StringW, P1, P2, P3, T>*() noexcept {
  return static_cast<::Zenject::IFactory_5<::StringW, P1, P2, P3, T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_5<::StringW,P1,P2,P3,T>"
template <typename P1, typename P2, typename P3, typename T>
constexpr ::Zenject::IFactory_5<::StringW, P1, P2, P3, T>* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::i___Zenject__IFactory_5___StringW_P1_P2_P3_T_() noexcept {
  return static_cast<::Zenject::IFactory_5<::StringW, P1, P2, P3, T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename P1, typename P2, typename P3, typename T> constexpr Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename P1, typename P2, typename P3, typename T> constexpr ::Zenject::IFactory* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename P1, typename P2, typename P3, typename T> constexpr ::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::PrefabResourceFactory_4() {}
