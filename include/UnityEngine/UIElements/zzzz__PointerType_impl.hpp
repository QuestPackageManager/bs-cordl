#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerType.GetPointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::UIElements::PointerType::GetPointerType)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6d9ff80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerType*>(), { "GetPointerType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerType.IsDirectManipulationDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::UIElements::PointerType::IsDirectManipulationDevice)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6da0078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerType*>(), { "IsDirectManipulationDevice", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerType::setStaticF_mouse(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mouse", ::UnityEngine::UIElements::PointerType*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_mouse() {
  return ::cordl_internals::getStaticField<::StringW, "mouse", ::UnityEngine::UIElements::PointerType*>();
}
inline void UnityEngine::UIElements::PointerType::setStaticF_touch(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "touch", ::UnityEngine::UIElements::PointerType*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_touch() {
  return ::cordl_internals::getStaticField<::StringW, "touch", ::UnityEngine::UIElements::PointerType*>();
}
inline void UnityEngine::UIElements::PointerType::setStaticF_pen(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "pen", ::UnityEngine::UIElements::PointerType*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_pen() {
  return ::cordl_internals::getStaticField<::StringW, "pen", ::UnityEngine::UIElements::PointerType*>();
}
inline void UnityEngine::UIElements::PointerType::setStaticF_unknown(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "unknown", ::UnityEngine::UIElements::PointerType*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_unknown() {
  return ::cordl_internals::getStaticField<::StringW, "unknown", ::UnityEngine::UIElements::PointerType*>();
}
inline ::StringW UnityEngine::UIElements::PointerType::GetPointerType(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerType*>(), { "GetPointerType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerType::IsDirectManipulationDevice(::StringW pointerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerType*>(), { "IsDirectManipulationDevice", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerType);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerType::PointerType() {}
