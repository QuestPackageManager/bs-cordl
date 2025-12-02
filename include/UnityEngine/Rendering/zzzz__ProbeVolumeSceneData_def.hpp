#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeSceneData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProbeVolumeSceneData)
namespace UnityEngine::Rendering {
template <typename K, typename V> class SerializedDictionary_2;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeSceneData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeSceneData);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeSceneData
class CORDL_TYPE ProbeVolumeSceneData : public ::System::Object {
public:
  // Declarations
  /// @brief Field obsoleteHasProbeVolumes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteHasProbeVolumes,
                      put = __cordl_internal_set_obsoleteHasProbeVolumes)) ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>* obsoleteHasProbeVolumes;

  /// @brief Field obsoleteSceneBounds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteSceneBounds,
                      put = __cordl_internal_set_obsoleteSceneBounds)) ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>* obsoleteSceneBounds;

  /// @brief Field parentAsset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parentAsset, put = __cordl_internal_set_parentAsset)) ::UnityW<::UnityEngine::Object> parentAsset;

  static inline ::UnityEngine::Rendering::ProbeVolumeSceneData* New_ctor(::UnityEngine::Object* parentAsset);

  /// @brief Method SetParentObject, addr 0x6579164, size 0x8, virtual false, abstract: false, final false
  inline void SetParentObject(::UnityEngine::Object* parent);

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>* const& __cordl_internal_get_obsoleteHasProbeVolumes() const;

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>*& __cordl_internal_get_obsoleteHasProbeVolumes();

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>* const& __cordl_internal_get_obsoleteSceneBounds() const;

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>*& __cordl_internal_get_obsoleteSceneBounds();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_parentAsset() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_parentAsset();

  constexpr void __cordl_internal_set_obsoleteHasProbeVolumes(::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_obsoleteSceneBounds(::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>* value);

  constexpr void __cordl_internal_set_parentAsset(::UnityW<::UnityEngine::Object> value);

  /// @brief Method .ctor, addr 0x657915c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Object* parentAsset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeSceneData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeSceneData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeSceneData(ProbeVolumeSceneData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeSceneData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeSceneData(ProbeVolumeSceneData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12120 };

  /// @brief Field parentAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___parentAsset;

  /// @brief Field obsoleteSceneBounds, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Bounds>* ___obsoleteSceneBounds;

  /// @brief Field obsoleteHasProbeVolumes, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, bool>* ___obsoleteHasProbeVolumes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSceneData, ___parentAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSceneData, ___obsoleteSceneBounds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeSceneData, ___obsoleteHasProbeVolumes) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeSceneData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeSceneData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeSceneData*, "UnityEngine.Rendering", "ProbeVolumeSceneData");
