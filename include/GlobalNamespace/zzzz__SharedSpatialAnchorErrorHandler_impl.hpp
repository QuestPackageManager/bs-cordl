#pragma once
// IWYU pragma private; include "GlobalNamespace\SharedSpatialAnchorErrorHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SharedSpatialAnchorErrorHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)()>(&::GlobalNamespace::SharedSpatialAnchorErrorHandler::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a330c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.OnAnchorCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)(
    ::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorCreate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a3316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                         { "OnAnchorCreate", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.OnAnchorShare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorShare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a33294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                                                                           { "OnAnchorShare",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.OnSharedSpatialAnchorLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::SharedSpatialAnchorErrorHandler::OnSharedSpatialAnchorLoad)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a33310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                                                                           { "OnSharedSpatialAnchorLoad",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.OnAnchorEraseAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)(::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorEraseAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a333b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                                                                           { "OnAnchorEraseAll", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.OnAnchorErase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)(
    ::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorErase)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a33420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                         { "OnAnchorErase", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)(::StringW)>(&::GlobalNamespace::SharedSpatialAnchorErrorHandler::LogWarning)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a331e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorErrorHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorErrorHandler::*)()>(&::GlobalNamespace::SharedSpatialAnchorErrorHandler::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a334d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_get_DisableRuntimeGUIAlerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableRuntimeGUIAlerts;
}
constexpr bool const& GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_get_DisableRuntimeGUIAlerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableRuntimeGUIAlerts;
}
constexpr void GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_set_DisableRuntimeGUIAlerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisableRuntimeGUIAlerts = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_get_AlertViewHUDPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AlertViewHUDPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_get_AlertViewHUDPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AlertViewHUDPrefab;
}
constexpr void GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_set_AlertViewHUDPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AlertViewHUDPrefab = value;
}
constexpr ::StringW& GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_get_cloudPermissionMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cloudPermissionMsg;
}
constexpr ::StringW const& GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_get_cloudPermissionMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cloudPermissionMsg;
}
constexpr void GlobalNamespace::SharedSpatialAnchorErrorHandler::__cordl_internal_set_cloudPermissionMsg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cloudPermissionMsg = value;
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorCreate(::GlobalNamespace::OVRSpatialAnchor* _, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                       { "OnAnchorCreate", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, result);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorShare(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _,
                                                                            ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                                                                         { "OnAnchorShare",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, result);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::OnSharedSpatialAnchorLoad(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* loadedAnchors,
                                                                                        ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                                                                         { "OnSharedSpatialAnchorLoad",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadedAnchors, result);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorEraseAll(::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                                                                         { "OnAnchorEraseAll", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::OnAnchorErase(::GlobalNamespace::OVRSpatialAnchor* anchor, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(),
                                       { "OnAnchorErase", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, result);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::LogWarning(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::SharedSpatialAnchorErrorHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SharedSpatialAnchorErrorHandler* GlobalNamespace::SharedSpatialAnchorErrorHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SharedSpatialAnchorErrorHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedSpatialAnchorErrorHandler::SharedSpatialAnchorErrorHandler() {}
