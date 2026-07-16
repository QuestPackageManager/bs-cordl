#pragma once
// IWYU pragma private; include "Zenject/InstantiateCallbackConditionCopyNonLazyBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
template <typename T> constexpr ::System::Action_2<::Zenject::InjectContext*, T>*& Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T>
constexpr ::System::Action_2<::Zenject::InjectContext*, T>* const& Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename T>
constexpr void Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::__cordl_internal_set_callback(::System::Action_2<::Zenject::InjectContext*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename T> inline void Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::_OnInstantiated_b__0(::Zenject::InjectContext* ctx, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>*>(),
                                                           { "<OnInstantiated>b__0", {}, { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, obj);
}
template <typename T> inline ::System::Object* Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename T>
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>* Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1() {}
//  Writing Method size for method: ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5970c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder.OnInstantiated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::ConditionCopyNonLazyBinder* (::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(
        &::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e59714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(),
                                                             { "OnInstantiated", {}, { ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::InstantiateCallbackConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(),
                                                           { "OnInstantiated", {}, { ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, callback);
}
template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated(::System::Action_2<::Zenject::InjectContext*, T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(),
                                                           { "OnInstantiated", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Action_2<::Zenject::InjectContext*, T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*>(this, ___internal_method, callback);
}
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::InstantiateCallbackConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::InstantiateCallbackConditionCopyNonLazyBinder() {}
