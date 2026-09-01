#pragma once
// IWYU pragma private; include "UnityEngine\StackTraceUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__StackTraceUtility_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.SetProjectFolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::StackTraceUtility::SetProjectFolder)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ae5f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(), { "SetProjectFolder", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractStackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::StackTraceUtility::ExtractStackTrace)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6ae6014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(), { "ExtractStackTrace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractStringFromExceptionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x6ae685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(),
                            { "ExtractStringFromExceptionInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractFormattedStackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Diagnostics::StackTrace*)>(&::UnityEngine::StackTraceUtility::ExtractFormattedStackTrace)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x6ae6174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(), { "ExtractFormattedStackTrace", {}, { ::i2c::type_of<::System::Diagnostics::StackTrace*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::StackTraceUtility::setStaticF_projectFolder(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "projectFolder", ::UnityEngine::StackTraceUtility*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::StackTraceUtility::getStaticF_projectFolder() {
  return ::cordl_internals::getStaticField<::StringW, "projectFolder", ::UnityEngine::StackTraceUtility*>();
}
inline void UnityEngine::StackTraceUtility::SetProjectFolder(::StringW folder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(), { "SetProjectFolder", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, folder);
}
inline ::StringW UnityEngine::StackTraceUtility::ExtractStackTrace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(), { "ExtractStackTrace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal(::System::Object* exceptiono, ::by_ref<::StringW> message, ::by_ref<::StringW> stackTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(),
                          { "ExtractStringFromExceptionInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exceptiono, message, stackTrace);
}
inline ::StringW UnityEngine::StackTraceUtility::ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* stackTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::StackTraceUtility*>(), { "ExtractFormattedStackTrace", {}, { ::i2c::type_of<::System::Diagnostics::StackTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stackTrace);
}
// Ctor Parameters []
constexpr ::UnityEngine::StackTraceUtility::StackTraceUtility() {}
