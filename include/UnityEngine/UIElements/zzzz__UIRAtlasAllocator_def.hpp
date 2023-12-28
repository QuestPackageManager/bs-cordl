#pragma once
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
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
class __UIRAtlasAllocator__Row;
}
namespace UnityEngine::UIElements {
class __UIRAtlasAllocator__AreaNode;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
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
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRAtlasAllocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UIRAtlasAllocator__Row);
// Type: ::Row
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7324))
// CS Name: ::UIRAtlasAllocator::Row*
class CORDL_TYPE __UIRAtlasAllocator__Row : public ::System::Object {
public:
  // Declarations
  /// @brief Field <offsetX>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__offsetX_k__BackingField, put = __set__offsetX_k__BackingField)) int32_t _offsetX_k__BackingField;

  /// @brief Field <offsetY>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__offsetY_k__BackingField, put = __set__offsetY_k__BackingField)) int32_t _offsetY_k__BackingField;

  /// @brief Field <width>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__width_k__BackingField, put = __set__width_k__BackingField)) int32_t _width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__height_k__BackingField, put = __set__height_k__BackingField)) int32_t _height_k__BackingField;

  /// @brief Field Cursor, offset 0x20, size 0x4
  __declspec(property(get = __get_Cursor, put = __set_Cursor)) int32_t Cursor;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>* s_Pool;

  __declspec(property(get = get_offsetX, put = set_offsetX)) int32_t offsetX;

  __declspec(property(get = get_offsetY, put = set_offsetY)) int32_t offsetY;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(put = set_height)) int32_t height;

  constexpr int32_t& __get__offsetX_k__BackingField();

  constexpr int32_t const& __get__offsetX_k__BackingField() const;

  constexpr void __set__offsetX_k__BackingField(int32_t value);

  constexpr int32_t& __get__offsetY_k__BackingField();

  constexpr int32_t const& __get__offsetY_k__BackingField() const;

  constexpr void __set__offsetY_k__BackingField(int32_t value);

  constexpr int32_t& __get__width_k__BackingField();

  constexpr int32_t const& __get__width_k__BackingField() const;

  constexpr void __set__width_k__BackingField(int32_t value);

  constexpr int32_t& __get__height_k__BackingField();

  constexpr int32_t const& __get__height_k__BackingField() const;

  constexpr void __set__height_k__BackingField(int32_t value);

  constexpr int32_t& __get_Cursor();

  constexpr int32_t const& __get_Cursor() const;

  constexpr void __set_Cursor(int32_t value);

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>* getStaticF_s_Pool();

  /// @brief Method get_offsetX addr 0x2e77480 size 0x8 virtual false final false
  inline int32_t get_offsetX();

  /// @brief Method set_offsetX addr 0x2e77488 size 0x8 virtual false final false
  inline void set_offsetX(int32_t value);

  /// @brief Method get_offsetY addr 0x2e77490 size 0x8 virtual false final false
  inline int32_t get_offsetY();

  /// @brief Method set_offsetY addr 0x2e77498 size 0x8 virtual false final false
  inline void set_offsetY(int32_t value);

  /// @brief Method get_width addr 0x2e774a0 size 0x8 virtual false final false
  inline int32_t get_width();

  /// @brief Method set_width addr 0x2e774a8 size 0x8 virtual false final false
  inline void set_width(int32_t value);

  /// @brief Method set_height addr 0x2e774b0 size 0x8 virtual false final false
  inline void set_height(int32_t value);

  /// @brief Method Acquire addr 0x2e7728c size 0xac virtual false final false
  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__Row* Acquire(int32_t offsetX, int32_t offsetY, int32_t width, int32_t height);

  /// @brief Method Release addr 0x2e766e4 size 0x90 virtual false final false
  inline void Release();

  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__Row* New_ctor();

  /// @brief Method .ctor addr 0x2e774b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__Row", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRAtlasAllocator__Row(__UIRAtlasAllocator__Row&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__Row", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRAtlasAllocator__Row(__UIRAtlasAllocator__Row const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRAtlasAllocator__Row();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIRAtlasAllocator__Row, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::AreaNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10162)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7325))
