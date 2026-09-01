#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\RuntimeOps.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeOps_def.hpp"
#include "System/Dynamic/zzzz__ExpandoObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeOps.ExpandoTryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Dynamic::ExpandoObject*, ::System::Object*, int32_t, ::StringW, bool, ::by_ref<::System::Object*>)>(
    &::System::Runtime::CompilerServices::RuntimeOps::ExpandoTryGetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fc0cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                             { "ExpandoTryGetValue",
                                                               {},
                                                               { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeOps.ExpandoTrySetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Dynamic::ExpandoObject*, ::System::Object*, int32_t, ::System::Object*, ::StringW, bool)>(
    &::System::Runtime::CompilerServices::RuntimeOps::ExpandoTrySetValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fc0dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                             { "ExpandoTrySetValue",
                                                               {},
                                                               { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeOps.ExpandoTryDeleteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Dynamic::ExpandoObject*, ::System::Object*, int32_t, ::StringW, bool)>(
    &::System::Runtime::CompilerServices::RuntimeOps::ExpandoTryDeleteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fc11c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                                                           { "ExpandoTryDeleteValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeOps.ExpandoCheckVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Dynamic::ExpandoObject*, ::System::Object*)>(&::System::Runtime::CompilerServices::RuntimeOps::ExpandoCheckVersion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fc1580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                             { "ExpandoCheckVersion", {}, { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeOps.ExpandoPromoteClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::CompilerServices::RuntimeOps::ExpandoPromoteClass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc15c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                            { "ExpandoPromoteClass", {}, { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline bool System::Runtime::CompilerServices::RuntimeOps::ExpandoTryGetValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, int32_t index, ::StringW name, bool ignoreCase,
                                                                              ::by_ref<::System::Object*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                           { "ExpandoTryGetValue",
                                                             {},
                                                             { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expando, indexClass, index, name, ignoreCase, value);
}
inline ::System::Object* System::Runtime::CompilerServices::RuntimeOps::ExpandoTrySetValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, int32_t index,
                                                                                           ::System::Object* value, ::StringW name, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                           { "ExpandoTrySetValue",
                                                             {},
                                                             { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, expando, indexClass, index, value, name, ignoreCase);
}
inline bool System::Runtime::CompilerServices::RuntimeOps::ExpandoTryDeleteValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, int32_t index, ::StringW name,
                                                                                 bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                                                         { "ExpandoTryDeleteValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expando, indexClass, index, name, ignoreCase);
}
inline bool System::Runtime::CompilerServices::RuntimeOps::ExpandoCheckVersion(::System::Dynamic::ExpandoObject* expando, ::System::Object* version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                                                           { "ExpandoCheckVersion", {}, { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expando, version);
}
inline void System::Runtime::CompilerServices::RuntimeOps::ExpandoPromoteClass(::System::Dynamic::ExpandoObject* expando, ::System::Object* oldClass, ::System::Object* newClass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeOps*>(),
                          { "ExpandoPromoteClass", {}, { ::i2c::type_of<::System::Dynamic::ExpandoObject*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expando, oldClass, newClass);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RuntimeOps::RuntimeOps() {}
