#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Queries/BSLeaderboardTopN.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardTopN_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapCharacteristic_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapDifficulty_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesBeatmapLeaderboardEntryOrder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetVariableNames)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x329df3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_SongClientId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_SongClientId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329e240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "set_SongClientId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_SongClientId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_SongClientId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x329e2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_SongClientId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Characteristic)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329e350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                             { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Characteristic)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329e3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_Characteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Difficulty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x329e4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                             { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Difficulty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329e558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_Difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_ModifierMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x329e608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_ModifierMask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x329e6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_ModifierMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(
    ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*)>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Order)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329e73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                             { "set_Order", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* (
    ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Order)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329e7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_First)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x329e86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "set_First", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_First
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_First)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x329e924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_First", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329ea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329ea9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_SongClientId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "set_SongClientId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_SongClientId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_SongClientId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                           { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Characteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_Characteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                           { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Difficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_Difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_ModifierMask(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_ModifierMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_ModifierMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Order(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(),
                                                           { "set_Order", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_First(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "set_First", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_First() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { "get_First", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN* BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::BSLeaderboardTopN() {}
