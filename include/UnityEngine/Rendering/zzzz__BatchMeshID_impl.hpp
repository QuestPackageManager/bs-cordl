#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BatchMeshID.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BatchMeshID::*)()>(&::UnityEngine::Rendering::BatchMeshID::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchMeshID::*)(::System::Object*)>(&::UnityEngine::Rendering::BatchMeshID::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b2a6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchMeshID::*)(::UnityEngine::Rendering::BatchMeshID)>(&::UnityEngine::Rendering::BatchMeshID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b2a784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchMeshID.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BatchMeshID, ::UnityEngine::Rendering::BatchMeshID)>(&::UnityEngine::Rendering::BatchMeshID::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b2a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchMeshID::setStaticF_Null(::UnityEngine::Rendering::BatchMeshID value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::BatchMeshID, "Null", ::UnityEngine::Rendering::BatchMeshID>(std::forward<::UnityEngine::Rendering::BatchMeshID>(value));
}
inline ::UnityEngine::Rendering::BatchMeshID UnityEngine::Rendering::BatchMeshID::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::BatchMeshID, "Null", ::UnityEngine::Rendering::BatchMeshID>();
}
inline int32_t UnityEngine::Rendering::BatchMeshID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchMeshID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Rendering::BatchMeshID::Equals(::UnityEngine::Rendering::BatchMeshID other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::BatchMeshID::op_Equality(::UnityEngine::Rendering::BatchMeshID a, ::UnityEngine::Rendering::BatchMeshID b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchMeshID>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>"
constexpr UnityEngine::Rendering::BatchMeshID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>* UnityEngine::Rendering::BatchMeshID::i___System__IEquatable_1___UnityEngine__Rendering__BatchMeshID_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchMeshID::BatchMeshID(uint32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchMeshID::BatchMeshID() {}
