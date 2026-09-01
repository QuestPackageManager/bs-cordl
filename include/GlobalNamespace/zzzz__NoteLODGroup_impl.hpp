#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteLODGroup.hpp"
#include "GlobalNamespace/zzzz__CustomLODGroup_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLODGroup_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteLODGroup.get_meshFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::GlobalNamespace::NoteLODGroup::*)()>(&::GlobalNamespace::NoteLODGroup::get_meshFilter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x597e058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { "get_meshFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLODGroup.get_meshRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::GlobalNamespace::NoteLODGroup::*)()>(&::GlobalNamespace::NoteLODGroup::get_meshRenderer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x597e0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { "get_meshRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLODGroup.GetStartupLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NoteLODGroup::*)()>(&::GlobalNamespace::NoteLODGroup::GetStartupLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { ::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLODGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteLODGroup::*)()>(&::GlobalNamespace::NoteLODGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::NoteLODGroup::__cordl_internal_get__postProcessEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postProcessEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::NoteLODGroup::__cordl_internal_get__postProcessEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postProcessEnabled;
}
constexpr void GlobalNamespace::NoteLODGroup::__cordl_internal_set__postProcessEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____postProcessEnabled = value;
}
inline ::UnityW<::UnityEngine::MeshFilter> GlobalNamespace::NoteLODGroup::get_meshFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { "get_meshFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshRenderer> GlobalNamespace::NoteLODGroup::get_meshRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { "get_meshRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NoteLODGroup::GetStartupLevel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteLODGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteLODGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteLODGroup* GlobalNamespace::NoteLODGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteLODGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteLODGroup::NoteLODGroup() {}
