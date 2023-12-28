#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementFocusRing)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class __VisualElementFocusRing__FocusRingRecord;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
struct __VisualElementFocusRing__DefaultFocusOrder;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __VisualElementFocusRing__DefaultFocusOrder;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class __VisualElementFocusRing__FocusRingRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFocusRing);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord);
// Type: ::DefaultFocusOrder
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6795))
// CS Name: ::VisualElementFocusRing::DefaultFocusOrder
struct CORDL_TYPE __VisualElementFocusRing__DefaultFocusOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____VisualElementFocusRing__DefaultFocusOrder_Unwrapped
  enum struct ____VisualElementFocusRing__DefaultFocusOrder_Unwrapped : int32_t {
    __E_ChildOrder = static_cast<int32_t>(0x0),
    __E_PositionXY = static_cast<int32_t>(0x1),
    __E_PositionYX = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____VisualElementFocusRing__DefaultFocusOrder_Unwrapped() const noexcept {
    return static_cast<____VisualElementFocusRing__DefaultFocusOrder_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualElementFocusRing__DefaultFocusOrder(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElementFocusRing__DefaultFocusOrder();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ChildOrder value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder const ChildOrder;

  /// @brief Field PositionXY value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder const PositionXY;

  /// @brief Field PositionYX value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder const PositionYX;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::FocusRingRecord
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6796))
// CS Name: ::VisualElementFocusRing::FocusRingRecord*
class CORDL_TYPE __VisualElementFocusRing__FocusRingRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AutoIndex, offset 0x10, size 0x4
  __declspec(property(get = __get_m_AutoIndex, put = __set_m_AutoIndex)) int32_t m_AutoIndex;

  /// @brief Field m_Focusable, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Focusable, put = __set_m_Focusable))::UnityEngine::UIElements::Focusable* m_Focusable;

  /// @brief Field m_IsSlot, offset 0x20, size 0x1
  __declspec(property(get = __get_m_IsSlot, put = __set_m_IsSlot)) bool m_IsSlot;

  /// @brief Field m_ScopeNavigationOrder, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ScopeNavigationOrder,
                      put = __set_m_ScopeNavigationOrder))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* m_ScopeNavigationOrder;

  constexpr int32_t& __get_m_AutoIndex();

  constexpr int32_t const& __get_m_AutoIndex() const;

  constexpr void __set_m_AutoIndex(int32_t value);

  constexpr ::UnityEngine::UIElements::Focusable*& __get_m_Focusable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __get_m_Focusable() const;

  constexpr void __set_m_Focusable(::UnityEngine::UIElements::Focusable* value);

  constexpr bool& __get_m_IsSlot();

  constexpr bool const& __get_m_IsSlot() const;

  constexpr void __set_m_IsSlot(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*& __get_m_ScopeNavigationOrder();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*> const&
  __get_m_ScopeNavigationOrder() const;

  constexpr void __set_m_ScopeNavigationOrder(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* value);

  static inline ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* New_ctor();

  /// @brief Method .ctor addr 0x2dbc370 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElementFocusRing__FocusRingRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElementFocusRing__FocusRingRecord(__VisualElementFocusRing__FocusRingRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElementFocusRing__FocusRingRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElementFocusRing__FocusRingRecord(__VisualElementFocusRing__FocusRingRecord const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElementFocusRing__FocusRingRecord();

public:
  /// @brief Field m_AutoIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_AutoIndex;

  /// @brief Field m_Focusable, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_Focusable;

  /// @brief Field m_IsSlot, offset: 0x20, size: 0x1, def value: None
  bool ___m_IsSlot;

  /// @brief Field m_ScopeNavigationOrder, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* ___m_ScopeNavigationOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualElementFocusRing
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6795))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6797))
// CS Name: ::UnityEngine.UIElements::VisualElementFocusRing*
class CORDL_TYPE VisualElementFocusRing : public ::System::Object {
public:
  // Declarations
  using FocusRingRecord = ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord;

