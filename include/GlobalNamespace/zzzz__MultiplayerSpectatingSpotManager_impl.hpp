#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSpectatingSpotManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatingSpotManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSpectatingSpot_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatingSpotManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager___c::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57d840c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager___c._get_defaultSpot_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSpectatingSpotManager___c::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager___c::_get_defaultSpot_b__3_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57d8410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get(), "<get_defaultSpot>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerSpectatingSpotManager___c::setStaticF___9(::GlobalNamespace::MultiplayerSpectatingSpotManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get>(
      std::forward<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(value));
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* GlobalNamespace::MultiplayerSpectatingSpotManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get>();
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager___c::setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* GlobalNamespace::MultiplayerSpectatingSpotManager___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get>();
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSpectatingSpotManager___c::_get_defaultSpot_b__3_0(::GlobalNamespace::IMultiplayerSpectatingSpot* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>::get(), "<get_defaultSpot>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* GlobalNamespace::MultiplayerSpectatingSpotManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager___c::MultiplayerSpectatingSpotManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.get_spectatingSpots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* (
    ::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(&::GlobalNamespace::MultiplayerSpectatingSpotManager::get_spectatingSpots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d7d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                               "get_spectatingSpots", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.get_defaultSpot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerSpectatingSpot* (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::get_defaultSpot)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x57d7d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                               "get_defaultSpot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.RegisterSpectatingSpot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::RegisterSpectatingSpot)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x57d75e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "RegisterSpectatingSpot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.GetAdjacentSpot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerSpectatingSpot* (
    ::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t)>(&::GlobalNamespace::MultiplayerSpectatingSpotManager::GetAdjacentSpot)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57d805c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "GetAdjacentSpot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.GetIndexBySpot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::GetIndexBySpot)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57d811c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "GetIndexBySpot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.UpdateIndexBySpotDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::UpdateIndexBySpotDictionary)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x57d7ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                               "UpdateIndexBySpotDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.SpotOnHasBeenRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::SpotOnHasBeenRemoved)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57d81a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "SpotOnHasBeenRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57d82d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spectatingSpots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingSpots;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const&
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spectatingSpots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingSpots;
}
constexpr void GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_set__spectatingSpots(::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectatingSpots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>*&
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spotIndexBySpot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spotIndexBySpot;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* const&
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spotIndexBySpot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spotIndexBySpot;
}
constexpr void
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_set__spotIndexBySpot(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spotIndexBySpot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* GlobalNamespace::MultiplayerSpectatingSpotManager::get_spectatingSpots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                             "get_spectatingSpots", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IMultiplayerSpectatingSpot* GlobalNamespace::MultiplayerSpectatingSpotManager::get_defaultSpot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                             "get_defaultSpot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSpectatingSpot*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::RegisterSpectatingSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "RegisterSpectatingSpot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spectatingSpot);
}
inline ::GlobalNamespace::IMultiplayerSpectatingSpot* GlobalNamespace::MultiplayerSpectatingSpotManager::GetAdjacentSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot,
                                                                                                                         int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "GetAdjacentSpot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSpectatingSpot*, false>(this, ___internal_method, spectatingSpot, offset);
}
inline int32_t GlobalNamespace::MultiplayerSpectatingSpotManager::GetIndexBySpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "GetIndexBySpot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, spectatingSpot);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::UpdateIndexBySpotDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                             "UpdateIndexBySpotDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::SpotOnHasBeenRemoved(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(), "SpotOnHasBeenRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSpectatingSpot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spectatingSpot);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSpectatingSpotManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotManager* GlobalNamespace::MultiplayerSpectatingSpotManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSpectatingSpotManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager::MultiplayerSpectatingSpotManager() {}
