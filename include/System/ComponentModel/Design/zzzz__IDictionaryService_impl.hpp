#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IDictionaryService.hpp"
#include "System/ComponentModel/Design/zzzz__IDictionaryService_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IDictionaryService.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Design::IDictionaryService::*)(::System::Object*)>(
    &::System::ComponentModel::Design::IDictionaryService::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IDictionaryService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IDictionaryService*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::IDictionaryService.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::IDictionaryService::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::Design::IDictionaryService::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::IDictionaryService*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::Design::IDictionaryService*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::ComponentModel::Design::IDictionaryService::GetValue(::System::Object* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IDictionaryService*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::ComponentModel::Design::IDictionaryService::SetValue(::System::Object* key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Design::IDictionaryService*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
