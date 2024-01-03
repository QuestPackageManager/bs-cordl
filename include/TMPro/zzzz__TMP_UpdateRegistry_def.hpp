#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_UpdateRegistry)
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace TMPro {
class TMP_UpdateRegistry;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_UpdateRegistry);
// Type: TMPro::TMP_UpdateRegistry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12459))
// CS Name: ::TMPro::TMP_UpdateRegistry*
class CORDL_TYPE TMP_UpdateRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_LayoutRebuildQueue, offset 0x10, size 0x8
  __declspec(property(get = __get_m_LayoutRebuildQueue, put = __set_m_LayoutRebuildQueue))::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;

  /// @brief Field m_LayoutQueueLookup, offset 0x18, size 0x8
  __declspec(property(get = __get_m_LayoutQueueLookup, put = __set_m_LayoutQueueLookup))::System::Collections::Generic::HashSet_1<int32_t>* m_LayoutQueueLookup;

  /// @brief Field m_GraphicRebuildQueue, offset 0x20, size 0x8
  __declspec(property(get = __get_m_GraphicRebuildQueue, put = __set_m_GraphicRebuildQueue))::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;

  /// @brief Field m_GraphicQueueLookup, offset 0x28, size 0x8
  __declspec(property(get = __get_m_GraphicQueueLookup, put = __set_m_GraphicQueueLookup))::System::Collections::Generic::HashSet_1<int32_t>* m_GraphicQueueLookup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::TMPro::TMP_UpdateRegistry* s_Instance;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*& __get_m_LayoutRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*> const& __get_m_LayoutRebuildQueue() const;

  constexpr void __set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_LayoutQueueLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_LayoutQueueLookup() const;

  constexpr void __set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*& __get_m_GraphicRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*> const& __get_m_GraphicRebuildQueue() const;

  constexpr void __set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_GraphicQueueLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_GraphicQueueLookup() const;

  constexpr void __set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_s_Instance(::TMPro::TMP_UpdateRegistry* value);

  static inline ::TMPro::TMP_UpdateRegistry* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x2c4dcc8, size 0x7c, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_UpdateRegistry* get_instance();

  static inline ::TMPro::TMP_UpdateRegistry* New_ctor();

  /// @brief Method .ctor, addr 0x2c4dd44, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method RegisterCanvasElementForLayoutRebuild, addr 0x2c4dea0, size 0x20, virtual false, abstract: false, final false
  static inline void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalRegisterCanvasElementForLayoutRebuild, addr 0x2c4dec0, size 0x15c, virtual false, abstract: false, final false
  inline bool InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method RegisterCanvasElementForGraphicRebuild, addr 0x2c4e01c, size 0x20, virtual false, abstract: false, final false
  static inline void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalRegisterCanvasElementForGraphicRebuild, addr 0x2c4e03c, size 0x15c, virtual false, abstract: false, final false
  inline bool InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method PerformUpdateForCanvasRendererObjects, addr 0x2c4e198, size 0x25c, virtual false, abstract: false, final false
  inline void PerformUpdateForCanvasRendererObjects();

  /// @brief Method PerformUpdateForMeshRendererObjects, addr 0x2c4e3f4, size 0x68, virtual false, abstract: false, final false
  inline void PerformUpdateForMeshRendererObjects();

  /// @brief Method UnRegisterCanvasElementForRebuild, addr 0x2c4e45c, size 0x30, virtual false, abstract: false, final false
  static inline void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalUnRegisterCanvasElementForLayoutRebuild, addr 0x2c4e48c, size 0xdc, virtual false, abstract: false, final false
  inline void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalUnRegisterCanvasElementForGraphicRebuild, addr 0x2c4e568, size 0xdc, virtual false, abstract: false, final false
  inline void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_UpdateRegistry(TMP_UpdateRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_UpdateRegistry(TMP_UpdateRegistry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_UpdateRegistry();

public:
  /// @brief Field m_LayoutRebuildQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* ___m_LayoutRebuildQueue;

  /// @brief Field m_LayoutQueueLookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_LayoutQueueLookup;

  /// @brief Field m_GraphicRebuildQueue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* ___m_GraphicRebuildQueue;

  /// @brief Field m_GraphicQueueLookup, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_GraphicQueueLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_UpdateRegistry, 0x30>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateRegistry, ___m_LayoutRebuildQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateRegistry, ___m_LayoutQueueLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateRegistry, ___m_GraphicRebuildQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_UpdateRegistry, ___m_GraphicQueueLookup) == 0x28, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_UpdateRegistry);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_UpdateRegistry*, "TMPro", "TMP_UpdateRegistry");
