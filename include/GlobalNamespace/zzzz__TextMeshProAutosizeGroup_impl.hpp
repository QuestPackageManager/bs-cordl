#pragma once
// IWYU pragma private; include "GlobalNamespace/TextMeshProAutosizeGroup.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextMeshProAutosizeGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5875890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProAutosizeGroup*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProAutosizeGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&::GlobalNamespace::TextMeshProAutosizeGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58759a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProAutosizeGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::TextMeshProAutosizeGroup::__cordl_internal_get__texts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::TextMeshProAutosizeGroup::__cordl_internal_get__texts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr void GlobalNamespace::TextMeshProAutosizeGroup::__cordl_internal_set__texts(::ArrayW<::UnityW<::TMPro::TMP_Text>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____texts = value;
}
inline void GlobalNamespace::TextMeshProAutosizeGroup::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProAutosizeGroup*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextMeshProAutosizeGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProAutosizeGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextMeshProAutosizeGroup* GlobalNamespace::TextMeshProAutosizeGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextMeshProAutosizeGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextMeshProAutosizeGroup::TextMeshProAutosizeGroup() {}
