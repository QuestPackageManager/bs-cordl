#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_UpdateManager)
namespace TMPro {
class TMP_Text;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace TMPro {
class TMP_UpdateManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_UpdateManager);
// Type: TMPro::TMP_UpdateManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12458))
// CS Name: ::TMPro::TMP_UpdateManager*
class CORDL_TYPE TMP_UpdateManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_LayoutQueueLookup, offset 0x10, size 0x8
  __declspec(property(get = __get_m_LayoutQueueLookup, put = __set_m_LayoutQueueLookup))::System::Collections::Generic::HashSet_1<int32_t>* m_LayoutQueueLookup;

  /// @brief Field m_LayoutRebuildQueue, offset 0x18, size 0x8
  __declspec(property(get = __get_m_LayoutRebuildQueue, put = __set_m_LayoutRebuildQueue))::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_LayoutRebuildQueue;

  /// @brief Field m_GraphicQueueLookup, offset 0x20, size 0x8
  __declspec(property(get = __get_m_GraphicQueueLookup, put = __set_m_GraphicQueueLookup))::System::Collections::Generic::HashSet_1<int32_t>* m_GraphicQueueLookup;

  /// @brief Field m_GraphicRebuildQueue, offset 0x28, size 0x8
  __declspec(property(get = __get_m_GraphicRebuildQueue, put = __set_m_GraphicRebuildQueue))::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_GraphicRebuildQueue;

  /// @brief Field m_InternalUpdateLookup, offset 0x30, size 0x8
  __declspec(property(get = __get_m_InternalUpdateLookup, put = __set_m_InternalUpdateLookup))::System::Collections::Generic::HashSet_1<int32_t>* m_InternalUpdateLookup;

  /// @brief Field m_InternalUpdateQueue, offset 0x38, size 0x8
  __declspec(property(get = __get_m_InternalUpdateQueue, put = __set_m_InternalUpdateQueue))::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_InternalUpdateQueue;

  /// @brief Field m_CullingUpdateLookup, offset 0x40, size 0x8
  __declspec(property(get = __get_m_CullingUpdateLookup, put = __set_m_CullingUpdateLookup))::System::Collections::Generic::HashSet_1<int32_t>* m_CullingUpdateLookup;

  /// @brief Field m_CullingUpdateQueue, offset 0x48, size 0x8
  __declspec(property(get = __get_m_CullingUpdateQueue, put = __set_m_CullingUpdateQueue))::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* m_CullingUpdateQueue;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::TMPro::TMP_UpdateManager* s_Instance;

