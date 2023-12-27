#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Permission)
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Forward declare root types
namespace UnityEngine::Android {
struct Permission;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::Permission);
// Type: UnityEngine.Android::Permission
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14930))
// CS Name: ::UnityEngine.Android::Permission
#pragma pack(push, 0)
struct CORDL_TYPE Permission {
public:
  // Declarations
  /// @brief Field m_UnityPermissions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_UnityPermissions, put = setStaticF_m_UnityPermissions))::UnityEngine::AndroidJavaObject* m_UnityPermissions;

  /// @brief Field m_Activity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Activity, put = setStaticF_m_Activity))::UnityEngine::AndroidJavaObject* m_Activity;

  static inline void setStaticF_m_UnityPermissions(::UnityEngine::AndroidJavaObject* value);

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_UnityPermissions();

  static inline void setStaticF_m_Activity(::UnityEngine::AndroidJavaObject* value);

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_Activity();

  /// @brief Method GetActivity addr 0x2c8db44 size 0x218 virtual false final false
  static inline ::UnityEngine::AndroidJavaObject* GetActivity();

  /// @brief Method GetUnityPermissions addr 0x2c8dd5c size 0xb8 virtual false final false
  static inline ::UnityEngine::AndroidJavaObject* GetUnityPermissions();

  /// @brief Method HasUserAuthorizedPermission addr 0x2c8de14 size 0x120 virtual false final false
  static inline bool HasUserAuthorizedPermission(::StringW permission);

  /// @brief Method RequestUserPermission addr 0x2c8df34 size 0xa4 virtual false final false
  static inline void RequestUserPermission(::StringW permission, ::UnityEngine::Android::PermissionCallbacks* callbacks);

  /// @brief Method RequestUserPermissions addr 0x2c8dfd8 size 0x138 virtual false final false
  static inline void RequestUserPermissions(::ArrayW<::StringW, ::Array<::StringW>*> permissions, ::UnityEngine::Android::PermissionCallbacks* callbacks);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Permission();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::Permission, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::Permission, "UnityEngine.Android", "Permission");
