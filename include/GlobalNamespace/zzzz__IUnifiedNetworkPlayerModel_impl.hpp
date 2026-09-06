#pragma once
// IWYU pragma private; include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.add_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::IUnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.remove_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.get_publicServers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::IUnifiedNetworkPlayerModel::get_publicServers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.SetServerFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::IUnifiedNetworkPlayerModel::SetServerFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.ResetMasterServerReachability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::IUnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::IUnifiedNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::IUnifiedNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.get_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::IUnifiedNetworkPlayerModel::get_localServerPort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.set_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)(int32_t)>(&::GlobalNamespace::IUnifiedNetworkPlayerModel::set_localServerPort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUnifiedNetworkPlayerModel.SetActiveNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUnifiedNetworkPlayerModel::*)(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType)>(
    &::GlobalNamespace::IUnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 9 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IUnifiedNetworkPlayerModel::add_partyRefreshingEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::IUnifiedNetworkPlayerModel::get_publicServers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline void GlobalNamespace::IUnifiedNetworkPlayerModel::SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionMask, configuration);
}
inline void GlobalNamespace::IUnifiedNetworkPlayerModel::ResetMasterServerReachability() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::IUnifiedNetworkPlayerModel::get_secret() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::IUnifiedNetworkPlayerModel::get_code() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IUnifiedNetworkPlayerModel::get_localServerPort() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::IUnifiedNetworkPlayerModel::set_localServerPort(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IUnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType activeNetworkPlayerModelType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeNetworkPlayerModelType);
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr GlobalNamespace::IUnifiedNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::IUnifiedNetworkPlayerModel::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
