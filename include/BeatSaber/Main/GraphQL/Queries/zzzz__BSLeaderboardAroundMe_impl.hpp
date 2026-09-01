#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\Queries\BSLeaderboardAroundMe.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardAroundMe_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapCharacteristic_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapDifficulty_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::GetVariableNames)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x329d6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_EnvironmentPlayerRootId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_EnvironmentPlayerRootId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_EnvironmentPlayerRootId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_EnvironmentPlayerRootId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_EnvironmentPlayerRootId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329db1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_EnvironmentPlayerRootId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_SongClientId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_SongClientId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329dbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_SongClientId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_SongClientId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_SongClientId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_SongClientId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_Characteristic)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329dcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                             { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_Characteristic)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329dd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_Characteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_Difficulty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329de18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                             { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_Difficulty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329dec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_Difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_ModifierMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x329df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_ModifierMask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x329e00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_ModifierMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_User
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_User)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329e0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_User", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_User
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_User)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_User", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(
    ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*)>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_Order)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329e1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                             { "set_Order", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* (
    ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_Order)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329e238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.set_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_First)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x329e2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_First", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.get_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_First)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x329e3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_First", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329e504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329e518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_EnvironmentPlayerRootId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_EnvironmentPlayerRootId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_EnvironmentPlayerRootId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_EnvironmentPlayerRootId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_SongClientId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_SongClientId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_SongClientId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_SongClientId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                           { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_Characteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_Characteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                           { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_Difficulty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_Difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_ModifierMask(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_ModifierMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_ModifierMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_User(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_User", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_User() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_User", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_Order(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(),
                                                           { "set_Order", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::set_First(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "set_First", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe* BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardAroundMe::BSLeaderboardAroundMe() {}
