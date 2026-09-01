#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerScoreRingItem.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreItem_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingItem_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingItem_Pool::*)()>(&::GlobalNamespace::MultiplayerScoreRingItem_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59e5d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingItem_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerScoreRingItem_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingItem_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerScoreRingItem_Pool* GlobalNamespace::MultiplayerScoreRingItem_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreRingItem_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreRingItem_Pool::MultiplayerScoreRingItem_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingItem::*)()>(&::GlobalNamespace::MultiplayerScoreRingItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e5d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerScoreRingItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerScoreRingItem* GlobalNamespace::MultiplayerScoreRingItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreRingItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreRingItem::MultiplayerScoreRingItem() {}
