#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SingleHistoryBase.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SingleHistoryBase_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.OnCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::OnCreate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68730f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.GetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::GetTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6873100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "GetTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.GetCurrentTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::GetCurrentTexture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6873160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "GetCurrentTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.GetPreviousTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::GetPreviousTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "GetPreviousTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.IsAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(&::UnityEngine::Rendering::Universal::SingleHistoryBase::IsAllocated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6873174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "IsAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.IsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::IsDirty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6873190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                           { "IsDirty", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::Alloc)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68731fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                           { "Alloc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(&::UnityEngine::Rendering::Universal::SingleHistoryBase::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68732b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::Update)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68732d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.GetHistoryFrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::GetHistoryFrameCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.GetHistoryName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(
    &::UnityEngine::Rendering::Universal::SingleHistoryBase::GetHistoryName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase.GetHistoryDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)(
    ::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::Rendering::Universal::SingleHistoryBase::GetHistoryDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SingleHistoryBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SingleHistoryBase::*)()>(&::UnityEngine::Rendering::Universal::SingleHistoryBase::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687338c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr void UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_set_m_Id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Id = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_get_m_Descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_get_m_Descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr void UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Descriptor = value;
}
constexpr ::UnityEngine::Hash128& UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_get_m_DescKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DescKey;
}
constexpr ::UnityEngine::Hash128 const& UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_get_m_DescKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DescKey;
}
constexpr void UnityEngine::Rendering::Universal::SingleHistoryBase::__cordl_internal_set_m_DescKey(::UnityEngine::Hash128 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DescKey = value;
}
inline void UnityEngine::Rendering::Universal::SingleHistoryBase::OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, typeId);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::SingleHistoryBase::GetTexture(int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "GetTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, frameIndex);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::SingleHistoryBase::GetCurrentTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "GetCurrentTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::SingleHistoryBase::GetPreviousTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "GetPreviousTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SingleHistoryBase::IsAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { "IsAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SingleHistoryBase::IsDirty(::by_ref<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                         { "IsDirty", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::Universal::SingleHistoryBase::Alloc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                         { "Alloc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::Universal::SingleHistoryBase::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SingleHistoryBase::Update(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraDesc);
}
inline int32_t UnityEngine::Rendering::Universal::SingleHistoryBase::GetHistoryFrameCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::Universal::SingleHistoryBase::GetHistoryName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::SingleHistoryBase::GetHistoryDescriptor(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method, cameraDesc);
}
inline void UnityEngine::Rendering::Universal::SingleHistoryBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SingleHistoryBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::SingleHistoryBase* UnityEngine::Rendering::Universal::SingleHistoryBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::SingleHistoryBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SingleHistoryBase::SingleHistoryBase() {}
