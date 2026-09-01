#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\OptionalAvatarDataSender.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSyncHandler_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSender::*)(
    ::BeatSaber::AvatarCore::AvatarSystemCollection*, ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*)>(&::BeatSaber::AvatarCore::OptionalAvatarDataSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3270ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(),
                            { ".ctor", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSender.SetSelectedAvatarTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSender::*)(::StringW)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataSender::SetSelectedAvatarTypeId)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x3270efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(), { "SetSelectedAvatarTypeId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSender.SetCurrentLocalAvatarDisplayContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSender::*)(::BeatSaber::AvatarCore::AvatarDisplayContext)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataSender::SetCurrentLocalAvatarDisplayContext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3271348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(),
                                                             { "SetCurrentLocalAvatarDisplayContext", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarDisplayContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSender.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSender::*)()>(&::BeatSaber::AvatarCore::OptionalAvatarDataSender::Dispose)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x327141c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSender.HandleOptionalAvatarDataProviderDataDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSender::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataSender::HandleOptionalAvatarDataProviderDataDidChange)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3271334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(),
                                                             { "HandleOptionalAvatarDataProviderDataDidChange", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__optionalAvatarDataSyncHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSyncHandler;
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* const& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__optionalAvatarDataSyncHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSyncHandler;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_set__optionalAvatarDataSyncHandler(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionalAvatarDataSyncHandler = value;
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__optionalAvatarDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* const& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__optionalAvatarDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataProvider;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_set__optionalAvatarDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionalAvatarDataProvider = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__currentAvatarDisplayContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAvatarDisplayContext;
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__currentAvatarDisplayContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAvatarDisplayContext;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_set__currentAvatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentAvatarDisplayContext = value;
}
constexpr ::StringW& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__selectedAvatarTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarTypeId;
}
constexpr ::StringW const& BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_get__selectedAvatarTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarTypeId;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSender::__cordl_internal_set__selectedAvatarTypeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAvatarTypeId = value;
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSender::_ctor(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                                   ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(),
                          { ".ctor", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystemCollection, optionalAvatarDataSyncHandler);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSender::SetSelectedAvatarTypeId(::StringW selectedAvatarTypeId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(), { "SetSelectedAvatarTypeId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedAvatarTypeId);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSender::SetCurrentLocalAvatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(),
                                                           { "SetCurrentLocalAvatarDisplayContext", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarDisplayContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarDisplayContext);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSender::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSender::HandleOptionalAvatarDataProviderDataDidChange(::BeatSaber::AvatarCore::OptionalAvatarData data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(),
                                                           { "HandleOptionalAvatarDataProviderDataDidChange", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataSender*
BeatSaber::AvatarCore::OptionalAvatarDataSender::New_ctor(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                          ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(avatarSystemCollection, optionalAvatarDataSyncHandler));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::AvatarCore::OptionalAvatarDataSender::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::AvatarCore::OptionalAvatarDataSender::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender::OptionalAvatarDataSender() {}
