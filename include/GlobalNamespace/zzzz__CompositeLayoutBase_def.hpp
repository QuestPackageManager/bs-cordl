#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLayoutBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeLayoutBase)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLayoutBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeLayoutBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLayoutBase*, "", "CompositeLayoutBase");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLayoutBase
class CORDL_TYPE CompositeLayoutBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _childParent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__childParent, put = __cordl_internal_set__childParent)) ::UnityW<::UnityEngine::Transform> _childParent;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _prefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefab, put = __cordl_internal_set__prefab)) ::UnityW<::UnityEngine::GameObject> _prefab;

  __declspec(property(get = get_childParent)) ::UnityW<::UnityEngine::Transform> childParent;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_prefab)) ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Method Apply, addr 0x598dbc4, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  /// @brief Method CopyBaseStateFrom, addr 0x598dbac, size 0x18, virtual false, abstract: false, final false
  inline void CopyBaseStateFrom(::GlobalNamespace::CompositeLayoutBase* source);

  static inline ::GlobalNamespace::CompositeLayoutBase* New_ctor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__childParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__childParent();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__prefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__prefab();

  constexpr void __cordl_internal_set__childParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__prefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x598dae4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childParent, addr 0x598db94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_childParent();

  /// @brief Method get_count, addr 0x598dba4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_prefab, addr 0x598db9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_prefab();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLayoutBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLayoutBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLayoutBase(CompositeLayoutBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLayoutBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLayoutBase(CompositeLayoutBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5822 };

  /// @brief Field _childParent, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____childParent;

  /// @brief Field _prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____prefab;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLayoutBase, ____childParent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLayoutBase, ____prefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLayoutBase, ____count) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLayoutBase) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
