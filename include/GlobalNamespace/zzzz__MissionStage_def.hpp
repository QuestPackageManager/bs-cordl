#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionStage)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionStage);
// Type: ::MissionStage
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4464))
// CS Name: ::MissionStage*
class CORDL_TYPE MissionStage : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _minimumMissionsToUnlock, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumMissionsToUnlock, put = __cordl_internal_set__minimumMissionsToUnlock)) int32_t _minimumMissionsToUnlock;

  /// @brief Field _rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform))::UnityW<::UnityEngine::RectTransform> _rectTransform;

  __declspec(property(get = get_minimumMissionsToUnlock)) int32_t minimumMissionsToUnlock;

  __declspec(property(get = get_position))::UnityEngine::Vector2 position;

  constexpr int32_t& __cordl_internal_get__minimumMissionsToUnlock();

  constexpr int32_t const& __cordl_internal_get__minimumMissionsToUnlock() const;

  constexpr void __cordl_internal_set__minimumMissionsToUnlock(int32_t value);

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method get_minimumMissionsToUnlock, addr 0x2352e84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minimumMissionsToUnlock();

  /// @brief Method get_position, addr 0x2352e8c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  static inline ::GlobalNamespace::MissionStage* New_ctor();

  /// @brief Method .ctor, addr 0x2352ea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionStage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionStage(MissionStage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionStage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionStage(MissionStage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionStage();

public:
  /// @brief Field _minimumMissionsToUnlock, offset: 0x18, size: 0x4, def value: None
  int32_t ____minimumMissionsToUnlock;

  /// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStage, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStage, ____minimumMissionsToUnlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStage, ____rectTransform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStage*, "", "MissionStage");
