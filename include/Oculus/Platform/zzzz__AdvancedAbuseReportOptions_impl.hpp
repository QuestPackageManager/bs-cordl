#pragma once
// IWYU pragma private; include "Oculus\Platform\AdvancedAbuseReportOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__AdvancedAbuseReportOptions_def.hpp"
#include "Oculus/Platform/zzzz__AbuseReportType_def.hpp"
#include "Oculus/Platform/zzzz__AbuseReportVideoMode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)()>(&::Oculus::Platform::AdvancedAbuseReportOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5db3d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.SetDeveloperDefinedContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)(::StringW, ::StringW)>(
    &::Oculus::Platform::AdvancedAbuseReportOptions::SetDeveloperDefinedContext)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5db3e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(),
                                                                                           { "SetDeveloperDefinedContext", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.ClearDeveloperDefinedContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)()>(&::Oculus::Platform::AdvancedAbuseReportOptions::ClearDeveloperDefinedContext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5db3f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "ClearDeveloperDefinedContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.SetObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)(::StringW)>(&::Oculus::Platform::AdvancedAbuseReportOptions::SetObjectType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5db4020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "SetObjectType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.SetReportType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)(::Oculus::Platform::AbuseReportType)>(
    &::Oculus::Platform::AdvancedAbuseReportOptions::SetReportType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5db4130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "SetReportType", {}, { ::i2c::type_of<::Oculus::Platform::AbuseReportType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.AddSuggestedUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)(uint64_t)>(&::Oculus::Platform::AdvancedAbuseReportOptions::AddSuggestedUser)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5db4220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "AddSuggestedUser", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.ClearSuggestedUsers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)()>(&::Oculus::Platform::AdvancedAbuseReportOptions::ClearSuggestedUsers)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5db4310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "ClearSuggestedUsers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.SetVideoMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)(::Oculus::Platform::AbuseReportVideoMode)>(
    &::Oculus::Platform::AdvancedAbuseReportOptions::SetVideoMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5db43e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "SetVideoMode", {}, { ::i2c::type_of<::Oculus::Platform::AbuseReportVideoMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::AdvancedAbuseReportOptions*)>(
    &::Oculus::Platform::AdvancedAbuseReportOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5db44d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(),
                                                                                           { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::AdvancedAbuseReportOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AdvancedAbuseReportOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::AdvancedAbuseReportOptions::*)()>(&::Oculus::Platform::AdvancedAbuseReportOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5db44e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { ::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::AdvancedAbuseReportOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::AdvancedAbuseReportOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::AdvancedAbuseReportOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::SetDeveloperDefinedContext(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(),
                                                                                         { "SetDeveloperDefinedContext", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::ClearDeveloperDefinedContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "ClearDeveloperDefinedContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::SetObjectType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "SetObjectType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::SetReportType(::Oculus::Platform::AbuseReportType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "SetReportType", {}, { ::i2c::type_of<::Oculus::Platform::AbuseReportType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::AddSuggestedUser(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "AddSuggestedUser", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userID);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::ClearSuggestedUsers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "ClearSuggestedUsers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::SetVideoMode(::Oculus::Platform::AbuseReportVideoMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), { "SetVideoMode", {}, { ::i2c::type_of<::Oculus::Platform::AbuseReportVideoMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::AdvancedAbuseReportOptions::op_Explicit___System__IntPtr(::Oculus::Platform::AdvancedAbuseReportOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(),
                                                                                         { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::AdvancedAbuseReportOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::AdvancedAbuseReportOptions::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::AdvancedAbuseReportOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::AdvancedAbuseReportOptions* Oculus::Platform::AdvancedAbuseReportOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::AdvancedAbuseReportOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AdvancedAbuseReportOptions::AdvancedAbuseReportOptions() {}
