#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuEnvironmentManager)
namespace GlobalNamespace {
class __MenuEnvironmentManager__MenuEnvironmentObjects;
}
namespace GlobalNamespace {
struct __MenuEnvironmentManager__MenuEnvironmentType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MenuEnvironmentManager__MenuEnvironmentType;
}
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
namespace GlobalNamespace {
class __MenuEnvironmentManager__MenuEnvironmentObjects;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType);
MARK_REF_PTR_T(::GlobalNamespace::MenuEnvironmentManager);
MARK_REF_PTR_T(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects);
// Type: ::MenuEnvironmentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MenuEnvironmentManager::MenuEnvironmentType
struct CORDL_TYPE __MenuEnvironmentManager__MenuEnvironmentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped
  enum struct ____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_Lobby = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped() const noexcept {
    return static_cast<____MenuEnvironmentManager__MenuEnvironmentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuEnvironmentManager__MenuEnvironmentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MenuEnvironmentManager__MenuEnvironmentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const Default;

  /// @brief Field Lobby value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const Lobby;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuEnvironmentObjects
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuEnvironmentManager::MenuEnvironmentObjects*
class CORDL_TYPE __MenuEnvironmentManager__MenuEnvironmentObjects : public ::System::Object {
public:
  // Declarations
  /// @brief Field _menuEnvironmentType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__menuEnvironmentType,
                      put = __cordl_internal_set__menuEnvironmentType))::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType _menuEnvironmentType;

  /// @brief Field _wrapper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__wrapper, put = __cordl_internal_set__wrapper))::UnityW<::UnityEngine::GameObject> _wrapper;

  __declspec(property(get = get_menuEnvironmentType))::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType;

  __declspec(property(get = get_wrapper))::UnityW<::UnityEngine::GameObject> wrapper;

  static inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects* New_ctor();

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& __cordl_internal_get__menuEnvironmentType() const;

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& __cordl_internal_get__menuEnvironmentType();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__wrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__wrapper();

  constexpr void __cordl_internal_set__menuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType value);

  constexpr void __cordl_internal_set__wrapper(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2639148, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_menuEnvironmentType, addr 0x2639138, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType get_menuEnvironmentType();

  /// @brief Method get_wrapper, addr 0x2639140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_wrapper();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuEnvironmentManager__MenuEnvironmentObjects();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuEnvironmentManager__MenuEnvironmentObjects(__MenuEnvironmentManager__MenuEnvironmentObjects&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuEnvironmentManager__MenuEnvironmentObjects(__MenuEnvironmentManager__MenuEnvironmentObjects const&) = delete;

  /// @brief Field _menuEnvironmentType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType ____menuEnvironmentType;

  /// @brief Field _wrapper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____wrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects, ____menuEnvironmentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects, ____wrapper) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuEnvironmentManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuEnvironmentManager*
class CORDL_TYPE MenuEnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MenuEnvironmentObjects = ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects;

  using MenuEnvironmentType = ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,
                                                                                                   ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> _data;

  /// @brief Field _prevMenuEnvironmentType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMenuEnvironmentType,
                      put = __cordl_internal_set__prevMenuEnvironmentType))::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType _prevMenuEnvironmentType;

  static inline ::GlobalNamespace::MenuEnvironmentManager* New_ctor();

  /// @brief Method ShowEnvironmentType, addr 0x2638fb0, size 0x180, virtual false, abstract: false, final false
  inline void ShowEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType);

  /// @brief Method Start, addr 0x2638fa8, size 0x8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> const&
  __cordl_internal_get__data() const;

  constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>&
  __cordl_internal_get__data();

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& __cordl_internal_get__prevMenuEnvironmentType() const;

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& __cordl_internal_get__prevMenuEnvironmentType();

  constexpr void
  __cordl_internal_set__data(::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> value);

  constexpr void __cordl_internal_set__prevMenuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType value);

  /// @brief Method .ctor, addr 0x2639130, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> ____data;

  /// @brief Field _prevMenuEnvironmentType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType ____prevMenuEnvironmentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuEnvironmentManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager, ____data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuEnvironmentManager, ____prevMenuEnvironmentType) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, "", "MenuEnvironmentManager/MenuEnvironmentType");
NEED_NO_BOX(::GlobalNamespace::MenuEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuEnvironmentManager*, "", "MenuEnvironmentManager");
NEED_NO_BOX(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
