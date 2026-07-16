#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroupGlobals.hpp"
#include "UnityEngine/Rendering/zzzz__SHCoefficients_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroupGlobals_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroupGlobals.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchRendererGroupGlobals (*)()>(&::UnityEngine::Rendering::BatchRendererGroupGlobals::get_Default)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x67affcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroupGlobals.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchRendererGroupGlobals::*)(::UnityEngine::Rendering::BatchRendererGroupGlobals)>(
    &::UnityEngine::Rendering::BatchRendererGroupGlobals::Equals)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x67b012c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroupGlobals.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchRendererGroupGlobals::*)(::System::Object*)>(
    &::UnityEngine::Rendering::BatchRendererGroupGlobals::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67b024c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroupGlobals.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BatchRendererGroupGlobals::*)()>(&::UnityEngine::Rendering::BatchRendererGroupGlobals::GetHashCode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67b02f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroupGlobals.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BatchRendererGroupGlobals, ::UnityEngine::Rendering::BatchRendererGroupGlobals)>(
    &::UnityEngine::Rendering::BatchRendererGroupGlobals::op_Equality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67b0408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroupGlobals.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BatchRendererGroupGlobals, ::UnityEngine::Rendering::BatchRendererGroupGlobals)>(
    &::UnityEngine::Rendering::BatchRendererGroupGlobals::op_Inequality)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67b0490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(),
                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchRendererGroupGlobals::setStaticF_kGlobalsPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kGlobalsPropertyId", ::UnityEngine::Rendering::BatchRendererGroupGlobals>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::BatchRendererGroupGlobals::getStaticF_kGlobalsPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "kGlobalsPropertyId", ::UnityEngine::Rendering::BatchRendererGroupGlobals>();
}
inline ::UnityEngine::Rendering::BatchRendererGroupGlobals UnityEngine::Rendering::BatchRendererGroupGlobals::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchRendererGroupGlobals>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchRendererGroupGlobals::Equals(::UnityEngine::Rendering::BatchRendererGroupGlobals other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::BatchRendererGroupGlobals::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::BatchRendererGroupGlobals::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchRendererGroupGlobals::op_Equality(::UnityEngine::Rendering::BatchRendererGroupGlobals left, ::UnityEngine::Rendering::BatchRendererGroupGlobals right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(),
                          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::Rendering::BatchRendererGroupGlobals::op_Inequality(::UnityEngine::Rendering::BatchRendererGroupGlobals left, ::UnityEngine::Rendering::BatchRendererGroupGlobals right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>(), ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroupGlobals>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>"
constexpr UnityEngine::Rendering::BatchRendererGroupGlobals::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>*
UnityEngine::Rendering::BatchRendererGroupGlobals::i___System__IEquatable_1___UnityEngine__Rendering__BatchRendererGroupGlobals_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ProbesOcclusion", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "SpecCube0_HDR", ty: "::UnityEngine::Vector4", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "SpecCube1_HDR", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "SHCoefficients", ty:
// "::UnityEngine::Rendering::SHCoefficients", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchRendererGroupGlobals::BatchRendererGroupGlobals(::UnityEngine::Vector4 ProbesOcclusion, ::UnityEngine::Vector4 SpecCube0_HDR,
                                                                                         ::UnityEngine::Vector4 SpecCube1_HDR, ::UnityEngine::Rendering::SHCoefficients SHCoefficients) noexcept {
  this->ProbesOcclusion = ProbesOcclusion;
  this->SpecCube0_HDR = SpecCube0_HDR;
  this->SpecCube1_HDR = SpecCube1_HDR;
  this->SHCoefficients = SHCoefficients;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroupGlobals::BatchRendererGroupGlobals() {}
