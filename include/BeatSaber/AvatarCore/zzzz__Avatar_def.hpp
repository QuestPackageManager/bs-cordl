#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/Avatar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Avatar)
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseDataProvider;
}
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class Avatar;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::Avatar);
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.Avatar
class CORDL_TYPE Avatar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_bodyCenterWorldPosition)) ::UnityEngine::Vector3 bodyCenterWorldPosition;

  /// @brief Field optionalDataProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_optionalDataProvider, put = __cordl_internal_set_optionalDataProvider)) ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* optionalDataProvider;

  /// @brief Field poseDataProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_poseDataProvider, put = __cordl_internal_set_poseDataProvider)) ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* poseDataProvider;

  /// @brief Field visualDataProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_visualDataProvider, put = __cordl_internal_set_visualDataProvider)) ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* visualDataProvider;

  static inline ::BeatSaber::AvatarCore::Avatar* New_ctor();

  /// @brief Method SetLightColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLightColor(::UnityEngine::Color lightColor);

  /// @brief Method SetOptionalDataProvider, addr 0x224a954, size 0x1e8, virtual false, abstract: false, final false
  inline void SetOptionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* optionalDataProvider);

  /// @brief Method SetPoseDataProvider, addr 0x224a658, size 0x218, virtual false, abstract: false, final false
  inline void SetPoseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* poseDataProvider);

  /// @brief Method SetVisualDataProvider, addr 0x224a870, size 0xe4, virtual false, abstract: false, final false
  inline void SetVisualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* visualDataProvider);

  /// @brief Method UpdateAvatarFromOptionalData, addr 0x224ac94, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data);

  /// @brief Method UpdateAvatarFromOptionalData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data, float_t playbackDelaySeconds);

  /// @brief Method UpdateAvatarFromOptionalDataList, addr 0x224ab3c, size 0x158, virtual false, abstract: false, final false
  inline void UpdateAvatarFromOptionalDataList(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* optionalData);

  /// @brief Method UpdateAvatarFromPose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData currentPose);

  /// @brief Method UpdateAvatarFromVisualData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData visualData);

  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* const& __cordl_internal_get_optionalDataProvider() const;

  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& __cordl_internal_get_optionalDataProvider();

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* const& __cordl_internal_get_poseDataProvider() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*& __cordl_internal_get_poseDataProvider();

  constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* const& __cordl_internal_get_visualDataProvider() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*& __cordl_internal_get_visualDataProvider();

  constexpr void __cordl_internal_set_optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value);

  constexpr void __cordl_internal_set_poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* value);

  constexpr void __cordl_internal_set_visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* value);

  /// @brief Method .ctor, addr 0x224ad60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bodyCenterWorldPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyCenterWorldPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Avatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Avatar(Avatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Avatar(Avatar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17558 };

  /// @brief Field visualDataProvider, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* ___visualDataProvider;

  /// @brief Field poseDataProvider, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* ___poseDataProvider;

  /// @brief Field optionalDataProvider, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* ___optionalDataProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::Avatar, ___visualDataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::Avatar, ___poseDataProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::Avatar, ___optionalDataProvider) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::Avatar, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::Avatar*, "BeatSaber.AvatarCore", "Avatar");
