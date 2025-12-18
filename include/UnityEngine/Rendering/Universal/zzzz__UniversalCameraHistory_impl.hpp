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
  ::cordl_internals::setStaticField<uint32_t, "value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>*>::get>(
      std::forward<uint32_t>(value));
}
template <typename T> inline uint32_t UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>::getStaticF_value() {
  return ::cordl_internals::getStaticField<uint32_t, "value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>*>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>::UniversalCameraHistory_TypeId_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67118d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory_Item::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(&::UnityEngine::Rendering::Universal::UniversalCameraHistory::add_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x671168c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "add_OnGatherHistoryRequests",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.remove_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(&::UnityEngine::Rendering::Universal::UniversalCameraHistory::remove_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6711738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "remove_OnGatherHistoryRequests",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67117e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6711904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.GatherHistoryRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::GatherHistoryRequests)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6711994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "GatherHistoryRequests",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.IsValidRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValidRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67119b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "IsValidRequest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67119f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "IsValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.ReleaseUnusedHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::ReleaseUnusedHistory)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6711a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "ReleaseUnusedHistory",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraHistory.SwapAndSetReferenceSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraHistory::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraHistory::SwapAndSetReferenceSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6711af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "SwapAndSetReferenceSize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*>&
UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*> const&
UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraHistory::__cordl_internal_set_m_Items(
    ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HistoryTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnGatherHistoryRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::setStaticF_s_TypeCount(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_TypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::UniversalCameraHistory::getStaticF_s_TypeCount() {
  return ::cordl_internals::getStaticField<uint32_t, "s_TypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get>();
}
template <typename Type> inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::RequestAccess() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "RequestAccess",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type> inline Type UnityEngine::Rendering::Universal::UniversalCameraHistory::GetHistoryForRead() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "GetHistoryForRead",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }));
  return ::cordl_internals::RunMethodRethrow<Type, false>(this, ___internal_method);
}
template <typename Type> inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsAccessRequested() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "IsAccessRequested",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename Type> inline Type UnityEngine::Rendering::Universal::UniversalCameraHistory::GetHistoryForWrite() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "GetHistoryForWrite",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }));
  return ::cordl_internals::RunMethodRethrow<Type, false>(this, ___internal_method);
}
template <typename Type> inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsWritten() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "IsWritten",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Type>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "add_OnGatherHistoryRequests",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "remove_OnGatherHistoryRequests",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::GatherHistoryRequests() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "GatherHistoryRequests",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValidRequest(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "IsValidRequest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraHistory::IsValid(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::ReleaseUnusedHistory() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "ReleaseUnusedHistory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraHistory::SwapAndSetReferenceSize(int32_t cameraWidth, int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>::get(), "SwapAndSetReferenceSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraWidth, cameraHeight);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* UnityEngine::Rendering::Universal::UniversalCameraHistory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>());
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
