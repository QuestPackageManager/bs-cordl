#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Allocator2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator2D)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
struct Allocator2D_Alloc2D;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D_Area;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D_Row;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Allocator2D;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D_Area;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D_Row;
}
namespace UnityEngine::UIElements::UIR {
struct Allocator2D_Alloc2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Allocator2D);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Allocator2D_Area);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Allocator2D_Row);
MARK_VAL_T(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D);
// Dependencies System.Object, UnityEngine.RectInt
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Allocator2D/Area
class CORDL_TYPE Allocator2D_Area : public ::System::Object {
public:
  // Declarations
  /// @brief Field allocator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_allocator, put = __cordl_internal_set_allocator)) ::UnityEngine::UIElements::UIR::BestFitAllocator* allocator;

  /// @brief Field rect, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect)) ::UnityEngine::RectInt rect;

  static inline ::UnityEngine::UIElements::UIR::Allocator2D_Area* New_ctor(::UnityEngine::RectInt rect);

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& __cordl_internal_get_allocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __cordl_internal_get_allocator();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_rect() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_rect();

  constexpr void __cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  constexpr void __cordl_internal_set_rect(::UnityEngine::RectInt value);

  /// @brief Method .ctor, addr 0x49ab780, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RectInt rect);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Allocator2D_Area();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D_Area", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Allocator2D_Area(Allocator2D_Area&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D_Area", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Allocator2D_Area(Allocator2D_Area const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6356 };

  /// @brief Field rect, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief Field allocator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Area, ___rect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Area, ___allocator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Allocator2D_Area, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.RectInt, UnityEngine.UIElements.UIR.Alloc, UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Allocator2D/Row
class CORDL_TYPE Allocator2D_Row : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*> {
public:
  // Declarations
  /// @brief Field alloc, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_alloc, put = __cordl_internal_set_alloc)) ::UnityEngine::UIElements::UIR::Alloc alloc;

  /// @brief Field allocator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_allocator, put = __cordl_internal_set_allocator)) ::UnityEngine::UIElements::UIR::BestFitAllocator* allocator;

  /// @brief Field area, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_area, put = __cordl_internal_set_area)) ::UnityEngine::UIElements::UIR::Allocator2D_Area* area;

  /// @brief Field next, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::UnityEngine::UIElements::UIR::Allocator2D_Row* next;

  /// @brief Field pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pool, put = setStaticF_pool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* pool;

  /// @brief Field rect, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect)) ::UnityEngine::RectInt rect;

  /// @brief Method Create, addr 0x49ab800, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::Allocator2D_Row* Create();

  static inline ::UnityEngine::UIElements::UIR::Allocator2D_Row* New_ctor();

  /// @brief Method Reset, addr 0x49ab898, size 0x28, virtual false, abstract: false, final false
  static inline void Reset(::UnityEngine::UIElements::UIR::Allocator2D_Row* row);

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __cordl_internal_get_alloc() const;

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __cordl_internal_get_alloc();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& __cordl_internal_get_allocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __cordl_internal_get_allocator();

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Area* const& __cordl_internal_get_area() const;

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Area*& __cordl_internal_get_area();

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Row* const& __cordl_internal_get_next() const;

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Row*& __cordl_internal_get_next();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_rect() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_rect();

  constexpr void __cordl_internal_set_alloc(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr void __cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  constexpr void __cordl_internal_set_area(::UnityEngine::UIElements::UIR::Allocator2D_Area* value);

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::UIR::Allocator2D_Row* value);

  constexpr void __cordl_internal_set_rect(::UnityEngine::RectInt value);

  /// @brief Method .ctor, addr 0x49ab850, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* getStaticF_pool();

  static inline void setStaticF_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Allocator2D_Row();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D_Row", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Allocator2D_Row(Allocator2D_Row&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D_Row", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Allocator2D_Row(Allocator2D_Row const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6357 };

  /// @brief Field rect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief Field area, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Allocator2D_Area* ___area;

  /// @brief Field allocator, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___allocator;

  /// @brief Field alloc, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc ___alloc;

