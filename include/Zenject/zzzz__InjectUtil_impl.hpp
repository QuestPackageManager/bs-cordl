#pragma once
// IWYU pragma private; include "Zenject/InjectUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectUtil_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectUtil_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::InjectUtil___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectUtil___c::*)()>(&::Zenject::InjectUtil___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e692e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectUtil___c._CreateArgList_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::TypeValuePair (::Zenject::InjectUtil___c::*)(::System::Object*)>(&::Zenject::InjectUtil___c::_CreateArgList_b__0_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e692e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { "<CreateArgList>b__0_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectUtil___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::InjectUtil___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e69310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectUtil___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::InjectUtil___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e69354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::InjectUtil___c::setStaticF___9(::Zenject::InjectUtil___c* value) {
  ::cordl_internals::setStaticField<::Zenject::InjectUtil___c*, "<>9", ::Zenject::InjectUtil___c*>(std::forward<::Zenject::InjectUtil___c*>(value));
}
inline ::Zenject::InjectUtil___c* Zenject::InjectUtil___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::InjectUtil___c*, "<>9", ::Zenject::InjectUtil___c*>();
}
inline void Zenject::InjectUtil___c::setStaticF___9__0_0(::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>*, "<>9__0_0", ::Zenject::InjectUtil___c*>(
      std::forward<::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>*>(value));
}
inline ::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>* Zenject::InjectUtil___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>*, "<>9__0_0", ::Zenject::InjectUtil___c*>();
}
inline void Zenject::InjectUtil___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::TypeValuePair Zenject::InjectUtil___c::_CreateArgList_b__0_0(::System::Object* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { "<CreateArgList>b__0_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::TypeValuePair>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::InjectUtil___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::InjectUtil___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::InjectUtil___c* Zenject::InjectUtil___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectUtil___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::InjectUtil___c::InjectUtil___c() {}
//  Writing Method size for method: ::Zenject::InjectUtil.CreateArgList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::InjectUtil::CreateArgList)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e68fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "CreateArgList", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectUtil.PopValueWithType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::System::Type*, ::by_ref<::System::Object*>)>(
    &::Zenject::InjectUtil::PopValueWithType)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e69140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "PopValueWithType",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                            ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgList(::System::Collections::Generic::IEnumerable_1<::System::Object*>* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "CreateArgList", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, args);
}
template <typename T> inline ::Zenject::TypeValuePair Zenject::InjectUtil::CreateTypePair(T param) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "CreateTypePair", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::TypeValuePair>(nullptr, ___internal_method, param);
}
template <typename T> inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgListExplicit(T param) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "CreateArgListExplicit", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, param);
}
template <typename TParam1, typename TParam2> inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgListExplicit(TParam1 param1, TParam2 param2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(),
                                              { "CreateArgListExplicit", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() }, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, param1, param2);
}
template <typename TParam1, typename TParam2, typename TParam3>
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "CreateArgListExplicit",
                                                                                                        { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() },
                                                                                                        { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "CreateArgListExplicit",
                                                                                    { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() },
                                                                                    { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, param1, param2, param3, param4);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(),
                                              { "CreateArgListExplicit",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() },
                                                { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                                     ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, param1, param2, param3, param4, param5);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::InjectUtil::CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5,
                                                                                                                    TParam6 param6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(),
                          { "CreateArgListExplicit",
                            { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() },
                            { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, param1, param2, param3, param4, param5, param6);
}
inline bool Zenject::InjectUtil::PopValueWithType(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgMap, ::System::Type* injectedFieldType, ::by_ref<::System::Object*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectUtil*>(), { "PopValueWithType",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                          ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, extraArgMap, injectedFieldType, value);
}
// Ctor Parameters []
constexpr ::Zenject::InjectUtil::InjectUtil() {}
