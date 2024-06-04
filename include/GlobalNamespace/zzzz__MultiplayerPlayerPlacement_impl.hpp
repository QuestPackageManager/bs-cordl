#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerPlacement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerPlacement_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerPlacement_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerPlayerPlacement____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerPlayerPlacement____c::*)()>(
    &::GlobalNamespace::__MultiplayerPlayerPlacement____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272ff54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerPlayerPlacement____c._SortPlayers_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__MultiplayerPlayerPlacement____c::*)(
    ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::__MultiplayerPlayerPlacement____c::_SortPlayers_b__4_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x272ff5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get(), "<SortPlayers>b__4_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MultiplayerPlayerPlacement____c::setStaticF___9(::GlobalNamespace::__MultiplayerPlayerPlacement____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__MultiplayerPlayerPlacement____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get>(
      std::forward<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>(value));
}
inline ::GlobalNamespace::__MultiplayerPlayerPlacement____c* GlobalNamespace::__MultiplayerPlayerPlacement____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__MultiplayerPlayerPlacement____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get>();
}
inline void GlobalNamespace::__MultiplayerPlayerPlacement____c::setStaticF___9__4_0(::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::__MultiplayerPlayerPlacement____c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get>();
}
inline ::GlobalNamespace::__MultiplayerPlayerPlacement____c* GlobalNamespace::__MultiplayerPlayerPlacement____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>());
}
inline void GlobalNamespace::__MultiplayerPlayerPlacement____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__MultiplayerPlayerPlacement____c::_SortPlayers_b__4_0(::GlobalNamespace::IConnectedPlayer* p1, ::GlobalNamespace::IConnectedPlayer* p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerPlayerPlacement____c*>::get(), "<SortPlayers>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p1, p2);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerPlayerPlacement____c::__MultiplayerPlayerPlacement____c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetPlayerWorldPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, ::GlobalNamespace::MultiplayerPlayerLayout)>(
    &::GlobalNamespace::MultiplayerPlayerPlacement::GetPlayerWorldPosition)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27296e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetPlayerWorldPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetOuterCirclePositionAngleForPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCirclePositionAngleForPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27296d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetOuterCirclePositionAngleForPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetOuterCircleRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCircleRadius)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2729694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetOuterCircleRadius", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetAngleBetweenPlayersWithEvenAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, ::GlobalNamespace::MultiplayerPlayerLayout)>(
    &::GlobalNamespace::MultiplayerPlayerPlacement::GetAngleBetweenPlayersWithEvenAdjustment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2729674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(),
                                                 "GetAngleBetweenPlayersWithEvenAdjustment", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.SortPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerPlayerPlacement::SortPlayers)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x272fb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "SortPlayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetLocalPlayerIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer*>*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetLocalPlayerIndex)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x272fc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetLocalPlayerIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::MultiplayerPlayerPlacement::GetPlayerWorldPosition(float_t outerCircleRadius, float_t outerCirclePositionAngle,
                                                                                                  ::GlobalNamespace::MultiplayerPlayerLayout layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetPlayerWorldPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, outerCircleRadius, outerCirclePositionAngle, layout);
}
inline float_t GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCirclePositionAngleForPlayer(int32_t playerIndex, int32_t localPlayerIndex, float_t angleBetweenPlayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetOuterCirclePositionAngleForPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, playerIndex, localPlayerIndex, angleBetweenPlayers);
}
inline float_t GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCircleRadius(float_t angleBetweenPlayers, float_t innerCircleRadius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetOuterCircleRadius", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, angleBetweenPlayers, innerCircleRadius);
}
inline float_t GlobalNamespace::MultiplayerPlayerPlacement::GetAngleBetweenPlayersWithEvenAdjustment(int32_t numberOfPlayers, ::GlobalNamespace::MultiplayerPlayerLayout layout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(),
                                               "GetAngleBetweenPlayersWithEvenAdjustment", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, numberOfPlayers, layout);
}
inline void GlobalNamespace::MultiplayerPlayerPlacement::SortPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* players) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "SortPlayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, players);
}
inline int32_t GlobalNamespace::MultiplayerPlayerPlacement::GetLocalPlayerIndex(::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer*>* otherPlayers,
                                                                                ::GlobalNamespace::IConnectedPlayer* localPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement*>::get(), "GetLocalPlayerIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, otherPlayers, localPlayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlayerPlacement::MultiplayerPlayerPlacement() {}
