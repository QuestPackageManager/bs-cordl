#pragma once
// IWYU pragma private; include "Zenject/ValidationUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ValidationUtil_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__ValidationUtil_def.hpp"
//  Writing Method size for method: ::Zenject::ValidationUtil___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ValidationUtil___c::*)()>(&::Zenject::ValidationUtil___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9ad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationUtil___c._CreateDefaultArgs_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::TypeValuePair (::Zenject::ValidationUtil___c::*)(::System::Type*)>(&::Zenject::ValidationUtil___c::_CreateDefaultArgs_b__0_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e9ad08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { "<CreateDefaultArgs>b__0_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationUtil___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ValidationUtil___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9ad70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationUtil___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ValidationUtil___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e9adb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::ValidationUtil___c::setStaticF___9(::Zenject::ValidationUtil___c* value) {
  ::cordl_internals::setStaticField<::Zenject::ValidationUtil___c*, "<>9", ::Zenject::ValidationUtil___c*>(std::forward<::Zenject::ValidationUtil___c*>(value));
}
inline ::Zenject::ValidationUtil___c* Zenject::ValidationUtil___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::ValidationUtil___c*, "<>9", ::Zenject::ValidationUtil___c*>();
}
inline void Zenject::ValidationUtil___c::setStaticF___9__0_0(::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>*, "<>9__0_0", ::Zenject::ValidationUtil___c*>(
      std::forward<::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>*>(value));
}
inline ::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>* Zenject::ValidationUtil___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::Zenject::TypeValuePair>*, "<>9__0_0", ::Zenject::ValidationUtil___c*>();
}
inline void Zenject::ValidationUtil___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::TypeValuePair Zenject::ValidationUtil___c::_CreateDefaultArgs_b__0_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { "<CreateDefaultArgs>b__0_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::TypeValuePair>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::ValidationUtil___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ValidationUtil___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ValidationUtil___c* Zenject::ValidationUtil___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ValidationUtil___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::ValidationUtil___c::ValidationUtil___c() {}
//  Writing Method size for method: ::Zenject::ValidationUtil.CreateDefaultArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (*)(::ArrayW<::System::Type*>)>(
    &::Zenject::ValidationUtil::CreateDefaultArgs)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e9ab90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil*>(), { "CreateDefaultArgs", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::ValidationUtil::CreateDefaultArgs(::ArrayW<::System::Type*> argTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationUtil*>(), { "CreateDefaultArgs", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(nullptr, ___internal_method, argTypes);
}
// Ctor Parameters []
constexpr ::Zenject::ValidationUtil::ValidationUtil() {}
