#pragma once
// IWYU pragma private; include "UnityEngine/MeshLodRange.hpp"
#include "UnityEngine/zzzz__MeshLodRange_def.hpp"
//  Writing Method size for method: ::UnityEngine::MeshLodRange.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::MeshLodRange::*)()>(&::UnityEngine::MeshLodRange::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6f0dfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::MeshLodRange>(), { ::i2c::class_of<::UnityEngine::MeshLodRange>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::MeshLodRange::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::MeshLodRange>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IndexStart", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IndexCount", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::MeshLodRange::MeshLodRange(uint32_t m_IndexStart, uint32_t m_IndexCount) noexcept {
  this->m_IndexStart = m_IndexStart;
  this->m_IndexCount = m_IndexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshLodRange::MeshLodRange() {}