  /// @brief Field next, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Allocator2D_Row* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Row, ___rect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Row, ___area) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Row, ___allocator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Row, ___alloc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Row, ___next) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Allocator2D_Row, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.RectInt, UnityEngine.UIElements.UIR.Alloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.Allocator2D/Alloc2D
struct CORDL_TYPE Allocator2D_Alloc2D {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x49ab47c, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::Allocator2D_Row* row, ::UnityEngine::UIElements::UIR::Alloc alloc, int32_t width, int32_t height);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Allocator2D_Alloc2D();

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }, CppParam { name: "row", ty: "::UnityEngine::UIElements::UIR::Allocator2D_Row*",
  // modifiers: "", def_value: None }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }]
  constexpr Allocator2D_Alloc2D(::UnityEngine::RectInt rect, ::UnityEngine::UIElements::UIR::Allocator2D_Row* row, ::UnityEngine::UIElements::UIR::Alloc alloc) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6358 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::RectInt rect;

  /// @brief Field row, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Allocator2D_Row* row;

  /// @brief Field alloc, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc alloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D, row) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D, alloc) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Allocator2D
class CORDL_TYPE Allocator2D : public ::System::Object {
public:
  // Declarations
  using Alloc2D = ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D;

  using Area = ::UnityEngine::UIElements::UIR::Allocator2D_Area;

  using Row = ::UnityEngine::UIElements::UIR::Allocator2D_Row;

  /// @brief Field m_Areas, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Areas, put = __cordl_internal_set_m_Areas)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* m_Areas;

  /// @brief Field m_MaxAllocSize, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxAllocSize, put = __cordl_internal_set_m_MaxAllocSize)) ::UnityEngine::Vector2Int m_MaxAllocSize;

  /// @brief Field m_MaxSize, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxSize, put = __cordl_internal_set_m_MaxSize)) ::UnityEngine::Vector2Int m_MaxSize;

  /// @brief Field m_MinSize, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinSize, put = __cordl_internal_set_m_MinSize)) ::UnityEngine::Vector2Int m_MinSize;

  /// @brief Field m_RowHeightBias, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RowHeightBias, put = __cordl_internal_set_m_RowHeightBias)) int32_t m_RowHeightBias;

  /// @brief Field m_Rows, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rows,
                      put = __cordl_internal_set_m_Rows)) ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>
      m_Rows;

  /// @brief Method BuildAreas, addr 0x49aac10, size 0x22c, virtual false, abstract: false, final false
  static inline void BuildAreas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* areas, ::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize);

  /// @brief Method BuildRowArray, addr 0x49aaf40, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> BuildRowArray(int32_t maxRowHeight, int32_t rowHeightBias);

  /// @brief Method ComputeMaxAllocSize, addr 0x49aae3c, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int ComputeMaxAllocSize(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* areas, int32_t rowHeightBias);

  /// @brief Method Free, addr 0x49ab584, size 0x1fc, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D alloc2D);

  static inline ::UnityEngine::UIElements::UIR::Allocator2D* New_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias);

  /// @brief Method TryAllocate, addr 0x49aafc8, size 0x4b4, virtual false, abstract: false, final false
  inline bool TryAllocate(int32_t width, int32_t height, ::ByRef<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D> alloc2D);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* const& __cordl_internal_get_m_Areas() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*& __cordl_internal_get_m_Areas();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_MaxAllocSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_MaxAllocSize();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_MaxSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_MaxSize();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_MinSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_MinSize();

  constexpr int32_t const& __cordl_internal_get_m_RowHeightBias() const;

  constexpr int32_t& __cordl_internal_get_m_RowHeightBias();

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> const& __cordl_internal_get_m_Rows() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>& __cordl_internal_get_m_Rows();

  constexpr void __cordl_internal_set_m_Areas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* value);

  constexpr void __cordl_internal_set_m_MaxAllocSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_MaxSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_MinSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_RowHeightBias(int32_t value);

  constexpr void __cordl_internal_set_m_Rows(::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> value);

  /// @brief Method .ctor, addr 0x49aa9f8, size 0x218, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Allocator2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Allocator2D(Allocator2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Allocator2D(Allocator2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6359 };

  /// @brief Field m_MinSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_MinSize;

  /// @brief Field m_MaxSize, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_MaxSize;

  /// @brief Field m_MaxAllocSize, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_MaxAllocSize;

  /// @brief Field m_RowHeightBias, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_RowHeightBias;

  /// @brief Field m_Rows, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> ___m_Rows;

  /// @brief Field m_Areas, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* ___m_Areas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_MinSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_MaxSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_MaxAllocSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_RowHeightBias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_Rows) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_Areas) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Allocator2D, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Allocator2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D*, "UnityEngine.UIElements.UIR", "Allocator2D");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Allocator2D_Area);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D_Area*, "UnityEngine.UIElements.UIR", "Allocator2D/Area");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Allocator2D_Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D_Row*, "UnityEngine.UIElements.UIR", "Allocator2D/Row");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D, "UnityEngine.UIElements.UIR", "Allocator2D/Alloc2D");
