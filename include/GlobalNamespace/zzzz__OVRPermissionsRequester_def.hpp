#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPermissionsRequester.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPermissionsRequester)
namespace GlobalNamespace {
struct OVRPermissionsRequester_Permission;
}
namespace GlobalNamespace {
class OVRPermissionsRequester___c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPermissionsRequester_Permission;
}
namespace GlobalNamespace {
class OVRPermissionsRequester;
}
namespace GlobalNamespace {
class OVRPermissionsRequester___c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPermissionsRequester_Permission);
MARK_REF_PTR_T(::GlobalNamespace::OVRPermissionsRequester);
MARK_REF_PTR_T(::GlobalNamespace::OVRPermissionsRequester___c);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPermissionsRequester/Permission
struct CORDL_TYPE OVRPermissionsRequester_Permission {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPermissionsRequester_Permission_Unwrapped
  enum struct __OVRPermissionsRequester_Permission_Unwrapped : int32_t {
    __E_FaceTracking = static_cast<int32_t>(0x0),
    __E_BodyTracking = static_cast<int32_t>(0x1),
    __E_EyeTracking = static_cast<int32_t>(0x2),
    __E_Scene = static_cast<int32_t>(0x3),
    __E_RecordAudio = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRPermissionsRequester_Permission_Unwrapped() const noexcept {
    return static_cast<__OVRPermissionsRequester_Permission_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPermissionsRequester_Permission();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPermissionsRequester_Permission(int32_t value__) noexcept;

  /// @brief Field BodyTracking value: I32(1)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const BodyTracking;

  /// @brief Field EyeTracking value: I32(2)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const EyeTracking;

  /// @brief Field FaceTracking value: I32(0)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const FaceTracking;

  /// @brief Field RecordAudio value: I32(4)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const RecordAudio;

  /// @brief Field Scene value: I32(3)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const Scene;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7264 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPermissionsRequester_Permission, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPermissionsRequester_Permission, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPermissionsRequester/<>c
class CORDL_TYPE OVRPermissionsRequester___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRPermissionsRequester___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Action_1<::StringW>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Action_1<::StringW>* __9__15_1;

  static inline ::GlobalNamespace::OVRPermissionsRequester___c* New_ctor();

  /// @brief Method <BuildPermissionCallbacks>b__15_0, addr 0x5c8cfe4, size 0xa8, virtual false, abstract: false, final false
  inline void _BuildPermissionCallbacks_b__15_0(::StringW permissionId);

  /// @brief Method <BuildPermissionCallbacks>b__15_1, addr 0x5c8d08c, size 0xf0, virtual false, abstract: false, final false
  inline void _BuildPermissionCallbacks_b__15_1(::StringW permissionId);

  /// @brief Method .ctor, addr 0x5c8cfe0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRPermissionsRequester___c* getStaticF___9();

  static inline ::System::Action_1<::StringW>* getStaticF___9__15_0();

  static inline ::System::Action_1<::StringW>* getStaticF___9__15_1();

  static inline void setStaticF___9(::GlobalNamespace::OVRPermissionsRequester___c* value);

  static inline void setStaticF___9__15_0(::System::Action_1<::StringW>* value);

  static inline void setStaticF___9__15_1(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPermissionsRequester___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPermissionsRequester___c(OVRPermissionsRequester___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPermissionsRequester___c(OVRPermissionsRequester___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPermissionsRequester___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPermissionsRequester
class CORDL_TYPE OVRPermissionsRequester : public ::System::Object {
public:
  // Declarations
  using Permission = ::GlobalNamespace::OVRPermissionsRequester_Permission;

  using __c = ::GlobalNamespace::OVRPermissionsRequester___c;

  /// @brief Field PermissionGranted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PermissionGranted, put = setStaticF_PermissionGranted)) ::System::Action_1<::StringW>* PermissionGranted;

  /// @brief Method BuildPermissionCallbacks, addr 0x5c8cde0, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Android::PermissionCallbacks* BuildPermissionCallbacks();

  /// @brief Method GetPermissionId, addr 0x5c8c634, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW GetPermissionId(::GlobalNamespace::OVRPermissionsRequester_Permission permission);

  /// @brief Method IsPermissionGranted, addr 0x5c8c8c4, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPermissionGranted(::GlobalNamespace::OVRPermissionsRequester_Permission permission);

  /// @brief Method IsPermissionSupportedByPlatform, addr 0x5c8c750, size 0x174, virtual false, abstract: false, final false
  static inline bool IsPermissionSupportedByPlatform(::GlobalNamespace::OVRPermissionsRequester_Permission permission);

  /// @brief Method Request, addr 0x5c8c8d8, size 0x4, virtual false, abstract: false, final false
  static inline void Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>* permissions);

  /// @brief Method RequestPermissions, addr 0x5c8c8dc, size 0x3d8, virtual false, abstract: false, final false
  static inline void RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester_Permission>* permissions);

  /// @brief Method ShouldRequestPermission, addr 0x5c8ccb4, size 0x12c, virtual false, abstract: false, final false
  static inline bool ShouldRequestPermission(::GlobalNamespace::OVRPermissionsRequester_Permission permission);

  /// @brief Method add_PermissionGranted, addr 0x5c8c474, size 0xe0, virtual false, abstract: false, final false
  static inline void add_PermissionGranted(::System::Action_1<::StringW>* value);

  static inline ::System::Action_1<::StringW>* getStaticF_PermissionGranted();

  /// @brief Method remove_PermissionGranted, addr 0x5c8c554, size 0xe0, virtual false, abstract: false, final false
  static inline void remove_PermissionGranted(::System::Action_1<::StringW>* value);

  static inline void setStaticF_PermissionGranted(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPermissionsRequester();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPermissionsRequester(OVRPermissionsRequester&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPermissionsRequester", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPermissionsRequester(OVRPermissionsRequester const&) = delete;

  /// @brief Field BodyTrackingPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString BodyTrackingPermission{ u"com.oculus.permission.BODY_TRACKING" };

  /// @brief Field EyeTrackingPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString EyeTrackingPermission{ u"com.oculus.permission.EYE_TRACKING" };

  /// @brief Field FaceTrackingPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString FaceTrackingPermission{ u"com.oculus.permission.FACE_TRACKING" };

  /// @brief Field RecordAudioPermission offset 0xffffffff size 0x8
  static constexpr ::ConstString RecordAudioPermission{ u"android.permission.RECORD_AUDIO" };

  /// @brief Field ScenePermission offset 0xffffffff size 0x8
  static constexpr ::ConstString ScenePermission{ u"com.oculus.permission.USE_SCENE" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7266 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPermissionsRequester, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPermissionsRequester_Permission, "", "OVRPermissionsRequester/Permission");
NEED_NO_BOX(::GlobalNamespace::OVRPermissionsRequester);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPermissionsRequester*, "", "OVRPermissionsRequester");
NEED_NO_BOX(::GlobalNamespace::OVRPermissionsRequester___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPermissionsRequester___c*, "", "OVRPermissionsRequester/<>c");
