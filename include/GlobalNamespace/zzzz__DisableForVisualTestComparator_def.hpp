#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableForVisualTestComparator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableForVisualTestComparator)
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableForVisualTestComparator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableForVisualTestComparator);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableForVisualTestComparator
class CORDL_TYPE DisableForVisualTestComparator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _determinismConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _disableEntireGameObject, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__disableEntireGameObject, put = __cordl_internal_set__disableEntireGameObject)) bool _disableEntireGameObject;

  /// @brief Field _disableSpecificComponents, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__disableSpecificComponents,
                      put = __cordl_internal_set__disableSpecificComponents)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* _disableSpecificComponents;

  /// @brief Method Init, addr 0x576bf7c, size 0x9c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::DeterminismConfig* determinismConfig);

  static inline ::GlobalNamespace::DisableForVisualTestComparator* New_ctor();

  /// @brief Method OnDestroy, addr 0x576c018, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDeterminismSet, addr 0x576c0e8, size 0x254, virtual false, abstract: false, final false
  inline void OnDeterminismSet(bool isDeterministic);

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr bool const& __cordl_internal_get__disableEntireGameObject() const;

  constexpr bool& __cordl_internal_get__disableEntireGameObject();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get__disableSpecificComponents() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get__disableSpecificComponents();

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__disableEntireGameObject(bool value);

  constexpr void __cordl_internal_set__disableSpecificComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* value);

  /// @brief Method .ctor, addr 0x576c33c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableForVisualTestComparator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableForVisualTestComparator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableForVisualTestComparator(DisableForVisualTestComparator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableForVisualTestComparator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableForVisualTestComparator(DisableForVisualTestComparator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5768 };

  /// @brief Field _determinismConfig, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _disableEntireGameObject, offset: 0x28, size: 0x1, def value: None
  bool ____disableEntireGameObject;

  /// @brief Field _disableSpecificComponents, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* ____disableSpecificComponents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisableForVisualTestComparator, ____determinismConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableForVisualTestComparator, ____disableEntireGameObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableForVisualTestComparator, ____disableSpecificComponents) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableForVisualTestComparator, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableForVisualTestComparator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableForVisualTestComparator*, "", "DisableForVisualTestComparator");
