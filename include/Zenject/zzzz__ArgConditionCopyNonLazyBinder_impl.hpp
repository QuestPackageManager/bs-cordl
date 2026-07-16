#pragma once
// IWYU pragma private; include "Zenject/ArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::ArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ArgConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(&::Zenject::ArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e46dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ArgConditionCopyNonLazyBinder.WithArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* (::Zenject::ArgConditionCopyNonLazyBinder::*)(::ArrayW<::System::Object*>)>(
    &::Zenject::ArgConditionCopyNonLazyBinder::WithArguments)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e46df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(), { "WithArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ArgConditionCopyNonLazyBinder.WithArgumentsExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* (
    ::Zenject::ArgConditionCopyNonLazyBinder::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*)>(&::Zenject::ArgConditionCopyNonLazyBinder::WithArgumentsExplicit)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x6e46f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(),
                                                             { "WithArgumentsExplicit", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::ArgConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
template <typename T> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(T param) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(), { "WithArguments", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, param);
}
template <typename TParam1, typename TParam2> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(TParam1 param1, TParam2 param2) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(),
                                                           { "WithArguments", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() }, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, param1, param2);
}
template <typename TParam1, typename TParam2, typename TParam3>
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(TParam1 param1, TParam2 param2, TParam3 param3) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(), { "WithArguments",
                                                                                                              { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() },
                                                                                                              { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(),
                                                           { "WithArguments",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() },
                                                             { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, param1, param2, param3, param4);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(),
                                              { "WithArguments",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() },
                                                { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                                     ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, param1, param2, param3, param4, param5);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5,
                                                                                                                       TParam6 param6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(),
                          { "WithArguments",
                            { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() },
                            { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::WithArguments(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(), { "WithArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, args);
}
inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*
Zenject::ArgConditionCopyNonLazyBinder::WithArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArgConditionCopyNonLazyBinder*>(),
                                                           { "WithArgumentsExplicit", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*>(this, ___internal_method, extraArgs);
}
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::ArgConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ArgConditionCopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::ArgConditionCopyNonLazyBinder::ArgConditionCopyNonLazyBinder() {}
