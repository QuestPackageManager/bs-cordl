#pragma once
// IWYU pragma private; include "Oculus\Platform\ChallengeOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__ChallengeOptions_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeViewerFilter_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)()>(&::Oculus::Platform::ChallengeOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd463c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::StringW)>(&::Oculus::Platform::ChallengeOptions::SetDescription)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd4698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetDescription", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetEndDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::System::DateTime)>(&::Oculus::Platform::ChallengeOptions::SetEndDate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd4704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetEndDate", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetIncludeActiveChallenges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(bool)>(&::Oculus::Platform::ChallengeOptions::SetIncludeActiveChallenges)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd4770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetIncludeActiveChallenges", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetIncludeFutureChallenges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(bool)>(&::Oculus::Platform::ChallengeOptions::SetIncludeFutureChallenges)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd47dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetIncludeFutureChallenges", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetIncludePastChallenges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(bool)>(&::Oculus::Platform::ChallengeOptions::SetIncludePastChallenges)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd4848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetIncludePastChallenges", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetLeaderboardName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::StringW)>(&::Oculus::Platform::ChallengeOptions::SetLeaderboardName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd48b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetLeaderboardName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetStartDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::System::DateTime)>(&::Oculus::Platform::ChallengeOptions::SetStartDate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd4920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetStartDate", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::StringW)>(&::Oculus::Platform::ChallengeOptions::SetTitle)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetTitle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetViewerFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::Oculus::Platform::ChallengeViewerFilter)>(
    &::Oculus::Platform::ChallengeOptions::SetViewerFilter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd49f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetViewerFilter", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeViewerFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.SetVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)(::Oculus::Platform::ChallengeVisibility)>(&::Oculus::Platform::ChallengeOptions::SetVisibility)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd4a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetVisibility", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeVisibility>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::ChallengeOptions*)>(&::Oculus::Platform::ChallengeOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dd4ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::ChallengeOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::ChallengeOptions::*)()>(&::Oculus::Platform::ChallengeOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dd4adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { ::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::ChallengeOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::ChallengeOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::ChallengeOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::ChallengeOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::ChallengeOptions::SetDescription(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetDescription", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetEndDate(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetEndDate", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetIncludeActiveChallenges(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetIncludeActiveChallenges", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetIncludeFutureChallenges(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetIncludeFutureChallenges", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetIncludePastChallenges(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetIncludePastChallenges", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetLeaderboardName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetLeaderboardName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetStartDate(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetStartDate", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetTitle(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetTitle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetViewerFilter(::Oculus::Platform::ChallengeViewerFilter value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetViewerFilter", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeViewerFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::ChallengeOptions::SetVisibility(::Oculus::Platform::ChallengeVisibility value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "SetVisibility", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::ChallengeOptions::op_Explicit___System__IntPtr(::Oculus::Platform::ChallengeOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::ChallengeOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::ChallengeOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::ChallengeOptions* Oculus::Platform::ChallengeOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::ChallengeOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ChallengeOptions::ChallengeOptions() {}
