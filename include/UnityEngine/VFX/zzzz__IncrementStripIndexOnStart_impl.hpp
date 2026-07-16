#pragma once
// IWYU pragma private; include "UnityEngine/VFX/IncrementStripIndexOnStart.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_impl.hpp"
#include "UnityEngine/VFX/zzzz__IncrementStripIndexOnStart_def.hpp"
#include "UnityEngine/VFX/zzzz__IncrementStripIndexOnStart_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXExpressionValues_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerState_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::*)()>(
    &::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69cc0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::__cordl_internal_get_StripMaxCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StripMaxCount;
}
constexpr uint32_t const& UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::__cordl_internal_get_StripMaxCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StripMaxCount;
}
constexpr void UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::__cordl_internal_set_StripMaxCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StripMaxCount = value;
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties* UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties::IncrementStripIndexOnStart_InputProperties() {}
//  Writing Method size for method: ::UnityEngine::VFX::IncrementStripIndexOnStart.OnPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::IncrementStripIndexOnStart::*)(
    ::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::IncrementStripIndexOnStart::OnPlay)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x69cbf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), { ::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::IncrementStripIndexOnStart.OnStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::IncrementStripIndexOnStart::*)(
    ::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::IncrementStripIndexOnStart::OnStop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cc010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), { ::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::IncrementStripIndexOnStart.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::IncrementStripIndexOnStart::*)(
    ::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::IncrementStripIndexOnStart::OnUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cc018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), { ::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::IncrementStripIndexOnStart._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::IncrementStripIndexOnStart::*)()>(&::UnityEngine::VFX::IncrementStripIndexOnStart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cc01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::VFX::IncrementStripIndexOnStart::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr uint32_t const& UnityEngine::VFX::IncrementStripIndexOnStart::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::VFX::IncrementStripIndexOnStart::__cordl_internal_set_m_Index(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart::setStaticF_stripMaxCountID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "stripMaxCountID", ::UnityEngine::VFX::IncrementStripIndexOnStart*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::IncrementStripIndexOnStart::getStaticF_stripMaxCountID() {
  return ::cordl_internals::getStaticField<int32_t, "stripMaxCountID", ::UnityEngine::VFX::IncrementStripIndexOnStart*>();
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart::setStaticF_stripIndexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "stripIndexID", ::UnityEngine::VFX::IncrementStripIndexOnStart*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::IncrementStripIndexOnStart::getStaticF_stripIndexID() {
  return ::cordl_internals::getStaticField<int32_t, "stripIndexID", ::UnityEngine::VFX::IncrementStripIndexOnStart*>();
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart::OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                                 ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart::OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                                 ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart::OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues,
                                                                   ::UnityEngine::VFX::VisualEffect* vfxComponent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, vfxValues, vfxComponent);
}
inline void UnityEngine::VFX::IncrementStripIndexOnStart::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::IncrementStripIndexOnStart*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::IncrementStripIndexOnStart* UnityEngine::VFX::IncrementStripIndexOnStart::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::IncrementStripIndexOnStart*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::IncrementStripIndexOnStart::IncrementStripIndexOnStart() {}
