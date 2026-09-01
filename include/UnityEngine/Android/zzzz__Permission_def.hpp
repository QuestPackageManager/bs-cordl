#pragma once
// IWYU pragma private; include "UnityEngine\Android\Permission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Android::Permission, "UnityEngine.Android", "Permission");
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.Permission
#pragma pack(push, 0)
struct CORDL_TYPE Permission {
public:
  // Declarations
  /// @brief Field m_UnityPermissions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_UnityPermissions, put = setStaticF_m_UnityPermissions)) ::UnityEngine::AndroidJavaObject* m_UnityPermissions;

  /// @brief Method GetUnityPermissions, addr 0x6a34838, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* GetUnityPermissions();

  /// @brief Method HasUserAuthorizedPermission, addr 0x6a348e4, size 0x12c, virtual false, abstract: false, final false
  static inline bool HasUserAuthorizedPermission(::StringW permission);

  /// @brief Method RequestUserPermission, addr 0x6a34a10, size 0x8c, virtual false, abstract: false, final false
  static inline void RequestUserPermission(::StringW permission, ::UnityEngine::Android::PermissionCallbacks* callbacks);

  /// @brief Method RequestUserPermissions, addr 0x6a34a9c, size 0x140, virtual false, abstract: false, final false
  static inline void RequestUserPermissions(::ArrayW<::StringW> permissions, ::UnityEngine::Android::PermissionCallbacks* callbacks);

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_UnityPermissions();

  static inline void setStaticF_m_UnityPermissions(::UnityEngine::AndroidJavaObject* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Permission();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20178 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Android::Permission) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Android
