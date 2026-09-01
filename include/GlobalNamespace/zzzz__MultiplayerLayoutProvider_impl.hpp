#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLayoutProvider.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.get_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerPlayerLayout (::GlobalNamespace::MultiplayerLayoutProvider::*)()>(
    &::GlobalNamespace::MultiplayerLayoutProvider::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dacd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "get_layout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.set_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(::GlobalNamespace::MultiplayerPlayerLayout)>(
    &::GlobalNamespace::MultiplayerLayoutProvider::set_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dacdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "set_layout", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.get_activePlayerSpotsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerLayoutProvider::*)()>(&::GlobalNamespace::MultiplayerLayoutProvider::get_activePlayerSpotsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dace4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "get_activePlayerSpotsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.set_activePlayerSpotsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(int32_t)>(&::GlobalNamespace::MultiplayerLayoutProvider::set_activePlayerSpotsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dacec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "set_activePlayerSpotsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.add_playersLayoutWasCalculatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*)>(
    &::GlobalNamespace::MultiplayerLayoutProvider::add_playersLayoutWasCalculatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59d0534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(),
                                                { "add_playersLayoutWasCalculatedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.remove_playersLayoutWasCalculatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*)>(
    &::GlobalNamespace::MultiplayerLayoutProvider::remove_playersLayoutWasCalculatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59d06c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(),
                                                { "remove_playersLayoutWasCalculatedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.CalculateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerPlayerLayout (::GlobalNamespace::MultiplayerLayoutProvider::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerLayoutProvider::CalculateLayout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59dacf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "CalculateLayout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)()>(&::GlobalNamespace::MultiplayerLayoutProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59dad50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerPlayerLayout& GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_get__layout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_get__layout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_set__layout_k__BackingField(::GlobalNamespace::MultiplayerPlayerLayout value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layout_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_get__activePlayerSpotsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePlayerSpotsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_get__activePlayerSpotsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePlayerSpotsCount_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_set__activePlayerSpotsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePlayerSpotsCount_k__BackingField = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*& GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_get_playersLayoutWasCalculatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playersLayoutWasCalculatedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* const& GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_get_playersLayoutWasCalculatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playersLayoutWasCalculatedEvent;
}
constexpr void GlobalNamespace::MultiplayerLayoutProvider::__cordl_internal_set_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playersLayoutWasCalculatedEvent = value;
}
inline ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerLayoutProvider::get_layout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "get_layout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerPlayerLayout>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::set_layout(::GlobalNamespace::MultiplayerPlayerLayout value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "set_layout", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MultiplayerLayoutProvider::get_activePlayerSpotsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "get_activePlayerSpotsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::set_activePlayerSpotsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "set_activePlayerSpotsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::add_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(),
                                              { "add_playersLayoutWasCalculatedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::remove_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(),
                                              { "remove_playersLayoutWasCalculatedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerLayoutProvider::CalculateLayout(int32_t activePlayersCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { "CalculateLayout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerPlayerLayout>(this, ___internal_method, activePlayersCount);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLayoutProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLayoutProvider* GlobalNamespace::MultiplayerLayoutProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLayoutProvider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLayoutProvider::MultiplayerLayoutProvider() {}
