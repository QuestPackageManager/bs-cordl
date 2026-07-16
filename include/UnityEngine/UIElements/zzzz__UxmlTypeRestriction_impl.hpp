#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTypeRestriction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTypeRestriction.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlTypeRestriction::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(
    &::UnityEngine::UIElements::UxmlTypeRestriction::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cbde64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlTypeRestriction*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlTypeRestriction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTypeRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlTypeRestriction::*)()>(&::UnityEngine::UIElements::UxmlTypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cbde70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlTypeRestriction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UxmlTypeRestriction::Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlTypeRestriction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void UnityEngine::UIElements::UxmlTypeRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlTypeRestriction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlTypeRestriction* UnityEngine::UIElements::UxmlTypeRestriction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlTypeRestriction*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
constexpr UnityEngine::UIElements::UxmlTypeRestriction::operator ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*
UnityEngine::UIElements::UxmlTypeRestriction::i___System__IEquatable_1___UnityEngine__UIElements__UxmlTypeRestriction__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction::UxmlTypeRestriction() {}
