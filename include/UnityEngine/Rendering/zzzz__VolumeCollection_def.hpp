#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeCollection)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeCollection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeCollection);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeCollection
class CORDL_TYPE VolumeCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  /// @brief Field m_SortNeeded, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortNeeded, put = __cordl_internal_set_m_SortNeeded)) ::System::Collections::Generic::Dictionary_2<int32_t, bool>* m_SortNeeded;

  /// @brief Field m_SortedVolumes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedVolumes, put = __cordl_internal_set_m_SortedVolumes)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* m_SortedVolumes;

  /// @brief Field m_Volumes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Volumes, put = __cordl_internal_set_m_Volumes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* m_Volumes;

  /// @brief Method ChangeLayer, addr 0x66139d4, size 0xfc, virtual false, abstract: false, final false
  inline bool ChangeLayer(::UnityEngine::Rendering::Volume* volume, int32_t previousLayerIndex, int32_t currentLayerIndex);

  /// @brief Method GrabVolumes, addr 0x6613c08, size 0x2d0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* GrabVolumes(::UnityEngine::LayerMask mask);

  /// @brief Method IsComponentActiveInMask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsComponentActiveInMask(::UnityEngine::LayerMask layerMask);

  static inline ::UnityEngine::Rendering::VolumeCollection* New_ctor();

  /// @brief Method Register, addr 0x66132e8, size 0x330, virtual false, abstract: false, final false
  inline bool Register(::UnityEngine::Rendering::Volume* volume, int32_t layer);

  /// @brief Method SetLayerIndexDirty, addr 0x6613618, size 0x178, virtual false, abstract: false, final false
  inline void SetLayerIndexDirty(int32_t layerIndex);

  /// @brief Method SortByPriority, addr 0x6613ad0, size 0x138, virtual false, abstract: false, final false
  static inline void SortByPriority(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* volumes);

  /// @brief Method Unregister, addr 0x6613790, size 0x244, virtual false, abstract: false, final false
  inline bool Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>* const& __cordl_internal_get_m_SortNeeded() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>*& __cordl_internal_get_m_SortNeeded();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* const&
  __cordl_internal_get_m_SortedVolumes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>*& __cordl_internal_get_m_SortedVolumes();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* const& __cordl_internal_get_m_Volumes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*& __cordl_internal_get_m_Volumes();

  constexpr void __cordl_internal_set_m_SortNeeded(::System::Collections::Generic::Dictionary_2<int32_t, bool>* value);

  constexpr void
  __cordl_internal_set_m_SortedVolumes(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* value);

  constexpr void __cordl_internal_set_m_Volumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* value);

  /// @brief Method .ctor, addr 0x6613ed8, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_count, addr 0x6613298, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeCollection(VolumeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeCollection(VolumeCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12297 };

  /// @brief Field k_MaxLayerCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxLayerCount{ static_cast<int32_t>(0x20) };

  /// @brief Field m_SortedVolumes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* ___m_SortedVolumes;

  /// @brief Field m_Volumes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* ___m_Volumes;

  /// @brief Field m_SortNeeded, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, bool>* ___m_SortNeeded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeCollection, ___m_SortedVolumes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeCollection, ___m_Volumes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeCollection, ___m_SortNeeded) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeCollection, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeCollection*, "UnityEngine.Rendering", "VolumeCollection");
