#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GfxUpdateBufferRange_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Page)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class __Page__DataSet_1;
}
namespace UnityEngine::UIElements::UIR {
class GPUBufferAllocator;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class __Utility__GPUBuffer_1;
}
namespace UnityEngine::UIElements::UIR {
struct __Utility__GPUBufferType;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class __Page__DataSet_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Page);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::__Page__DataSet_1);
// Type: ::DataSet`1
// SizeInfo { instance_size: 104, native_size: 97, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 744
// }), TypeDefinitionIndex(TypeDefinitionIndex(15379)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 2550 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7438))
// CS Name: ::Page::DataSet`1<T>*
class CORDL_TYPE __Page__DataSet_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field gpuData, offset 0x18, size 0x8
  __declspec(property(get = __get_gpuData, put = __set_gpuData))::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* gpuData;

  /// @brief Field cpuData, offset 0x20, size 0x10
  __declspec(property(get = __get_cpuData, put = __set_cpuData))::Unity::Collections::NativeArray_1<T> cpuData;

  /// @brief Field updateRanges, offset 0x30, size 0x10
  __declspec(property(get = __get_updateRanges, put = __set_updateRanges))::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> updateRanges;

  /// @brief Field allocator, offset 0x40, size 0x8
  __declspec(property(get = __get_allocator, put = __set_allocator))::UnityEngine::UIElements::UIR::GPUBufferAllocator* allocator;

  /// @brief Field m_UpdateRangePoolSize, offset 0x48, size 0x4
  __declspec(property(get = __get_m_UpdateRangePoolSize, put = __set_m_UpdateRangePoolSize)) uint32_t m_UpdateRangePoolSize;

  /// @brief Field m_ElemStride, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_ElemStride, put = __set_m_ElemStride)) uint32_t m_ElemStride;

  /// @brief Field m_UpdateRangeMin, offset 0x50, size 0x4
  __declspec(property(get = __get_m_UpdateRangeMin, put = __set_m_UpdateRangeMin)) uint32_t m_UpdateRangeMin;

  /// @brief Field m_UpdateRangeMax, offset 0x54, size 0x4
  __declspec(property(get = __get_m_UpdateRangeMax, put = __set_m_UpdateRangeMax)) uint32_t m_UpdateRangeMax;

  /// @brief Field m_UpdateRangesEnqueued, offset 0x58, size 0x4
  __declspec(property(get = __get_m_UpdateRangesEnqueued, put = __set_m_UpdateRangesEnqueued)) uint32_t m_UpdateRangesEnqueued;

  /// @brief Field m_UpdateRangesBatchStart, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_UpdateRangesBatchStart, put = __set_m_UpdateRangesBatchStart)) uint32_t m_UpdateRangesBatchStart;

  /// @brief Field m_UpdateRangesSaturated, offset 0x60, size 0x1
  __declspec(property(get = __get_m_UpdateRangesSaturated, put = __set_m_UpdateRangesSaturated)) bool m_UpdateRangesSaturated;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>*& __get_gpuData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>*> const& __get_gpuData() const;

  constexpr void __set_gpuData(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* value);

  constexpr ::Unity::Collections::NativeArray_1<T>& __get_cpuData();

  constexpr ::Unity::Collections::NativeArray_1<T> const& __get_cpuData() const;

  constexpr void __set_cpuData(::Unity::Collections::NativeArray_1<T> value);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>& __get_updateRanges();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> const& __get_updateRanges() const;

  constexpr void __set_updateRanges(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> value);

  constexpr ::UnityEngine::UIElements::UIR::GPUBufferAllocator*& __get_allocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GPUBufferAllocator*> const& __get_allocator() const;

  constexpr void __set_allocator(::UnityEngine::UIElements::UIR::GPUBufferAllocator* value);

  constexpr uint32_t& __get_m_UpdateRangePoolSize();

  constexpr uint32_t const& __get_m_UpdateRangePoolSize() const;

  constexpr void __set_m_UpdateRangePoolSize(uint32_t value);

  constexpr uint32_t& __get_m_ElemStride();

  constexpr uint32_t const& __get_m_ElemStride() const;

  constexpr void __set_m_ElemStride(uint32_t value);

  constexpr uint32_t& __get_m_UpdateRangeMin();

  constexpr uint32_t const& __get_m_UpdateRangeMin() const;

  constexpr void __set_m_UpdateRangeMin(uint32_t value);

  constexpr uint32_t& __get_m_UpdateRangeMax();

  constexpr uint32_t const& __get_m_UpdateRangeMax() const;

  constexpr void __set_m_UpdateRangeMax(uint32_t value);

  constexpr uint32_t& __get_m_UpdateRangesEnqueued();

  constexpr uint32_t const& __get_m_UpdateRangesEnqueued() const;

  constexpr void __set_m_UpdateRangesEnqueued(uint32_t value);

  constexpr uint32_t& __get_m_UpdateRangesBatchStart();

  constexpr uint32_t const& __get_m_UpdateRangesBatchStart() const;

  constexpr void __set_m_UpdateRangesBatchStart(uint32_t value);

  constexpr bool& __get_m_UpdateRangesSaturated();

  constexpr bool const& __get_m_UpdateRangesSaturated() const;

  constexpr void __set_m_UpdateRangesSaturated(bool value);

  static inline ::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>* New_ctor(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount,
                                                                               uint32_t updateRangePoolSize, bool mockBuffer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount, uint32_t updateRangePoolSize, bool mockBuffer);

  /// @brief Method get_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method RegisterUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterUpdate(uint32_t start, uint32_t size);

  /// @brief Method HasMappedBufferRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasMappedBufferRange();

  /// @brief Method SendUpdates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendUpdates();

  /// @brief Method SendFullRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendFullRange();

  /// @brief Method SendPartialRanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendPartialRanges();

  /// @brief Method ResetUpdateState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetUpdateState();

  // Ctor Parameters [CppParam { name: "", ty: "__Page__DataSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Page__DataSet_1(__Page__DataSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Page__DataSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Page__DataSet_1(__Page__DataSet_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Page__DataSet_1();

