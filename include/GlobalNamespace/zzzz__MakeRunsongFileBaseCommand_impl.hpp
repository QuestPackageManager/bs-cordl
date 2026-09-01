#pragma once
// IWYU pragma private; include "GlobalNamespace\MakeRunsongFileBaseCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MakeRunsongFileBaseCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__MakeRunsongFileBaseCommand_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MakeRunsongFileBaseCommand___c::*)()>(&::GlobalNamespace::MakeRunsongFileBaseCommand___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32de8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand___c._CollectFirstNLongestLevels_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MakeRunsongFileBaseCommand___c::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::MakeRunsongFileBaseCommand___c::_CollectFirstNLongestLevels_b__12_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32de8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(),
                                         { "<CollectFirstNLongestLevels>b__12_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MakeRunsongFileBaseCommand___c::setStaticF___9(::GlobalNamespace::MakeRunsongFileBaseCommand___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MakeRunsongFileBaseCommand___c*, "<>9", ::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(
      std::forward<::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(value));
}
inline ::GlobalNamespace::MakeRunsongFileBaseCommand___c* GlobalNamespace::MakeRunsongFileBaseCommand___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MakeRunsongFileBaseCommand___c*, "<>9", ::GlobalNamespace::MakeRunsongFileBaseCommand___c*>();
}
inline void GlobalNamespace::MakeRunsongFileBaseCommand___c::setStaticF___9__12_0(::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>*, "<>9__12_0", ::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>* GlobalNamespace::MakeRunsongFileBaseCommand___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::BeatmapLevel*>*, "<>9__12_0", ::GlobalNamespace::MakeRunsongFileBaseCommand___c*>();
}
inline void GlobalNamespace::MakeRunsongFileBaseCommand___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MakeRunsongFileBaseCommand___c::_CollectFirstNLongestLevels_b__12_0(::GlobalNamespace::BeatmapLevel* a, ::GlobalNamespace::BeatmapLevel* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand___c*>(),
                                       { "<CollectFirstNLongestLevels>b__12_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::MakeRunsongFileBaseCommand___c* GlobalNamespace::MakeRunsongFileBaseCommand___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MakeRunsongFileBaseCommand___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MakeRunsongFileBaseCommand___c::MakeRunsongFileBaseCommand___c() {}
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand.get_AllowsUnknownArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunsongFileBaseCommand::*)()>(&::GlobalNamespace::MakeRunsongFileBaseCommand::get_AllowsUnknownArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32dd910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::MakeRunsongFileBaseCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::MakeRunsongFileBaseCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x32dd918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand.GenerateCommandFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunsongFileBaseCommand::*)(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>,
                                                                                                               ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*)>(
    &::GlobalNamespace::MakeRunsongFileBaseCommand::GenerateCommandFile)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x32ddb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(),
                                                                                           { "GenerateCommandFile",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand.TryGetLevelsToPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunsongFileBaseCommand::*)(
    int32_t, ::StringW, ::GlobalNamespace::BeatmapDifficulty, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>,
    ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>)>(&::GlobalNamespace::MakeRunsongFileBaseCommand::TryGetLevelsToPlay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand.CollectFirstNLongestLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevel*> (::GlobalNamespace::MakeRunsongFileBaseCommand::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*, int32_t)>(&::GlobalNamespace::MakeRunsongFileBaseCommand::CollectFirstNLongestLevels)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x32de120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(),
                            { "CollectFirstNLongestLevels", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand.TryGetLevelCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunsongFileBaseCommand::*)(
    ::GlobalNamespace::BeatmapLevel*, ::StringW, ::by_ref<::GlobalNamespace::BeatmapCharacteristic>)>(&::GlobalNamespace::MakeRunsongFileBaseCommand::TryGetLevelCharacteristic)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x32de310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), { "TryGetLevelCharacteristic",
                                                                                                                     {},
                                                                                                                     { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>(),
                                                                                                                       ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapCharacteristic>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunsongFileBaseCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MakeRunsongFileBaseCommand::*)()>(&::GlobalNamespace::MakeRunsongFileBaseCommand::_ctor)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x32de428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__songRunningHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr ::GlobalNamespace::SongRunningHelper* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__songRunningHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songRunningHelper = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__filePath(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filePath = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__difficulty(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::BeatmapDifficulty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristic;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__characteristic(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristic = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__maxNumberOfLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfLevels;
}
constexpr ::GlobalNamespace::OptionalArgument_1<int32_t>* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__maxNumberOfLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfLevels;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__maxNumberOfLevels(::GlobalNamespace::OptionalArgument_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfLevels = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__exec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exec;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_get__exec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exec;
}
constexpr void GlobalNamespace::MakeRunsongFileBaseCommand::__cordl_internal_set__exec(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exec = value;
}
inline bool GlobalNamespace::MakeRunsongFileBaseCommand::get_AllowsUnknownArguments() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::MakeRunsongFileBaseCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::MakeRunsongFileBaseCommand::GenerateCommandFile(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                                                             ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* levelsToPlay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(),
                                                                                         { "GenerateCommandFile",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, messages, levelsToPlay);
}
inline bool GlobalNamespace::MakeRunsongFileBaseCommand::TryGetLevelsToPlay(int32_t desiredNumberOfLevels, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                            ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                                                            ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*> levelsToPlay) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desiredNumberOfLevels, characteristic, difficulty, messages, levelsToPlay);
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevel*>
GlobalNamespace::MakeRunsongFileBaseCommand::CollectFirstNLongestLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* fromLevels, int32_t numberOfLevels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(),
                          { "CollectFirstNLongestLevels", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevel*>>(this, ___internal_method, fromLevels, numberOfLevels);
}
inline bool GlobalNamespace::MakeRunsongFileBaseCommand::TryGetLevelCharacteristic(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristic,
                                                                                   ::by_ref<::GlobalNamespace::BeatmapCharacteristic> characteristicEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(),
                                       { "TryGetLevelCharacteristic",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapCharacteristic>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevel, characteristic, characteristicEnum);
}
inline void GlobalNamespace::MakeRunsongFileBaseCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunsongFileBaseCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MakeRunsongFileBaseCommand* GlobalNamespace::MakeRunsongFileBaseCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MakeRunsongFileBaseCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MakeRunsongFileBaseCommand::MakeRunsongFileBaseCommand() {}
