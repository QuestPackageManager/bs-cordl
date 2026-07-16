#pragma once
// IWYU pragma private; include "GlobalNamespace/MakeRunEnvFileCommand.hpp"
#include "GlobalNamespace/zzzz__MakeRunsongFileBaseCommand_impl.hpp"
#include "GlobalNamespace/zzzz__MakeRunEnvFileCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MakeRunEnvFileCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MakeRunEnvFileCommand::*)()>(&::GlobalNamespace::MakeRunEnvFileCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32dd9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunEnvFileCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MakeRunEnvFileCommand::*)()>(&::GlobalNamespace::MakeRunEnvFileCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32dd9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunEnvFileCommand.TryGetLevelsToPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MakeRunEnvFileCommand::*)(
    int32_t, ::StringW, ::GlobalNamespace::BeatmapDifficulty, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>,
    ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>)>(&::GlobalNamespace::MakeRunEnvFileCommand::TryGetLevelsToPlay)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x32dda30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), { ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunEnvFileCommand.GetAllEnvironmentsSongsFromPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>* (
    ::GlobalNamespace::MakeRunEnvFileCommand::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapDifficulty, ::StringW)>(
    &::GlobalNamespace::MakeRunEnvFileCommand::GetAllEnvironmentsSongsFromPack)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x32de3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(),
                                                { "GetAllEnvironmentsSongsFromPack",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MakeRunEnvFileCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MakeRunEnvFileCommand::*)()>(&::GlobalNamespace::MakeRunEnvFileCommand::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32de840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::MakeRunEnvFileCommand::__cordl_internal_get__envId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envId;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::MakeRunEnvFileCommand::__cordl_internal_get__envId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envId;
}
constexpr void GlobalNamespace::MakeRunEnvFileCommand::__cordl_internal_set__envId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____envId = value;
}
inline ::StringW GlobalNamespace::MakeRunEnvFileCommand::get_commandName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MakeRunEnvFileCommand::get_description() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::MakeRunEnvFileCommand::TryGetLevelsToPlay(int32_t desiredNumberOfLevels, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                       ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                                                       ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*> levelsToPlay) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desiredNumberOfLevels, characteristic, difficulty, messages, levelsToPlay);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>*
GlobalNamespace::MakeRunEnvFileCommand::GetAllEnvironmentsSongsFromPack(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW characteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(),
          { "GetAllEnvironmentsSongsFromPack", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>*>(
      this, ___internal_method, pack, difficulty, characteristic);
}
inline void GlobalNamespace::MakeRunEnvFileCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MakeRunEnvFileCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MakeRunEnvFileCommand* GlobalNamespace::MakeRunEnvFileCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MakeRunEnvFileCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MakeRunEnvFileCommand::MakeRunEnvFileCommand() {}
