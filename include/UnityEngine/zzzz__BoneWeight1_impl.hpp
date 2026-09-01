#pragma once
// IWYU pragma private; include "UnityEngine\BoneWeight1.hpp"
#include "UnityEngine/zzzz__BoneWeight1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::BoneWeight1.get_weight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::BoneWeight1::*)()>(&::UnityEngine::BoneWeight1::get_weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ab51d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { "get_weight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoneWeight1.get_boneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::BoneWeight1::*)()>(&::UnityEngine::BoneWeight1::get_boneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ab51d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { "get_boneIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoneWeight1.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::BoneWeight1::*)(::System::Object*)>(&::UnityEngine::BoneWeight1::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6ab51e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { ::i2c::class_of<::UnityEngine::BoneWeight1>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoneWeight1.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::BoneWeight1::*)(::UnityEngine::BoneWeight1)>(&::UnityEngine::BoneWeight1::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ab52a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::BoneWeight1>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoneWeight1.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::BoneWeight1::*)()>(&::UnityEngine::BoneWeight1::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ab52fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { ::i2c::class_of<::UnityEngine::BoneWeight1>(), 2 }));
    return ___internal_method;
  }
};
inline float_t UnityEngine::BoneWeight1::get_weight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { "get_weight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::BoneWeight1::get_boneIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { "get_boneIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::BoneWeight1::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::BoneWeight1>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::BoneWeight1::Equals(::UnityEngine::BoneWeight1 other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoneWeight1>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::BoneWeight1>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::BoneWeight1::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::BoneWeight1>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
constexpr UnityEngine::BoneWeight1::operator ::System::IEquatable_1<::UnityEngine::BoneWeight1>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::BoneWeight1>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
constexpr ::System::IEquatable_1<::UnityEngine::BoneWeight1>* UnityEngine::BoneWeight1::i___System__IEquatable_1___UnityEngine__BoneWeight1_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::BoneWeight1>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BoneIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BoneWeight1::BoneWeight1(float_t m_Weight, int32_t m_BoneIndex) noexcept {
  this->m_Weight = m_Weight;
  this->m_BoneIndex = m_BoneIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::BoneWeight1::BoneWeight1() {}