  using DefaultFocusOrder = ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder;

  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __get_root, put = __set_root))::UnityEngine::UIElements::VisualElement* root;

  /// @brief Field <defaultFocusOrder>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__defaultFocusOrder_k__BackingField,
                      put = __set__defaultFocusOrder_k__BackingField))::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder _defaultFocusOrder_k__BackingField;

  /// @brief Field m_FocusRing, offset 0x20, size 0x8
  __declspec(property(get = __get_m_FocusRing, put = __set_m_FocusRing))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* m_FocusRing;

  __declspec(property(get = get_focusController))::UnityEngine::UIElements::FocusController* focusController;

  __declspec(property(get = get_defaultFocusOrder, put = set_defaultFocusOrder))::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder defaultFocusOrder;

  /// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
  constexpr operator ::UnityEngine::UIElements::IFocusRing*() noexcept;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_root();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_root() const;

  constexpr void __set_root(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder& __get__defaultFocusOrder_k__BackingField();

  constexpr ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder const& __get__defaultFocusOrder_k__BackingField() const;

  constexpr void __set__defaultFocusOrder_k__BackingField(::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*& __get_m_FocusRing();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>*> const& __get_m_FocusRing() const;

  constexpr void __set_m_FocusRing(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* value);

  static inline ::UnityEngine::UIElements::VisualElementFocusRing* New_ctor(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder dfo);

  /// @brief Method .ctor addr 0x2dbb6cc size 0x98 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder dfo);

  /// @brief Method get_focusController addr 0x2dbb764 size 0x24 virtual false final false
  inline ::UnityEngine::UIElements::FocusController* get_focusController();

  /// @brief Method get_defaultFocusOrder addr 0x2dbb788 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder get_defaultFocusOrder();

  /// @brief Method set_defaultFocusOrder addr 0x2dbb790 size 0x8 virtual false final false
  inline void set_defaultFocusOrder(::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder value);

  /// @brief Method FocusRingAutoIndexSort addr 0x2dbb798 size 0x450 virtual false final false
  inline int32_t FocusRingAutoIndexSort(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* a, ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* b);

  /// @brief Method FocusRingSort addr 0x2dbbbe8 size 0xf0 virtual false final false
  inline int32_t FocusRingSort(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* a, ::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord* b);

  /// @brief Method DoUpdate addr 0x2dbbcd8 size 0xd8 virtual false final false
  inline void DoUpdate();

  /// @brief Method BuildRingForScopeRecursive addr 0x2dbbdb0 size 0x2f8 virtual false final false
  inline void BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement* ve, ByRef<int32_t> scopeIndex,
                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* scopeList);

  /// @brief Method SortAndFlattenScopeLists addr 0x2dbc0a8 size 0x2c8 virtual false final false
  inline void SortAndFlattenScopeLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* rootScopeList);

  /// @brief Method GetFocusableInternalIndex addr 0x2dbc378 size 0xa8 virtual false final false
  inline int32_t GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method GetFocusChangeDirection addr 0x2dbc420 size 0x27c virtual true final true
  inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e);

  /// @brief Method GetKeyDownFocusChangeDirection addr 0x2dbc69c size 0x204 virtual false final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* GetKeyDownFocusChangeDirection(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method GetNextFocusable addr 0x2dbc8a0 size 0x3f0 virtual true final true
  inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection* direction);

  /// @brief Method GetNextFocusableInTree addr 0x2dbcc90 size 0x9c virtual false final false
  static inline ::UnityEngine::UIElements::Focusable* GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable);

  /// @brief Method GetPreviousFocusableInTree addr 0x2dbcd2c size 0xe0 virtual false final false
  static inline ::UnityEngine::UIElements::Focusable* GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement* currentFocusable);

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementFocusRing(VisualElementFocusRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementFocusRing(VisualElementFocusRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFocusRing();

public:
  /// @brief Field root, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___root;

  /// @brief Field <defaultFocusOrder>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder ____defaultFocusOrder_k__BackingField;

  /// @brief Field m_FocusRing, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*>* ___m_FocusRing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFocusRing, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElementFocusRing__DefaultFocusOrder, "UnityEngine.UIElements", "VisualElementFocusRing/DefaultFocusOrder");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusRing*, "UnityEngine.UIElements", "VisualElementFocusRing");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElementFocusRing__FocusRingRecord*, "UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord");
