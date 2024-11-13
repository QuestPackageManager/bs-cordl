#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRAtlasAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRAtlasAllocator)
namespace GlobalNamespace {
class __UIRAtlasAllocator__AreaNode____c;
}
namespace GlobalNamespace {
class __UIRAtlasAllocator__Row____c;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class __UIRAtlasAllocator__AreaNode;
}
namespace UnityEngine::UIElements {
class __UIRAtlasAllocator__Row;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace GlobalNamespace {
class __UIRAtlasAllocator__AreaNode____c;
}
namespace GlobalNamespace {
class __UIRAtlasAllocator__Row____c;
}
namespace UnityEngine::UIElements {
class UIRAtlasAllocator;
}
namespace UnityEngine::UIElements {
class __UIRAtlasAllocator__AreaNode;
}
namespace UnityEngine::UIElements {
class __UIRAtlasAllocator__Row;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c);
MARK_REF_PTR_T(::GlobalNamespace::__UIRAtlasAllocator__Row____c);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRAtlasAllocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIRAtlasAllocator__Row);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UIRAtlasAllocator::Row::<>c*
class CORDL_TYPE __UIRAtlasAllocator__Row____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__UIRAtlasAllocator__Row____c* __9;

  static inline ::GlobalNamespace::__UIRAtlasAllocator__Row____c* New_ctor();

  /// @brief Method <.cctor>b__21_0, addr 0x49e1a9c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__UIRAtlasAllocator__Row* __cctor_b__21_0();

  /// @brief Method .ctor, addr 0x49e1a94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__UIRAtlasAllocator__Row____c* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::__UIRAtlasAllocator__Row____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRAtlasAllocator__Row____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__Row____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRAtlasAllocator__Row____c(__UIRAtlasAllocator__Row____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__Row____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRAtlasAllocator__Row____c(__UIRAtlasAllocator__Row____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5995 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UIRAtlasAllocator__Row____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Row
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UIRAtlasAllocator::Row*
class CORDL_TYPE __UIRAtlasAllocator__Row : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__UIRAtlasAllocator__Row____c;

  /// @brief Field Cursor, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Cursor, put = __cordl_internal_set_Cursor)) int32_t Cursor;

  /// @brief Field <height>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__height_k__BackingField, put = __cordl_internal_set__height_k__BackingField)) int32_t _height_k__BackingField;

  /// @brief Field <offsetX>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetX_k__BackingField, put = __cordl_internal_set__offsetX_k__BackingField)) int32_t _offsetX_k__BackingField;

  /// @brief Field <offsetY>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetY_k__BackingField, put = __cordl_internal_set__offsetY_k__BackingField)) int32_t _offsetY_k__BackingField;

  /// @brief Field <width>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__width_k__BackingField, put = __cordl_internal_set__width_k__BackingField)) int32_t _width_k__BackingField;

  __declspec(property(put = set_height)) int32_t height;

  __declspec(property(get = get_offsetX, put = set_offsetX)) int32_t offsetX;

  __declspec(property(get = get_offsetY, put = set_offsetY)) int32_t offsetY;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>* s_Pool;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  /// @brief Method Acquire, addr 0x49e16f4, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__Row* Acquire(int32_t offsetX, int32_t offsetY, int32_t width, int32_t height);

  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__Row* New_ctor();

  /// @brief Method Release, addr 0x49e0c44, size 0x90, virtual false, abstract: false, final false
  inline void Release();

  constexpr int32_t const& __cordl_internal_get_Cursor() const;

  constexpr int32_t& __cordl_internal_get_Cursor();

  constexpr int32_t const& __cordl_internal_get__height_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__height_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__offsetX_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__offsetX_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__offsetY_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__offsetY_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__width_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__width_k__BackingField();

  constexpr void __cordl_internal_set_Cursor(int32_t value);

  constexpr void __cordl_internal_set__height_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__offsetX_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__offsetY_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__width_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x49e1920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>* getStaticF_s_Pool();

  /// @brief Method get_offsetX, addr 0x49e18e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_offsetX();

  /// @brief Method get_offsetY, addr 0x49e18f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_offsetY();

  /// @brief Method get_width, addr 0x49e1908, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>* value);

  /// @brief Method set_height, addr 0x49e1918, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_offsetX, addr 0x49e18f0, size 0x8, virtual false, abstract: false, final false
  inline void set_offsetX(int32_t value);

  /// @brief Method set_offsetY, addr 0x49e1900, size 0x8, virtual false, abstract: false, final false
  inline void set_offsetY(int32_t value);

  /// @brief Method set_width, addr 0x49e1910, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRAtlasAllocator__Row();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__Row", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRAtlasAllocator__Row(__UIRAtlasAllocator__Row&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__Row", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRAtlasAllocator__Row(__UIRAtlasAllocator__Row const&) = delete;

  /// @brief Field <offsetX>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____offsetX_k__BackingField;

  /// @brief Field <offsetY>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____offsetY_k__BackingField;

  /// @brief Field <width>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____height_k__BackingField;

  /// @brief Field Cursor, offset: 0x20, size: 0x4, def value: None
  int32_t ___Cursor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5996 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIRAtlasAllocator__Row, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__Row, ____offsetX_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__Row, ____offsetY_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__Row, ____width_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__Row, ____height_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__Row, ___Cursor) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UIRAtlasAllocator::AreaNode::<>c*
