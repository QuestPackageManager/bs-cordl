#pragma once
// IWYU pragma private; include "System\Dynamic\SetIndexBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__SetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::SetIndexBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::SetIndexBinder::Bind)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fc8b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetIndexBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetIndexBinder.FallbackSetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::SetIndexBinder::FallbackSetIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc8c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetIndexBinder*>(),
                                                             { "FallbackSetIndex",
                                                               {},
                                                               { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>(),
                                                                 ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::SetIndexBinder.FallbackSetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::SetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*,
                                          ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::SetIndexBinder::FallbackSetIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::SetIndexBinder*>(), { ::i2c::class_of<::System::Dynamic::SetIndexBinder*>(), 9 }));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetIndexBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetIndexBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetIndexBinder::FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes,
                                                                                               ::System::Dynamic::DynamicMetaObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::SetIndexBinder*>(),
                                                           { "FallbackSetIndex",
                                                             {},
                                                             { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>(),
                                                               ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, indexes, value);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::SetIndexBinder::FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes,
                                                                                               ::System::Dynamic::DynamicMetaObject* value, ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::SetIndexBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, indexes, value, errorSuggestion);
}
// Ctor Parameters []
constexpr ::System::Dynamic::SetIndexBinder::SetIndexBinder() {}
