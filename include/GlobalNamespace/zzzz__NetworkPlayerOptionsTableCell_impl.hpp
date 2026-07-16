#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayerOptionsTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_impl.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerOptionsTableCell_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.get_player
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(
    &::GlobalNamespace::NetworkPlayerOptionsTableCell::get_player)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0b0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "get_player", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.set_player
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::NetworkPlayerOptionsTableCell::set_player)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0b0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "set_player", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Refresh)> {
  constexpr static std::size_t size = 0xcd4;
  constexpr static std::size_t addrs = 0x5a0b0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Block)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0bd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Block", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Unblock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Unblock)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0be38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Unblock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Join)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0bee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Join", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Invite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Invite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Invite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Kick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Kick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0c048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Kick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell.Leave
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::Leave)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0c0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Leave", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerOptionsTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&::GlobalNamespace::NetworkPlayerOptionsTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0c1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>>& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__buttons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>> const& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__buttons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttons;
}
constexpr void GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_set__buttons(::ArrayW<::UnityW<::UnityEngine::UI::Button>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttons = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__buttonTexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonTexts;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> const& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__buttonTexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonTexts;
}
constexpr void GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_set__buttonTexts(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonTexts = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_get__player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
constexpr void GlobalNamespace::NetworkPlayerOptionsTableCell::__cordl_internal_set__player(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____player = value;
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::NetworkPlayerOptionsTableCell::get_player() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "get_player", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::set_player(::GlobalNamespace::INetworkPlayer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "set_player", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Block() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Block", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Unblock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Unblock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Join() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Join", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Invite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Invite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Kick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Kick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::Leave() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { "Leave", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerOptionsTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkPlayerOptionsTableCell* GlobalNamespace::NetworkPlayerOptionsTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerOptionsTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPlayerOptionsTableCell::NetworkPlayerOptionsTableCell() {}
