#pragma once
// IWYU pragma private; include "UnityEngine/TreePrototype.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TreePrototype)
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class TreePrototype;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TreePrototype);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TreePrototype
class CORDL_TYPE TreePrototype : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_bendFactor, put = set_bendFactor)) float_t bendFactor;

  /// @brief Field m_BendFactor, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BendFactor, put = __cordl_internal_set_m_BendFactor)) float_t m_BendFactor;

  /// @brief Field m_NavMeshLod, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NavMeshLod, put = __cordl_internal_set_m_NavMeshLod)) int32_t m_NavMeshLod;

  /// @brief Field m_Prefab, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Prefab, put = __cordl_internal_set_m_Prefab)) ::UnityW<::UnityEngine::GameObject> m_Prefab;

  __declspec(property(get = get_navMeshLod)) int32_t navMeshLod;

  __declspec(property(get = get_prefab, put = set_prefab)) ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Method Equals, addr 0x492a84c, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x492a8b0, size 0x110, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::TreePrototype* other);

  /// @brief Method GetHashCode, addr 0x492a9c0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TreePrototype* New_ctor();

  constexpr float_t const& __cordl_internal_get_m_BendFactor() const;

  constexpr float_t& __cordl_internal_get_m_BendFactor();

  constexpr int32_t const& __cordl_internal_get_m_NavMeshLod() const;

  constexpr int32_t& __cordl_internal_get_m_NavMeshLod();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Prefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Prefab();

  constexpr void __cordl_internal_set_m_BendFactor(float_t value);

  constexpr void __cordl_internal_set_m_NavMeshLod(int32_t value);

  constexpr void __cordl_internal_set_m_Prefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x492a844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bendFactor, addr 0x492a82c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bendFactor();

  /// @brief Method get_navMeshLod, addr 0x492a83c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_navMeshLod();

  /// @brief Method get_prefab, addr 0x492a81c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_prefab();

  /// @brief Method set_bendFactor, addr 0x492a834, size 0x8, virtual false, abstract: false, final false
  inline void set_bendFactor(float_t value);

  /// @brief Method set_prefab, addr 0x492a824, size 0x8, virtual false, abstract: false, final false
  inline void set_prefab(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreePrototype();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreePrototype", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreePrototype(TreePrototype&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreePrototype", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreePrototype(TreePrototype const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18133 };

  /// @brief Field m_Prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Prefab;

  /// @brief Field m_BendFactor, offset: 0x18, size: 0x4, def value: None
  float_t ___m_BendFactor;

  /// @brief Field m_NavMeshLod, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_NavMeshLod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TreePrototype, ___m_Prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreePrototype, ___m_BendFactor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreePrototype, ___m_NavMeshLod) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TreePrototype, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TreePrototype);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TreePrototype*, "UnityEngine", "TreePrototype");
