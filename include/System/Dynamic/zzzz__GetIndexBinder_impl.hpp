#pragma once
// IWYU pragma private; include "System\Dynamic\GetIndexBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__GetIndexBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::GetIndexBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::GetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::GetIndexBinder::Bind)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fc8758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::GetIndexBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::GetIndexBinder.FallbackGetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::GetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::GetIndexBinder::FallbackGetIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc8814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::GetIndexBinder*>(),
                                         { "FallbackGetIndex", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::GetIndexBinder.FallbackGetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::GetIndexBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::GetIndexBinder::FallbackGetIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::GetIndexBinder*>(), { ::i2c::class_of<::System::Dynamic::GetIndexBinder*>(), 9 }));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::GetIndexBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::GetIndexBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::GetIndexBinder::FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::GetIndexBinder*>(),
                                       { "FallbackGetIndex", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, indexes);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::GetIndexBinder::FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes,
                                                                                               ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::GetIndexBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, indexes, errorSuggestion);
}
// Ctor Parameters []
constexpr ::System::Dynamic::GetIndexBinder::GetIndexBinder() {}