// CS Name: ::UIRAtlasAllocator::AreaNode*
class CORDL_TYPE __UIRAtlasAllocator__AreaNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field rect, offset 0x10, size 0x10
  __declspec(property(get = __get_rect, put = __set_rect))::UnityEngine::RectInt rect;

  /// @brief Field previous, offset 0x20, size 0x8
  __declspec(property(get = __get_previous, put = __set_previous))::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* previous;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* next;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*>* s_Pool;

  constexpr ::UnityEngine::RectInt& __get_rect();

  constexpr ::UnityEngine::RectInt const& __get_rect() const;

  constexpr void __set_rect(::UnityEngine::RectInt value);

  constexpr ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*& __get_previous();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*> const& __get_previous() const;

  constexpr void __set_previous(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* value);

  constexpr ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*> const& __get_next() const;

  constexpr void __set_next(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* value);

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*>* getStaticF_s_Pool();

  /// @brief Method Acquire addr 0x2e76af0 size 0x98 virtual false final false
  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* Acquire(::UnityEngine::RectInt rect);

  /// @brief Method Release addr 0x2e76774 size 0x80 virtual false final false
  inline void Release();

  /// @brief Method RemoveFromChain addr 0x2e77338 size 0x28 virtual false final false
  inline void RemoveFromChain();

  /// @brief Method AddAfter addr 0x2e77360 size 0xac virtual false final false
  inline void AddAfter(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* previous);

  static inline ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* New_ctor();

  /// @brief Method .ctor addr 0x2e77550 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__AreaNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRAtlasAllocator__AreaNode(__UIRAtlasAllocator__AreaNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRAtlasAllocator__AreaNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRAtlasAllocator__AreaNode(__UIRAtlasAllocator__AreaNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRAtlasAllocator__AreaNode();

public:
  /// @brief Field rect, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief Field previous, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* ___previous;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIRAtlasAllocator
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7326))
// CS Name: ::UnityEngine.UIElements::UIRAtlasAllocator*
class CORDL_TYPE UIRAtlasAllocator : public ::System::Object {
public:
  // Declarations
  using AreaNode = ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode;

  using Row = ::UnityEngine::UIElements::__UIRAtlasAllocator__Row;

  /// @brief Field <maxAtlasSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__maxAtlasSize_k__BackingField, put = __set__maxAtlasSize_k__BackingField)) int32_t _maxAtlasSize_k__BackingField;

  /// @brief Field <maxImageWidth>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__maxImageWidth_k__BackingField, put = __set__maxImageWidth_k__BackingField)) int32_t _maxImageWidth_k__BackingField;

  /// @brief Field <maxImageHeight>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__maxImageHeight_k__BackingField, put = __set__maxImageHeight_k__BackingField)) int32_t _maxImageHeight_k__BackingField;

  /// @brief Field <virtualWidth>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__virtualWidth_k__BackingField, put = __set__virtualWidth_k__BackingField)) int32_t _virtualWidth_k__BackingField;

  /// @brief Field <virtualHeight>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__virtualHeight_k__BackingField, put = __set__virtualHeight_k__BackingField)) int32_t _virtualHeight_k__BackingField;

  /// @brief Field <physicalWidth>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__physicalWidth_k__BackingField, put = __set__physicalWidth_k__BackingField)) int32_t _physicalWidth_k__BackingField;

  /// @brief Field <physicalHeight>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__physicalHeight_k__BackingField, put = __set__physicalHeight_k__BackingField)) int32_t _physicalHeight_k__BackingField;

  /// @brief Field m_FirstUnpartitionedArea, offset 0x30, size 0x8
  __declspec(property(get = __get_m_FirstUnpartitionedArea, put = __set_m_FirstUnpartitionedArea))::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* m_FirstUnpartitionedArea;

