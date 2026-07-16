#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryReadAccess_def.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryWriteAccess_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPerFrameHistoryAccessTracker_def.hpp"
template <typename T> inline void UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>::setStaticF_value(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "value", ::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>*>(std::forward<uint32_t>(value));
}
template <typename T> inline uint32_t UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>::getStaticF_value() {
  return ::cordl_internals::getStaticField<uint32_t, "value", ::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>*>();
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>::UniversalCameraHistory_TypeId_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68c4498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestVersion", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "writeVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::UniversalCameraHistory_Item(::UnityEngine::Rendering::ContextItem* storage, int32_t requestVersion,
                                                                                                        int32_t writeVersion) noexcept {
  this->storage = storage;
  this->requestVersion = requestVersion;
  this->writeVersion = writeVersion;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::UniversalCameraHistory_Item() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.add_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(&::UnityEngine::Rendering::Universal::UniversalCameraHistory::add_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x68c424c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(),
                                                             { "add_OnGatherHistoryRequests", {}, { ::i2c::type_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.remove_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(&::UnityEngine::Rendering::Universal::UniversalCameraHistory::remove_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x68c42f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(),
                                                { "remove_OnGatherHistoryRequests", {}, { ::i2c::type_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(&::UnityEngine::Rendering::Universal::UniversalCameraHistory::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68c43a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68c44c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.GatherHistoryRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::GatherHistoryRequests)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68c4554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "GatherHistoryRequests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.IsValidRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValidRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68c4574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "IsValidRequest", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68c45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "IsValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.ReleaseUnusedHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::ReleaseUnusedHistory)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68c45f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "ReleaseUnusedHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.SwapAndSetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::SwapAndSetReferenceSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68c46b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(),
                                                                                           { "SwapAndSetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item> const& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_set_m_Items(::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Items = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_HistoryTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryTextures;
}
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_HistoryTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryTextures;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_set_m_HistoryTextures(::UnityEngine::Rendering::BufferedRTHandleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HistoryTextures = value;
}
constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*& UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_OnGatherHistoryRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnGatherHistoryRequests;
}
constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* const&
UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_OnGatherHistoryRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnGatherHistoryRequests;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_set_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnGatherHistoryRequests = value;
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::setStaticF_s_TypeCount(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_TypeCount", ::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::UniversalCameraHistory::getStaticF_s_TypeCount() {
  return ::cordl_internals::getStaticField<uint32_t, "s_TypeCount", ::UnityEngine::Rendering::Universal::UniversalCameraHistory*>();
}
template <typename Type> inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::RequestAccess() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "RequestAccess", { ::i2c::class_of<Type>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline Type UnityEngine::Rendering::Universal::UniversalCameraHistory::GetHistoryForRead() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "GetHistoryForRead", { ::i2c::class_of<Type>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() })));
  return ::cordl_internals::RunMethodRethrow<Type>(this, ___internal_method);
}
template <typename Type> inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsAccessRequested() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "IsAccessRequested", { ::i2c::class_of<Type>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename Type> inline Type UnityEngine::Rendering::Universal::UniversalCameraHistory::GetHistoryForWrite() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "GetHistoryForWrite", { ::i2c::class_of<Type>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() })));
  return ::cordl_internals::RunMethodRethrow<Type>(this, ___internal_method);
}
template <typename Type> inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsWritten() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "IsWritten", { ::i2c::class_of<Type>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(),
                                                           { "add_OnGatherHistoryRequests", {}, { ::i2c::type_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(),
                                              { "remove_OnGatherHistoryRequests", {}, { ::i2c::type_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::GatherHistoryRequests() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "GatherHistoryRequests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValidRequest(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "IsValidRequest", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValid(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "IsValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::ReleaseUnusedHistory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(), { "ReleaseUnusedHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::SwapAndSetReferenceSize(int32_t cameraWidth, int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(),
                                                                                         { "SwapAndSetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraWidth, cameraHeight);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* UnityEngine::Rendering::Universal::UniversalCameraHistory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::ICameraHistoryReadAccess"
constexpr UnityEngine::Rendering::Universal::UniversalCameraHistory::operator ::UnityEngine::Rendering::ICameraHistoryReadAccess*() noexcept {
  return static_cast<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::ICameraHistoryReadAccess"
constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess* UnityEngine::Rendering::Universal::UniversalCameraHistory::i___UnityEngine__Rendering__ICameraHistoryReadAccess() noexcept {
  return static_cast<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::ICameraHistoryWriteAccess"
constexpr UnityEngine::Rendering::Universal::UniversalCameraHistory::operator ::UnityEngine::Rendering::ICameraHistoryWriteAccess*() noexcept {
  return static_cast<::UnityEngine::Rendering::ICameraHistoryWriteAccess*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::ICameraHistoryWriteAccess"
constexpr ::UnityEngine::Rendering::ICameraHistoryWriteAccess* UnityEngine::Rendering::Universal::UniversalCameraHistory::i___UnityEngine__Rendering__ICameraHistoryWriteAccess() noexcept {
  return static_cast<::UnityEngine::Rendering::ICameraHistoryWriteAccess*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPerFrameHistoryAccessTracker"
constexpr UnityEngine::Rendering::Universal::UniversalCameraHistory::operator ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPerFrameHistoryAccessTracker"
constexpr ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* UnityEngine::Rendering::Universal::UniversalCameraHistory::i___UnityEngine__Rendering__IPerFrameHistoryAccessTracker() noexcept {
  return static_cast<::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::UniversalCameraHistory::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::UniversalCameraHistory::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory::UniversalCameraHistory() {}
