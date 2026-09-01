#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\Queries\BSLeaderboardFriends.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardFriends_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapCharacteristic_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapDifficulty_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::GetVariableNames)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x329e51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_EnvironmentPlayerRootId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_EnvironmentPlayerRootId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329e8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_EnvironmentPlayerRootId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_EnvironmentPlayerRootId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_EnvironmentPlayerRootId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329e970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_EnvironmentPlayerRootId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_SongClientId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_SongClientId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329ea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_SongClientId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_SongClientId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_SongClientId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329ea80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_SongClientId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_Characteristic)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329eb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                             { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_Characteristic)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329ebbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_Characteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_Difficulty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329ec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                             { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_Difficulty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329ed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_Difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_ModifierMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x329edc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_ModifierMask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x329ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_ModifierMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_User
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_User)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329eefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_User", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_User
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_User)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329ef7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_User", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(
    ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*)>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_Order)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329f00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                             { "set_Order", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* (
    ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_Order)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329f08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.set_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_First)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x329f13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_First", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.get_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_First)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x329f1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_First", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329f358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_EnvironmentPlayerRootId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_EnvironmentPlayerRootId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_EnvironmentPlayerRootId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_EnvironmentPlayerRootId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_SongClientId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_SongClientId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_SongClientId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_SongClientId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                           { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_Characteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_Characteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                           { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_Difficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_Difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_ModifierMask(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_ModifierMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_ModifierMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_User(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_User", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_User() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_User", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_Order(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(),
                                                           { "set_Order", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::set_First(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "set_First", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends* BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardFriends::BSLeaderboardFriends() {}
