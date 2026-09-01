#pragma once
// IWYU pragma private; include "System\ComponentModel\Design\IReferenceService.hpp"
#include "System/ComponentModel/Design/zzzz__IReferenceService_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IReferenceService.GetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Design::IReferenceService::*)(::StringW)>(
    &::System::ComponentModel::Design::IReferenceService::GetReference)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IReferenceService.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Design::IReferenceService::*)(::System::Object*)>(
    &::System::ComponentModel::Design::IReferenceService::GetName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IReferenceService.GetReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::ComponentModel::Design::IReferenceService::*)(::System::Type*)>(
    &::System::ComponentModel::Design::IReferenceService::GetReferences)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::ComponentModel::Design::IReferenceService::GetReference(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::StringW System::ComponentModel::Design::IReferenceService::GetName(::System::Object* reference) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reference);
}
inline ::ArrayW<::System::Object*> System::ComponentModel::Design::IReferenceService::GetReferences(::System::Type* baseType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IReferenceService*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, baseType);
}