  /// @brief Field m_OpenRows, offset 0x38, size 0x8
  __declspec(property(get = __get_m_OpenRows,
                      put = __set_m_OpenRows))::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*> m_OpenRows;

  /// @brief Field m_1SidePadding, offset 0x40, size 0x4
  __declspec(property(get = __get_m_1SidePadding, put = __set_m_1SidePadding)) int32_t m_1SidePadding;

  /// @brief Field m_2SidePadding, offset 0x44, size 0x4
  __declspec(property(get = __get_m_2SidePadding, put = __set_m_2SidePadding)) int32_t m_2SidePadding;

  /// @brief Field <disposed>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field s_MarkerTryAllocate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerTryAllocate, put = setStaticF_s_MarkerTryAllocate))::Unity::Profiling::ProfilerMarker s_MarkerTryAllocate;

  __declspec(property(get = get_maxAtlasSize)) int32_t maxAtlasSize;

  __declspec(property(get = get_maxImageWidth)) int32_t maxImageWidth;

  __declspec(property(get = get_maxImageHeight)) int32_t maxImageHeight;

  __declspec(property(get = get_virtualWidth, put = set_virtualWidth)) int32_t virtualWidth;

  __declspec(property(get = get_virtualHeight, put = set_virtualHeight)) int32_t virtualHeight;

  __declspec(property(get = get_physicalWidth, put = set_physicalWidth)) int32_t physicalWidth;

  __declspec(property(get = get_physicalHeight, put = set_physicalHeight)) int32_t physicalHeight;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get__maxAtlasSize_k__BackingField();

  constexpr int32_t const& __get__maxAtlasSize_k__BackingField() const;

  constexpr void __set__maxAtlasSize_k__BackingField(int32_t value);

  constexpr int32_t& __get__maxImageWidth_k__BackingField();

  constexpr int32_t const& __get__maxImageWidth_k__BackingField() const;

  constexpr void __set__maxImageWidth_k__BackingField(int32_t value);

  constexpr int32_t& __get__maxImageHeight_k__BackingField();

  constexpr int32_t const& __get__maxImageHeight_k__BackingField() const;

  constexpr void __set__maxImageHeight_k__BackingField(int32_t value);

  constexpr int32_t& __get__virtualWidth_k__BackingField();

  constexpr int32_t const& __get__virtualWidth_k__BackingField() const;

  constexpr void __set__virtualWidth_k__BackingField(int32_t value);

  constexpr int32_t& __get__virtualHeight_k__BackingField();

  constexpr int32_t const& __get__virtualHeight_k__BackingField() const;

  constexpr void __set__virtualHeight_k__BackingField(int32_t value);

  constexpr int32_t& __get__physicalWidth_k__BackingField();

  constexpr int32_t const& __get__physicalWidth_k__BackingField() const;

  constexpr void __set__physicalWidth_k__BackingField(int32_t value);

  constexpr int32_t& __get__physicalHeight_k__BackingField();

  constexpr int32_t const& __get__physicalHeight_k__BackingField() const;

  constexpr void __set__physicalHeight_k__BackingField(int32_t value);

  constexpr ::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*& __get_m_FirstUnpartitionedArea();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*> const& __get_m_FirstUnpartitionedArea() const;

  constexpr void __set_m_FirstUnpartitionedArea(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* value);

  constexpr ::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*>& __get_m_OpenRows();

  constexpr ::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*> const& __get_m_OpenRows() const;

  constexpr void __set_m_OpenRows(::ArrayW<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, ::Array<::UnityEngine::UIElements::__UIRAtlasAllocator__Row*>*> value);

  constexpr int32_t& __get_m_1SidePadding();

  constexpr int32_t const& __get_m_1SidePadding() const;

  constexpr void __set_m_1SidePadding(int32_t value);

  constexpr int32_t& __get_m_2SidePadding();

