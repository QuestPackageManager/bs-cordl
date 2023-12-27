#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasUpdateRegistry)
namespace UnityEngine {
class Transform;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI::Collections {
template <typename T> class IndexedSet_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class CanvasUpdateRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::CanvasUpdateRegistry);
// Type: UnityEngine.UI::CanvasUpdateRegistry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13022))
// CS Name: ::UnityEngine.UI::CanvasUpdateRegistry*
class CORDL_TYPE CanvasUpdateRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_PerformingLayoutUpdate, offset 0x10, size 0x1
  __declspec(property(get = __get_m_PerformingLayoutUpdate, put = __set_m_PerformingLayoutUpdate)) bool m_PerformingLayoutUpdate;

  /// @brief Field m_PerformingGraphicUpdate, offset 0x11, size 0x1
  __declspec(property(get = __get_m_PerformingGraphicUpdate, put = __set_m_PerformingGraphicUpdate)) bool m_PerformingGraphicUpdate;

  /// @brief Field m_CanvasUpdateProfilerStrings, offset 0x18, size 0x8
  __declspec(property(get = __get_m_CanvasUpdateProfilerStrings, put = __set_m_CanvasUpdateProfilerStrings))::ArrayW<::StringW, ::Array<::StringW>*> m_CanvasUpdateProfilerStrings;

  /// @brief Field m_LayoutRebuildQueue, offset 0x20, size 0x8
  __declspec(property(get = __get_m_LayoutRebuildQueue, put = __set_m_LayoutRebuildQueue))::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;

  /// @brief Field m_GraphicRebuildQueue, offset 0x28, size 0x8
  __declspec(property(get = __get_m_GraphicRebuildQueue, put = __set_m_GraphicRebuildQueue))::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UI::CanvasUpdateRegistry* s_Instance;

  /// @brief Field s_SortLayoutFunction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortLayoutFunction, put = setStaticF_s_SortLayoutFunction))::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* s_SortLayoutFunction;

  constexpr bool& __get_m_PerformingLayoutUpdate();

  constexpr bool const& __get_m_PerformingLayoutUpdate() const;

  constexpr void __set_m_PerformingLayoutUpdate(bool value);

  constexpr bool& __get_m_PerformingGraphicUpdate();

  constexpr bool const& __get_m_PerformingGraphicUpdate() const;

  constexpr void __set_m_PerformingGraphicUpdate(bool value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_CanvasUpdateProfilerStrings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_CanvasUpdateProfilerStrings() const;

  constexpr void __set_m_CanvasUpdateProfilerStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& __get_m_LayoutRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*> const& __get_m_LayoutRebuildQueue() const;

  constexpr void __set_m_LayoutRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* value);

  constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& __get_m_GraphicRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*> const& __get_m_GraphicRebuildQueue() const;

  constexpr void __set_m_GraphicRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* value);

  static inline void setStaticF_s_Instance(::UnityEngine::UI::CanvasUpdateRegistry* value);

  static inline ::UnityEngine::UI::CanvasUpdateRegistry* getStaticF_s_Instance();

  static inline void setStaticF_s_SortLayoutFunction(::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* value);

  static inline ::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* getStaticF_s_SortLayoutFunction();

  static inline ::UnityEngine::UI::CanvasUpdateRegistry* New_ctor();

  /// @brief Method .ctor addr 0x2d512d0 size 0x26c virtual false final false
  inline void _ctor();

  /// @brief Method get_instance addr 0x2d5153c size 0xa8 virtual false final false
  static inline ::UnityEngine::UI::CanvasUpdateRegistry* get_instance();

  /// @brief Method ObjectValidForUpdate addr 0x2d515e4 size 0xd0 virtual false final false
  inline bool ObjectValidForUpdate(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method CleanInvalidItems addr 0x2d516b4 size 0x2e4 virtual false final false
  inline void CleanInvalidItems();

  /// @brief Method PerformUpdate addr 0x2d51998 size 0x640 virtual false final false
  inline void PerformUpdate();

  /// @brief Method ParentCount addr 0x2d52160 size 0xc0 virtual false final false
  static inline int32_t ParentCount(::UnityEngine::Transform* child);

  /// @brief Method SortLayoutList addr 0x2d52220 size 0x150 virtual false final false
  static inline int32_t SortLayoutList(::UnityEngine::UI::ICanvasElement* x, ::UnityEngine::UI::ICanvasElement* y);

  /// @brief Method RegisterCanvasElementForLayoutRebuild addr 0x2d52370 size 0x60 virtual false final false
  static inline void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method TryRegisterCanvasElementForLayoutRebuild addr 0x2d52468 size 0x60 virtual false final false
  static inline bool TryRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalRegisterCanvasElementForLayoutRebuild addr 0x2d523d0 size 0x98 virtual false final false
  inline bool InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method RegisterCanvasElementForGraphicRebuild addr 0x2d524c8 size 0x60 virtual false final false
  static inline void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method TryRegisterCanvasElementForGraphicRebuild addr 0x2d525f8 size 0x60 virtual false final false
  static inline bool TryRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalRegisterCanvasElementForGraphicRebuild addr 0x2d52528 size 0xd0 virtual false final false
  inline bool InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method UnRegisterCanvasElementForRebuild addr 0x2d52658 size 0x70 virtual false final false
  static inline void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method DisableCanvasElementForRebuild addr 0x2d52990 size 0x70 virtual false final false
  static inline void DisableCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalUnRegisterCanvasElementForLayoutRebuild addr 0x2d526c8 size 0x164 virtual false final false
  inline void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalUnRegisterCanvasElementForGraphicRebuild addr 0x2d5282c size 0x164 virtual false final false
  inline void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalDisableCanvasElementForLayoutRebuild addr 0x2d52a00 size 0x164 virtual false final false
  inline void InternalDisableCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalDisableCanvasElementForGraphicRebuild addr 0x2d52b64 size 0x164 virtual false final false
  inline void InternalDisableCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method IsRebuildingLayout addr 0x2d52cc8 size 0x5c virtual false final false
  static inline bool IsRebuildingLayout();

  /// @brief Method IsRebuildingGraphics addr 0x2d52d24 size 0x5c virtual false final false
  static inline bool IsRebuildingGraphics();

  // Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasUpdateRegistry(CanvasUpdateRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasUpdateRegistry(CanvasUpdateRegistry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasUpdateRegistry();

public:
  /// @brief Field m_PerformingLayoutUpdate, offset: 0x10, size: 0x1, def value: None
  bool ___m_PerformingLayoutUpdate;

  /// @brief Field m_PerformingGraphicUpdate, offset: 0x11, size: 0x1, def value: None
  bool ___m_PerformingGraphicUpdate;

  /// @brief Field m_CanvasUpdateProfilerStrings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_CanvasUpdateProfilerStrings;

  /// @brief Field m_LayoutRebuildQueue, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* ___m_LayoutRebuildQueue;

  /// @brief Field m_GraphicRebuildQueue, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* ___m_GraphicRebuildQueue;

  /// @brief Field m_CullingUpdateProfilerString offset 0xffffffff size 0x8
  static constexpr ::ConstString m_CullingUpdateProfilerString{ u"ClipperRegistry.Cull" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasUpdateRegistry, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::CanvasUpdateRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasUpdateRegistry*, "UnityEngine.UI", "CanvasUpdateRegistry");
