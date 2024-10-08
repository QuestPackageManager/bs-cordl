#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListView)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ListView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ListView__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ListView::UxmlFactory*
class CORDL_TYPE __ListView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ListView*, ::UnityEngine::UIElements::__ListView__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ListView__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x497746c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListView__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListView__UxmlFactory(__ListView__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListView__UxmlFactory(__ListView__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ListView::UxmlTraits*
class CORDL_TYPE __ListView__UxmlTraits : public ::UnityEngine::UIElements::__BaseListView__UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ListView__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49774b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListView__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListView__UxmlTraits(__ListView__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListView__UxmlTraits(__ListView__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListView__UxmlTraits, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListView
// SizeInfo { instance_size: 1368, native_size: -1, calculated_instance_size: 1368, calculated_native_size: 1368, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListView*
class CORDL_TYPE ListView : public ::UnityEngine::UIElements::BaseListView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__ListView__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__ListView__UxmlTraits;

  /// @brief Field <destroyItem>k__BackingField, offset 0x550, size 0x8
  __declspec(property(get = __cordl_internal_get__destroyItem_k__BackingField,
                      put = __cordl_internal_set__destroyItem_k__BackingField)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* _destroyItem_k__BackingField;

  /// @brief Field <unbindItem>k__BackingField, offset 0x548, size 0x8
  __declspec(property(get = __cordl_internal_get__unbindItem_k__BackingField,
                      put = __cordl_internal_set__unbindItem_k__BackingField)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* _unbindItem_k__BackingField;

  __declspec(property(get = get_bindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem;

  __declspec(property(get = get_destroyItem)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyItem;

  /// @brief Field m_BindItem, offset 0x540, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindItem, put = __cordl_internal_set_m_BindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_BindItem;

  /// @brief Field m_MakeItem, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeItem, put = __cordl_internal_set_m_MakeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeItem;

  __declspec(property(get = get_makeItem)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem;

  __declspec(property(get = get_unbindItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* unbindItem;

  /// @brief Method CreateViewController, addr 0x49773a8, size 0x54, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController();

  /// @brief Method HasValidDataAndBindings, addr 0x4977368, size 0x40, virtual true, abstract: false, final false
  inline bool HasValidDataAndBindings();

  static inline ::UnityEngine::UIElements::ListView* New_ctor();

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__destroyItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get__destroyItem_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get__unbindItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const& __cordl_internal_get__unbindItem_k__BackingField() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_BindItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const& __cordl_internal_get_m_BindItem() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_MakeItem() const;

  constexpr void __cordl_internal_set__destroyItem_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x49773fc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bindItem, addr 0x4977350, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindItem();

  /// @brief Method get_destroyItem, addr 0x4977360, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyItem();

  /// @brief Method get_makeItem, addr 0x4977348, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeItem();

  /// @brief Method get_unbindItem, addr 0x4977358, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindItem();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListView(ListView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListView(ListView const&) = delete;

  /// @brief Field m_MakeItem, offset: 0x538, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field m_BindItem, offset: 0x540, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindItem;

  /// @brief Field <unbindItem>k__BackingField, offset: 0x548, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ____unbindItem_k__BackingField;

  /// @brief Field <destroyItem>k__BackingField, offset: 0x550, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ____destroyItem_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5593 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListView, 0x558>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_MakeItem) == 0x538, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_BindItem) == 0x540, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ____unbindItem_k__BackingField) == 0x548, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ____destroyItem_k__BackingField) == 0x550, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListView*, "UnityEngine.UIElements", "ListView");
NEED_NO_BOX(::UnityEngine::UIElements::__ListView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListView__UxmlFactory*, "UnityEngine.UIElements", "ListView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__ListView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListView__UxmlTraits*, "UnityEngine.UIElements", "ListView/UxmlTraits");
