#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePrefabOverride.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePrefabOverride)
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScenePrefabOverride);
// Type: ::OVRScenePrefabOverride
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRScenePrefabOverride*
class CORDL_TYPE OVRScenePrefabOverride : public ::System::Object {
public:
  // Declarations
  /// @brief Field ClassificationLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ClassificationLabel, put = __cordl_internal_set_ClassificationLabel)) ::StringW ClassificationLabel;

  /// @brief Field Prefab, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Prefab, put = __cordl_internal_set_Prefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> Prefab;

  /// @brief Field _editorClassificationIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__editorClassificationIndex, put = __cordl_internal_set__editorClassificationIndex)) int32_t _editorClassificationIndex;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::GlobalNamespace::OVRScenePrefabOverride* New_ctor();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x3f9ad2c, size 0x154, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x3f9ad28, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method <UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>g__IndexOf|4_0, addr 0x3f9ae80, size 0x2f8, virtual false, abstract: false, final false
  static inline int32_t _UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0(::StringW label, ::System::Collections::Generic::IEnumerable_1<::StringW>* collection);

  constexpr ::StringW const& __cordl_internal_get_ClassificationLabel() const;

  constexpr ::StringW& __cordl_internal_get_ClassificationLabel();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_Prefab() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_Prefab();

  constexpr int32_t const& __cordl_internal_get__editorClassificationIndex() const;

  constexpr int32_t& __cordl_internal_get__editorClassificationIndex();

  constexpr void __cordl_internal_set_ClassificationLabel(::StringW value);

  constexpr void __cordl_internal_set_Prefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  constexpr void __cordl_internal_set__editorClassificationIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3f9b178, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePrefabOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePrefabOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScenePrefabOverride(OVRScenePrefabOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePrefabOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScenePrefabOverride(OVRScenePrefabOverride const&) = delete;

  /// @brief Field Prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ___Prefab;

  /// @brief Field ClassificationLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ClassificationLabel;

  /// @brief Field _editorClassificationIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____editorClassificationIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePrefabOverride, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePrefabOverride, ___Prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePrefabOverride, ___ClassificationLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePrefabOverride, ____editorClassificationIndex) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePrefabOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePrefabOverride*, "", "OVRScenePrefabOverride");
