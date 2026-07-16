#pragma once
// IWYU pragma private; include "GlobalNamespace/CopyPosition.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CopyPosition_def.hpp"
#include "GlobalNamespace/zzzz__CopyPosition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CopyPosition_CopyPositionUpdater.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CopyPosition*)>(&::GlobalNamespace::CopyPosition_CopyPositionUpdater::Add)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x58584d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(), { "Add", {}, { ::i2c::type_of<::GlobalNamespace::CopyPosition*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition_CopyPositionUpdater.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyPosition_CopyPositionUpdater::*)()>(&::GlobalNamespace::CopyPosition_CopyPositionUpdater::LateUpdate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x58586ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition_CopyPositionUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyPosition_CopyPositionUpdater::*)()>(&::GlobalNamespace::CopyPosition_CopyPositionUpdater::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58588ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>*& GlobalNamespace::CopyPosition_CopyPositionUpdater::__cordl_internal_get__copyPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* const& GlobalNamespace::CopyPosition_CopyPositionUpdater::__cordl_internal_get__copyPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyPositions;
}
constexpr void GlobalNamespace::CopyPosition_CopyPositionUpdater::__cordl_internal_set__copyPositions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____copyPositions = value;
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::setStaticF__instance(::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater>, "_instance", ::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(
      std::forward<::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater>>(value));
}
inline ::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> GlobalNamespace::CopyPosition_CopyPositionUpdater::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater>, "_instance", ::GlobalNamespace::CopyPosition_CopyPositionUpdater*>();
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::Add(::GlobalNamespace::CopyPosition* copyPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(), { "Add", {}, { ::i2c::type_of<::GlobalNamespace::CopyPosition*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyPosition);
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopyPosition_CopyPositionUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CopyPosition_CopyPositionUpdater* GlobalNamespace::CopyPosition_CopyPositionUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CopyPosition_CopyPositionUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CopyPosition_CopyPositionUpdater::CopyPosition_CopyPositionUpdater() {}
//  Writing Method size for method: ::GlobalNamespace::CopyPosition.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyPosition::*)()>(&::GlobalNamespace::CopyPosition::Refresh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5858494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyPosition::*)()>(&::GlobalNamespace::CopyPosition::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58584d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyPosition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyPosition::*)()>(&::GlobalNamespace::CopyPosition::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58586e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CopyPosition::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CopyPosition::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void GlobalNamespace::CopyPosition::__cordl_internal_set_source(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
inline void GlobalNamespace::CopyPosition::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopyPosition::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopyPosition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CopyPosition*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CopyPosition* GlobalNamespace::CopyPosition::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CopyPosition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CopyPosition::CopyPosition() {}
