#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CameraHistoryItem.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.OnCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CameraHistoryItem::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::OnCreate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x674cc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { ::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.get_storage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BufferedRTHandleSystem* (::UnityEngine::Rendering::CameraHistoryItem::*)()>(
    &::UnityEngine::Rendering::CameraHistoryItem::get_storage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x674cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "get_storage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.MakeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CameraHistoryItem::*)(uint32_t)>(&::UnityEngine::Rendering::CameraHistoryItem::MakeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x674cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "MakeId", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.AllocHistoryFrameRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t, int32_t, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::StringW)>(
        &::UnityEngine::Rendering::CameraHistoryItem::AllocHistoryFrameRT)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x674cc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(),
            { "AllocHistoryFrameRT", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.ReleaseHistoryFrameRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t)>(&::UnityEngine::Rendering::CameraHistoryItem::ReleaseHistoryFrameRT)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "ReleaseHistoryFrameRT", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.GetPreviousFrameRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::GetPreviousFrameRT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x674cccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "GetPreviousFrameRT", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem.GetCurrentFrameRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::CameraHistoryItem::*)(int32_t)>(
    &::UnityEngine::Rendering::CameraHistoryItem::GetCurrentFrameRT)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x674cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "GetCurrentFrameRT", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CameraHistoryItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CameraHistoryItem::*)()>(&::UnityEngine::Rendering::CameraHistoryItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x674cce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { ".ctor", {}, {} })));
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
  this->___m_owner = value;
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
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, typeId);
}
inline ::UnityEngine::Rendering::BufferedRTHandleSystem* UnityEngine::Rendering::CameraHistoryItem::get_storage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "get_storage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BufferedRTHandleSystem*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::CameraHistoryItem::MakeId(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "MakeId", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::CameraHistoryItem::AllocHistoryFrameRT(int32_t id, int32_t count, ::by_ref<::UnityEngine::RenderTextureDescriptor> desc,
                                                                                                          ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(),
          { "AllocHistoryFrameRT", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, id, count, desc, name);
}
inline void UnityEngine::Rendering::CameraHistoryItem::ReleaseHistoryFrameRT(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "ReleaseHistoryFrameRT", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::CameraHistoryItem::GetPreviousFrameRT(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "GetPreviousFrameRT", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, id);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::CameraHistoryItem::GetCurrentFrameRT(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { "GetCurrentFrameRT", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, id);
}
inline void UnityEngine::Rendering::CameraHistoryItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CameraHistoryItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraHistoryItem* UnityEngine::Rendering::CameraHistoryItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CameraHistoryItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraHistoryItem::CameraHistoryItem() {}
