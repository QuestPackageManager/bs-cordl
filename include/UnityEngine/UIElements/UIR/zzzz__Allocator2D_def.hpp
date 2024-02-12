#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class BestFitAllocator;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
struct __Allocator2D__Alloc2D;
}
namespace UnityEngine::UIElements::UIR {
class __Allocator2D__Area;
}
namespace UnityEngine::UIElements::UIR {
class __Allocator2D__Row;
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
class __Allocator2D__Area;
}
namespace UnityEngine::UIElements::UIR {
class __Allocator2D__Row;
}
namespace UnityEngine::UIElements::UIR {
struct __Allocator2D__Alloc2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Allocator2D);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__Allocator2D__Area);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__Allocator2D__Row);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D);
// Type: ::Area
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8906))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6670))
// CS Name: ::Allocator2D::Area*
class CORDL_TYPE __Allocator2D__Area : public ::System::Object {
public:
  // Declarations
  /// @brief Field rect, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect))::UnityEngine::RectInt rect;

  /// @brief Field allocator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_allocator, put = __cordl_internal_set_allocator))::UnityEngine::UIElements::UIR::BestFitAllocator* allocator;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_rect();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_rect() const;

  constexpr void __cordl_internal_set_rect(::UnityEngine::RectInt value);

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __cordl_internal_get_allocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> const& __cordl_internal_get_allocator() const;

  constexpr void __cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  static inline ::UnityEngine::UIElements::UIR::__Allocator2D__Area* New_ctor(::UnityEngine::RectInt rect);

  /// @brief Method .ctor, addr 0x2dea894, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RectInt rect);

  // Ctor Parameters [CppParam { name: "", ty: "__Allocator2D__Area", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Allocator2D__Area(__Allocator2D__Area&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Allocator2D__Area", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Allocator2D__Area(__Allocator2D__Area const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Allocator2D__Area();

public:
  /// @brief Field rect, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief Field allocator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__Allocator2D__Area, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Area, ___rect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Area, ___allocator) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::Row
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6658)), TypeDefinitionIndex(TypeDefinitionIndex(6692)), TypeDefinitionIndex(TypeDefinitionIndex(8906)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6658), inst: 3961 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(6671)) CS Name: ::Allocator2D::Row*
class CORDL_TYPE __Allocator2D__Row : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::__Allocator2D__Row*> {
public:
  // Declarations
  /// @brief Field rect, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect))::UnityEngine::RectInt rect;

  /// @brief Field area, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_area, put = __cordl_internal_set_area))::UnityEngine::UIElements::UIR::__Allocator2D__Area* area;

  /// @brief Field allocator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_allocator, put = __cordl_internal_set_allocator))::UnityEngine::UIElements::UIR::BestFitAllocator* allocator;

  /// @brief Field alloc, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_alloc, put = __cordl_internal_set_alloc))::UnityEngine::UIElements::UIR::Alloc alloc;

  /// @brief Field next, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::UnityEngine::UIElements::UIR::__Allocator2D__Row* next;

  /// @brief Field pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pool, put = setStaticF_pool))::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>* pool;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_rect();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_rect() const;

  constexpr void __cordl_internal_set_rect(::UnityEngine::RectInt value);

  constexpr ::UnityEngine::UIElements::UIR::__Allocator2D__Area*& __cordl_internal_get_area();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Allocator2D__Area*> const& __cordl_internal_get_area() const;

  constexpr void __cordl_internal_set_area(::UnityEngine::UIElements::UIR::__Allocator2D__Area* value);

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __cordl_internal_get_allocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> const& __cordl_internal_get_allocator() const;

  constexpr void __cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __cordl_internal_get_alloc();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __cordl_internal_get_alloc() const;

  constexpr void __cordl_internal_set_alloc(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr ::UnityEngine::UIElements::UIR::__Allocator2D__Row*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Allocator2D__Row*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::UIR::__Allocator2D__Row* value);

  static inline void setStaticF_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>* value);

  static inline ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>* getStaticF_pool();

  /// @brief Method Create, addr 0x2dea928, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::__Allocator2D__Row* Create();

  /// @brief Method Reset, addr 0x2dea9c8, size 0x28, virtual false, abstract: false, final false
  static inline void Reset(::UnityEngine::UIElements::UIR::__Allocator2D__Row* row);

  static inline ::UnityEngine::UIElements::UIR::__Allocator2D__Row* New_ctor();

  /// @brief Method .ctor, addr 0x2dea980, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Allocator2D__Row", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Allocator2D__Row(__Allocator2D__Row&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Allocator2D__Row", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Allocator2D__Row(__Allocator2D__Row const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Allocator2D__Row();

public:
  /// @brief Field rect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief Field area, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::__Allocator2D__Area* ___area;

  /// @brief Field allocator, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___allocator;

  /// @brief Field alloc, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc ___alloc;

  /// @brief Field next, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::__Allocator2D__Row* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__Allocator2D__Row, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Row, ___rect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Row, ___area) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Row, ___allocator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Row, ___alloc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Row, ___next) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::Alloc2D
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6692)), TypeDefinitionIndex(TypeDefinitionIndex(8906))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6672))
// CS Name: ::Allocator2D::Alloc2D
struct CORDL_TYPE __Allocator2D__Alloc2D {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2dea2d4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::__Allocator2D__Row* row, ::UnityEngine::UIElements::UIR::Alloc alloc, int32_t width, int32_t height);

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }, CppParam { name: "row", ty: "::UnityEngine::UIElements::UIR::__Allocator2D__Row*",
  // modifiers: "", def_value: None }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }]
  constexpr __Allocator2D__Alloc2D(::UnityEngine::RectInt rect, ::UnityEngine::UIElements::UIR::__Allocator2D__Row* row, ::UnityEngine::UIElements::UIR::Alloc alloc) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Allocator2D__Alloc2D();

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::RectInt rect;

  /// @brief Field row, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::__Allocator2D__Row* row;

  /// @brief Field alloc, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc alloc;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D, row) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D, alloc) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::Allocator2D
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8988))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6673))
// CS Name: ::UnityEngine.UIElements.UIR::Allocator2D*
class CORDL_TYPE Allocator2D : public ::System::Object {
public:
  // Declarations
  using Alloc2D = ::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D;

