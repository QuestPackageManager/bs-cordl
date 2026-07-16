#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SafeHandleAccess.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SafeHandleAccess_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::SafeHandleAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SafeHandleAccess::*)(::System::IntPtr)>(&::UnityEngine::UIElements::SafeHandleAccess::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SafeHandleAccess>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SafeHandleAccess.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::SafeHandleAccess::*)()>(&::UnityEngine::UIElements::SafeHandleAccess::IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6db9564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SafeHandleAccess>(), { "IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SafeHandleAccess.op_Implicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::UIElements::SafeHandleAccess)>(&::UnityEngine::UIElements::SafeHandleAccess::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6db9574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SafeHandleAccess>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::SafeHandleAccess>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::SafeHandleAccess::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SafeHandleAccess>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline bool UnityEngine::UIElements::SafeHandleAccess::IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SafeHandleAccess>(), { "IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::UIElements::SafeHandleAccess::op_Implicit___System__IntPtr(::UnityEngine::UIElements::SafeHandleAccess a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SafeHandleAccess>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::SafeHandleAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, a);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::SafeHandleAccess::SafeHandleAccess(::System::IntPtr m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SafeHandleAccess::SafeHandleAccess() {}
