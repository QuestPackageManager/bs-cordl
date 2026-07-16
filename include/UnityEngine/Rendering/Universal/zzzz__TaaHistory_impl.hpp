#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TaaHistory.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TaaHistory_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.OnCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TaaHistory::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::OnCreate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6873604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { ::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TaaHistory::*)()>(&::UnityEngine::Rendering::Universal::TaaHistory::Reset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6873650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { ::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.GetAccumulationTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::TaaHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::GetAccumulationTexture)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68736fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { "GetAccumulationTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.GetAccumulationVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::TaaHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::GetAccumulationVersion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6873730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { "GetAccumulationVersion", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.SetAccumulationVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TaaHistory::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::SetAccumulationVersion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6873760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                                                           { "SetAccumulationVersion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::TaaHistory::*)()>(&::UnityEngine::Rendering::Universal::TaaHistory::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6873790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.IsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::TaaHistory::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::IsDirty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68737ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                                                           { "IsDirty", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TaaHistory::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>, bool)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::Alloc)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6873818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                             { "Alloc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::TaaHistory::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>, bool)>(
    &::UnityEngine::Rendering::Universal::TaaHistory::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6873970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                             { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TaaHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TaaHistory::*)()>(&::UnityEngine::Rendering::Universal::TaaHistory::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6873a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_TaaAccumulationTextureIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TaaAccumulationTextureIds;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_TaaAccumulationTextureIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TaaAccumulationTextureIds;
}
constexpr void UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_set_m_TaaAccumulationTextureIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TaaAccumulationTextureIds = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_TaaAccumulationVersions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TaaAccumulationVersions;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_TaaAccumulationVersions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TaaAccumulationVersions;
}
constexpr void UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_set_m_TaaAccumulationVersions(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TaaAccumulationVersions = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_Descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_Descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr void UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Descriptor = value;
}
constexpr ::UnityEngine::Hash128& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_DescKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DescKey;
}
constexpr ::UnityEngine::Hash128 const& UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_get_m_DescKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DescKey;
}
constexpr void UnityEngine::Rendering::Universal::TaaHistory::__cordl_internal_set_m_DescKey(::UnityEngine::Hash128 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DescKey = value;
}
inline void UnityEngine::Rendering::Universal::TaaHistory::setStaticF_m_TaaAccumulationNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_TaaAccumulationNames", ::UnityEngine::Rendering::Universal::TaaHistory*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::TaaHistory::getStaticF_m_TaaAccumulationNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_TaaAccumulationNames", ::UnityEngine::Rendering::Universal::TaaHistory*>();
}
inline void UnityEngine::Rendering::Universal::TaaHistory::OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, typeId);
}
inline void UnityEngine::Rendering::Universal::TaaHistory::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::TaaHistory::GetAccumulationTexture(int32_t eyeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { "GetAccumulationTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, eyeIndex);
}
inline int32_t UnityEngine::Rendering::Universal::TaaHistory::GetAccumulationVersion(int32_t eyeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { "GetAccumulationVersion", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, eyeIndex);
}
inline void UnityEngine::Rendering::Universal::TaaHistory::SetAccumulationVersion(int32_t eyeIndex, int32_t version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                                                         { "SetAccumulationVersion", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyeIndex, version);
}
inline bool UnityEngine::Rendering::Universal::TaaHistory::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::TaaHistory::IsDirty(::by_ref<::UnityEngine::RenderTextureDescriptor> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                                                         { "IsDirty", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desc);
}
inline void UnityEngine::Rendering::Universal::TaaHistory::Alloc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc, bool xrMultipassEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, xrMultipassEnabled);
}
inline bool UnityEngine::Rendering::Universal::TaaHistory::Update(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc, bool xrMultipassEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(),
                                                           { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraDesc, xrMultipassEnabled);
}
inline void UnityEngine::Rendering::Universal::TaaHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TaaHistory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::TaaHistory* UnityEngine::Rendering::Universal::TaaHistory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::TaaHistory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TaaHistory::TaaHistory() {}
