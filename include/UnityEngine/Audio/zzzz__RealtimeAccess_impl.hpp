#pragma once
// IWYU pragma private; include "UnityEngine/Audio/RealtimeAccess.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::RealtimeAccess.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::RealtimeAccess::*)()>(&::UnityEngine::Audio::RealtimeAccess::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eabc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeAccess>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::RealtimeAccess::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RealtimeAccess>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Realtime", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Frame", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_DTM", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::RealtimeAccess::RealtimeAccess(void* m_Realtime, int32_t m_Frame, int32_t m_DTM) noexcept {
  this->m_Realtime = m_Realtime;
  this->m_Frame = m_Frame;
  this->m_DTM = m_DTM;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::RealtimeAccess::RealtimeAccess() {}
