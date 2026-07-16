#pragma once
// IWYU pragma private; include "GlobalNamespace/GetLevelIdsConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__GetLevelIdsConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetLevelIdsConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetLevelIdsConsoleCommand::*)()>(&::GlobalNamespace::GetLevelIdsConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32dab54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetLevelIdsConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetLevelIdsConsoleCommand::*)()>(&::GlobalNamespace::GetLevelIdsConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32dab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetLevelIdsConsoleCommand.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetLevelIdsConsoleCommand::*)()>(&::GlobalNamespace::GetLevelIdsConsoleCommand::Initialize)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x32dabdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetLevelIdsConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::GetLevelIdsConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::GetLevelIdsConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x32dafc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetLevelIdsConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetLevelIdsConsoleCommand::*)()>(&::GlobalNamespace::GetLevelIdsConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32db338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_get__songRunningHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr ::GlobalNamespace::SongRunningHelper* const& GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_get__songRunningHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songRunningHelper;
}
constexpr void GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songRunningHelper = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_get__packId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_get__packId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr void GlobalNamespace::GetLevelIdsConsoleCommand::__cordl_internal_set__packId(::GlobalNamespace::RequiredArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packId = value;
}
inline ::StringW GlobalNamespace::GetLevelIdsConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GetLevelIdsConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetLevelIdsConsoleCommand::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::GetLevelIdsConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::GetLevelIdsConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetLevelIdsConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetLevelIdsConsoleCommand* GlobalNamespace::GetLevelIdsConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetLevelIdsConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetLevelIdsConsoleCommand::GetLevelIdsConsoleCommand() {}
