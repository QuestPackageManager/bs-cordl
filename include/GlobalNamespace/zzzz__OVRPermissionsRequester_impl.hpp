#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPermissionsRequester.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission::OVRPermissionsRequester_Permission(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission::OVRPermissionsRequester_Permission() {}
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRPermissionsRequester_Permission::FaceTracking{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRPermissionsRequester_Permission::BodyTracking{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRPermissionsRequester_Permission::EyeTracking{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRPermissionsRequester_Permission::Scene{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRPermissionsRequester_Permission::RecordAudio{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPermissionsRequester___c::*)()>(&::GlobalNamespace::OVRPermissionsRequester___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cf3ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester___c._BuildPermissionCallbacks_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPermissionsRequester___c::*)(::StringW)>(
    &::GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cf3ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get(), "<BuildPermissionCallbacks>b__15_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester___c._BuildPermissionCallbacks_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPermissionsRequester___c::*)(::StringW)>(
    &::GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_1)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cf3b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get(), "<BuildPermissionCallbacks>b__15_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPermissionsRequester___c::setStaticF___9(::GlobalNamespace::OVRPermissionsRequester___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPermissionsRequester___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get>(
      std::forward<::GlobalNamespace::OVRPermissionsRequester___c*>(value));
}
inline ::GlobalNamespace::OVRPermissionsRequester___c* GlobalNamespace::OVRPermissionsRequester___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPermissionsRequester___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get>();
}
inline void GlobalNamespace::OVRPermissionsRequester___c::setStaticF___9__15_0(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRPermissionsRequester___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get>();
}
inline void GlobalNamespace::OVRPermissionsRequester___c::setStaticF___9__15_1(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRPermissionsRequester___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get>();
}
inline void GlobalNamespace::OVRPermissionsRequester___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_0(::StringW permissionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get(), "<BuildPermissionCallbacks>b__15_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
inline void GlobalNamespace::OVRPermissionsRequester___c::_BuildPermissionCallbacks_b__15_1(::StringW permissionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester___c*>::get(), "<BuildPermissionCallbacks>b__15_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
inline ::GlobalNamespace::OVRPermissionsRequester___c* GlobalNamespace::OVRPermissionsRequester___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPermissionsRequester___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPermissionsRequester___c::OVRPermissionsRequester___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.add_PermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cf2f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "add_PermissionGranted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.remove_PermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cf3034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "remove_PermissionGranted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.GetPermissionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::GetPermissionId)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cf3114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "GetPermissionId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.IsPermissionSupportedByPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5cf3230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionSupportedByPlatform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.IsPermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cf33a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionGranted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*)>(
    &::GlobalNamespace::OVRPermissionsRequester::Request)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cf33b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "Request", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.RequestPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*)>(
    &::GlobalNamespace::OVRPermissionsRequester::RequestPermissions)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5cf33bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "RequestPermissions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.ShouldRequestPermission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester_Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cf3794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "ShouldRequestPermission", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.BuildPermissionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Android::PermissionCallbacks* (*)()>(
    &::GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5cf38c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(),
                                                                               "BuildPermissionCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPermissionsRequester::setStaticF_PermissionGranted(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "PermissionGranted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::OVRPermissionsRequester::getStaticF_PermissionGranted() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "PermissionGranted",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get>();
}
inline void GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "add_PermissionGranted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "remove_PermissionGranted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRPermissionsRequester::GetPermissionId(::GlobalNamespace::OVRPermissionsRequester_Permission permission) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "GetPermissionId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, permission);
}
inline bool GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform(::GlobalNamespace::OVRPermissionsRequester_Permission permission) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionSupportedByPlatform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline bool GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted(::GlobalNamespace::OVRPermissionsRequester_Permission permission) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionGranted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline void GlobalNamespace::OVRPermissionsRequester::Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>* permissions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "Request", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions);
}
inline void GlobalNamespace::OVRPermissionsRequester::RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>* permissions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "RequestPermissions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions);
}
inline bool GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission(::GlobalNamespace::OVRPermissionsRequester_Permission permission) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "ShouldRequestPermission", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPermissionsRequester_Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline ::UnityEngine::Android::PermissionCallbacks* GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(),
                                                                             "BuildPermissionCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::PermissionCallbacks*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPermissionsRequester::OVRPermissionsRequester() {}
