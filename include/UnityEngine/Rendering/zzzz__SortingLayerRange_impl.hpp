#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingLayerRange.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.get_all
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SortingLayerRange (*)()>(&::UnityEngine::Rendering::SortingLayerRange::get_all)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), { "get_all", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SortingLayerRange::*)(::UnityEngine::Rendering::SortingLayerRange)>(
    &::UnityEngine::Rendering::SortingLayerRange::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b25518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::SortingLayerRange>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SortingLayerRange::*)(::System::Object*)>(&::UnityEngine::Rendering::SortingLayerRange::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b2553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), { ::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingLayerRange.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SortingLayerRange::*)()>(&::UnityEngine::Rendering::SortingLayerRange::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b255c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), { ::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::SortingLayerRange UnityEngine::Rendering::SortingLayerRange::get_all() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), { "get_all", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SortingLayerRange>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::SortingLayerRange::Equals(::UnityEngine::Rendering::SortingLayerRange other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::SortingLayerRange>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::SortingLayerRange::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::SortingLayerRange::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SortingLayerRange>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>"
constexpr UnityEngine::Rendering::SortingLayerRange::operator ::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>* UnityEngine::Rendering::SortingLayerRange::i___System__IEquatable_1___UnityEngine__Rendering__SortingLayerRange_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_LowerBound", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UpperBound", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SortingLayerRange::SortingLayerRange(int16_t m_LowerBound, int16_t m_UpperBound) noexcept {
  this->m_LowerBound = m_LowerBound;
  this->m_UpperBound = m_UpperBound;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SortingLayerRange::SortingLayerRange() {}
