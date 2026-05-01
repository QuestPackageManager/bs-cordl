#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipUserEventBase.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase.GetIDType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDType (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31d0a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x31d0370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31d0a88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31d0020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seg_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___session_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___user_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IDType BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::GetIDType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::ReturnEventToPool() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase* BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase::SpaceshipUserEventBase() {}
