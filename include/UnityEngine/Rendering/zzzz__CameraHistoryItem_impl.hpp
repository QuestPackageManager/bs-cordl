#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraHistoryItem.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.OnCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CameraHistoryItem::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::OnCreate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6595ac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.get_storage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BufferedRTHandleSystem* (::UnityEngine::Rendering::CameraHistoryItem::*)()>(
    &::UnityEngine::Rendering::CameraHistoryItem::get_storage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6595acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(),
                                                                               "get_storage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.MakeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::CameraHistoryItem::*)(uint32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::MakeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6595ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "MakeId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.AllocHistoryFrameRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t, int32_t, ::ByRef<::UnityEngine::RenderTextureDescriptor>, ::StringW)>(&::UnityEngine::Rendering::CameraHistoryItem::AllocHistoryFrameRT)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6595ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "AllocHistoryFrameRT", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.ReleaseHistoryFrameRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::ReleaseHistoryFrameRT)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6595b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "ReleaseHistoryFrameRT",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.GetPreviousFrameRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::GetPreviousFrameRT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6595b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "GetPreviousFrameRT",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.GetCurrentFrameRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::GetCurrentFrameRT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6595b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "GetCurrentFrameRT",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CameraHistoryItem::*)()>(&::UnityEngine::Rendering::CameraHistoryItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6595b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& UnityEngine::Rendering::CameraHistoryItem::__cordl_internal_get_m_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_owner;
}
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& UnityEngine::Rendering::CameraHistoryItem::__cordl_internal_get_m_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_owner;
}
constexpr void UnityEngine::Rendering::CameraHistoryItem::__cordl_internal_set_m_owner(::UnityEngine::Rendering::BufferedRTHandleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::Rendering::CameraHistoryItem::__cordl_internal_get_m_TypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeId;
}
constexpr uint32_t const& UnityEngine::Rendering::CameraHistoryItem::__cordl_internal_get_m_TypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TypeId;
}
constexpr void UnityEngine::Rendering::CameraHistoryItem::__cordl_internal_set_m_TypeId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TypeId = value;
}
inline void UnityEngine::Rendering::CameraHistoryItem::OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, typeId);
}
inline ::UnityEngine::Rendering::BufferedRTHandleSystem* UnityEngine::Rendering::CameraHistoryItem::get_storage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "get_storage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BufferedRTHandleSystem*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::CameraHistoryItem::MakeId(uint32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "MakeId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::CameraHistoryItem::AllocHistoryFrameRT(int32_t id, int32_t count, ::ByRef<::UnityEngine::RenderTextureDescriptor> desc,
                                                                                                          ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "AllocHistoryFrameRT", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, id, count, desc, name);
}
inline void UnityEngine::Rendering::CameraHistoryItem::ReleaseHistoryFrameRT(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "ReleaseHistoryFrameRT",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::CameraHistoryItem::GetPreviousFrameRT(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "GetPreviousFrameRT",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::CameraHistoryItem::GetCurrentFrameRT(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), "GetCurrentFrameRT",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, id);
}
inline void UnityEngine::Rendering::CameraHistoryItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraHistoryItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraHistoryItem* UnityEngine::Rendering::CameraHistoryItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CameraHistoryItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraHistoryItem::CameraHistoryItem() {}
