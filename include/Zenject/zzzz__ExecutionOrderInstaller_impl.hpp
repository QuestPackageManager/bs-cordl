#pragma once
// IWYU pragma private; include "Zenject/ExecutionOrderInstaller.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "Zenject/zzzz__ExecutionOrderInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ExecutionOrderInstaller::*)(::System::Collections::Generic::List_1<::System::Type*>*)>(
    &::Zenject::ExecutionOrderInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e99268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ExecutionOrderInstaller::*)()>(&::Zenject::ExecutionOrderInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e992b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { ::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ExecutionOrderInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e993e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ExecutionOrderInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6e994d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::ExecutionOrderInstaller::__cordl_internal_get__typeOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeOrder;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Zenject::ExecutionOrderInstaller::__cordl_internal_get__typeOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeOrder;
}
constexpr void Zenject::ExecutionOrderInstaller::__cordl_internal_set__typeOrder(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeOrder = value;
}
inline void Zenject::ExecutionOrderInstaller::_ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeOrder);
}
inline void Zenject::ExecutionOrderInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::ExecutionOrderInstaller::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ExecutionOrderInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ExecutionOrderInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ExecutionOrderInstaller* Zenject::ExecutionOrderInstaller::New_ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ExecutionOrderInstaller*>(typeOrder));
}
// Ctor Parameters []
constexpr ::Zenject::ExecutionOrderInstaller::ExecutionOrderInstaller() {}
