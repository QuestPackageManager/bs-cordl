#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerRow.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerFoldout_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerRow_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRow.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRow::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerRow::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68004cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRow.GetChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Rendering::UI::DebugUIHandlerRow::*)(int32_t)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRow::GetChild)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x68004d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { "GetChild", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRow.TryGetChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerRow::*)(int32_t, ::by_ref<::UnityEngine::GameObject*>)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRow::TryGetChild)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6800608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(),
                                                             { "TryGetChild", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRow.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerRow::*)(::UnityEngine::Rendering::DebugUI_Table*, int32_t, ::UnityEngine::GameObject*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerRow::IsActive)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x680068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(),
                                         { "IsActive", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRow.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRow::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerRow::Update)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x68007cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerRow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerRow::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerRow::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6800bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::UI::DebugUIHandlerRow::__cordl_internal_get_m_Timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timer;
}
constexpr float_t const& UnityEngine::Rendering::UI::DebugUIHandlerRow::__cordl_internal_get_m_Timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timer;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerRow::__cordl_internal_set_m_Timer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timer = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRow::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Rendering::UI::DebugUIHandlerRow::GetChild(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { "GetChild", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerRow::TryGetChild(int32_t index, ::by_ref<::UnityEngine::GameObject*> child) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(),
                                                           { "TryGetChild", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, child);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerRow::IsActive(::UnityEngine::Rendering::DebugUI_Table* table, int32_t index, ::UnityEngine::GameObject* child) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(),
                                       { "IsActive", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Table*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table, index, child);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRow::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerRow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerRow* UnityEngine::Rendering::UI::DebugUIHandlerRow::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerRow*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerRow::DebugUIHandlerRow() {}
