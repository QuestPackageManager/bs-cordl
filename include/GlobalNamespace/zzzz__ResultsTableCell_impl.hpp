#pragma once
// IWYU pragma private; include "GlobalNamespace\ResultsTableCell.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_impl.hpp"
#include "GlobalNamespace/zzzz__ResultsTableCell_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResultsTableCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResultsTableCell::*)(int32_t, ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::ResultsTableCell::SetData)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x596f09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResultsTableCell*>(),
                            { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResultsTableCell::*)()>(&::GlobalNamespace::ResultsTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596f424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResultsTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ResultsTableCell::__cordl_internal_get__border() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____border;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ResultsTableCell::__cordl_internal_get__border() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____border;
}
constexpr void GlobalNamespace::ResultsTableCell::__cordl_internal_set__border(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____border = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ResultsTableCell::__cordl_internal_get__orderText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orderText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ResultsTableCell::__cordl_internal_get__orderText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orderText;
}
constexpr void GlobalNamespace::ResultsTableCell::__cordl_internal_set__orderText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____orderText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ResultsTableCell::__cordl_internal_get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ResultsTableCell::__cordl_internal_get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::ResultsTableCell::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ResultsTableCell::__cordl_internal_get__scoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ResultsTableCell::__cordl_internal_get__scoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr void GlobalNamespace::ResultsTableCell::__cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ResultsTableCell::__cordl_internal_get__rankText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ResultsTableCell::__cordl_internal_get__rankText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr void GlobalNamespace::ResultsTableCell::__cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rankText = value;
}
inline void GlobalNamespace::ResultsTableCell::SetData(int32_t order, ::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResultsTableCell*>(),
                          { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order, connectedPlayer, levelCompletionResults);
}
inline void GlobalNamespace::ResultsTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResultsTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ResultsTableCell* GlobalNamespace::ResultsTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ResultsTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResultsTableCell::ResultsTableCell() {}
