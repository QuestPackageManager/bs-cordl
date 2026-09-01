#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\DiagnosticReport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__DiagnosticReport_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.StartReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::DiagnosticReport::StartReport)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69eea48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "StartReport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.GetSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::GetSection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69eeaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "GetSection", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.AddSectionEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::StringW, ::StringW)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::AddSectionEntry)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69eeb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(),
                                                             { "AddSectionEntry", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.AddSectionBreak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::AddSectionBreak)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69eebf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "AddSectionBreak", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.AddEventEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::AddEventEntry)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69eec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "AddEventEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.Internal_DumpReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::DiagnosticReport::Internal_DumpReport)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69eed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_DumpReport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.Internal_DumpReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::Internal_DumpReport)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69eed7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_DumpReport", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.Internal_GenerateReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::OpenXR::DiagnosticReport::Internal_GenerateReport)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69eee0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_GenerateReport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.Internal_ReleaseReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::Internal_ReleaseReport)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69eee70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_ReleaseReport", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.GenerateReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::XR::OpenXR::DiagnosticReport::GenerateReport)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69eeeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "GenerateReport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport.DumpReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::OpenXR::DiagnosticReport::DumpReport)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69eef7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "DumpReport", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::DiagnosticReport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::DiagnosticReport::*)()>(&::UnityEngine::XR::OpenXR::DiagnosticReport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69eef80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::DiagnosticReport::setStaticF_k_NullSection(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "k_NullSection", ::UnityEngine::XR::OpenXR::DiagnosticReport*>(std::forward<uint64_t>(value));
}
inline uint64_t UnityEngine::XR::OpenXR::DiagnosticReport::getStaticF_k_NullSection() {
  return ::cordl_internals::getStaticField<uint64_t, "k_NullSection", ::UnityEngine::XR::OpenXR::DiagnosticReport*>();
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::StartReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "StartReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::DiagnosticReport::GetSection(::StringW sectionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "GetSection", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, sectionName);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::AddSectionEntry(uint64_t sectionHandle, ::StringW sectionEntry, ::StringW sectionBody) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(),
                                                           { "AddSectionEntry", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sectionHandle, sectionEntry, sectionBody);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::AddSectionBreak(uint64_t sectionHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "AddSectionBreak", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sectionHandle);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::AddEventEntry(::StringW eventName, ::StringW eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "AddEventEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventName, eventData);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::Internal_DumpReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_DumpReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::Internal_DumpReport(::StringW reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_DumpReport", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reason);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::DiagnosticReport::Internal_GenerateReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_GenerateReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::Internal_ReleaseReport(::System::IntPtr report) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "Internal_ReleaseReport", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, report);
}
inline ::StringW UnityEngine::XR::OpenXR::DiagnosticReport::GenerateReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "GenerateReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::DumpReport(::StringW reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { "DumpReport", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reason);
}
inline void UnityEngine::XR::OpenXR::DiagnosticReport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::DiagnosticReport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::DiagnosticReport* UnityEngine::XR::OpenXR::DiagnosticReport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::DiagnosticReport*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::DiagnosticReport::DiagnosticReport() {}
