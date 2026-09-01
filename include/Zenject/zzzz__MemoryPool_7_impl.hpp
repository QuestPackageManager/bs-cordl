#pragma once
// IWYU pragma private; include "Zenject\MemoryPool_7.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__MemoryPool_7_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IFactory_7_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline TValue Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5,
                                                                                                         TParam6 param6) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(),
          { "Spawn", {}, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TValue item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, p3, p4, p5, p6, item);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline TValue Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Zenject_IFactory_TParam1_TParam2_TParam3_TParam4_TParam5_TParam6_TValue__Create(
    TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(),
                          { "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>.Create",
                            {},
                            { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::System::Object* Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>());
}
/// @brief Convert operator to "::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6,
                                                                                                                                 TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*
Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IMemoryPool_7_TParam1_TParam2_TParam3_TParam4_TParam5_TParam6_TValue_() noexcept {
  return static_cast<::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IMemoryPool* Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6,
                                                                                                                              TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*
Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IFactory_7_TParam1_TParam2_TParam3_TParam4_TParam5_TParam6_TValue_() noexcept {
  return static_cast<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IFactory* Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::MemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::MemoryPool_7() {}
