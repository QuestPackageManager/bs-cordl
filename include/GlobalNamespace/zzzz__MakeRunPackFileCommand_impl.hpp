#pragma once
// IWYU pragma private; include "GlobalNamespace\MakeRunPackFileCommand.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__MakeRunsongFileBaseCommand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MakeRunPackFileCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__MakeRunPackFileCommand_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32defd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0._TryGetLevelsToPlay_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::_TryGetLevelsToPlay_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32df08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*>(),
                                                                                           { "<TryGetLevelsToPlay>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MakeRunPackFileCommand*& GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::MakeRunPackFileCommand* const& GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_set___4__this(::GlobalNamespace::MakeRunPackFileCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristic = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::__cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
inline void GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::_TryGetLevelsToPlay_b__0(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*>(),
                                                                                         { "<TryGetLevelsToPlay>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevel);
}
inline ::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0* GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MakeRunPackFileCommand___c__DisplayClass5_0::MakeRunPackFileCommand___c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::MakeRunPackFileCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MakeRunPackFileCommand::*)()>(&::GlobalNamespace::MakeRunPackFileCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32de928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunPackFileCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MakeRunPackFileCommand::*)()>(&::GlobalNamespace::MakeRunPackFileCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32de96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunPackFileCommand.TryGetLevelsToPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunPackFileCommand::*)(
    int32_t, ::StringW, ::GlobalNamespace::BeatmapDifficulty, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>,
    ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>)>(&::GlobalNamespace::MakeRunPackFileCommand::TryGetLevelsToPlay)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x32de9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunPackFileCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MakeRunPackFileCommand::*)()>(&::GlobalNamespace::MakeRunPackFileCommand::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32defd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::MakeRunPackFileCommand::__cordl_internal_get__packId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::MakeRunPackFileCommand::__cordl_internal_get__packId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr void GlobalNamespace::MakeRunPackFileCommand::__cordl_internal_set__packId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packId = value;
}
inline ::StringW GlobalNamespace::MakeRunPackFileCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MakeRunPackFileCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::MakeRunPackFileCommand::TryGetLevelsToPlay(int32_t desiredNumberOfLevels, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                        ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                                                        ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*> levelsToPlay) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desiredNumberOfLevels, characteristic, difficulty, messages, levelsToPlay);
}
inline void GlobalNamespace::MakeRunPackFileCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunPackFileCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MakeRunPackFileCommand* GlobalNamespace::MakeRunPackFileCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MakeRunPackFileCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MakeRunPackFileCommand::MakeRunPackFileCommand() {}
