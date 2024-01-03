#pragma once
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4690))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MenuEnvironmentManager__MenuEnvironmentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuEnvironmentManager__MenuEnvironmentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const None;

  /// @brief Field Default value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const Default;

  /// @brief Field Lobby value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const Lobby;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4690)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4691))
// CS Name: ::MenuEnvironmentManager::MenuEnvironmentObjects*
class CORDL_TYPE __MenuEnvironmentManager__MenuEnvironmentObjects : public ::System::Object {
public:
  // Declarations
  /// @brief Field _menuEnvironmentType, offset 0x10, size 0x4
  __declspec(property(get = __get__menuEnvironmentType, put = __set__menuEnvironmentType))::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType _menuEnvironmentType;

  /// @brief Field _wrapper, offset 0x18, size 0x8
  __declspec(property(get = __get__wrapper, put = __set__wrapper))::UnityEngine::GameObject* _wrapper;

  __declspec(property(get = get_menuEnvironmentType))::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType;

  __declspec(property(get = get_wrapper))::UnityEngine::GameObject* wrapper;

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& __get__menuEnvironmentType();

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& __get__menuEnvironmentType() const;

  constexpr void __set__menuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType value);

  constexpr ::UnityEngine::GameObject*& __get__wrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__wrapper() const;

  constexpr void __set__wrapper(::UnityEngine::GameObject* value);

  /// @brief Method get_menuEnvironmentType, addr 0x23765cc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType get_menuEnvironmentType();

  /// @brief Method get_wrapper, addr 0x23765d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_wrapper();

  static inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects* New_ctor();

  /// @brief Method .ctor, addr 0x23765dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuEnvironmentManager__MenuEnvironmentObjects(__MenuEnvironmentManager__MenuEnvironmentObjects&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuEnvironmentManager__MenuEnvironmentObjects(__MenuEnvironmentManager__MenuEnvironmentObjects const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuEnvironmentManager__MenuEnvironmentObjects();

public:
  /// @brief Field _menuEnvironmentType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType ____menuEnvironmentType;

  /// @brief Field _wrapper, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____wrapper;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4690)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4692))
// CS Name: ::MenuEnvironmentManager*
class CORDL_TYPE MenuEnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MenuEnvironmentObjects = ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects;

  using MenuEnvironmentType = ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(
      property(get = __get__data,
               put = __set__data))::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> _data;

  /// @brief Field _prevMenuEnvironmentType, offset 0x20, size 0x4
  __declspec(property(get = __get__prevMenuEnvironmentType, put = __set__prevMenuEnvironmentType))::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType _prevMenuEnvironmentType;

  constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>& __get__data();

  constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> value);

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& __get__prevMenuEnvironmentType();

  constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& __get__prevMenuEnvironmentType() const;

  constexpr void __set__prevMenuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType value);

  /// @brief Method Start, addr 0x237643c, size 0x8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ShowEnvironmentType, addr 0x2376444, size 0x180, virtual false, abstract: false, final false
  inline void ShowEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType);

  static inline ::GlobalNamespace::MenuEnvironmentManager* New_ctor();

  /// @brief Method .ctor, addr 0x23765c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuEnvironmentManager(MenuEnvironmentManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuEnvironmentManager(MenuEnvironmentManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuEnvironmentManager();

public:
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