  constexpr int32_t const& __get_m_2SidePadding() const;

  constexpr void __set_m_2SidePadding(int32_t value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  static inline void setStaticF_s_MarkerTryAllocate(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTryAllocate();

  /// @brief Method get_maxAtlasSize addr 0x2e7657c size 0x8 virtual false final false
  inline int32_t get_maxAtlasSize();

  /// @brief Method get_maxImageWidth addr 0x2e76584 size 0x8 virtual false final false
  inline int32_t get_maxImageWidth();

  /// @brief Method get_maxImageHeight addr 0x2e7658c size 0x8 virtual false final false
  inline int32_t get_maxImageHeight();

  /// @brief Method get_virtualWidth addr 0x2e76594 size 0x8 virtual false final false
  inline int32_t get_virtualWidth();

  /// @brief Method set_virtualWidth addr 0x2e7659c size 0x8 virtual false final false
  inline void set_virtualWidth(int32_t value);

  /// @brief Method get_virtualHeight addr 0x2e765a4 size 0x8 virtual false final false
  inline int32_t get_virtualHeight();

  /// @brief Method set_virtualHeight addr 0x2e765ac size 0x8 virtual false final false
  inline void set_virtualHeight(int32_t value);

  /// @brief Method get_physicalWidth addr 0x2e765b4 size 0x8 virtual false final false
  inline int32_t get_physicalWidth();

  /// @brief Method set_physicalWidth addr 0x2e765bc size 0x8 virtual false final false
  inline void set_physicalWidth(int32_t value);

  /// @brief Method get_physicalHeight addr 0x2e765c4 size 0x8 virtual false final false
  inline int32_t get_physicalHeight();

  /// @brief Method set_physicalHeight addr 0x2e765cc size 0x8 virtual false final false
  inline void set_physicalHeight(int32_t value);

  /// @brief Method get_disposed addr 0x2e765d4 size 0x8 virtual false final false
  inline bool get_disposed();

  /// @brief Method set_disposed addr 0x2e765dc size 0xc virtual false final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose addr 0x2e765e8 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2e76654 size 0x90 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method GetLog2OfNextPower addr 0x2e767f4 size 0x130 virtual false final false
  static inline int32_t GetLog2OfNextPower(int32_t n);

  static inline ::UnityEngine::UIElements::UIRAtlasAllocator* New_ctor(int32_t initialAtlasSize, int32_t maxAtlasSize, int32_t sidePadding);

  /// @brief Method .ctor addr 0x2e76924 size 0x1cc virtual false final false
  inline void _ctor(int32_t initialAtlasSize, int32_t maxAtlasSize, int32_t sidePadding);

  /// @brief Method TryAllocate addr 0x2e76c94 size 0x3e0 virtual false final false
  inline bool TryAllocate(int32_t width, int32_t height, ByRef<::UnityEngine::RectInt> location);

  /// @brief Method TryPartitionArea addr 0x2e77074 size 0x218 virtual false final false
  inline bool TryPartitionArea(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode* areaNode, int32_t rowIndex, int32_t rowHeight, int32_t minWidth);

  /// @brief Method BuildAreas addr 0x2e76b88 size 0x10c virtual false final false
  inline void BuildAreas();

  // Ctor Parameters [CppParam { name: "", ty: "UIRAtlasAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRAtlasAllocator(UIRAtlasAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRAtlasAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRAtlasAllocator(UIRAtlasAllocator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRAtlasAllocator();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRAtlasAllocator, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRAtlasAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRAtlasAllocator*, "UnityEngine.UIElements", "UIRAtlasAllocator");
NEED_NO_BOX(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIRAtlasAllocator__AreaNode*, "UnityEngine.UIElements", "UIRAtlasAllocator/AreaNode");
NEED_NO_BOX(::UnityEngine::UIElements::__UIRAtlasAllocator__Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UIRAtlasAllocator__Row*, "UnityEngine.UIElements", "UIRAtlasAllocator/Row");
