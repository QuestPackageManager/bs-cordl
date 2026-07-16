#pragma once
// IWYU pragma private; include "Assets/OVR/Scripts/FixRecord.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__FixRecord_def.hpp"
#include "Assets/OVR/Scripts/zzzz__FixMethodDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::FixRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Assets::OVR::Scripts::FixRecord::*)(int32_t, ::StringW, ::StringW, ::Assets::OVR::Scripts::FixMethodDelegate*, ::UnityEngine::Object*,
                                                                                                   bool, ::ArrayW<::StringW>)>(&::Assets::OVR::Scripts::FixRecord::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e47c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Assets::OVR::Scripts::FixRecord*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Assets::OVR::Scripts::FixMethodDelegate*>(),
                                                    ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::Assets::OVR::Scripts::FixMethodDelegate*& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_fixMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixMethod;
}
constexpr ::Assets::OVR::Scripts::FixMethodDelegate* const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_fixMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixMethod;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_fixMethod(::Assets::OVR::Scripts::FixMethodDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixMethod = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_targetObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_targetObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetObject;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_targetObject(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetObject = value;
}
constexpr ::ArrayW<::StringW>& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_buttonNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonNames;
}
constexpr ::ArrayW<::StringW> const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_buttonNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonNames;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_buttonNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonNames = value;
}
constexpr bool& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_editModeRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editModeRequired;
}
constexpr bool const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_editModeRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editModeRequired;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_editModeRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editModeRequired = value;
}
constexpr bool& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complete;
}
constexpr bool const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complete;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complete = value;
}
inline void Assets::OVR::Scripts::FixRecord::_ctor(int32_t order, ::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix, ::UnityEngine::Object* target, bool editRequired,
                                                   ::ArrayW<::StringW> buttons) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Assets::OVR::Scripts::FixRecord*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Assets::OVR::Scripts::FixMethodDelegate*>(),
                                                  ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order, cat, msg, fix, target, editRequired, buttons);
}
inline ::Assets::OVR::Scripts::FixRecord* Assets::OVR::Scripts::FixRecord::New_ctor(int32_t order, ::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix,
                                                                                    ::UnityEngine::Object* target, bool editRequired, ::ArrayW<::StringW> buttons) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Assets::OVR::Scripts::FixRecord*>(order, cat, msg, fix, target, editRequired, buttons));
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::FixRecord::FixRecord() {}
