#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollViewItemsVisibilityController)
namespace HMUI {
class ScrollViewItemForVisibilityController;
}
namespace HMUI {
class __ScrollViewItemsVisibilityController____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class ScrollViewItemsVisibilityController;
}
namespace HMUI {
class __ScrollViewItemsVisibilityController____c;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScrollViewItemsVisibilityController);
MARK_REF_PTR_T(::HMUI::__ScrollViewItemsVisibilityController____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::ScrollViewItemsVisibilityController::<>c*
class CORDL_TYPE __ScrollViewItemsVisibilityController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HMUI::__ScrollViewItemsVisibilityController____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0,
                             put = setStaticF___9__11_0))::System::Func_2<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, float_t>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_1,
                             put = setStaticF___9__11_1))::System::Func_2<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, float_t>* __9__11_1;

  static inline ::HMUI::__ScrollViewItemsVisibilityController____c* New_ctor();

  /// @brief Method <Start>b__11_0, addr 0x22a6744, size 0x44, virtual false, abstract: false, final false
  inline float_t _Start_b__11_0(::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>* item);

  /// @brief Method <Start>b__11_1, addr 0x22a6788, size 0x44, virtual false, abstract: false, final false
  inline float_t _Start_b__11_1(::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>* item);

  /// @brief Method .ctor, addr 0x22a673c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HMUI::__ScrollViewItemsVisibilityController____c* getStaticF___9();

  static inline ::System::Func_2<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, float_t>* getStaticF___9__11_0();

  static inline ::System::Func_2<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, float_t>* getStaticF___9__11_1();

  static inline void setStaticF___9(::HMUI::__ScrollViewItemsVisibilityController____c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, float_t>* value);

  static inline void setStaticF___9__11_1(::System::Func_2<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollViewItemsVisibilityController____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollViewItemsVisibilityController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollViewItemsVisibilityController____c(__ScrollViewItemsVisibilityController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollViewItemsVisibilityController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollViewItemsVisibilityController____c(__ScrollViewItemsVisibilityController____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ScrollViewItemsVisibilityController____c, 0x10>, "Size mismatch!");

} // namespace HMUI
// Type: HMUI::ScrollViewItemsVisibilityController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScrollViewItemsVisibilityController*
class CORDL_TYPE ScrollViewItemsVisibilityController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::HMUI::__ScrollViewItemsVisibilityController____c;

  /// @brief Field _contentMaxY, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__contentMaxY, put = __cordl_internal_set__contentMaxY)) float_t _contentMaxY;

  /// @brief Field _contentMinY, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__contentMinY, put = __cordl_internal_set__contentMinY)) float_t _contentMinY;

  /// @brief Field _contentRectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__contentRectTransform, put = __cordl_internal_set__contentRectTransform))::UnityW<::UnityEngine::RectTransform> _contentRectTransform;

  /// @brief Field _items, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__items,
                      put = __cordl_internal_set__items))::ArrayW<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, ::Array<::UnityW<::HMUI::ScrollViewItemForVisibilityController>>*> _items;

  /// @brief Field _lastContentAnchoredPositionY, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastContentAnchoredPositionY, put = __cordl_internal_set__lastContentAnchoredPositionY)) float_t _lastContentAnchoredPositionY;

  /// @brief Field _lowerItemsCornes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lowerItemsCornes,
                      put = __cordl_internal_set__lowerItemsCornes))::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*,
                                                                             ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*> _lowerItemsCornes;

  /// @brief Field _lowerLastVisibleIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__lowerLastVisibleIndex, put = __cordl_internal_set__lowerLastVisibleIndex)) int32_t _lowerLastVisibleIndex;

  /// @brief Field _upperItemsCornes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__upperItemsCornes,
                      put = __cordl_internal_set__upperItemsCornes))::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*,
                                                                             ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*> _upperItemsCornes;

  /// @brief Field _upperLastVisibleIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__upperLastVisibleIndex, put = __cordl_internal_set__upperLastVisibleIndex)) int32_t _upperLastVisibleIndex;

  /// @brief Field _viewport, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__viewport, put = __cordl_internal_set__viewport))::UnityW<::UnityEngine::RectTransform> _viewport;

  /// @brief Field _viewportWorldCorners, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportWorldCorners,
                      put = __cordl_internal_set__viewportWorldCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _viewportWorldCorners;

  static inline ::HMUI::ScrollViewItemsVisibilityController* New_ctor();

  /// @brief Method Start, addr 0x22a5e00, size 0x4a0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x22a6448, size 0x9c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateVisibilityDownDirection, addr 0x22a64e4, size 0x19c, virtual false, abstract: false, final false
  inline void UpdateVisibilityDownDirection(float_t newContentAnchoredPositionY);

  /// @brief Method UpdateVisibilityUpDirection, addr 0x22a62a0, size 0x1a8, virtual false, abstract: false, final false
  inline void UpdateVisibilityUpDirection(float_t newContentAnchoredPositionY);

  constexpr float_t const& __cordl_internal_get__contentMaxY() const;

  constexpr float_t& __cordl_internal_get__contentMaxY();

  constexpr float_t const& __cordl_internal_get__contentMinY() const;

  constexpr float_t& __cordl_internal_get__contentMinY();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentRectTransform();

  constexpr ::ArrayW<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, ::Array<::UnityW<::HMUI::ScrollViewItemForVisibilityController>>*> const& __cordl_internal_get__items() const;

  constexpr ::ArrayW<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, ::Array<::UnityW<::HMUI::ScrollViewItemForVisibilityController>>*>& __cordl_internal_get__items();

  constexpr float_t const& __cordl_internal_get__lastContentAnchoredPositionY() const;

  constexpr float_t& __cordl_internal_get__lastContentAnchoredPositionY();

  constexpr ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*,
                     ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*> const&
  __cordl_internal_get__lowerItemsCornes() const;

  constexpr ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*,
                     ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*>&
  __cordl_internal_get__lowerItemsCornes();

  constexpr int32_t const& __cordl_internal_get__lowerLastVisibleIndex() const;

  constexpr int32_t& __cordl_internal_get__lowerLastVisibleIndex();

  constexpr ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*,
                     ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*> const&
  __cordl_internal_get__upperItemsCornes() const;

  constexpr ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*,
                     ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*>&
  __cordl_internal_get__upperItemsCornes();

  constexpr int32_t const& __cordl_internal_get__upperLastVisibleIndex() const;

  constexpr int32_t& __cordl_internal_get__upperLastVisibleIndex();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewport() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewport();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__viewportWorldCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__viewportWorldCorners();

  constexpr void __cordl_internal_set__contentMaxY(float_t value);

  constexpr void __cordl_internal_set__contentMinY(float_t value);

  constexpr void __cordl_internal_set__contentRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__items(::ArrayW<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, ::Array<::UnityW<::HMUI::ScrollViewItemForVisibilityController>>*> value);

  constexpr void __cordl_internal_set__lastContentAnchoredPositionY(float_t value);

  constexpr void __cordl_internal_set__lowerItemsCornes(
      ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*>
          value);

  constexpr void __cordl_internal_set__lowerLastVisibleIndex(int32_t value);

  constexpr void __cordl_internal_set__upperItemsCornes(
      ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*>
          value);

  constexpr void __cordl_internal_set__upperLastVisibleIndex(int32_t value);

  constexpr void __cordl_internal_set__viewport(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__viewportWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x22a6680, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewItemsVisibilityController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemsVisibilityController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollViewItemsVisibilityController(ScrollViewItemsVisibilityController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemsVisibilityController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollViewItemsVisibilityController(ScrollViewItemsVisibilityController const&) = delete;

  /// @brief Field _viewport, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____viewport;

  /// @brief Field _contentRectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentRectTransform;

  /// @brief Field _items, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, ::Array<::UnityW<::HMUI::ScrollViewItemForVisibilityController>>*> ____items;

  /// @brief Field _lastContentAnchoredPositionY, offset: 0x30, size: 0x4, def value: None
  float_t ____lastContentAnchoredPositionY;

  /// @brief Field _viewportWorldCorners, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____viewportWorldCorners;

  /// @brief Field _upperItemsCornes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*>
      ____upperItemsCornes;

  /// @brief Field _lowerItemsCornes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*, ::Array<::System::Tuple_2<::UnityW<::HMUI::ScrollViewItemForVisibilityController>, float_t>*>*>
      ____lowerItemsCornes;

  /// @brief Field _lowerLastVisibleIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ____lowerLastVisibleIndex;

  /// @brief Field _upperLastVisibleIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ____upperLastVisibleIndex;

  /// @brief Field _contentMaxY, offset: 0x58, size: 0x4, def value: None
  float_t ____contentMaxY;

  /// @brief Field _contentMinY, offset: 0x5c, size: 0x4, def value: None
  float_t ____contentMinY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScrollViewItemsVisibilityController, 0x60>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____viewport) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____contentRectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____items) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____lastContentAnchoredPositionY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____viewportWorldCorners) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____upperItemsCornes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____lowerItemsCornes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____lowerLastVisibleIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____upperLastVisibleIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____contentMaxY) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ScrollViewItemsVisibilityController, ____contentMinY) == 0x5c, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScrollViewItemsVisibilityController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollViewItemsVisibilityController*, "HMUI", "ScrollViewItemsVisibilityController");
NEED_NO_BOX(::HMUI::__ScrollViewItemsVisibilityController____c);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ScrollViewItemsVisibilityController____c*, "HMUI", "ScrollViewItemsVisibilityController/<>c");
