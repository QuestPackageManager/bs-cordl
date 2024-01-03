#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioText_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioText.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioText::*)()>(&::Tayx::Graphy::Audio::G_AudioText::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a0a6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioText.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioText::*)()>(&::Tayx::Graphy::Audio::G_AudioText::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a0a6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioText.UpdateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioText::*)()>(&::Tayx::Graphy::Audio::G_AudioText::UpdateParameters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a0a114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "UpdateParameters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioText.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioText::*)()>(&::Tayx::Graphy::Audio::G_AudioText::Init)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2a0a134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioText::*)()>(&::Tayx::Graphy::Audio::G_AudioText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a0a7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Text*& Tayx::Graphy::Audio::G_AudioText::__get_m_DBText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBText;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& Tayx::Graphy::Audio::G_AudioText::__get_m_DBText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBText;
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_DBText(::UnityEngine::UI::Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DBText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::GraphyManager*& Tayx::Graphy::Audio::G_AudioText::__get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& Tayx::Graphy::Audio::G_AudioText::__get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_graphyManager(::Tayx::Graphy::GraphyManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_graphyManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::Audio::G_AudioMonitor*& Tayx::Graphy::Audio::G_AudioText::__get_m_audioMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> const& Tayx::Graphy::Audio::G_AudioText::__get_m_audioMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_audioMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Tayx::Graphy::Audio::G_AudioText::__get_m_updateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_updateRate;
}
constexpr int32_t const& Tayx::Graphy::Audio::G_AudioText::__get_m_updateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_updateRate;
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_updateRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_updateRate = value;
}
constexpr float_t& Tayx::Graphy::Audio::G_AudioText::__get_m_deltaTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTimeOffset;
}
constexpr float_t const& Tayx::Graphy::Audio::G_AudioText::__get_m_deltaTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTimeOffset;
}
constexpr void Tayx::Graphy::Audio::G_AudioText::__set_m_deltaTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_deltaTimeOffset = value;
}
inline void Tayx::Graphy::Audio::G_AudioText::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioText::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioText::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "UpdateParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioText::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::Audio::G_AudioText* Tayx::Graphy::Audio::G_AudioText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::Audio::G_AudioText*>());
}
inline void Tayx::Graphy::Audio::G_AudioText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioText*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Audio::G_AudioText::G_AudioText() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
