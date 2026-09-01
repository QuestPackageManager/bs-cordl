#pragma once
// IWYU pragma private; include "Unity\Burst\BurstRuntime.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstRuntime_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Burst/zzzz__BurstRuntime_def.hpp"
template <typename T> inline void Unity::Burst::BurstRuntime_HashCode32_1<T>::setStaticF_Value(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Value", ::Unity::Burst::BurstRuntime_HashCode32_1<T>>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t Unity::Burst::BurstRuntime_HashCode32_1<T>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<int32_t, "Value", ::Unity::Burst::BurstRuntime_HashCode32_1<T>>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Burst::BurstRuntime_HashCode32_1<T>::BurstRuntime_HashCode32_1() {}
template <typename T> inline void Unity::Burst::BurstRuntime_HashCode64_1<T>::setStaticF_Value(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "Value", ::Unity::Burst::BurstRuntime_HashCode64_1<T>>(std::forward<int64_t>(value));
}
template <typename T> inline int64_t Unity::Burst::BurstRuntime_HashCode64_1<T>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<int64_t, "Value", ::Unity::Burst::BurstRuntime_HashCode64_1<T>>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Burst::BurstRuntime_HashCode64_1<T>::BurstRuntime_HashCode64_1() {}
//  Writing Method size for method: ::Unity::Burst::BurstRuntime_PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstRuntime_PreserveAttribute::*)()>(&::Unity::Burst::BurstRuntime_PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6473ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime_PreserveAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstRuntime_PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime_PreserveAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstRuntime_PreserveAttribute* Unity::Burst::BurstRuntime_PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstRuntime_PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstRuntime_PreserveAttribute::BurstRuntime_PreserveAttribute() {}
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.GetHashCode32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Unity::Burst::BurstRuntime::GetHashCode32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6473608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetHashCode32", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.GetHashCode64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Type*)>(&::Unity::Burst::BurstRuntime::GetHashCode64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6473684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetHashCode64", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.HashStringWithFNV1A32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Unity::Burst::BurstRuntime::HashStringWithFNV1A32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x647362c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "HashStringWithFNV1A32", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.HashStringWithFNV1A64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::Unity::Burst::BurstRuntime::HashStringWithFNV1A64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64736a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "HashStringWithFNV1A64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.LoadAdditionalLibrary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Unity::Burst::BurstRuntime::LoadAdditionalLibrary)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6473708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "LoadAdditionalLibrary", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.LoadAdditionalLibraryInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Unity::Burst::BurstRuntime::LoadAdditionalLibraryInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6473778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "LoadAdditionalLibraryInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.RuntimeLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Burst::BurstRuntime::RuntimeLog)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64738c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                                                             { "RuntimeLog", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstRuntime::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6473928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.PreventRequiredAttributeStrip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstRuntime::PreventRequiredAttributeStrip)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x647392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "PreventRequiredAttributeStrip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Burst::BurstRuntime::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6473a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                                                             { "Log", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.GetUTF8LiteralPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::StringW, ::by_ref<int32_t>)>(&::Unity::Burst::BurstRuntime::GetUTF8LiteralPointer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6473a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetUTF8LiteralPointer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
template <typename T> inline int32_t Unity::Burst::BurstRuntime::GetHashCode32() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetHashCode32", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Unity::Burst::BurstRuntime::GetHashCode32(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetHashCode32", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
template <typename T> inline int64_t Unity::Burst::BurstRuntime::GetHashCode64() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetHashCode64", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t Unity::Burst::BurstRuntime::GetHashCode64(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetHashCode64", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, type);
}
inline int32_t Unity::Burst::BurstRuntime::HashStringWithFNV1A32(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "HashStringWithFNV1A32", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text);
}
inline int64_t Unity::Burst::BurstRuntime::HashStringWithFNV1A64(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "HashStringWithFNV1A64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, text);
}
inline bool Unity::Burst::BurstRuntime::LoadAdditionalLibrary(::StringW pathToLibBurstGenerated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "LoadAdditionalLibrary", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pathToLibBurstGenerated);
}
inline bool Unity::Burst::BurstRuntime::LoadAdditionalLibraryInternal(::StringW pathToLibBurstGenerated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "LoadAdditionalLibraryInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pathToLibBurstGenerated);
}
inline void Unity::Burst::BurstRuntime::RuntimeLog(uint8_t* message, int32_t logType, uint8_t* fileName, int32_t lineNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                                                           { "RuntimeLog", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, logType, fileName, lineNumber);
}
inline void Unity::Burst::BurstRuntime::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstRuntime::PreventRequiredAttributeStrip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "PreventRequiredAttributeStrip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstRuntime::Log(uint8_t* message, int32_t logType, uint8_t* fileName, int32_t lineNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                                                           { "Log", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, logType, fileName, lineNumber);
}
inline uint8_t* Unity::Burst::BurstRuntime::GetUTF8LiteralPointer(::StringW str, ::by_ref<int32_t> byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstRuntime*>(), { "GetUTF8LiteralPointer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, str, byteCount);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstRuntime::BurstRuntime() {}
