#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/HeadBodyOffsetSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadBodyOffsetSO)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class HeadBodyOffsetSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO);
// Dependencies PersistentScriptableObject, UnityEngine.Vector3
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.HeadBodyOffsetSO
class CORDL_TYPE HeadBodyOffsetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _headNeckOffset, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__headNeckOffset, put = __cordl_internal_set__headNeckOffset)) ::UnityEngine::Vector3 _headNeckOffset;

  /// @brief Field _verticalOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__verticalOffset, put = __cordl_internal_set__verticalOffset)) float_t _verticalOffset;

  __declspec(property(get = get_headNeckOffset)) ::UnityEngine::Vector3 headNeckOffset;

  __declspec(property(get = get_verticalOffset)) float_t verticalOffset;

  static inline ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headNeckOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__headNeckOffset();

  constexpr float_t const& __cordl_internal_get__verticalOffset() const;

  constexpr float_t& __cordl_internal_get__verticalOffset();

  constexpr void __cordl_internal_set__headNeckOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__verticalOffset(float_t value);

  /// @brief Method .ctor, addr 0x2259974, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_headNeckOffset, addr 0x2259960, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headNeckOffset();

  /// @brief Method get_verticalOffset, addr 0x225996c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_verticalOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadBodyOffsetSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeadBodyOffsetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadBodyOffsetSO(HeadBodyOffsetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadBodyOffsetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadBodyOffsetSO(HeadBodyOffsetSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18168 };

  /// @brief Field _headNeckOffset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____headNeckOffset;

  /// @brief Field _verticalOffset, offset: 0x24, size: 0x4, def value: None
  float_t ____verticalOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO, ____headNeckOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO, ____verticalOffset) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO, 0x28>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*, "BeatSaber.BeatAvatarSDK", "HeadBodyOffsetSO");
