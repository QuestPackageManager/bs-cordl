#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuSeparator.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuSeparator_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuSeparator.get_subMenuPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::DropdownMenuSeparator::*)()>(&::UnityEngine::UIElements::DropdownMenuSeparator::get_subMenuPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d908c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuSeparator*>(), { "get_subMenuPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuSeparator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuSeparator::*)(::StringW)>(&::UnityEngine::UIElements::DropdownMenuSeparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d908c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuSeparator*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::DropdownMenuSeparator::__cordl_internal_get__subMenuPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subMenuPath_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::DropdownMenuSeparator::__cordl_internal_get__subMenuPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subMenuPath_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuSeparator::__cordl_internal_set__subMenuPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subMenuPath_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::DropdownMenuSeparator::get_subMenuPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuSeparator*>(), { "get_subMenuPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DropdownMenuSeparator::_ctor(::StringW subMenuPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuSeparator*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMenuPath);
}
inline ::UnityEngine::UIElements::DropdownMenuSeparator* UnityEngine::UIElements::DropdownMenuSeparator::New_ctor(::StringW subMenuPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenuSeparator*>(subMenuPath));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuSeparator::DropdownMenuSeparator() {}
