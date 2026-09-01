#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerEnumField.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerField_1_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerEnumField_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField.OnIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::*)(bool)>(&::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::OnIncrement)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x68025e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField.OnDecrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::*)(bool)>(&::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::OnDecrement)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x680277c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField.UpdateValueLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::UpdateValueLabel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6802954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68029f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UI::DebugUIHandlerEnumField::OnIncrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerEnumField::OnDecrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerEnumField::UpdateValueLabel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerEnumField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField* UnityEngine::Rendering::UI::DebugUIHandlerEnumField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField::DebugUIHandlerEnumField() {}
