#pragma once
// IWYU pragma private; include "GlobalNamespace\ILightGroup.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILightGroup.get_groupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ILightGroup::*)()>(&::GlobalNamespace::ILightGroup::get_groupId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILightGroup*>(), { ::i2c::class_of<::GlobalNamespace::ILightGroup*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILightGroup.get_numberOfElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ILightGroup::*)()>(&::GlobalNamespace::ILightGroup::get_numberOfElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILightGroup*>(), { ::i2c::class_of<::GlobalNamespace::ILightGroup*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILightGroup.get_groupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ILightGroup::*)()>(&::GlobalNamespace::ILightGroup::get_groupName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILightGroup*>(), { ::i2c::class_of<::GlobalNamespace::ILightGroup*>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ILightGroup::get_groupId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILightGroup*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ILightGroup::get_numberOfElements() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILightGroup*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ILightGroup::get_groupName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILightGroup*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