public:
  /// @brief Field <disposed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field gpuData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* ___gpuData;

  /// @brief Field cpuData, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> ___cpuData;

  /// @brief Field updateRanges, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ___updateRanges;

  /// @brief Field allocator, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GPUBufferAllocator* ___allocator;

  /// @brief Field m_UpdateRangePoolSize, offset: 0x48, size: 0x4, def value: None
  uint32_t ___m_UpdateRangePoolSize;

  /// @brief Field m_ElemStride, offset: 0x4c, size: 0x4, def value: None
  uint32_t ___m_ElemStride;

  /// @brief Field m_UpdateRangeMin, offset: 0x50, size: 0x4, def value: None
  uint32_t ___m_UpdateRangeMin;

  /// @brief Field m_UpdateRangeMax, offset: 0x54, size: 0x4, def value: None
  uint32_t ___m_UpdateRangeMax;

  /// @brief Field m_UpdateRangesEnqueued, offset: 0x58, size: 0x4, def value: None
  uint32_t ___m_UpdateRangesEnqueued;

  /// @brief Field m_UpdateRangesBatchStart, offset: 0x5c, size: 0x4, def value: None
  uint32_t ___m_UpdateRangesBatchStart;

  /// @brief Field m_UpdateRangesSaturated, offset: 0x60, size: 0x1, def value: None
  bool ___m_UpdateRangesSaturated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::Page
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7439))
// CS Name: ::UnityEngine.UIElements.UIR::Page*
class CORDL_TYPE Page : public ::System::Object {
public:
  // Declarations
  template <typename T> using DataSet_1 = ::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>;

  /// @brief Field <disposed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field vertices, offset 0x18, size 0x8
  __declspec(property(get = __get_vertices, put = __set_vertices))::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>* vertices;

  /// @brief Field indices, offset 0x20, size 0x8
  __declspec(property(get = __get_indices, put = __set_indices))::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>* indices;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::UnityEngine::UIElements::UIR::Page* next;

  /// @brief Field framesEmpty, offset 0x30, size 0x4
  __declspec(property(get = __get_framesEmpty, put = __set_framesEmpty)) int32_t framesEmpty;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>*& __get_vertices();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>*> const& __get_vertices() const;

  constexpr void __set_vertices(::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>* value);

  constexpr ::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>*& __get_indices();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>*> const& __get_indices() const;

  constexpr void __set_indices(::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>* value);

  constexpr ::UnityEngine::UIElements::UIR::Page*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> const& __get_next() const;

  constexpr void __set_next(::UnityEngine::UIElements::UIR::Page* value);

  constexpr int32_t& __get_framesEmpty();

  constexpr int32_t const& __get_framesEmpty() const;

  constexpr void __set_framesEmpty(int32_t value);

  static inline ::UnityEngine::UIElements::UIR::Page* New_ctor(uint32_t vertexMaxCount, uint32_t indexMaxCount, uint32_t maxQueuedFrameCount, bool mockPage);

  /// @brief Method .ctor, addr 0x2dd0eb0, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t vertexMaxCount, uint32_t indexMaxCount, uint32_t maxQueuedFrameCount, bool mockPage);

  /// @brief Method get_disposed, addr 0x2dd53a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x2dd53b0, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose, addr 0x2dd4a70, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2dd53bc, size 0x90, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_isEmpty, addr 0x2dd0ffc, size 0x48, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  // Ctor Parameters [CppParam { name: "", ty: "Page", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Page(Page&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Page", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Page(Page const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Page();

public:
  /// @brief Field <disposed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>* ___vertices;

  /// @brief Field indices, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>* ___indices;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* ___next;

  /// @brief Field framesEmpty, offset: 0x30, size: 0x4, def value: None
  int32_t ___framesEmpty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Page, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Page, ____disposed_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Page, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Page, ___indices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Page, ___next) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Page, ___framesEmpty) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Page);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Page*, "UnityEngine.UIElements.UIR", "Page");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::__Page__DataSet_1, "UnityEngine.UIElements.UIR", "Page/DataSet`1");
