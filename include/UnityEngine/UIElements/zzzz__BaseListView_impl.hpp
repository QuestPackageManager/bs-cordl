#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseListView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingSourceSelectionMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingSourceSelectionMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::BaseListView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6d286cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView_UxmlTraits::*)()>(&::UnityEngine::UIElements::BaseListView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6d28c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowFoldoutHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowFoldoutHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowFoldoutHeader = value;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_HeaderTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_HeaderTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HeaderTitle = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowAddRemoveFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowAddRemoveFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowAddRemoveFooter = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_AllowAdd(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowAdd = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_AllowRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_AllowRemove(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowRemove = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ReorderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* const&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ReorderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr void
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReorderMode = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowBoundCollectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_ShowBoundCollectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowBoundCollectionSize = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>*&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_BindingSourceSelectionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* const&
UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_get_m_BindingSourceSelectionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr void UnityEngine::UIElements::BaseListView_UxmlTraits::__cordl_internal_set_m_BindingSourceSelectionMode(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingSourceSelectionMode = value;
}
inline void UnityEngine::UIElements::BaseListView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::BaseListView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListView_UxmlTraits* UnityEngine::UIElements::BaseListView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseListView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseListView_UxmlTraits::BaseListView_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showBoundCollectionSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c55620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_showBoundCollectionSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_showBoundCollectionSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c55628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_showBoundCollectionSize", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showFoldoutHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c559f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_showFoldoutHeader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_showFoldoutHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6c559f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_showFoldoutHeader", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.AddFoldout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::AddFoldout)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6c55c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "AddFoldout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.RemoveFoldout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::RemoveFoldout)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c55dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "RemoveFoldout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.SetupArraySizeField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::SetupArraySizeField)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6c556c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "SetupArraySizeField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_headerTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_headerTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c565f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_headerTitle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_headerTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::StringW)>(&::UnityEngine::UIElements::BaseListView::set_headerTitle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c565f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_headerTitle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_makeHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_makeHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c566b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_makeHeader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_makeHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_makeHeader)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6c566b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                             { "set_makeHeader", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_makeFooter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_makeFooter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c568b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_makeFooter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_makeFooter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_makeFooter)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6c568c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                             { "set_makeFooter", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c56128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_showAddRemoveFooter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_showAddRemoveFooter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c56a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_showAddRemoveFooter", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.EnableFooter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::EnableFooter)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6c56138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "EnableFooter", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_trackItemCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IVisualElementScheduledItem* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_trackItemCount)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6c56b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_trackItemCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_trackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_trackCount)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c56cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_trackCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_untilManualBindingSourceSelectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<bool>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_untilManualBindingSourceSelectionMode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c56d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_untilManualBindingSourceSelectionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_bindingSourceSelectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingSourceSelectionMode (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_bindingSourceSelectionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c56e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_bindingSourceSelectionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_bindingSourceSelectionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::BindingSourceSelectionMode)>(
    &::UnityEngine::UIElements::BaseListView::set_bindingSourceSelectionMode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c56e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                             { "set_bindingSourceSelectionMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingSourceSelectionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_autoAssignSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_autoAssignSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c48c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_autoAssignSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.AddItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(int32_t)>(&::UnityEngine::UIElements::BaseListView::AddItems)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c56f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "AddItems", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnArraySizeFieldChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*)>(
    &::UnityEngine::UIElements::BaseListView::OnArraySizeFieldChanged)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6c57048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                             { "OnArraySizeFieldChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.UpdateArraySizeField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::UpdateArraySizeField)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c56518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "UpdateArraySizeField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.UpdateListViewLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::UpdateListViewLabel)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6c55e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "UpdateListViewLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnAddClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnAddClicked)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6c572a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnAddClicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnRemoveClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnRemoveClicked)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6c576d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnRemoveClicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_footer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_footer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_footer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_viewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseListViewController* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_viewController)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c57228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_viewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateVirtualizationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c57940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 140 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.SetViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::CollectionViewController*)>(
    &::UnityEngine::UIElements::BaseListView::SetViewController)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6c5798c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 142 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListView::OnItemAdded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c57b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                           { "OnItemAdded", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemsRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseListView::OnItemsRemoved)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c57bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                           { "OnItemsRemoved", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.OnItemsSourceSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::OnItemsSourceSizeChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c57648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnItemsSourceSizeChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.add_reorderModeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action*)>(&::UnityEngine::UIElements::BaseListView::add_reorderModeChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c50ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "add_reorderModeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.remove_reorderModeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action*)>(&::UnityEngine::UIElements::BaseListView::remove_reorderModeChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c51044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "remove_reorderModeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_reorderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ListViewReorderMode (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_reorderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_reorderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_reorderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::UnityEngine::UIElements::ListViewReorderMode)>(
    &::UnityEngine::UIElements::BaseListView::set_reorderMode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c57bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                           { "set_reorderMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewReorderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_makeNoneElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_makeNoneElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_makeNoneElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_makeNoneElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_makeNoneElement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6c57cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                             { "set_makeNoneElement", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_allowAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_allowAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_allowAdd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_allowAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_allowAdd)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c57d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_allowAdd", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_overridingAddButtonBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* (
    ::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_overridingAddButtonBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_overridingAddButtonBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_overridingAddButtonBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(
    ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*)>(&::UnityEngine::UIElements::BaseListView::set_overridingAddButtonBehavior)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c57e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                            { "set_overridingAddButtonBehavior", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_onAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::UIElements::BaseListView*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_onAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_onAdd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_onAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action_1<::UnityEngine::UIElements::BaseListView*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_onAdd)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c57f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                           { "set_onAdd", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_allowRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::get_allowRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c57fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_allowRemove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_allowRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(bool)>(&::UnityEngine::UIElements::BaseListView::set_allowRemove)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c57fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_allowRemove", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.get_onRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::UIElements::BaseListView*>* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::get_onRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c58070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_onRemove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.set_onRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Action_1<::UnityEngine::UIElements::BaseListView*>*)>(
    &::UnityEngine::UIElements::BaseListView::set_onRemove)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c58078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_onRemove", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateDragger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateDragger)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c58134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 143 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.CreateDragAndDropController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c581d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 144 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c58238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)(::System::Collections::IList*, float_t)>(&::UnityEngine::UIElements::BaseListView::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6c58244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.PostRefresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::PostRefresh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c5833c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 146 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView.HandleItemNavigation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)(bool, bool)>(&::UnityEngine::UIElements::BaseListView::HandleItemNavigation)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x6c58360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 147 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._get_trackCount_b__65_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::_get_trackCount_b__65_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6c596ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "<get_trackCount>b__65_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._get_untilManualBindingSourceSelectionMode_b__68_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseListView::*)()>(
    &::UnityEngine::UIElements::BaseListView::_get_untilManualBindingSourceSelectionMode_b__68_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c597c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "<get_untilManualBindingSourceSelectionMode>b__68_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseListView._OnAddClicked_b__81_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseListView::*)()>(&::UnityEngine::UIElements::BaseListView::_OnAddClicked_b__81_0)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6c597d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "<OnAddClicked>b__81_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowBoundCollectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowBoundCollectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowBoundCollectionSize;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ShowBoundCollectionSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowBoundCollectionSize = value;
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowFoldoutHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowFoldoutHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowFoldoutHeader;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ShowFoldoutHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowFoldoutHeader = value;
}
constexpr ::StringW& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_HeaderTitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr ::StringW const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_HeaderTitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderTitle;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_HeaderTitle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HeaderTitle = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnHeader;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnHeader;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_drawnHeader(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawnHeader = value;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeHeader;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeHeader;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MakeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MakeHeader = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnFooter;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_drawnFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawnFooter;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_drawnFooter(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawnFooter = value;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeFooter;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeFooter;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MakeFooter(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MakeFooter = value;
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowAddRemoveFooter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ShowAddRemoveFooter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowAddRemoveFooter;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ShowAddRemoveFooter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowAddRemoveFooter = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsAdded;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsAdded = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsRemoved;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsRemoved = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsSourceSizeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceSizeChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_itemsSourceSizeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsSourceSizeChanged;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_itemsSourceSizeChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemsSourceSizeChanged = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackedItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedItem;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackedItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedItem;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_TrackedItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackedItem = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackCount;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_TrackCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackCount;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_TrackCount(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackCount = value;
}
constexpr ::System::Func_1<bool>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_WhileAutoAssign() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WhileAutoAssign;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_WhileAutoAssign() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WhileAutoAssign;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_WhileAutoAssign(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WhileAutoAssign = value;
}
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_BindingSourceSelectionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_BindingSourceSelectionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSourceSelectionMode;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_BindingSourceSelectionMode(::UnityEngine::UIElements::BindingSourceSelectionMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingSourceSelectionMode = value;
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ListViewLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListViewLabel;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ListViewLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListViewLabel;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ListViewLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ListViewLabel = value;
}
constexpr ::UnityEngine::UIElements::Foldout*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Foldout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Foldout;
}
constexpr ::UnityEngine::UIElements::Foldout* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Foldout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Foldout;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_Foldout(::UnityEngine::UIElements::Foldout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Foldout = value;
}
constexpr ::UnityEngine::UIElements::TextField*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ArraySizeField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArraySizeField;
}
constexpr ::UnityEngine::UIElements::TextField* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ArraySizeField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArraySizeField;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ArraySizeField(::UnityEngine::UIElements::TextField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ArraySizeField = value;
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_IsOverMultiEditLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOverMultiEditLimit;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_IsOverMultiEditLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOverMultiEditLimit;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_IsOverMultiEditLimit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOverMultiEditLimit = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Footer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Footer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_Footer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Footer;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_Footer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Footer = value;
}
constexpr ::UnityEngine::UIElements::Button*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AddButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddButton;
}
constexpr ::UnityEngine::UIElements::Button* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AddButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddButton;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_AddButton(::UnityEngine::UIElements::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AddButton = value;
}
constexpr ::UnityEngine::UIElements::Button*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_RemoveButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveButton;
}
constexpr ::UnityEngine::UIElements::Button* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_RemoveButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveButton;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_RemoveButton(::UnityEngine::UIElements::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RemoveButton = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemAddedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemAddedCallback;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemAddedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemAddedCallback;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemAddedCallback = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemRemovedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemRemovedCallback;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemRemovedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemRemovedCallback;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemRemovedCallback = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemsSourceSizeChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceSizeChangedCallback;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ItemsSourceSizeChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsSourceSizeChangedCallback;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ItemsSourceSizeChangedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemsSourceSizeChangedCallback = value;
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ReorderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_ReorderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReorderMode;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReorderMode = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_reorderModeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reorderModeChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_reorderModeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reorderModeChanged;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_reorderModeChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reorderModeChanged = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_NoneElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NoneElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_NoneElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NoneElement;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_NoneElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NoneElement = value;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeNoneElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeNoneElement;
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MakeNoneElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MakeNoneElement;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MakeNoneElement(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MakeNoneElement = value;
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowAdd;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_AllowAdd(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowAdd = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*&
UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OverridingAddButtonBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverridingAddButtonBehavior;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* const&
UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OverridingAddButtonBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverridingAddButtonBehavior;
}
constexpr void
UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_OverridingAddButtonBehavior(::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverridingAddButtonBehavior = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAdd;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnAdd;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_OnAdd(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnAdd = value;
}
constexpr bool& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr bool const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_AllowRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowRemove;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_AllowRemove(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowRemove = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>*& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRemove;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_OnRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRemove;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_OnRemove(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnRemove = value;
}
constexpr ::StringW& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MaxMultiEditStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxMultiEditStr;
}
constexpr ::StringW const& UnityEngine::UIElements::BaseListView::__cordl_internal_get_m_MaxMultiEditStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxMultiEditStr;
}
constexpr void UnityEngine::UIElements::BaseListView::__cordl_internal_set_m_MaxMultiEditStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxMultiEditStr = value;
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_k_SizeFieldLabel(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SizeFieldLabel", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_k_SizeFieldLabel() {
  return ::cordl_internals::getStaticField<::StringW, "k_SizeFieldLabel", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_showBoundCollectionSizeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showBoundCollectionSizeProperty", ::UnityEngine::UIElements::BaseListView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_showBoundCollectionSizeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showBoundCollectionSizeProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_showFoldoutHeaderProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showFoldoutHeaderProperty", ::UnityEngine::UIElements::BaseListView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_showFoldoutHeaderProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showFoldoutHeaderProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_headerTitleProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "headerTitleProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_headerTitleProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "headerTitleProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_makeHeaderProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeHeaderProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_makeHeaderProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeHeaderProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_makeFooterProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeFooterProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_makeFooterProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeFooterProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_showAddRemoveFooterProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showAddRemoveFooterProperty", ::UnityEngine::UIElements::BaseListView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_showAddRemoveFooterProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showAddRemoveFooterProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_bindingSourceSelectionModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "bindingSourceSelectionModeProperty", ::UnityEngine::UIElements::BaseListView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_bindingSourceSelectionModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "bindingSourceSelectionModeProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "reorderModeProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_reorderModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "reorderModeProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_makeNoneElementProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "makeNoneElementProperty", ::UnityEngine::UIElements::BaseListView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_makeNoneElementProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "makeNoneElementProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_allowAddProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "allowAddProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_allowAddProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "allowAddProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_overridingAddButtonBehaviorProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "overridingAddButtonBehaviorProperty", ::UnityEngine::UIElements::BaseListView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_overridingAddButtonBehaviorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "overridingAddButtonBehaviorProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_onAddProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "onAddProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_onAddProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "onAddProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_allowRemoveProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "allowRemoveProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_allowRemoveProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "allowRemoveProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_onRemoveProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "onRemoveProperty", ::UnityEngine::UIElements::BaseListView*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseListView::getStaticF_onRemoveProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "onRemoveProperty", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_emptyLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "emptyLabelUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_emptyLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "emptyLabelUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_overMaxMultiEditLimitClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "overMaxMultiEditLimitClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_overMaxMultiEditLimitClassName() {
  return ::cordl_internals::getStaticField<::StringW, "overMaxMultiEditLimitClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemContainerUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemContainerUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemHandleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemHandleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_reorderableItemHandleBarUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_reorderableItemHandleBarUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_footerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_footerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "footerUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_foldoutHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "foldoutHeaderUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_foldoutHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "foldoutHeaderUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_arraySizeFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_arraySizeFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_arraySizeFieldWithHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldWithHeaderUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_arraySizeFieldWithHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldWithHeaderUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_arraySizeFieldWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arraySizeFieldWithFooterUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_arraySizeFieldWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldWithFooterUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_listViewWithHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listViewWithHeaderUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_listViewWithHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listViewWithHeaderUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_listViewWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "listViewWithFooterUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_listViewWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "listViewWithFooterUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_scrollViewWithFooterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "scrollViewWithFooterUssClassName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_scrollViewWithFooterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "scrollViewWithFooterUssClassName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_footerAddButtonName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerAddButtonName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_footerAddButtonName() {
  return ::cordl_internals::getStaticField<::StringW, "footerAddButtonName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_footerRemoveButtonName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerRemoveButtonName", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_footerRemoveButtonName() {
  return ::cordl_internals::getStaticField<::StringW, "footerRemoveButtonName", ::UnityEngine::UIElements::BaseListView*>();
}
inline void UnityEngine::UIElements::BaseListView::setStaticF_k_EmptyListStr(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_EmptyListStr", ::UnityEngine::UIElements::BaseListView*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseListView::getStaticF_k_EmptyListStr() {
  return ::cordl_internals::getStaticField<::StringW, "k_EmptyListStr", ::UnityEngine::UIElements::BaseListView*>();
}
inline bool UnityEngine::UIElements::BaseListView::get_showBoundCollectionSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_showBoundCollectionSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_showBoundCollectionSize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_showBoundCollectionSize", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_showFoldoutHeader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_showFoldoutHeader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_showFoldoutHeader(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_showFoldoutHeader", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListView::AddFoldout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "AddFoldout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::RemoveFoldout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "RemoveFoldout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::SetupArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "SetupArraySizeField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::BaseListView::get_headerTitle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_headerTitle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_headerTitle(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_headerTitle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseListView::get_makeHeader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_makeHeader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_makeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_makeHeader", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseListView::get_makeFooter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_makeFooter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_makeFooter(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_makeFooter", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_showAddRemoveFooter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_showAddRemoveFooter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_showAddRemoveFooter(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_showAddRemoveFooter", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListView::EnableFooter(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "EnableFooter", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::BaseListView::get_trackItemCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_trackItemCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualElementScheduledItem*>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::UIElements::BaseListView::get_trackCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_trackCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline ::System::Func_1<bool>* UnityEngine::UIElements::BaseListView::get_untilManualBindingSourceSelectionMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_untilManualBindingSourceSelectionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindingSourceSelectionMode UnityEngine::UIElements::BaseListView::get_bindingSourceSelectionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_bindingSourceSelectionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingSourceSelectionMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_bindingSourceSelectionMode(::UnityEngine::UIElements::BindingSourceSelectionMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                           { "set_bindingSourceSelectionMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingSourceSelectionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_autoAssignSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_autoAssignSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::AddItems(int32_t itemCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "AddItems", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemCount);
}
inline void UnityEngine::UIElements::BaseListView::OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnArraySizeFieldChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseListView::UpdateArraySizeField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "UpdateArraySizeField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::UpdateListViewLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "UpdateListViewLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::OnAddClicked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnAddClicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::OnRemoveClicked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnRemoveClicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseListView::get_footer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_footer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListViewController* UnityEngine::UIElements::BaseListView::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_viewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseListViewController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::CreateVirtualizationController() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 140 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::SetViewController(::UnityEngine::UIElements::CollectionViewController* controller) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 142 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::BaseListView::OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                         { "OnItemAdded", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseListView::OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                         { "OnItemsRemoved", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseListView::OnItemsSourceSizeChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "OnItemsSourceSizeChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::add_reorderModeChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "add_reorderModeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseListView::remove_reorderModeChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "remove_reorderModeChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewReorderMode UnityEngine::UIElements::BaseListView::get_reorderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_reorderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewReorderMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_reorderMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewReorderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseListView::get_makeNoneElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_makeNoneElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_makeNoneElement(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                           { "set_makeNoneElement", {}, { ::i2c::type_of<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_allowAdd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_allowAdd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_allowAdd(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_allowAdd", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* UnityEngine::UIElements::BaseListView::get_overridingAddButtonBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_overridingAddButtonBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_overridingAddButtonBehavior(::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                          { "set_overridingAddButtonBehavior", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* UnityEngine::UIElements::BaseListView::get_onAdd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_onAdd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_onAdd(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                         { "set_onAdd", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseListView::get_allowRemove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_allowRemove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_allowRemove(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "set_allowRemove", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* UnityEngine::UIElements::BaseListView::get_onRemove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "get_onRemove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::set_onRemove(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(),
                                                                                         { "set_onRemove", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseListView*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseListView::CreateDragger() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 143 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseListView::CreateDragAndDropController() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 144 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_ctor(::System::Collections::IList* itemsSource, float_t itemHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemsSource, itemHeight);
}
inline void UnityEngine::UIElements::BaseListView::PostRefresh() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 146 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseListView::HandleItemNavigation(bool moveIn, bool altPressed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), 147 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, moveIn, altPressed);
}
inline void UnityEngine::UIElements::BaseListView::_get_trackCount_b__65_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "<get_trackCount>b__65_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseListView::_get_untilManualBindingSourceSelectionMode_b__68_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "<get_untilManualBindingSourceSelectionMode>b__68_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseListView::_OnAddClicked_b__81_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseListView*>(), { "<OnAddClicked>b__81_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseListView* UnityEngine::UIElements::BaseListView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseListView*>());
}
inline ::UnityEngine::UIElements::BaseListView* UnityEngine::UIElements::BaseListView::New_ctor(::System::Collections::IList* itemsSource, float_t itemHeight) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseListView*>(itemsSource, itemHeight));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseListView::BaseListView() {}