class CORDL_TYPE __UIRAtlasAllocator__AreaNode____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c* __9;

  static inline ::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c* New_ctor();

  /// @brief Method <.cctor>b__9_0, addr 0x49e1c6c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* __cctor_b__9_0();

  /// @brief Method .ctor, addr 0x49e1c64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRAtlasAllocator__AreaNode____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__AreaNode____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRAtlasAllocator__AreaNode____c(__UIRAtlasAllocator__AreaNode____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__AreaNode____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRAtlasAllocator__AreaNode____c(__UIRAtlasAllocator__AreaNode____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5997 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AreaNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UIRAtlasAllocator::AreaNode*
class CORDL_TYPE __UIRAtlasAllocator__AreaNode : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* next;

  /// @brief Field previous, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_previous, put = __cordl_internal_set_previous)) ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* previous;

  /// @brief Field rect, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect)) ::UnityEngine::RectInt rect;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*>* s_Pool;

  /// @brief Method Acquire, addr 0x49e1028, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* Acquire(::UnityEngine::RectInt rect);

  /// @brief Method AddAfter, addr 0x49e17c8, size 0xac, virtual false, abstract: false, final false
  inline void AddAfter(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* previous);

  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* New_ctor();

  /// @brief Method Release, addr 0x49e0cd4, size 0x80, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method RemoveFromChain, addr 0x49e17a0, size 0x28, virtual false, abstract: false, final false
  inline void RemoveFromChain();

  constexpr ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*> const& __cordl_internal_get_next() const;

  constexpr ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*& __cordl_internal_get_previous();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*> const& __cordl_internal_get_previous() const;

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_rect() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_rect();

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* value);

  constexpr void __cordl_internal_set_previous(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* value);

  constexpr void __cordl_internal_set_rect(::UnityEngine::RectInt value);

  /// @brief Method .ctor, addr 0x49e1af0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRAtlasAllocator__AreaNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__AreaNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRAtlasAllocator__AreaNode(__UIRAtlasAllocator__AreaNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__AreaNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRAtlasAllocator__AreaNode(__UIRAtlasAllocator__AreaNode const&) = delete;

  /// @brief Field rect, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief Field previous, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* ___previous;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* ___next;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode, ___rect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode, ___previous) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode, ___next) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIRAtlasAllocator
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIRAtlasAllocator*
class CORDL_TYPE UIRAtlasAllocator : public ::System::Object {
public:
  // Declarations
  using AreaNode = ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode;

  using Row = ::UnityEngine::UIElements::__UIRAtlasAllocator__Row;

  /// @brief Field <disposed>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <maxAtlasSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAtlasSize_k__BackingField, put = __cordl_internal_set__maxAtlasSize_k__BackingField)) int32_t _maxAtlasSize_k__BackingField;

  /// @brief Field <maxImageHeight>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxImageHeight_k__BackingField, put = __cordl_internal_set__maxImageHeight_k__BackingField)) int32_t _maxImageHeight_k__BackingField;

  /// @brief Field <maxImageWidth>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__maxImageWidth_k__BackingField, put = __cordl_internal_set__maxImageWidth_k__BackingField)) int32_t _maxImageWidth_k__BackingField;

