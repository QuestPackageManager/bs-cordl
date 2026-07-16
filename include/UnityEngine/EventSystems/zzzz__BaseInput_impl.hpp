#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/BaseInput.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/zzzz__IMECompositionMode_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_compositionString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_compositionString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e19eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_imeCompositionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IMECompositionMode (::UnityEngine::EventSystems::BaseInput::*)()>(
    &::UnityEngine::EventSystems::BaseInput::get_imeCompositionMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e19eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.set_imeCompositionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInput::*)(::UnityEngine::IMECompositionMode)>(
    &::UnityEngine::EventSystems::BaseInput::set_imeCompositionMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e19edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_compositionCursorPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_compositionCursorPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e19f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.set_compositionCursorPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInput::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::BaseInput::set_compositionCursorPos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e19f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_mousePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e19f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.GetMouseButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInput::*)(int32_t)>(&::UnityEngine::EventSystems::BaseInput::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e19f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.GetMouseButtonUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInput::*)(int32_t)>(&::UnityEngine::EventSystems::BaseInput::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e19fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.GetMouseButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInput::*)(int32_t)>(&::UnityEngine::EventSystems::BaseInput::GetMouseButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e19fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_mousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_mouseScrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_mouseScrollDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_mouseScrollDeltaPerTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_mouseScrollDeltaPerTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1a02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_touchSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_touchSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1a034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.get_touchCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::get_touchCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e1a03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.GetTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (::UnityEngine::EventSystems::BaseInput::*)(int32_t)>(&::UnityEngine::EventSystems::BaseInput::GetTouch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e1a064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.GetAxisRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::EventSystems::BaseInput::*)(::StringW)>(&::UnityEngine::EventSystems::BaseInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1a0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput.GetButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::BaseInput::*)(::StringW)>(&::UnityEngine::EventSystems::BaseInput::GetButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1a0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseInput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::BaseInput::*)()>(&::UnityEngine::EventSystems::BaseInput::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1a0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::EventSystems::BaseInput::get_compositionString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::IMECompositionMode UnityEngine::EventSystems::BaseInput::get_imeCompositionMode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IMECompositionMode>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInput::set_imeCompositionMode(::UnityEngine::IMECompositionMode value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::BaseInput::get_compositionCursorPos() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseInput::set_compositionCursorPos(::UnityEngine::Vector2 value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::BaseInput::get_mousePresent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::BaseInput::GetMouseButtonDown(int32_t button) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool UnityEngine::EventSystems::BaseInput::GetMouseButtonUp(int32_t button) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool UnityEngine::EventSystems::BaseInput::GetMouseButton(int32_t button) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::BaseInput::get_mousePosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::BaseInput::get_mouseScrollDelta() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t UnityEngine::EventSystems::BaseInput::get_mouseScrollDeltaPerTick() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::BaseInput::get_touchSupported() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::BaseInput::get_touchCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::EventSystems::BaseInput::GetTouch(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(this, ___internal_method, index);
}
inline float_t UnityEngine::EventSystems::BaseInput::GetAxisRaw(::StringW axisName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axisName);
}
inline bool UnityEngine::EventSystems::BaseInput::GetButtonDown(::StringW buttonName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonName);
}
inline void UnityEngine::EventSystems::BaseInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::BaseInput*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::BaseInput* UnityEngine::EventSystems::BaseInput::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::BaseInput*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::BaseInput::BaseInput() {}
