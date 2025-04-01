#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentBrandingManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentBrandingManager)
namespace GlobalNamespace {
class EnvironmentBrandingManager_InitData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentBrandingManager;
}
namespace GlobalNamespace {
class EnvironmentBrandingManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentBrandingManager);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentBrandingManager_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentBrandingManager/InitData
class CORDL_TYPE EnvironmentBrandingManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field hideBranding, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hideBranding, put = __cordl_internal_set_hideBranding)) bool hideBranding;

  static inline ::GlobalNamespace::EnvironmentBrandingManager_InitData* New_ctor(bool hideBranding);

  constexpr bool const& __cordl_internal_get_hideBranding() const;

  constexpr bool& __cordl_internal_get_hideBranding();

  constexpr void __cordl_internal_set_hideBranding(bool value);

  /// @brief Method .ctor, addr 0x3ad35ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool hideBranding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentBrandingManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentBrandingManager_InitData(EnvironmentBrandingManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentBrandingManager_InitData(EnvironmentBrandingManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4045 };

  /// @brief Field hideBranding, offset: 0x10, size: 0x1, def value: None
  bool ___hideBranding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentBrandingManager_InitData, ___hideBranding) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentBrandingManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentBrandingManager
class CORDL_TYPE EnvironmentBrandingManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::EnvironmentBrandingManager_InitData;

  /// @brief Field _brandingObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__brandingObjects,
                      put = __cordl_internal_set__brandingObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _brandingObjects;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::EnvironmentBrandingManager_InitData* _initData;

  /// @brief Field _replacementBrandingObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__replacementBrandingObjects,
                      put = __cordl_internal_set__replacementBrandingObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _replacementBrandingObjects;

  static inline ::GlobalNamespace::EnvironmentBrandingManager* New_ctor();

  /// @brief Method Start, addr 0x3ad3518, size 0xcc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__brandingObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__brandingObjects();

  constexpr ::GlobalNamespace::EnvironmentBrandingManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::EnvironmentBrandingManager_InitData*& __cordl_internal_get__initData();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__replacementBrandingObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__replacementBrandingObjects();

  constexpr void __cordl_internal_set__brandingObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::EnvironmentBrandingManager_InitData* value);

  constexpr void __cordl_internal_set__replacementBrandingObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x3ad35e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentBrandingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentBrandingManager(EnvironmentBrandingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentBrandingManager(EnvironmentBrandingManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4046 };

  /// @brief Field _brandingObjects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____brandingObjects;

  /// @brief Field _replacementBrandingObjects, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____replacementBrandingObjects;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentBrandingManager_InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentBrandingManager, ____brandingObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentBrandingManager, ____replacementBrandingObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentBrandingManager, ____initData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentBrandingManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentBrandingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentBrandingManager*, "", "EnvironmentBrandingManager");
NEED_NO_BOX(::GlobalNamespace::EnvironmentBrandingManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentBrandingManager_InitData*, "", "EnvironmentBrandingManager/InitData");
