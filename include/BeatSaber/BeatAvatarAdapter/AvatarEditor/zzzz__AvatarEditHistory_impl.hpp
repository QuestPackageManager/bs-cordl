#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarAdapter\AvatarEditor\AvatarEditHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarEditHistory_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.get_undoAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_undoAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32757b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_undoAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.get_redoAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_redoAvailable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32757c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_redoAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.get_currentSnapShot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_currentSnapShot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3275820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_currentSnapShot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.get_lastEditedPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarPart (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_lastEditedPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3275878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_lastEditedPart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3275888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.Undo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::Undo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32758fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "Undo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.Redo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::Redo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3275918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "Redo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory.UpdateEditHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)(
    ::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPart)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::UpdateEditHistory)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3275988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(),
                                                { "UpdateEditHistory", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3275b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_get_disableNextSnapshotOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableNextSnapshotOverride;
}
constexpr bool const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_get_disableNextSnapshotOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableNextSnapshotOverride;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_set_disableNextSnapshotOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableNextSnapshotOverride = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>*&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_get__snapShots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapShots;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_get__snapShots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapShots;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_set__snapShots(
    ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____snapShots = value;
}
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_get__currentDataId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataId;
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_get__currentDataId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDataId;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::__cordl_internal_set__currentDataId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDataId = value;
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_undoAvailable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_undoAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_redoAvailable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_redoAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_currentSnapShot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_currentSnapShot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::get_lastEditedPart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "get_lastEditedPart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarPart>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::Undo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "Undo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::Redo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { "Redo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::UpdateEditHistory(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData,
                                                                                             ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(),
                                              { "UpdateEditHistory", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarData, avatarEditPart);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory::AvatarEditHistory() {}
