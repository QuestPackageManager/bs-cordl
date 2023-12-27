#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission::__OVRPermissionsRequester__Permission(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission::__OVRPermissionsRequester__Permission() {}
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission GlobalNamespace::__OVRPermissionsRequester__Permission::FaceTracking{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission GlobalNamespace::__OVRPermissionsRequester__Permission::BodyTracking{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission GlobalNamespace::__OVRPermissionsRequester__Permission::EyeTracking{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission GlobalNamespace::__OVRPermissionsRequester__Permission::Scene{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__OVRPermissionsRequester____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPermissionsRequester____c::*)()>(
    &::GlobalNamespace::__OVRPermissionsRequester____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPermissionsRequester____c._BuildPermissionCallbacks_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPermissionsRequester____c::*)(::StringW)>(
    &::GlobalNamespace::__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__14_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2753c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), "<BuildPermissionCallbacks>b__14_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPermissionsRequester____c._BuildPermissionCallbacks_b__14_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPermissionsRequester____c::*)(::StringW)>(
    &::GlobalNamespace::__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__14_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2753ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), "<BuildPermissionCallbacks>b__14_1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPermissionsRequester____c._BuildPermissionCallbacks_b__14_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPermissionsRequester____c::*)(::StringW)>(
    &::GlobalNamespace::__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__14_2)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2753d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), "<BuildPermissionCallbacks>b__14_2",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRPermissionsRequester____c::setStaticF___9(::GlobalNamespace::__OVRPermissionsRequester____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRPermissionsRequester____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>(
      std::forward<::GlobalNamespace::__OVRPermissionsRequester____c*>(value));
}
inline ::GlobalNamespace::__OVRPermissionsRequester____c* GlobalNamespace::__OVRPermissionsRequester____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRPermissionsRequester____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>();
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::setStaticF___9__14_0(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::__OVRPermissionsRequester____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>();
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::setStaticF___9__14_1(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::__OVRPermissionsRequester____c::getStaticF___9__14_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__14_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>();
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::setStaticF___9__14_2(::System::Action_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__14_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>(
      std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::__OVRPermissionsRequester____c::getStaticF___9__14_2() {
  return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__14_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get>();
}
inline ::GlobalNamespace::__OVRPermissionsRequester____c* GlobalNamespace::__OVRPermissionsRequester____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRPermissionsRequester____c*>());
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__14_0(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), "<BuildPermissionCallbacks>b__14_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__14_1(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), "<BuildPermissionCallbacks>b__14_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
inline void GlobalNamespace::__OVRPermissionsRequester____c::_BuildPermissionCallbacks_b__14_2(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPermissionsRequester____c*>::get(), "<BuildPermissionCallbacks>b__14_2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPermissionsRequester____c::__OVRPermissionsRequester____c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.add_PermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2752e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "add_PermissionGranted", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.remove_PermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2752f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "remove_PermissionGranted", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.GetPermissionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::__OVRPermissionsRequester__Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::GetPermissionId)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2753028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "GetPermissionId", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.IsPermissionSupportedByPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRPermissionsRequester__Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x275310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionSupportedByPlatform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.IsPermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRPermissionsRequester__Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27534a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionGranted", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>*)>(
    &::GlobalNamespace::OVRPermissionsRequester::Request)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27534bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "Request", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.RequestPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>*)>(
    &::GlobalNamespace::OVRPermissionsRequester::RequestPermissions)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x27534c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "RequestPermissions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.ShouldRequestPermission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRPermissionsRequester__Permission)>(
    &::GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27538b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "ShouldRequestPermission", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPermissionsRequester.BuildPermissionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Android::PermissionCallbacks* (*)()>(
    &::GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x27539b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(),
                                                                               "BuildPermissionCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "add_PermissionGranted", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "remove_PermissionGranted", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRPermissionsRequester::GetPermissionId(::GlobalNamespace::__OVRPermissionsRequester__Permission permission) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "GetPermissionId", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, permission);
}
inline bool GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform(::GlobalNamespace::__OVRPermissionsRequester__Permission permission) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionSupportedByPlatform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline bool GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted(::GlobalNamespace::__OVRPermissionsRequester__Permission permission) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "IsPermissionGranted", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline void GlobalNamespace::OVRPermissionsRequester::Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>* permissions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "Request", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions);
}
inline void GlobalNamespace::OVRPermissionsRequester::RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>* permissions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "RequestPermissions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions);
}
inline bool GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission(::GlobalNamespace::__OVRPermissionsRequester__Permission permission) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(), "ShouldRequestPermission", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPermissionsRequester__Permission>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline ::UnityEngine::Android::PermissionCallbacks* GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPermissionsRequester*>::get(),
                                                                             "BuildPermissionCallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::PermissionCallbacks*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPermissionsRequester::OVRPermissionsRequester() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