  using Row = ::UnityEngine::UIElements::UIR::__Allocator2D__Row;

  using Area = ::UnityEngine::UIElements::UIR::__Allocator2D__Area;

  /// @brief Field m_MinSize, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinSize, put = __cordl_internal_set_m_MinSize))::UnityEngine::Vector2Int m_MinSize;

  /// @brief Field m_MaxSize, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxSize, put = __cordl_internal_set_m_MaxSize))::UnityEngine::Vector2Int m_MaxSize;

  /// @brief Field m_MaxAllocSize, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxAllocSize, put = __cordl_internal_set_m_MaxAllocSize))::UnityEngine::Vector2Int m_MaxAllocSize;

  /// @brief Field m_RowHeightBias, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RowHeightBias, put = __cordl_internal_set_m_RowHeightBias)) int32_t m_RowHeightBias;

  /// @brief Field m_Rows, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rows,
                      put = __cordl_internal_set_m_Rows))::ArrayW<::UnityEngine::UIElements::UIR::__Allocator2D__Row*, ::Array<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>*> m_Rows;

  /// @brief Field m_Areas, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Areas, put = __cordl_internal_set_m_Areas))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>* m_Areas;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_MinSize();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_MinSize() const;

  constexpr void __cordl_internal_set_m_MinSize(::UnityEngine::Vector2Int value);

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_MaxSize();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_MaxSize() const;

  constexpr void __cordl_internal_set_m_MaxSize(::UnityEngine::Vector2Int value);

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_MaxAllocSize();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_MaxAllocSize() const;

  constexpr void __cordl_internal_set_m_MaxAllocSize(::UnityEngine::Vector2Int value);

  constexpr int32_t& __cordl_internal_get_m_RowHeightBias();

  constexpr int32_t const& __cordl_internal_get_m_RowHeightBias() const;

  constexpr void __cordl_internal_set_m_RowHeightBias(int32_t value);

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__Allocator2D__Row*, ::Array<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>*>& __cordl_internal_get_m_Rows();

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__Allocator2D__Row*, ::Array<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>*> const& __cordl_internal_get_m_Rows() const;

  constexpr void __cordl_internal_set_m_Rows(::ArrayW<::UnityEngine::UIElements::UIR::__Allocator2D__Row*, ::Array<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>*& __cordl_internal_get_m_Areas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>*> const& __cordl_internal_get_m_Areas() const;

  constexpr void __cordl_internal_set_m_Areas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>* value);

  static inline ::UnityEngine::UIElements::UIR::Allocator2D* New_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias);

  /// @brief Method .ctor, addr 0x2de967c, size 0x218, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias);

  /// @brief Method TryAllocate, addr 0x2de9ca8, size 0x498, virtual false, abstract: false, final false
  inline bool TryAllocate(int32_t width, int32_t height, ByRef<::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D> alloc2D);

  /// @brief Method Free, addr 0x2dea420, size 0x210, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D alloc2D);

  /// @brief Method BuildAreas, addr 0x2de9894, size 0x270, virtual false, abstract: false, final false
  static inline void BuildAreas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>* areas, ::UnityEngine::Vector2Int minSize,
                                ::UnityEngine::Vector2Int maxSize);

  /// @brief Method ComputeMaxAllocSize, addr 0x2de9b04, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int ComputeMaxAllocSize(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>* areas, int32_t rowHeightBias);

  /// @brief Method BuildRowArray, addr 0x2de9c20, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::UIElements::UIR::__Allocator2D__Row*, ::Array<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>*> BuildRowArray(int32_t maxRowHeight, int32_t rowHeightBias);

  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Allocator2D(Allocator2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Allocator2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Allocator2D(Allocator2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Allocator2D();

public:
  /// @brief Field m_MinSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_MinSize;

  /// @brief Field m_MaxSize, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_MaxSize;

  /// @brief Field m_MaxAllocSize, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_MaxAllocSize;

  /// @brief Field m_RowHeightBias, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_RowHeightBias;

  /// @brief Field m_Rows, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::UIR::__Allocator2D__Row*, ::Array<::UnityEngine::UIElements::UIR::__Allocator2D__Row*>*> ___m_Rows;

  /// @brief Field m_Areas, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__Allocator2D__Area*>* ___m_Areas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Allocator2D, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_MinSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_MaxSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_MaxAllocSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_RowHeightBias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_Rows) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Allocator2D, ___m_Areas) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Allocator2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D*, "UnityEngine.UIElements.UIR", "Allocator2D");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__Allocator2D__Area);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__Allocator2D__Area*, "UnityEngine.UIElements.UIR", "Allocator2D/Area");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__Allocator2D__Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__Allocator2D__Row*, "UnityEngine.UIElements.UIR", "Allocator2D/Row");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D, "UnityEngine.UIElements.UIR", "Allocator2D/Alloc2D");
