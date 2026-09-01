#pragma once
// IWYU pragma private; include "GlobalNamespace\ResultObjectiveListItemsList.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__ResultObjectiveListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__ResultObjectiveListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResultObjectiveListItemsList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResultObjectiveListItemsList::*)()>(&::GlobalNamespace::ResultObjectiveListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x596f050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResultObjectiveListItemsList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ResultObjectiveListItemsList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResultObjectiveListItemsList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ResultObjectiveListItemsList* GlobalNamespace::ResultObjectiveListItemsList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ResultObjectiveListItemsList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResultObjectiveListItemsList::ResultObjectiveListItemsList() {}
