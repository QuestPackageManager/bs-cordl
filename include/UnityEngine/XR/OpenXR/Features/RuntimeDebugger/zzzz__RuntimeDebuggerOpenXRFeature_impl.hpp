#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/RuntimeDebugger/RuntimeDebuggerOpenXRFeature.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/RuntimeDebugger/zzzz__RuntimeDebuggerOpenXRFeature_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a08e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                            { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.RecvMsg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::*)(
    ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::RecvMsg)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6a090b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                                                           { "RecvMsg", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.Native_HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, uint32_t, uint32_t)>(
    &::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a09024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                { "Native_HookGetInstanceProcAddr", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.Native_GetDataForRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::IntPtr>, ::by_ref<uint32_t>)>(
    &::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_GetDataForRead)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a09368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                             { "Native_GetDataForRead", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.Native_GetLUTData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>, ::by_ref<uint32_t>, uint32_t)>(
    &::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_GetLUTData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a092d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                { "Native_GetLUTData", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.Native_StartDataAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_StartDataAccess)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a08f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), { "Native_StartDataAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature.Native_EndDataAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_EndDataAccess)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a08fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), { "Native_EndDataAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a093f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_get_cacheSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheSize;
}
constexpr uint32_t const& UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_get_cacheSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheSize;
}
constexpr void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_set_cacheSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cacheSize = value;
}
constexpr uint32_t& UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_get_perThreadCacheSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perThreadCacheSize;
}
constexpr uint32_t const& UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_get_perThreadCacheSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perThreadCacheSize;
}
constexpr void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_set_perThreadCacheSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___perThreadCacheSize = value;
}
constexpr uint32_t& UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_get_lutOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutOffset;
}
constexpr uint32_t const& UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_get_lutOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutOffset;
}
constexpr void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::__cordl_internal_set_lutOffset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutOffset = value;
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::setStaticF_kEditorToPlayerRequestDebuggerOutput(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kEditorToPlayerRequestDebuggerOutput", ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(
      std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::getStaticF_kEditorToPlayerRequestDebuggerOutput() {
  return ::cordl_internals::getStaticField<::System::Guid, "kEditorToPlayerRequestDebuggerOutput", ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>();
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::setStaticF_kPlayerToEditorSendDebuggerOutput(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "kPlayerToEditorSendDebuggerOutput", ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(
      std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::getStaticF_kPlayerToEditorSendDebuggerOutput() {
  return ::cordl_internals::getStaticField<::System::Guid, "kPlayerToEditorSendDebuggerOutput", ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>();
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::HookGetInstanceProcAddr(::System::IntPtr func) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::RecvMsg(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                                                         { "RecvMsg", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_HookGetInstanceProcAddr(::System::IntPtr func, uint32_t cacheSize,
                                                                                                                                         uint32_t perThreadCacheSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                           { "Native_HookGetInstanceProcAddr", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, func, cacheSize, perThreadCacheSize);
}
inline bool UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_GetDataForRead(::by_ref<::System::IntPtr> ptr, ::by_ref<uint32_t> size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                                           { "Native_GetDataForRead", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, size);
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_GetLUTData(::by_ref<::System::IntPtr> ptr, ::by_ref<uint32_t> size, uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(),
                                              { "Native_GetLUTData", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, size, offset);
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_StartDataAccess() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), { "Native_StartDataAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::Native_EndDataAccess() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), { "Native_EndDataAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature* UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature::RuntimeDebuggerOpenXRFeature() {}
