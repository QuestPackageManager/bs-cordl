#pragma once
// IWYU pragma private; include "GlobalNamespace\MenuLightsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager__Start_d__8._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager__Start_d__8::*)(int32_t)>(&::GlobalNamespace::MenuLightsManager__Start_d__8::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5985040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager__Start_d__8.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager__Start_d__8::*)()>(&::GlobalNamespace::MenuLightsManager__Start_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5985910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager__Start_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MenuLightsManager__Start_d__8::*)()>(&::GlobalNamespace::MenuLightsManager__Start_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5985914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager__Start_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MenuLightsManager__Start_d__8::*)()>(
    &::GlobalNamespace::MenuLightsManager__Start_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5985b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager__Start_d__8.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager__Start_d__8::*)()>(
    &::GlobalNamespace::MenuLightsManager__Start_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5985b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager__Start_d__8.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MenuLightsManager__Start_d__8::*)()>(
    &::GlobalNamespace::MenuLightsManager__Start_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5985bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MenuLightsManager__Start_d__8::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuLightsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::MenuLightsManager__Start_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MenuLightsManager__Start_d__8::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MenuLightsManager__Start_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MenuLightsManager__Start_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsManager__Start_d__8::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MenuLightsManager__Start_d__8::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager__Start_d__8*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuLightsManager__Start_d__8* GlobalNamespace::MenuLightsManager__Start_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuLightsManager__Start_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MenuLightsManager__Start_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MenuLightsManager__Start_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MenuLightsManager__Start_d__8::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MenuLightsManager__Start_d__8::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MenuLightsManager__Start_d__8::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MenuLightsManager__Start_d__8::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuLightsManager__Start_d__8::MenuLightsManager__Start_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5984fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(int32_t, ::UnityEngine::Color)>(&::GlobalNamespace::MenuLightsManager::SetColor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5985048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.CurrentColorForID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MenuLightsManager::*)(int32_t)>(&::GlobalNamespace::MenuLightsManager::CurrentColorForID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5985060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "CurrentColorForID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.UpdateColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(float_t)>(&::GlobalNamespace::MenuLightsManager::UpdateColors)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x598507c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "UpdateColors", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.SetTargetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::SetTargetColors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5985264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetTargetColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.GetLightsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::GetLightsCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59851a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "GetLightsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.GetLightForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, ::UnityEngine::Color> (::GlobalNamespace::MenuLightsManager::*)(int32_t)>(
    &::GlobalNamespace::MenuLightsManager::GetLightForIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59851cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "GetLightForIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.SaveOriginalColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::SaveOriginalColors)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59852dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SaveOriginalColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.SetDefaultPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(::GlobalNamespace::MenuLightsPresetSO*, bool)>(
    &::GlobalNamespace::MenuLightsManager::SetDefaultPreset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59853d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(),
                                                             { "SetDefaultPreset", {}, { ::i2c::type_of<::GlobalNamespace::MenuLightsPresetSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.ResetColorPresetToDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(bool)>(&::GlobalNamespace::MenuLightsManager::ResetColorPresetToDefault)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5985550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "ResetColorPresetToDefault", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.SetColorPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(::GlobalNamespace::MenuLightsPresetSO*, bool, float_t)>(
    &::GlobalNamespace::MenuLightsManager::SetColorPreset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5985474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(),
                                                { "SetColorPreset", {}, { ::i2c::type_of<::GlobalNamespace::MenuLightsPresetSO*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.StartLightAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(float_t)>(&::GlobalNamespace::MenuLightsManager::StartLightAnimation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59855ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "StartLightAnimation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.HandleTweenFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::HandleTweenFinished)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5985674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "HandleTweenFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.SetAlphaMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)(float_t, bool, float_t)>(&::GlobalNamespace::MenuLightsManager::SetAlphaMultiplier)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59856d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetAlphaMultiplier", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager.RefreshColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::RefreshColors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59857dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "RefreshColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuLightsManager::*)()>(&::GlobalNamespace::MenuLightsManager::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x598586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::MenuLightsManager::__cordl_internal_get__defaultPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__defaultPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPreset;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__defaultPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPreset = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::MenuLightsManager::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightManager = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MenuLightsManager::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::MenuLightsManager::__cordl_internal_get__preset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__preset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preset;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__preset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preset = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Color>*& GlobalNamespace::MenuLightsManager::__cordl_internal_get__originalColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColors;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Color>* const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__originalColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColors;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__originalColors(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColors = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::MenuLightsManager::__cordl_internal_get__animationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__animationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTween;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__animationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationTween = value;
}
constexpr float_t& GlobalNamespace::MenuLightsManager::__cordl_internal_get__alphaMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMultiplier;
}
constexpr float_t const& GlobalNamespace::MenuLightsManager::__cordl_internal_get__alphaMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMultiplier;
}
constexpr void GlobalNamespace::MenuLightsManager::__cordl_internal_set__alphaMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaMultiplier = value;
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MenuLightsManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsManager::SetColor(int32_t lightId, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, color);
}
inline ::UnityEngine::Color GlobalNamespace::MenuLightsManager::CurrentColorForID(int32_t lightId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "CurrentColorForID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, lightId);
}
inline void GlobalNamespace::MenuLightsManager::UpdateColors(float_t interpolationFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "UpdateColors", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interpolationFactor);
}
inline void GlobalNamespace::MenuLightsManager::SetTargetColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetTargetColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MenuLightsManager::GetLightsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "GetLightsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t, ::UnityEngine::Color> GlobalNamespace::MenuLightsManager::GetLightForIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "GetLightForIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, ::UnityEngine::Color>>(this, ___internal_method, index);
}
inline void GlobalNamespace::MenuLightsManager::SaveOriginalColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SaveOriginalColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsManager::SetDefaultPreset(::GlobalNamespace::MenuLightsPresetSO* preset, bool animated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetDefaultPreset", {}, { ::i2c::type_of<::GlobalNamespace::MenuLightsPresetSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preset, animated);
}
inline void GlobalNamespace::MenuLightsManager::ResetColorPresetToDefault(bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "ResetColorPresetToDefault", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void GlobalNamespace::MenuLightsManager::SetColorPreset(::GlobalNamespace::MenuLightsPresetSO* preset, bool animated, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(),
                                                           { "SetColorPreset", {}, { ::i2c::type_of<::GlobalNamespace::MenuLightsPresetSO*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preset, animated, duration);
}
inline void GlobalNamespace::MenuLightsManager::StartLightAnimation(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "StartLightAnimation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::MenuLightsManager::HandleTweenFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "HandleTweenFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsManager::SetAlphaMultiplier(float_t alphaMultiplier, bool animated, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "SetAlphaMultiplier", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alphaMultiplier, animated, duration);
}
inline void GlobalNamespace::MenuLightsManager::RefreshColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { "RefreshColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuLightsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuLightsManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuLightsManager* GlobalNamespace::MenuLightsManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuLightsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuLightsManager::MenuLightsManager() {}