  /// @brief Field <physicalHeight>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__physicalHeight_k__BackingField, put = __cordl_internal_set__physicalHeight_k__BackingField)) int32_t _physicalHeight_k__BackingField;

  /// @brief Field <physicalWidth>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__physicalWidth_k__BackingField, put = __cordl_internal_set__physicalWidth_k__BackingField)) int32_t _physicalWidth_k__BackingField;

  /// @brief Field <virtualHeight>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__virtualHeight_k__BackingField, put = __cordl_internal_set__virtualHeight_k__BackingField)) int32_t _virtualHeight_k__BackingField;

  /// @brief Field <virtualWidth>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__virtualWidth_k__BackingField, put = __cordl_internal_set__virtualWidth_k__BackingField)) int32_t _virtualWidth_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field m_1SidePadding, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_1SidePadding, put = __cordl_internal_set_m_1SidePadding)) int32_t m_1SidePadding;

  /// @brief Field m_2SidePadding, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_2SidePadding, put = __cordl_internal_set_m_2SidePadding)) int32_t m_2SidePadding;

  /// @brief Field m_FirstUnpartitionedArea, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstUnpartitionedArea,
                      put = __cordl_internal_set_m_FirstUnpartitionedArea)) ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* m_FirstUnpartitionedArea;

  /// @brief Field m_OpenRows, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OpenRows,
                      put = __cordl_internal_set_m_OpenRows)) ::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*>
      m_OpenRows;

  __declspec(property(get = get_maxAtlasSize)) int32_t maxAtlasSize;

  __declspec(property(get = get_maxImageHeight)) int32_t maxImageHeight;

  __declspec(property(get = get_maxImageWidth)) int32_t maxImageWidth;

  __declspec(property(get = get_physicalHeight, put = set_physicalHeight)) int32_t physicalHeight;

  __declspec(property(get = get_physicalWidth, put = set_physicalWidth)) int32_t physicalWidth;

  /// @brief Field s_MarkerTryAllocate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerTryAllocate, put = setStaticF_s_MarkerTryAllocate)) ::Unity::Profiling::ProfilerMarker s_MarkerTryAllocate;

  __declspec(property(get = get_virtualHeight, put = set_virtualHeight)) int32_t virtualHeight;

  __declspec(property(get = get_virtualWidth, put = set_virtualWidth)) int32_t virtualWidth;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BuildAreas, addr 0x49e10c0, size 0xf8, virtual false, abstract: false, final false
  inline void BuildAreas();

  /// @brief Method Dispose, addr 0x49e0b48, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49e0bb4, size 0x90, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetLog2OfNextPower, addr 0x49e0d54, size 0x130, virtual false, abstract: false, final false
  static inline int32_t GetLog2OfNextPower(int32_t n);

  static inline ::UnityEngine::UIElements::UIRAtlasAllocator* New_ctor(int32_t initialAtlasSize, int32_t maxAtlasSize, int32_t sidePadding);

  /// @brief Method TryAllocate, addr 0x49e11b8, size 0x3b4, virtual false, abstract: false, final false
  inline bool TryAllocate(int32_t width, int32_t height, ByRef<::UnityEngine::RectInt> location);

  /// @brief Method TryPartitionArea, addr 0x49e156c, size 0x188, virtual false, abstract: false, final false
  inline bool TryPartitionArea(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* areaNode, int32_t rowIndex, int32_t rowHeight, int32_t minWidth);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxAtlasSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxAtlasSize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxImageHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxImageHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxImageWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxImageWidth_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__physicalHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__physicalHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__physicalWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__physicalWidth_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__virtualHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__virtualHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__virtualWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__virtualWidth_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_1SidePadding() const;

  constexpr int32_t& __cordl_internal_get_m_1SidePadding();

  constexpr int32_t const& __cordl_internal_get_m_2SidePadding() const;

  constexpr int32_t& __cordl_internal_get_m_2SidePadding();

  constexpr ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*& __cordl_internal_get_m_FirstUnpartitionedArea();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*> const& __cordl_internal_get_m_FirstUnpartitionedArea() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*> const& __cordl_internal_get_m_OpenRows() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*>& __cordl_internal_get_m_OpenRows();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__maxAtlasSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__maxImageHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__maxImageWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__physicalHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__physicalWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__virtualHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__virtualWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_1SidePadding(int32_t value);

  constexpr void __cordl_internal_set_m_2SidePadding(int32_t value);

  constexpr void __cordl_internal_set_m_FirstUnpartitionedArea(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* value);

  constexpr void __cordl_internal_set_m_OpenRows(::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*> value);

  /// @brief Method .ctor, addr 0x49e0e84, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialAtlasSize, int32_t maxAtlasSize, int32_t sidePadding);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTryAllocate();

  /// @brief Method get_disposed, addr 0x49e0b34, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_maxAtlasSize, addr 0x49e0adc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxAtlasSize();

  /// @brief Method get_maxImageHeight, addr 0x49e0aec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxImageHeight();

  /// @brief Method get_maxImageWidth, addr 0x49e0ae4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxImageWidth();

  /// @brief Method get_physicalHeight, addr 0x49e0b24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_physicalHeight();

  /// @brief Method get_physicalWidth, addr 0x49e0b14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_physicalWidth();

  /// @brief Method get_virtualHeight, addr 0x49e0b04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_virtualHeight();

  /// @brief Method get_virtualWidth, addr 0x49e0af4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_virtualWidth();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_MarkerTryAllocate(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_disposed, addr 0x49e0b3c, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_physicalHeight, addr 0x49e0b2c, size 0x8, virtual false, abstract: false, final false
  inline void set_physicalHeight(int32_t value);

  /// @brief Method set_physicalWidth, addr 0x49e0b1c, size 0x8, virtual false, abstract: false, final false
  inline void set_physicalWidth(int32_t value);

  /// @brief Method set_virtualHeight, addr 0x49e0b0c, size 0x8, virtual false, abstract: false, final false
  inline void set_virtualHeight(int32_t value);

  /// @brief Method set_virtualWidth, addr 0x49e0afc, size 0x8, virtual false, abstract: false, final false
  inline void set_virtualWidth(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRAtlasAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRAtlasAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRAtlasAllocator(UIRAtlasAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRAtlasAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRAtlasAllocator(UIRAtlasAllocator const&) = delete;

  /// @brief Field <maxAtlasSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____maxAtlasSize_k__BackingField;

  /// @brief Field <maxImageWidth>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____maxImageWidth_k__BackingField;

  /// @brief Field <maxImageHeight>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxImageHeight_k__BackingField;

  /// @brief Field <virtualWidth>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____virtualWidth_k__BackingField;

  /// @brief Field <virtualHeight>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____virtualHeight_k__BackingField;

  /// @brief Field <physicalWidth>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____physicalWidth_k__BackingField;

  /// @brief Field <physicalHeight>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____physicalHeight_k__BackingField;

  /// @brief Field m_FirstUnpartitionedArea, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* ___m_FirstUnpartitionedArea;

  /// @brief Field m_OpenRows, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*> ___m_OpenRows;

  /// @brief Field m_1SidePadding, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_1SidePadding;

  /// @brief Field m_2SidePadding, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_2SidePadding;

  /// @brief Field <disposed>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRAtlasAllocator, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____maxAtlasSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____maxImageWidth_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____maxImageHeight_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____virtualWidth_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____virtualHeight_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____physicalWidth_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____physicalHeight_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ___m_FirstUnpartitionedArea) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ___m_OpenRows) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ___m_1SidePadding) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ___m_2SidePadding) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRAtlasAllocator, ____disposed_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UIRAtlasAllocator__AreaNode____c*, "UnityEngine.UIElements", "UIRAtlasAllocator/AreaNode/<>c");
NEED_NO_BOX(::GlobalNamespace::__UIRAtlasAllocator__Row____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UIRAtlasAllocator__Row____c*, "UnityEngine.UIElements", "UIRAtlasAllocator/Row/<>c");
NEED_NO_BOX(::UnityEngine::UIElements::UIRAtlasAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRAtlasAllocator*, "UnityEngine.UIElements", "UIRAtlasAllocator");
NEED_NO_BOX(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*, "UnityEngine.UIElements", "UIRAtlasAllocator/AreaNode");
NEED_NO_BOX(::UnityEngine::UIElements::__UIRAtlasAllocator__Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, "UnityEngine.UIElements", "UIRAtlasAllocator/Row");
