#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLayoutBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeLayoutBase.get_childParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::CompositeLayoutBase::*)()>(&::GlobalNamespace::CompositeLayoutBase::get_childParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598db94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "get_childParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLayoutBase.get_prefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CompositeLayoutBase::*)()>(&::GlobalNamespace::CompositeLayoutBase::get_prefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598db9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "get_prefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLayoutBase.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CompositeLayoutBase::*)()>(&::GlobalNamespace::CompositeLayoutBase::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598dba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLayoutBase.CopyBaseStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLayoutBase::*)(::GlobalNamespace::CompositeLayoutBase*)>(
    &::GlobalNamespace::CompositeLayoutBase::CopyBaseStateFrom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x598dbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "CopyBaseStateFrom", {}, { ::i2c::type_of<::GlobalNamespace::CompositeLayoutBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLayoutBase.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLayoutBase::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>*, int32_t,
                                                                                                        int32_t)>(&::GlobalNamespace::CompositeLayoutBase::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598dbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { ::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLayoutBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLayoutBase::*)()>(&::GlobalNamespace::CompositeLayoutBase::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x598dae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CompositeLayoutBase::__cordl_internal_get__childParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CompositeLayoutBase::__cordl_internal_get__childParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childParent;
}
constexpr void GlobalNamespace::CompositeLayoutBase::__cordl_internal_set__childParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childParent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CompositeLayoutBase::__cordl_internal_get__prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CompositeLayoutBase::__cordl_internal_get__prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefab;
}
constexpr void GlobalNamespace::CompositeLayoutBase::__cordl_internal_set__prefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefab = value;
}
constexpr int32_t& GlobalNamespace::CompositeLayoutBase::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& GlobalNamespace::CompositeLayoutBase::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void GlobalNamespace::CompositeLayoutBase::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CompositeLayoutBase::get_childParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "get_childParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CompositeLayoutBase::get_prefab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "get_prefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CompositeLayoutBase::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CompositeLayoutBase::CopyBaseStateFrom(::GlobalNamespace::CompositeLayoutBase* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { "CopyBaseStateFrom", {}, { ::i2c::type_of<::GlobalNamespace::CompositeLayoutBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::CompositeLayoutBase::Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements,
                                                        int32_t sameIdElements) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childTransforms, numberOfElements, sameIdElements);
}
inline void GlobalNamespace::CompositeLayoutBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLayoutBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLayoutBase* GlobalNamespace::CompositeLayoutBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLayoutBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLayoutBase::CompositeLayoutBase() {}
