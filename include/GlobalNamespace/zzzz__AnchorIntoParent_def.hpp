#pragma once
// IWYU pragma private; include "GlobalNamespace/AnchorIntoParent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(AnchorIntoParent)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AnchorIntoParent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnchorIntoParent);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnchorIntoParent
class CORDL_TYPE AnchorIntoParent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _parentTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parentTransform, put = __cordl_internal_set__parentTransform)) ::UnityW<::UnityEngine::Transform> _parentTransform;

  /// @brief Field _positionOffset, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset)) ::UnityEngine::Vector3 _positionOffset;

  static inline ::GlobalNamespace::AnchorIntoParent* New_ctor();

  /// @brief Method Start, addr 0x39c2ce4, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parentTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parentTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionOffset();

  constexpr void __cordl_internal_set__parentTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__positionOffset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x39c2de4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnchorIntoParent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnchorIntoParent(AnchorIntoParent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnchorIntoParent(AnchorIntoParent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18849 };

  /// @brief Field _parentTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____parentTransform;

  /// @brief Field _positionOffset, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnchorIntoParent, ____parentTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorIntoParent, ____positionOffset) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnchorIntoParent, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnchorIntoParent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnchorIntoParent*, "", "AnchorIntoParent");
