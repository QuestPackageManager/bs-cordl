#pragma once
// IWYU pragma private; include "GlobalNamespace\CreditsSetupSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsSetupSO_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreditsSetupSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsSetupSO::*)()>(&::GlobalNamespace::CreditsSetupSO::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3280ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsSetupSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_normalTextPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalTextPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_normalTextPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalTextPrefab;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_normalTextPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalTextPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_normalLocalizedTextPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalLocalizedTextPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_normalLocalizedTextPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalLocalizedTextPrefab;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_normalLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalLocalizedTextPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_titleTextPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleTextPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_titleTextPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleTextPrefab;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_titleTextPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___titleTextPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_titleLocalizedTextPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleLocalizedTextPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_titleLocalizedTextPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleLocalizedTextPrefab;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_titleLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___titleLocalizedTextPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_headerTextPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerTextPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_headerTextPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerTextPrefab;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_headerTextPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerTextPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_headerLocalizedTextPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerLocalizedTextPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_headerLocalizedTextPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerLocalizedTextPrefab;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_headerLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerLocalizedTextPrefab = value;
}
constexpr int32_t& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_columnCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnCount;
}
constexpr int32_t const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_columnCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnCount;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_columnCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnCount = value;
}
constexpr float_t& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_spaceHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spaceHeight;
}
constexpr float_t const& GlobalNamespace::CreditsSetupSO::__cordl_internal_get_spaceHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spaceHeight;
}
constexpr void GlobalNamespace::CreditsSetupSO::__cordl_internal_set_spaceHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spaceHeight = value;
}
inline void GlobalNamespace::CreditsSetupSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsSetupSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsSetupSO* GlobalNamespace::CreditsSetupSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsSetupSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsSetupSO::CreditsSetupSO() {}
