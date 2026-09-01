#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\RuntimeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeHelpers_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.InitializeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::IntPtr)>(&::System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b72ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(),
                                                                                           { "InitializeArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.InitializeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, ::System::RuntimeFieldHandle)>(&::System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b72ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(),
                                                             { "InitializeArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::RuntimeFieldHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.get_OffsetToStringData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b72f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "get_OffsetToStringData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*)>(&::System::Runtime::CompilerServices::RuntimeHelpers::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b72f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.GetObjectValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::System::Runtime::CompilerServices::RuntimeHelpers::GetObjectValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b72f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "GetObjectValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.RunClassConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Runtime::CompilerServices::RuntimeHelpers::RunClassConstructor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b72f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "RunClassConstructor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.RunClassConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::RuntimeTypeHandle)>(&::System::Runtime::CompilerServices::RuntimeHelpers::RunClassConstructor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b72f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "RunClassConstructor", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.SufficientExecutionStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::CompilerServices::RuntimeHelpers::SufficientExecutionStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b72fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "SufficientExecutionStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.EnsureSufficientExecutionStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::CompilerServices::RuntimeHelpers::EnsureSufficientExecutionStack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b72fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "EnsureSufficientExecutionStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.TryEnsureSufficientExecutionStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::CompilerServices::RuntimeHelpers::TryEnsureSufficientExecutionStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b72fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "TryEnsureSufficientExecutionStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeHelpers.PrepareConstrainedRegions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::CompilerServices::RuntimeHelpers::PrepareConstrainedRegions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b72fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "PrepareConstrainedRegions", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(::System::Array* array, ::System::IntPtr fldHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(),
                                                                                         { "InitializeArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, fldHandle);
}
inline void System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray(::System::Array* array, ::System::RuntimeFieldHandle fldHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(),
                                                           { "InitializeArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::RuntimeFieldHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, fldHandle);
}
inline int32_t System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "get_OffsetToStringData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Runtime::CompilerServices::RuntimeHelpers::GetHashCode(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, o);
}
inline ::System::Object* System::Runtime::CompilerServices::RuntimeHelpers::GetObjectValue(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "GetObjectValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj);
}
inline void System::Runtime::CompilerServices::RuntimeHelpers::RunClassConstructor(::System::IntPtr type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "RunClassConstructor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::Runtime::CompilerServices::RuntimeHelpers::RunClassConstructor(::System::RuntimeTypeHandle type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "RunClassConstructor", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::CompilerServices::RuntimeHelpers::SufficientExecutionStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "SufficientExecutionStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Runtime::CompilerServices::RuntimeHelpers::EnsureSufficientExecutionStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "EnsureSufficientExecutionStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Runtime::CompilerServices::RuntimeHelpers::TryEnsureSufficientExecutionStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "TryEnsureSufficientExecutionStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Runtime::CompilerServices::RuntimeHelpers::PrepareConstrainedRegions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "PrepareConstrainedRegions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::RuntimeHelpers::IsReferenceOrContainsReferences() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeHelpers*>(), { "IsReferenceOrContainsReferences", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers() {}
