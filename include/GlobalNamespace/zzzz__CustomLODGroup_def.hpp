#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLODGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomLODGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomLODGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLODGroup);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomLODGroup
class CORDL_TYPE CustomLODGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeLevel, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__activeLevel, put = __cordl_internal_set__activeLevel)) int32_t _activeLevel;

  /// @brief Field _levels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levels, put = __cordl_internal_set__levels)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _levels;

  /// @brief Method Awake, addr 0x3b7d900, size 0x24, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DetectLODs, addr 0x3b7dbb8, size 0x1dc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* DetectLODs();

  /// @brief Method DisableAllLevels, addr 0x3b7da98, size 0xc4, virtual false, abstract: false, final false
  inline void DisableAllLevels();

  /// @brief Method GetActiveLevel, addr 0x3b7da58, size 0x40, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetActiveLevel();

  /// @brief Method GetStartupLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetStartupLevel();

  static inline ::GlobalNamespace::CustomLODGroup* New_ctor();

  /// @brief Method SetActiveLevel, addr 0x3b7d924, size 0x134, virtual false, abstract: false, final false
  inline void SetActiveLevel(int32_t level);

  /// @brief Method SetLevels, addr 0x3b7db88, size 0x30, virtual false, abstract: false, final false
  inline void SetLevels(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> levels);

  /// @brief Method ToggleLevel, addr 0x3b7db5c, size 0x2c, virtual false, abstract: false, final false
  inline void ToggleLevel();

  constexpr int32_t const& __cordl_internal_get__activeLevel() const;

  constexpr int32_t& __cordl_internal_get__activeLevel();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__levels() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__levels();

  constexpr void __cordl_internal_set__activeLevel(int32_t value);

  constexpr void __cordl_internal_set__levels(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x3b7dd94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLODGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomLODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLODGroup(CustomLODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLODGroup(CustomLODGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4190 };

  /// @brief Field kLodPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLodPrefix{ u"LOD" };

  /// @brief Field _levels, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____levels;

  /// @brief Field _activeLevel, offset: 0x28, size: 0x4, def value: None
  int32_t ____activeLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomLODGroup, ____levels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLODGroup, ____activeLevel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLODGroup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLODGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLODGroup*, "", "CustomLODGroup");
