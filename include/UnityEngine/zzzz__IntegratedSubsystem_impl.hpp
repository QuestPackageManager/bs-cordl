#pragma once
// IWYU pragma private; include "UnityEngine/IntegratedSubsystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::IntegratedSubsystem*)>(&::UnityEngine::IntegratedSubsystem_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bb4d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::IntegratedSubsystem_BindingsMarshaller::ConvertToNative(::UnityEngine::IntegratedSubsystem* integratedSubsystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, integratedSubsystem);
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegratedSubsystem_BindingsMarshaller::IntegratedSubsystem_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.SetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IntegratedSubsystem::*)(::UnityEngine::IntegratedSubsystem*)>(&::UnityEngine::IntegratedSubsystem::SetHandle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6bb48f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "SetHandle", {}, { ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6bb4990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::Stop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6bb4a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bb4aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Destroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.get_running
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::get_running)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bb4cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "get_running", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bb4cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.IsRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::IsRunning)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6bb4cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "IsRunning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IntegratedSubsystem::*)()>(&::UnityEngine::IntegratedSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb4d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.SetHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystem*)>(&::UnityEngine::IntegratedSubsystem::SetHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb494c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(),
                                                             { "SetHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.Start_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::IntegratedSubsystem::Start_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb49e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Start_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.Stop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::IntegratedSubsystem::Stop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb4a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystem.IsRunning_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::IntegratedSubsystem::IsRunning_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb4d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "IsRunning_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::IntegratedSubsystem::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::IntegratedSubsystem::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::IntegratedSubsystem::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::ISubsystemDescriptor*& UnityEngine::IntegratedSubsystem::__cordl_internal_get_m_SubsystemDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubsystemDescriptor;
}
constexpr ::UnityEngine::ISubsystemDescriptor* const& UnityEngine::IntegratedSubsystem::__cordl_internal_get_m_SubsystemDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubsystemDescriptor;
}
constexpr void UnityEngine::IntegratedSubsystem::__cordl_internal_set_m_SubsystemDescriptor(::UnityEngine::ISubsystemDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubsystemDescriptor = value;
}
inline void UnityEngine::IntegratedSubsystem::SetHandle(::UnityEngine::IntegratedSubsystem* subsystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "SetHandle", {}, { ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subsystem);
}
inline void UnityEngine::IntegratedSubsystem::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::IntegratedSubsystem::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::IntegratedSubsystem::Destroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::IntegratedSubsystem::get_running() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "get_running", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::IntegratedSubsystem::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::IntegratedSubsystem::IsRunning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "IsRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::IntegratedSubsystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::IntegratedSubsystem::SetHandle_Injected(::System::IntPtr _unity_self, ::UnityEngine::IntegratedSubsystem* subsystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(),
                                                           { "SetHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subsystem);
}
inline void UnityEngine::IntegratedSubsystem::Start_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Start_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::IntegratedSubsystem::Stop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::IntegratedSubsystem::IsRunning_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem*>(), { "IsRunning_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::IntegratedSubsystem* UnityEngine::IntegratedSubsystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::IntegratedSubsystem*>());
}
/// @brief Convert operator to "::UnityEngine::ISubsystem"
constexpr UnityEngine::IntegratedSubsystem::operator ::UnityEngine::ISubsystem*() noexcept {
  return static_cast<::UnityEngine::ISubsystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISubsystem"
constexpr ::UnityEngine::ISubsystem* UnityEngine::IntegratedSubsystem::i___UnityEngine__ISubsystem() noexcept {
  return static_cast<::UnityEngine::ISubsystem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegratedSubsystem::IntegratedSubsystem() {}
