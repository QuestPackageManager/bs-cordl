#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchMaterialID.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BatchMaterialID::*)()>(&::UnityEngine::Rendering::BatchMaterialID::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b26fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchMaterialID::*)(::System::Object*)>(&::UnityEngine::Rendering::BatchMaterialID::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b26fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchMaterialID::*)(::UnityEngine::Rendering::BatchMaterialID)>(
    &::UnityEngine::Rendering::BatchMaterialID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b27080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMaterialID.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BatchMaterialID, ::UnityEngine::Rendering::BatchMaterialID)>(
    &::UnityEngine::Rendering::BatchMaterialID::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b27090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchMaterialID::setStaticF_Null(::UnityEngine::Rendering::BatchMaterialID value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::BatchMaterialID, "Null", ::UnityEngine::Rendering::BatchMaterialID>(std::forward<::UnityEngine::Rendering::BatchMaterialID>(value));
}
inline ::UnityEngine::Rendering::BatchMaterialID UnityEngine::Rendering::BatchMaterialID::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::BatchMaterialID, "Null", ::UnityEngine::Rendering::BatchMaterialID>();
}
inline int32_t UnityEngine::Rendering::BatchMaterialID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchMaterialID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Rendering::BatchMaterialID::Equals(::UnityEngine::Rendering::BatchMaterialID other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::BatchMaterialID::op_Equality(::UnityEngine::Rendering::BatchMaterialID a, ::UnityEngine::Rendering::BatchMaterialID b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMaterialID>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
constexpr UnityEngine::Rendering::BatchMaterialID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>* UnityEngine::Rendering::BatchMaterialID::i___System__IEquatable_1___UnityEngine__Rendering__BatchMaterialID_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchMaterialID::BatchMaterialID(uint32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchMaterialID::BatchMaterialID() {}
