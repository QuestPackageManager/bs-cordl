#pragma once
// IWYU pragma private; include "UnityEngine\XR\MeshId.hpp"
#include "UnityEngine/XR/zzzz__MeshId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::MeshId.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::MeshId::*)()>(&::UnityEngine::XR::MeshId::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e39704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::MeshId>(), { ::i2c::class_of<::UnityEngine::XR::MeshId>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::MeshId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::MeshId::*)()>(&::UnityEngine::XR::MeshId::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e397c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::MeshId>(), { ::i2c::class_of<::UnityEngine::XR::MeshId>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::MeshId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::MeshId::*)(::System::Object*)>(&::UnityEngine::XR::MeshId::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e397dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::MeshId>(), { ::i2c::class_of<::UnityEngine::XR::MeshId>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::MeshId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::MeshId::*)(::UnityEngine::XR::MeshId)>(&::UnityEngine::XR::MeshId::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e3989c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::MeshId>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::MeshId>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::MeshId::setStaticF_s_InvalidId(::UnityEngine::XR::MeshId value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::MeshId, "s_InvalidId", ::UnityEngine::XR::MeshId>(std::forward<::UnityEngine::XR::MeshId>(value));
}
inline ::UnityEngine::XR::MeshId UnityEngine::XR::MeshId::getStaticF_s_InvalidId() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::MeshId, "s_InvalidId", ::UnityEngine::XR::MeshId>();
}
inline ::StringW UnityEngine::XR::MeshId::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::MeshId>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t UnityEngine::XR::MeshId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::MeshId>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::MeshId::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::MeshId>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::XR::MeshId::Equals(::UnityEngine::XR::MeshId other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::MeshId>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::MeshId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
constexpr UnityEngine::XR::MeshId::operator ::System::IEquatable_1<::UnityEngine::XR::MeshId>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::MeshId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::MeshId>* UnityEngine::XR::MeshId::i___System__IEquatable_1___UnityEngine__XR__MeshId_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::MeshId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SubId1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubId2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshId::MeshId(uint64_t m_SubId1, uint64_t m_SubId2) noexcept {
  this->m_SubId1 = m_SubId1;
  this->m_SubId2 = m_SubId2;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::MeshId::MeshId() {}
