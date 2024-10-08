#pragma once
// IWYU pragma private; include "UnityEngine/Android/Permission.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Permission)
namespace UnityEngine::Android {
class PermissionCallbacks;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine::Android {
struct Permission;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::Permission);
// Type: UnityEngine.Android::Permission
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Android {
// Is value type: true
// CS Name: ::UnityEngine.Android::Permission
#pragma pack(push, 0)
struct CORDL_TYPE Permission {
public:
  // Declarations
  /// @brief Field m_UnityPermissions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_UnityPermissions, put = setStaticF_m_UnityPermissions)) ::UnityEngine::AndroidJavaObject* m_UnityPermissions;

  /// @brief Method GetUnityPermissions, addr 0x47d4dc0, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* GetUnityPermissions();

  /// @brief Method HasUserAuthorizedPermission, addr 0x47d4e70, size 0x120, virtual false, abstract: false, final false
  static inline bool HasUserAuthorizedPermission(::StringW permission);

  /// @brief Method RequestUserPermission, addr 0x47d4f90, size 0x7c, virtual false, abstract: false, final false
  static inline void RequestUserPermission(::StringW permission, ::UnityEngine::Android::PermissionCallbacks* callbacks);

  /// @brief Method RequestUserPermissions, addr 0x47d500c, size 0x138, virtual false, abstract: false, final false
  static inline void RequestUserPermissions(::ArrayW<::StringW, ::Array<::StringW>*> permissions, ::UnityEngine::Android::PermissionCallbacks* callbacks);

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_UnityPermissions();

  static inline void setStaticF_m_UnityPermissions(::UnityEngine::AndroidJavaObject* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Permission();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16729 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::Permission, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::Permission, "UnityEngine.Android", "Permission");
