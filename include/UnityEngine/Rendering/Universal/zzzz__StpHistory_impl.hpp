#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\StpHistory.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__STP_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StpHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.OnCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StpHistory::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(
    &::UnityEngine::Rendering::Universal::StpHistory::OnCreate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6878bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), { ::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StpHistory::*)()>(&::UnityEngine::Rendering::Universal::StpHistory::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6878c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), { ::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.GetHistoryContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::STP_HistoryContext* (::UnityEngine::Rendering::Universal::StpHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::StpHistory::GetHistoryContext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6878cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), { "GetHistoryContext", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::StpHistory::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::StpHistory::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6878cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StpHistory::*)()>(&::UnityEngine::Rendering::Universal::StpHistory::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6878dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*>& UnityEngine::Rendering::Universal::StpHistory::__cordl_internal_get_m_historyContexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_historyContexts;
}
constexpr ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*> const& UnityEngine::Rendering::Universal::StpHistory::__cordl_internal_get_m_historyContexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_historyContexts;
}
constexpr void UnityEngine::Rendering::Universal::StpHistory::__cordl_internal_set_m_historyContexts(::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_historyContexts = value;
}
inline void UnityEngine::Rendering::Universal::StpHistory::OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, typeId);
}
inline void UnityEngine::Rendering::Universal::StpHistory::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_HistoryContext* UnityEngine::Rendering::Universal::StpHistory::GetHistoryContext(int32_t eyeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), { "GetHistoryContext", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::STP_HistoryContext*>(this, ___internal_method, eyeIndex);
}
inline bool UnityEngine::Rendering::Universal::StpHistory::Update(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::StpHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpHistory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::StpHistory* UnityEngine::Rendering::Universal::StpHistory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::StpHistory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StpHistory::StpHistory() {}
