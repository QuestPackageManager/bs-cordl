#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuEnvironmentManager)
namespace GlobalNamespace {
class MenuEnvironmentManager_MenuEnvironmentObjects;
}
namespace GlobalNamespace {
struct MenuEnvironmentManager_MenuEnvironmentType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct MenuEnvironmentManager_MenuEnvironmentType;
}
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
namespace GlobalNamespace {
class MenuEnvironmentManager_MenuEnvironmentObjects;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType);
MARK_REF_PTR_T(::GlobalNamespace::MenuEnvironmentManager);
MARK_REF_PTR_T(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MenuEnvironmentManager/MenuEnvironmentType
struct CORDL_TYPE MenuEnvironmentManager_MenuEnvironmentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MenuEnvironmentManager_MenuEnvironmentType_Unwrapped
  enum struct __MenuEnvironmentManager_MenuEnvironmentType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_Lobby = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MenuEnvironmentManager_MenuEnvironmentType_Unwrapped() const noexcept {
    return static_cast<__MenuEnvironmentManager_MenuEnvironmentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuEnvironmentManager_MenuEnvironmentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MenuEnvironmentManager_MenuEnvironmentType(int32_t value__) noexcept;

  /// @brief Field Default value: I32(1)
  static ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const Default;

  /// @brief Field Lobby value: I32(2)
  static ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const Lobby;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MenuEnvironmentManager::MenuEnvironmentType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuEnvironmentManager/MenuEnvironmentObjects
class CORDL_TYPE MenuEnvironmentManager_MenuEnvironmentObjects : public ::System::Object {
public:
  // Declarations
  /// @brief Field _menuEnvironmentType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__menuEnvironmentType,
                      put = __cordl_internal_set__menuEnvironmentType)) ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType _menuEnvironmentType;

  /// @brief Field _wrapper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__wrapper, put = __cordl_internal_set__wrapper)) ::UnityW<::UnityEngine::GameObject> _wrapper;

  __declspec(property(get = get_menuEnvironmentType)) ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType menuEnvironmentType;

  __declspec(property(get = get_wrapper)) ::UnityW<::UnityEngine::GameObject> wrapper;

  static inline ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects* New_ctor();

  constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const& __cordl_internal_get__menuEnvironmentType() const;

  constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType& __cordl_internal_get__menuEnvironmentType();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__wrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__wrapper();

  constexpr void __cordl_internal_set__menuEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType value);

  constexpr void __cordl_internal_set__wrapper(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x56b371c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_menuEnvironmentType, addr 0x56b370c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType get_menuEnvironmentType();

  /// @brief Method get_wrapper, addr 0x56b3714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_wrapper();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuEnvironmentManager_MenuEnvironmentObjects();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager_MenuEnvironmentObjects", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuEnvironmentManager_MenuEnvironmentObjects(MenuEnvironmentManager_MenuEnvironmentObjects&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager_MenuEnvironmentObjects", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuEnvironmentManager_MenuEnvironmentObjects(MenuEnvironmentManager_MenuEnvironmentObjects const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5611 };

  /// @brief Field _menuEnvironmentType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType ____menuEnvironmentType;

  /// @brief Field _wrapper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____wrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects, ____menuEnvironmentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects, ____wrapper) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MenuEnvironmentManager::MenuEnvironmentType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuEnvironmentManager
class CORDL_TYPE MenuEnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MenuEnvironmentObjects = ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects;

  using MenuEnvironmentType = ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType;

  /// @brief Field _data, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__data,
      put = __cordl_internal_set__data)) ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*>
      _data;

  /// @brief Field _prevMenuEnvironmentType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMenuEnvironmentType,
                      put = __cordl_internal_set__prevMenuEnvironmentType)) ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType _prevMenuEnvironmentType;

  static inline ::GlobalNamespace::MenuEnvironmentManager* New_ctor();

  /// @brief Method ShowEnvironmentType, addr 0x56b357c, size 0x18c, virtual false, abstract: false, final false
  inline void ShowEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType menuEnvironmentType);

  /// @brief Method Start, addr 0x56b3574, size 0x8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*> const&
  __cordl_internal_get__data() const;

  constexpr ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*>& __cordl_internal_get__data();

  constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const& __cordl_internal_get__prevMenuEnvironmentType() const;

  constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType& __cordl_internal_get__prevMenuEnvironmentType();

  constexpr void
  __cordl_internal_set__data(::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*> value);

  constexpr void __cordl_internal_set__prevMenuEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType value);

  /// @brief Method .ctor, addr 0x56b3708, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuEnvironmentManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuEnvironmentManager(MenuEnvironmentManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuEnvironmentManager(MenuEnvironmentManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5612 };

  /// @brief Field _data, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*> ____data;

  /// @brief Field _prevMenuEnvironmentType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType ____prevMenuEnvironmentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager, ____prevMenuEnvironmentType) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuEnvironmentManager, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType, "", "MenuEnvironmentManager/MenuEnvironmentType");
NEED_NO_BOX(::GlobalNamespace::MenuEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuEnvironmentManager*, "", "MenuEnvironmentManager");
NEED_NO_BOX(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
