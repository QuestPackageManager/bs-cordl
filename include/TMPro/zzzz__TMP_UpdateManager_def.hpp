#pragma once
// IWYU pragma private; include "TMPro/TMP_UpdateManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_UpdateManager)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
class TMP_UpdateManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_UpdateManager);
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_UpdateManager
class CORDL_TYPE TMP_UpdateManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_RegisterTextElementForCullingUpdateMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_RegisterTextElementForCullingUpdateMarker,
                      put = setStaticF_k_RegisterTextElementForCullingUpdateMarker)) ::Unity::Profiling::ProfilerMarker k_RegisterTextElementForCullingUpdateMarker;

  /// @brief Field k_RegisterTextElementForGraphicRebuildMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_RegisterTextElementForGraphicRebuildMarker,
                      put = setStaticF_k_RegisterTextElementForGraphicRebuildMarker)) ::Unity::Profiling::ProfilerMarker k_RegisterTextElementForGraphicRebuildMarker;

  /// @brief Field k_RegisterTextObjectForUpdateMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_RegisterTextObjectForUpdateMarker,
                      put = setStaticF_k_RegisterTextObjectForUpdateMarker)) ::Unity::Profiling::ProfilerMarker k_RegisterTextObjectForUpdateMarker;

  /// @brief Field k_UnregisterTextElementForGraphicRebuildMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UnregisterTextElementForGraphicRebuildMarker,
                      put = setStaticF_k_UnregisterTextElementForGraphicRebuildMarker)) ::Unity::Profiling::ProfilerMarker k_UnregisterTextElementForGraphicRebuildMarker;

  /// @brief Field k_UnregisterTextObjectForUpdateMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UnregisterTextObjectForUpdateMarker,
                      put = setStaticF_k_UnregisterTextObjectForUpdateMarker)) ::Unity::Profiling::ProfilerMarker k_UnregisterTextObjectForUpdateMarker;

  /// @brief Field m_CullingUpdateLookup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CullingUpdateLookup, put = __cordl_internal_set_m_CullingUpdateLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* m_CullingUpdateLookup;

  /// @brief Field m_CullingUpdateQueue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CullingUpdateQueue,
                      put = __cordl_internal_set_m_CullingUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* m_CullingUpdateQueue;

  /// @brief Field m_GraphicQueueLookup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GraphicQueueLookup, put = __cordl_internal_set_m_GraphicQueueLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* m_GraphicQueueLookup;

  /// @brief Field m_GraphicRebuildQueue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GraphicRebuildQueue,
                      put = __cordl_internal_set_m_GraphicRebuildQueue)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* m_GraphicRebuildQueue;

  /// @brief Field m_InternalUpdateLookup, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalUpdateLookup, put = __cordl_internal_set_m_InternalUpdateLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* m_InternalUpdateLookup;

  /// @brief Field m_InternalUpdateQueue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalUpdateQueue,
                      put = __cordl_internal_set_m_InternalUpdateQueue)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* m_InternalUpdateQueue;

  /// @brief Field m_LayoutQueueLookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutQueueLookup, put = __cordl_internal_set_m_LayoutQueueLookup)) ::System::Collections::Generic::HashSet_1<int32_t>* m_LayoutQueueLookup;

  /// @brief Field m_LayoutRebuildQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutRebuildQueue,
                      put = __cordl_internal_set_m_LayoutRebuildQueue)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* m_LayoutRebuildQueue;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::TMPro::TMP_UpdateManager* s_Instance;

  /// @brief Method DoRebuilds, addr 0x4809520, size 0x254, virtual false, abstract: false, final false
  inline void DoRebuilds();

  /// @brief Method InternalRegisterTextElementForCullingUpdate, addr 0x480940c, size 0x110, virtual false, abstract: false, final false
  inline void InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element);

  /// @brief Method InternalRegisterTextElementForGraphicRebuild, addr 0x480929c, size 0x110, virtual false, abstract: false, final false
  inline void InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalRegisterTextElementForLayoutRebuild, addr 0x480912c, size 0x110, virtual false, abstract: false, final false
  inline void InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalRegisterTextObjectForUpdate, addr 0x4808fbc, size 0x110, virtual false, abstract: false, final false
  inline void InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  /// @brief Method InternalUnRegisterTextElementForGraphicRebuild, addr 0x48098ec, size 0x98, virtual false, abstract: false, final false
  inline void InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalUnRegisterTextElementForLayoutRebuild, addr 0x4809984, size 0x98, virtual false, abstract: false, final false
  inline void InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalUnRegisterTextObjectForUpdate, addr 0x48097d4, size 0x98, virtual false, abstract: false, final false
  inline void InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  static inline ::TMPro::TMP_UpdateManager* New_ctor();

  /// @brief Method OnCameraPreCull, addr 0x480951c, size 0x4, virtual false, abstract: false, final false
  inline void OnCameraPreCull();

  /// @brief Method RegisterTextElementForCullingUpdate, addr 0x48093ac, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element);

  /// @brief Method RegisterTextElementForGraphicRebuild, addr 0x480923c, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element);

  /// @brief Method RegisterTextElementForLayoutRebuild, addr 0x48090cc, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element);

  /// @brief Method RegisterTextObjectForUpdate, addr 0x4808f5c, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  /// @brief Method UnRegisterTextElementForRebuild, addr 0x480986c, size 0x80, virtual false, abstract: false, final false
  static inline void UnRegisterTextElementForRebuild(::TMPro::TMP_Text* element);

  /// @brief Method UnRegisterTextObjectForUpdate, addr 0x4809774, size 0x60, virtual false, abstract: false, final false
  static inline void UnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_CullingUpdateLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_CullingUpdateLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& __cordl_internal_get_m_CullingUpdateQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& __cordl_internal_get_m_CullingUpdateQueue();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_GraphicQueueLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_GraphicQueueLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& __cordl_internal_get_m_GraphicRebuildQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& __cordl_internal_get_m_GraphicRebuildQueue();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_InternalUpdateLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_InternalUpdateLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& __cordl_internal_get_m_InternalUpdateQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& __cordl_internal_get_m_InternalUpdateQueue();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_LayoutQueueLookup() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_LayoutQueueLookup();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& __cordl_internal_get_m_LayoutRebuildQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& __cordl_internal_get_m_LayoutRebuildQueue();

  constexpr void __cordl_internal_set_m_CullingUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_CullingUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value);

  constexpr void __cordl_internal_set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value);

  constexpr void __cordl_internal_set_m_InternalUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_InternalUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value);

  constexpr void __cordl_internal_set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value);

  /// @brief Method .ctor, addr 0x4808db0, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RegisterTextElementForCullingUpdateMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RegisterTextElementForGraphicRebuildMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RegisterTextObjectForUpdateMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UnregisterTextElementForGraphicRebuildMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UnregisterTextObjectForUpdateMarker();

  static inline ::TMPro::TMP_UpdateManager* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x4808d10, size 0xa0, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_UpdateManager* get_instance();

  static inline void setStaticF_k_RegisterTextElementForCullingUpdateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_RegisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_RegisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UnregisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UnregisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_Instance(::TMPro::TMP_UpdateManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_UpdateManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_UpdateManager(TMP_UpdateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_UpdateManager(TMP_UpdateManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14575 };

  /// @brief Field m_LayoutQueueLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_LayoutQueueLookup;

  /// @brief Field m_LayoutRebuildQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* ___m_LayoutRebuildQueue;

  /// @brief Field m_GraphicQueueLookup, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_GraphicQueueLookup;

  /// @brief Field m_GraphicRebuildQueue, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* ___m_GraphicRebuildQueue;

  /// @brief Field m_InternalUpdateLookup, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_InternalUpdateLookup;

  /// @brief Field m_InternalUpdateQueue, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* ___m_InternalUpdateQueue;

  /// @brief Field m_CullingUpdateLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_CullingUpdateLookup;

  /// @brief Field m_CullingUpdateQueue, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* ___m_CullingUpdateQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_LayoutQueueLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_LayoutRebuildQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_GraphicQueueLookup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_GraphicRebuildQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_InternalUpdateLookup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_InternalUpdateQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_CullingUpdateLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_CullingUpdateQueue) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_UpdateManager, 0x50>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_UpdateManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_UpdateManager*, "TMPro", "TMP_UpdateManager");
