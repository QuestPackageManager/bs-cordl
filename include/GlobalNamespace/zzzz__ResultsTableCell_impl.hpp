#pragma once
#include "GlobalNamespace/zzzz__TableCellWithSeparator_impl.hpp"
#include "GlobalNamespace/zzzz__ResultsTableCell_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResultsTableCell.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsTableCell::*)(
    int32_t, ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::ResultsTableCell::SetData)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x22e8148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsTableCell::*)()>(&::GlobalNamespace::ResultsTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e84d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::ResultsTableCell::__get__border() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____border;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::ResultsTableCell::__get__border() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____border;
}
constexpr void GlobalNamespace::ResultsTableCell::__set__border(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____border)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::ResultsTableCell::__get__orderText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orderText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::ResultsTableCell::__get__orderText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orderText;
}
constexpr void GlobalNamespace::ResultsTableCell::__set__orderText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____orderText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::ResultsTableCell::__get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::ResultsTableCell::__get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::ResultsTableCell::__set__nameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::ResultsTableCell::__get__scoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::ResultsTableCell::__get__scoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr void GlobalNamespace::ResultsTableCell::__set__scoreText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::ResultsTableCell::__get__rankText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::ResultsTableCell::__get__rankText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr void GlobalNamespace::ResultsTableCell::__set__rankText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rankText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ResultsTableCell::SetData(int32_t order, ::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order, connectedPlayer, levelCompletionResults);
}
inline ::GlobalNamespace::ResultsTableCell* GlobalNamespace::ResultsTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ResultsTableCell*>());
}
inline void GlobalNamespace::ResultsTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResultsTableCell::ResultsTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