  /// @brief Field k_RegisterTextObjectForUpdateMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_RegisterTextObjectForUpdateMarker,
                             put = setStaticF_k_RegisterTextObjectForUpdateMarker))::Unity::Profiling::ProfilerMarker k_RegisterTextObjectForUpdateMarker;

  /// @brief Field k_RegisterTextElementForGraphicRebuildMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_RegisterTextElementForGraphicRebuildMarker,
                             put = setStaticF_k_RegisterTextElementForGraphicRebuildMarker))::Unity::Profiling::ProfilerMarker k_RegisterTextElementForGraphicRebuildMarker;

  /// @brief Field k_RegisterTextElementForCullingUpdateMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_RegisterTextElementForCullingUpdateMarker,
                             put = setStaticF_k_RegisterTextElementForCullingUpdateMarker))::Unity::Profiling::ProfilerMarker k_RegisterTextElementForCullingUpdateMarker;

  /// @brief Field k_UnregisterTextObjectForUpdateMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UnregisterTextObjectForUpdateMarker,
                             put = setStaticF_k_UnregisterTextObjectForUpdateMarker))::Unity::Profiling::ProfilerMarker k_UnregisterTextObjectForUpdateMarker;

  /// @brief Field k_UnregisterTextElementForGraphicRebuildMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UnregisterTextElementForGraphicRebuildMarker,
                             put = setStaticF_k_UnregisterTextElementForGraphicRebuildMarker))::Unity::Profiling::ProfilerMarker k_UnregisterTextElementForGraphicRebuildMarker;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_LayoutQueueLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_LayoutQueueLookup() const;

  constexpr void __set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*& __get_m_LayoutRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*> const& __get_m_LayoutRebuildQueue() const;

  constexpr void __set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_GraphicQueueLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_GraphicQueueLookup() const;

  constexpr void __set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*& __get_m_GraphicRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*> const& __get_m_GraphicRebuildQueue() const;

  constexpr void __set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_InternalUpdateLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_InternalUpdateLookup() const;

  constexpr void __set_m_InternalUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*& __get_m_InternalUpdateQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*> const& __get_m_InternalUpdateQueue() const;

  constexpr void __set_m_InternalUpdateQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_CullingUpdateLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_CullingUpdateLookup() const;

  constexpr void __set_m_CullingUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*& __get_m_CullingUpdateQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Text*>*> const& __get_m_CullingUpdateQueue() const;

  constexpr void __set_m_CullingUpdateQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* value);

  static inline void setStaticF_s_Instance(::TMPro::TMP_UpdateManager* value);

  static inline ::TMPro::TMP_UpdateManager* getStaticF_s_Instance();

  static inline void setStaticF_k_RegisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RegisterTextObjectForUpdateMarker();

  static inline void setStaticF_k_RegisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RegisterTextElementForGraphicRebuildMarker();

  static inline void setStaticF_k_RegisterTextElementForCullingUpdateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RegisterTextElementForCullingUpdateMarker();

  static inline void setStaticF_k_UnregisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UnregisterTextObjectForUpdateMarker();

  static inline void setStaticF_k_UnregisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UnregisterTextElementForGraphicRebuildMarker();

  /// @brief Method get_instance, addr 0x2c4ce20, size 0xa8, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_UpdateManager* get_instance();

  static inline ::TMPro::TMP_UpdateManager* New_ctor();

  /// @brief Method .ctor, addr 0x2c4cec8, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method RegisterTextObjectForUpdate, addr 0x2c4d094, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  /// @brief Method InternalRegisterTextObjectForUpdate, addr 0x2c4d0f4, size 0x114, virtual false, abstract: false, final false
  inline void InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  /// @brief Method RegisterTextElementForLayoutRebuild, addr 0x2c4d208, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalRegisterTextElementForLayoutRebuild, addr 0x2c4d268, size 0x114, virtual false, abstract: false, final false
  inline void InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element);

  /// @brief Method RegisterTextElementForGraphicRebuild, addr 0x2c4d37c, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalRegisterTextElementForGraphicRebuild, addr 0x2c4d3dc, size 0x114, virtual false, abstract: false, final false
  inline void InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element);

  /// @brief Method RegisterTextElementForCullingUpdate, addr 0x2c4d4f0, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element);

  /// @brief Method InternalRegisterTextElementForCullingUpdate, addr 0x2c4d550, size 0x114, virtual false, abstract: false, final false
  inline void InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element);

  /// @brief Method OnCameraPreCull, addr 0x2c4d664, size 0x4, virtual false, abstract: false, final false
  inline void OnCameraPreCull();

  /// @brief Method DoRebuilds, addr 0x2c4d668, size 0x254, virtual false, abstract: false, final false
  inline void DoRebuilds();

  /// @brief Method UnRegisterTextObjectForUpdate, addr 0x2c4d8bc, size 0x60, virtual false, abstract: false, final false
  static inline void UnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  /// @brief Method UnRegisterTextElementForRebuild, addr 0x2c4d9b4, size 0x80, virtual false, abstract: false, final false
  static inline void UnRegisterTextElementForRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalUnRegisterTextElementForGraphicRebuild, addr 0x2c4da34, size 0x98, virtual false, abstract: false, final false
  inline void InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalUnRegisterTextElementForLayoutRebuild, addr 0x2c4dacc, size 0x98, virtual false, abstract: false, final false
  inline void InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element);

  /// @brief Method InternalUnRegisterTextObjectForUpdate, addr 0x2c4d91c, size 0x98, virtual false, abstract: false, final false
  inline void InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_UpdateManager(TMP_UpdateManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_UpdateManager(TMP_UpdateManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_UpdateManager();

public:
  /// @brief Field m_LayoutQueueLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_LayoutQueueLookup;

  /// @brief Field m_LayoutRebuildQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* ___m_LayoutRebuildQueue;

  /// @brief Field m_GraphicQueueLookup, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_GraphicQueueLookup;

  /// @brief Field m_GraphicRebuildQueue, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* ___m_GraphicRebuildQueue;

  /// @brief Field m_InternalUpdateLookup, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_InternalUpdateLookup;

  /// @brief Field m_InternalUpdateQueue, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* ___m_InternalUpdateQueue;

  /// @brief Field m_CullingUpdateLookup, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_CullingUpdateLookup;

  /// @brief Field m_CullingUpdateQueue, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Text*>* ___m_CullingUpdateQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_UpdateManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_LayoutQueueLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_LayoutRebuildQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_GraphicQueueLookup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_GraphicRebuildQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_InternalUpdateLookup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_InternalUpdateQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_CullingUpdateLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateManager, ___m_CullingUpdateQueue) == 0x48, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_UpdateManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_UpdateManager*, "TMPro", "TMP_UpdateManager");
