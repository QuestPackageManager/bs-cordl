#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPermissionsRequester)
namespace GlobalNamespace {
class __OVRPermissionsRequester____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __OVRPermissionsRequester__Permission;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRPermissionsRequester__Permission;
}
namespace GlobalNamespace {
class OVRPermissionsRequester;
}
namespace GlobalNamespace {
class __OVRPermissionsRequester____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRPermissionsRequester__Permission);
MARK_REF_PTR_T(::GlobalNamespace::OVRPermissionsRequester);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPermissionsRequester____c);
// Type: ::Permission
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7679))
// CS Name: ::OVRPermissionsRequester::Permission
struct CORDL_TYPE __OVRPermissionsRequester__Permission {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPermissionsRequester__Permission_Unwrapped
  enum struct ____OVRPermissionsRequester__Permission_Unwrapped : int32_t {
    __E_FaceTracking = static_cast<int32_t>(0x0),
    __E_BodyTracking = static_cast<int32_t>(0x1),
    __E_EyeTracking = static_cast<int32_t>(0x2),
    __E_Scene = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPermissionsRequester__Permission_Unwrapped() const noexcept {
    return static_cast<____OVRPermissionsRequester__Permission_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPermissionsRequester__Permission(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPermissionsRequester__Permission();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FaceTracking value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPermissionsRequester__Permission const FaceTracking;

  /// @brief Field BodyTracking value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPermissionsRequester__Permission const BodyTracking;

  /// @brief Field EyeTracking value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPermissionsRequester__Permission const EyeTracking;

  /// @brief Field Scene value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPermissionsRequester__Permission const Scene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPermissionsRequester__Permission, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPermissionsRequester__Permission, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7680))
// CS Name: ::OVRPermissionsRequester::<>c*
class CORDL_TYPE __OVRPermissionsRequester____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRPermissionsRequester____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Action_1<::StringW>* __9__14_0;

  /// @brief Field <>9__14_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_1, put = setStaticF___9__14_1))::System::Action_1<::StringW>* __9__14_1;

  /// @brief Field <>9__14_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_2, put = setStaticF___9__14_2))::System::Action_1<::StringW>* __9__14_2;

  static inline void setStaticF___9(::GlobalNamespace::__OVRPermissionsRequester____c* value);

  static inline ::GlobalNamespace::__OVRPermissionsRequester____c* getStaticF___9();

  static inline void setStaticF___9__14_0(::System::Action_1<::StringW>* value);

  static inline ::System::Action_1<::StringW>* getStaticF___9__14_0();

  static inline void setStaticF___9__14_1(::System::Action_1<::StringW>* value);

  static inline ::System::Action_1<::StringW>* getStaticF___9__14_1();

  static inline void setStaticF___9__14_2(::System::Action_1<::StringW>* value);

  static inline ::System::Action_1<::StringW>* getStaticF___9__14_2();

  static inline ::GlobalNamespace::__OVRPermissionsRequester____c* New_ctor();

  /// @brief Method .ctor, addr 0x2753c38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <BuildPermissionCallbacks>b__14_0, addr 0x2753c40, size 0xa4, virtual false, abstract: false, final false
  inline void _BuildPermissionCallbacks_b__14_0(::StringW permissionId);

  /// @brief Method <BuildPermissionCallbacks>b__14_1, addr 0x2753ce4, size 0xa4, virtual false, abstract: false, final false
  inline void _BuildPermissionCallbacks_b__14_1(::StringW permissionId);

  /// @brief Method <BuildPermissionCallbacks>b__14_2, addr 0x2753d88, size 0xec, virtual false, abstract: false, final false
  inline void _BuildPermissionCallbacks_b__14_2(::StringW permissionId);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPermissionsRequester____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPermissionsRequester____c(__OVRPermissionsRequester____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPermissionsRequester____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPermissionsRequester____c(__OVRPermissionsRequester____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPermissionsRequester____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPermissionsRequester____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPermissionsRequester
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7681))
// CS Name: ::OVRPermissionsRequester*
class CORDL_TYPE OVRPermissionsRequester : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRPermissionsRequester____c;

  using Permission = ::GlobalNamespace::__OVRPermissionsRequester__Permission;

  /// @brief Field PermissionGranted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PermissionGranted, put = setStaticF_PermissionGranted))::System::Action_1<::StringW>* PermissionGranted;

  static inline void setStaticF_PermissionGranted(::System::Action_1<::StringW>* value);

  static inline ::System::Action_1<::StringW>* getStaticF_PermissionGranted();

  /// @brief Method add_PermissionGranted, addr 0x2752e90, size 0xcc, virtual false, abstract: false, final false
  static inline void add_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method remove_PermissionGranted, addr 0x2752f5c, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_PermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method GetPermissionId, addr 0x2753028, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW GetPermissionId(::GlobalNamespace::__OVRPermissionsRequester__Permission permission);

  /// @brief Method IsPermissionSupportedByPlatform, addr 0x275310c, size 0x12c, virtual false, abstract: false, final false
  static inline bool IsPermissionSupportedByPlatform(::GlobalNamespace::__OVRPermissionsRequester__Permission permission);

  /// @brief Method IsPermissionGranted, addr 0x27534a8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPermissionGranted(::GlobalNamespace::__OVRPermissionsRequester__Permission permission);

  /// @brief Method Request, addr 0x27534bc, size 0x4, virtual false, abstract: false, final false
  static inline void Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>* permissions);

  /// @brief Method RequestPermissions, addr 0x27534c0, size 0x3f4, virtual false, abstract: false, final false
  static inline void RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPermissionsRequester__Permission>* permissions);

  /// @brief Method ShouldRequestPermission, addr 0x27538b4, size 0xfc, virtual false, abstract: false, final false
  static inline bool ShouldRequestPermission(::GlobalNamespace::__OVRPermissionsRequester__Permission permission);

  /// @brief Method BuildPermissionCallbacks, addr 0x27539b0, size 0x224, virtual false, abstract: false, final false
  static inline ::UnityEngine::Android::PermissionCallbacks* BuildPermissionCallbacks();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPermissionsRequester(OVRPermissionsRequester&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPermissionsRequester(OVRPermissionsRequester const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPermissionsRequester();

public:
  /// @brief Field FaceTrackingPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString FaceTrackingPermission{ u"com.oculus.permission.FACE_TRACKING" };

  /// @brief Field EyeTrackingPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString EyeTrackingPermission{ u"com.oculus.permission.EYE_TRACKING" };

  /// @brief Field BodyTrackingPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString BodyTrackingPermission{ u"com.oculus.permission.BODY_TRACKING" };

  /// @brief Field ScenePermission offset 0xffffffff size 0x8
  static constexpr ::ConstString ScenePermission{ u"com.oculus.permission.USE_SCENE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPermissionsRequester, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPermissionsRequester__Permission, "", "OVRPermissionsRequester/Permission");
NEED_NO_BOX(::GlobalNamespace::OVRPermissionsRequester);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPermissionsRequester*, "", "OVRPermissionsRequester");
NEED_NO_BOX(::GlobalNamespace::__OVRPermissionsRequester____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPermissionsRequester____c*, "", "OVRPermissionsRequester/<>c");
