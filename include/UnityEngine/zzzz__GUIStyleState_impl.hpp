#pragma once
// IWYU pragma private; include "UnityEngine\GUIStyleState.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUIStyleState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIStyleState_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIStyleState_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::GUIStyleState*)>(&::UnityEngine::GUIStyleState_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b4960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::GUIStyleState*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::GUIStyleState_BindingsMarshaller::ConvertToNative(::UnityEngine::GUIStyleState* guiStyleState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::GUIStyleState*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, guiStyleState);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIStyleState_BindingsMarshaller::GUIStyleState_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::GUIStyleState.set_textColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyleState::*)(::UnityEngine::Color)>(&::UnityEngine::GUIStyleState::set_textColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b48fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "set_textColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::GUIStyleState::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b49460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyleState::*)()>(&::UnityEngine::GUIStyleState::Cleanup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b49488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyleState::*)()>(&::UnityEngine::GUIStyleState::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b49514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyleState::*)(::UnityEngine::GUIStyle*, ::System::IntPtr)>(&::UnityEngine::GUIStyleState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b49554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState.GetGUIStyleState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyleState* (*)(::UnityEngine::GUIStyle*, ::System::IntPtr)>(&::UnityEngine::GUIStyleState::GetGUIStyleState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b4955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "GetGUIStyleState", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyleState::*)()>(&::UnityEngine::GUIStyleState::Finalize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b495b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { ::i2c::class_of<::UnityEngine::GUIStyleState*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState.set_textColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUIStyleState::set_textColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b4941c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(),
                                                             { "set_textColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyleState.Cleanup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::GUIStyleState::Cleanup_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b494d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "Cleanup_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::GUIStyleState::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::GUIStyleState::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::GUIStyleState::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUIStyleState::__cordl_internal_get_m_SourceStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceStyle;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUIStyleState::__cordl_internal_get_m_SourceStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceStyle;
}
constexpr void UnityEngine::GUIStyleState::__cordl_internal_set_m_SourceStyle(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceStyle = value;
}
inline void UnityEngine::GUIStyleState::set_textColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "set_textColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::GUIStyleState::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIStyleState::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIStyleState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIStyleState::_ctor(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceStyle, source);
}
inline ::UnityEngine::GUIStyleState* UnityEngine::GUIStyleState::GetGUIStyleState(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "GetGUIStyleState", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyleState*>(nullptr, ___internal_method, sourceStyle, source);
}
inline void UnityEngine::GUIStyleState::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIStyleState*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIStyleState::set_textColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(),
                                                           { "set_textColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::GUIStyleState::Cleanup_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyleState*>(), { "Cleanup_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::GUIStyleState* UnityEngine::GUIStyleState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIStyleState*>());
}
inline ::UnityEngine::GUIStyleState* UnityEngine::GUIStyleState::New_ctor(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIStyleState*>(sourceStyle, source));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIStyleState::GUIStyleState() {}
