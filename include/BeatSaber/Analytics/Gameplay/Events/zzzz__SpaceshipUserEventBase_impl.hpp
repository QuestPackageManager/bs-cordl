#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipUserEventBase.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase.GetIDType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDType (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3264e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3265588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3264b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_seg_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seg_id;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_seg_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seg_id;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_set_seg_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seg_id = value;
}
constexpr ::System::Nullable_1<uint64_t>& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_app_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___app_id;
}
constexpr ::System::Nullable_1<uint64_t> const& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_app_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___app_id;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_set_app_id(::System::Nullable_1<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___app_id = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_session_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_id;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_session_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_id;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_set_session_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session_id = value;
}
constexpr ::System::Nullable_1<int64_t>& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_user_rid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_rid;
}
constexpr ::System::Nullable_1<int64_t> const& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_user_rid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_rid;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_set_user_rid(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_rid = value;
}
constexpr ::System::Nullable_1<int32_t>& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_seq_num() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq_num;
}
constexpr ::System::Nullable_1<int32_t> const& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_seq_num() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq_num;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_set_seq_num(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq_num = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_user_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_get_user_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::__cordl_internal_set_user_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_type = value;
}
inline ::GlobalNamespace::IDType BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::GetIDType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ReturnEventToPool() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase* BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::SpaceshipUserEventBase() {}
