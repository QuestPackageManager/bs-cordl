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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetVariableNames)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x31ca75c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_SongClientId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_SongClientId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31caa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_SongClientId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_SongClientId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_SongClientId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x31caae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               "get_SongClientId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_Characteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(
    ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic)>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Characteristic)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31cab70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_Characteristic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_Characteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic (
    ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Characteristic)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31cac1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               "get_Characteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_Difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(
    ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty)>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Difficulty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31caccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_Difficulty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_Difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty (
    ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Difficulty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31cad78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               "get_Difficulty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_ModifierMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_ModifierMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x31cae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_ModifierMask",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_ModifierMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_ModifierMask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x31caec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               "get_ModifierMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(
    ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*)>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Order)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31caf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_Order", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* (
    ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Order)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31cafdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               "get_Order", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.set_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_First)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x31cb08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_First", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.get_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_First)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x31cb144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               "get_First", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31cb2a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31cb2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_SongClientId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_SongClientId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_SongClientId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             "get_SongClientId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_Characteristic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Characteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             "get_Characteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_Difficulty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Difficulty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             "get_Difficulty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_ModifierMask(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_ModifierMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_ModifierMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             "get_ModifierMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_Order(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_Order", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder* BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_Order() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             "get_Order", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryOrder*, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::set_First(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), "set_First", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::get_First() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             "get_First", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN* BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardTopN::BSLeaderboardTopN() {}
