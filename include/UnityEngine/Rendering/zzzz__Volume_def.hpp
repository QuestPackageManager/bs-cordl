#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Volume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Volume)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class IVolume;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class Volume;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Volume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Volume*, "UnityEngine.Rendering", "Volume");
// [ExecuteAlways]
// [AddComponentMenu("Miscellaneous/Volume")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Volume
class CORDL_TYPE Volume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field blendDistance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_blendDistance, put = __cordl_internal_set_blendDistance)) float_t blendDistance;

  __declspec(property(get = get_cachedGameObject)) ::UnityW<::UnityEngine::GameObject> cachedGameObject;

  __declspec(property(get = get_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* colliders;

  __declspec(property(get = get_isGlobal, put = set_isGlobal)) bool isGlobal;

  /// @brief Field m_CachedGameObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedGameObject, put = __cordl_internal_set_m_CachedGameObject)) ::UnityW<::UnityEngine::GameObject> m_CachedGameObject;

  /// @brief Field m_Colliders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Colliders, put = __cordl_internal_set_m_Colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* m_Colliders;

  /// @brief Field m_InternalProfile, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalProfile, put = __cordl_internal_set_m_InternalProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> m_InternalProfile;

  /// @brief Field m_IsGlobal, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsGlobal, put = __cordl_internal_set_m_IsGlobal)) bool m_IsGlobal;

  /// @brief Field m_PreviousLayer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousLayer, put = __cordl_internal_set_m_PreviousLayer)) int32_t m_PreviousLayer;

  /// @brief Field m_PreviousPriority, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousPriority, put = __cordl_internal_set_m_PreviousPriority)) float_t m_PreviousPriority;

  /// @brief Field priority, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_priority, put = __cordl_internal_set_priority)) float_t priority;

  __declspec(property(get = get_profile, put = set_profile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> profile;

  __declspec(property(get = get_profileRef)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> profileRef;

  /// @brief Field sharedProfile, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedProfile, put = __cordl_internal_set_sharedProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> sharedProfile;

  /// @brief Field weight, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Convert operator to "::UnityEngine::Rendering::IVolume"
  constexpr operator ::UnityEngine::Rendering::IVolume*() noexcept;

  /// @brief Method HasInstantiatedProfile, addr 0x6be8318, size 0x64, virtual false, abstract: false, final false
  inline bool HasInstantiatedProfile();

  static inline ::UnityEngine::Rendering::Volume* New_ctor();

  /// @brief Method OnDisable, addr 0x6be8414, size 0x6c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6be837c, size 0x98, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x6be8604, size 0x14, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Update, addr 0x6be8480, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateColliders, addr 0x6be7fb0, size 0x50, virtual false, abstract: false, final false
  inline void UpdateColliders();

  /// @brief Method UpdateLayer, addr 0x6be8498, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateLayer();

  /// @brief Method UpdatePriority, addr 0x6be8538, size 0xcc, virtual false, abstract: false, final false
  inline void UpdatePriority();

  constexpr float_t const& __cordl_internal_get_blendDistance() const;

  constexpr float_t& __cordl_internal_get_blendDistance();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CachedGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CachedGameObject();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_Colliders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_Colliders();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_m_InternalProfile() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_m_InternalProfile();

  constexpr bool const& __cordl_internal_get_m_IsGlobal() const;

  constexpr bool& __cordl_internal_get_m_IsGlobal();

  constexpr int32_t const& __cordl_internal_get_m_PreviousLayer() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousLayer();

  constexpr float_t const& __cordl_internal_get_m_PreviousPriority() const;

  constexpr float_t& __cordl_internal_get_m_PreviousPriority();

  constexpr float_t const& __cordl_internal_get_priority() const;

  constexpr float_t& __cordl_internal_get_priority();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_sharedProfile() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_sharedProfile();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_blendDistance(float_t value);

  constexpr void __cordl_internal_set_m_CachedGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_m_InternalProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  constexpr void __cordl_internal_set_m_IsGlobal(bool value);

  constexpr void __cordl_internal_set_m_PreviousLayer(int32_t value);

  constexpr void __cordl_internal_set_m_PreviousPriority(float_t value);

  constexpr void __cordl_internal_set_priority(float_t value);

  constexpr void __cordl_internal_set_sharedProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x6be8618, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cachedGameObject, addr 0x6be8294, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_cachedGameObject();

  /// @brief Method get_colliders, addr 0x6be828c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders();

  /// @brief Method get_isGlobal, addr 0x6be7f98, size 0x8, virtual true, abstract: false, final true
  inline bool get_isGlobal();

  /// @brief Method get_profile, addr 0x6be8000, size 0x284, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_profile();

  /// @brief Method get_profileRef, addr 0x6be829c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_profileRef();

  /// @brief Convert to "::UnityEngine::Rendering::IVolume"
  constexpr ::UnityEngine::Rendering::IVolume* i___UnityEngine__Rendering__IVolume() noexcept;

  /// @brief Method set_isGlobal, addr 0x6be7fa0, size 0x10, virtual true, abstract: false, final true
  inline void set_isGlobal(bool value);

  /// @brief Method set_profile, addr 0x6be8284, size 0x8, virtual false, abstract: false, final false
  inline void set_profile(::UnityEngine::Rendering::VolumeProfile* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Volume", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Volume(Volume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Volume", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Volume(Volume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9202 };

  /// [SerializeField]
  /// [FormerlySerializedAs("isGlobal")]
  /// @brief Field m_IsGlobal, offset: 0x20, size: 0x1, def value: None
  bool ___m_IsGlobal;

  /// [Delayed]
  /// [FormerlySerializedAs("m_Priority")]
  /// @brief Field priority, offset: 0x24, size: 0x4, def value: None
  float_t ___priority;

  /// [FormerlySerializedAs("m_BlendDistance")]
  /// @brief Field blendDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___blendDistance;

  /// [Range(0, 1)]
  /// [FormerlySerializedAs("m_Weight")]
  /// @brief Field weight, offset: 0x2c, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field sharedProfile, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ___sharedProfile;

  /// @brief Field m_Colliders, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* ___m_Colliders;

  /// @brief Field m_CachedGameObject, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CachedGameObject;

  /// @brief Field m_PreviousLayer, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_PreviousLayer;

  /// @brief Field m_PreviousPriority, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_PreviousPriority;

  /// @brief Field m_InternalProfile, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ___m_InternalProfile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Volume, ___m_IsGlobal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___priority) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___blendDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___weight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___sharedProfile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___m_Colliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___m_CachedGameObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___m_PreviousLayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___m_PreviousPriority) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Volume, ___m_InternalProfile) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Volume) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering
