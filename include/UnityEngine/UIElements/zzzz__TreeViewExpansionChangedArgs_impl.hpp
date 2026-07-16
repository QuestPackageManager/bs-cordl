#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewExpansionChangedArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewExpansionChangedArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewExpansionChangedArgs.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewExpansionChangedArgs::*)(int32_t)>(&::UnityEngine::UIElements::TreeViewExpansionChangedArgs::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d293bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewExpansionChangedArgs.set_isExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewExpansionChangedArgs::*)(bool)>(
    &::UnityEngine::UIElements::TreeViewExpansionChangedArgs::set_isExpanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d293c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { "set_isExpanded", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewExpansionChangedArgs.set_isAppliedToAllChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewExpansionChangedArgs::*)(bool)>(
    &::UnityEngine::UIElements::TreeViewExpansionChangedArgs::set_isAppliedToAllChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d293cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { "set_isAppliedToAllChildren", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewExpansionChangedArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewExpansionChangedArgs::*)()>(&::UnityEngine::UIElements::TreeViewExpansionChangedArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d293d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_set__id_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_get__isExpanded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isExpanded_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_get__isExpanded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isExpanded_k__BackingField;
}
constexpr void UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_set__isExpanded_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isExpanded_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_get__isAppliedToAllChildren_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAppliedToAllChildren_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_get__isAppliedToAllChildren_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAppliedToAllChildren_k__BackingField;
}
constexpr void UnityEngine::UIElements::TreeViewExpansionChangedArgs::__cordl_internal_set__isAppliedToAllChildren_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAppliedToAllChildren_k__BackingField = value;
}
inline void UnityEngine::UIElements::TreeViewExpansionChangedArgs::set_id(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TreeViewExpansionChangedArgs::set_isExpanded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { "set_isExpanded", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TreeViewExpansionChangedArgs::set_isAppliedToAllChildren(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { "set_isAppliedToAllChildren", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TreeViewExpansionChangedArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TreeViewExpansionChangedArgs* UnityEngine::UIElements::TreeViewExpansionChangedArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TreeViewExpansionChangedArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TreeViewExpansionChangedArgs::TreeViewExpansionChangedArgs() {}
