#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BLASPositionsPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BLASPositionsPool)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct VertexBufferChunk;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class BLASPositionsPool;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*, "UnityEngine.Rendering.UnifiedRayTracing", "BLASPositionsPool");
// Dependencies System.Object, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.BLASPositionsPool
class CORDL_TYPE BLASPositionsPool : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_VertexBuffer)) ::UnityEngine::GraphicsBuffer* VertexBuffer;

  /// @brief Field m_CopyPositionsShader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyPositionsShader, put = __cordl_internal_set_m_CopyPositionsShader)) ::UnityW<::UnityEngine::ComputeShader> m_CopyPositionsShader;

  /// @brief Field m_CopyShader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyShader, put = __cordl_internal_set_m_CopyShader)) ::UnityW<::UnityEngine::ComputeShader> m_CopyShader;

  /// @brief Field m_CopyVerticesKernel, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CopyVerticesKernel, put = __cordl_internal_set_m_CopyVerticesKernel)) int32_t m_CopyVerticesKernel;

  /// @brief Field m_VerticesAllocator, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_m_VerticesAllocator, put = __cordl_internal_set_m_VerticesAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_VerticesAllocator;

  /// @brief Field m_VerticesBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticesBuffer, put = __cordl_internal_set_m_VerticesBuffer)) ::UnityEngine::GraphicsBuffer* m_VerticesBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x6e08dec, size 0x470, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Rendering::UnifiedRayTracing::VertexBufferChunk info, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> verticesAllocation);

  /// @brief Method Clear, addr 0x6e08d54, size 0x98, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x6e08d24, size 0x28, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* New_ctor(::UnityEngine::ComputeShader* copyPositionsShader, ::UnityEngine::ComputeShader* copyShader);

  /// @brief Method Remove, addr 0x6e0925c, size 0x84, virtual false, abstract: false, final false
  inline void Remove(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> verticesAllocation);

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CopyPositionsShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CopyPositionsShader();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CopyShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CopyShader();

  constexpr int32_t const& __cordl_internal_get_m_CopyVerticesKernel() const;

  constexpr int32_t& __cordl_internal_get_m_CopyVerticesKernel();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_VerticesAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_VerticesAllocator();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_VerticesBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_VerticesBuffer();

  constexpr void __cordl_internal_set_m_CopyPositionsShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_CopyShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_CopyVerticesKernel(int32_t value);

  constexpr void __cordl_internal_set_m_VerticesAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  constexpr void __cordl_internal_set_m_VerticesBuffer(::UnityEngine::GraphicsBuffer* value);

  /// @brief Method .ctor, addr 0x6e08c54, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ComputeShader* copyPositionsShader, ::UnityEngine::ComputeShader* copyShader);

  /// @brief Method get_VertexBuffer, addr 0x6e08d4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_VertexBuffer();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BLASPositionsPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BLASPositionsPool", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BLASPositionsPool(BLASPositionsPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BLASPositionsPool", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BLASPositionsPool(BLASPositionsPool const&) = delete;

  /// @brief Field VertexSizeInDwords offset 0xffffffff size 0x4
  static constexpr int32_t VertexSizeInDwords{ static_cast<int32_t>(0x3) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20482 };

  /// @brief Field intialVertexCount offset 0xffffffff size 0x4
  static constexpr int32_t intialVertexCount{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kItemsPerWorkgroup offset 0xffffffff size 0x4
  static constexpr uint32_t kItemsPerWorkgroup{ static_cast<uint32_t>(0x1800u) };

  /// @brief Field m_VerticesBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_VerticesBuffer;

  /// @brief Field m_VerticesAllocator, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_VerticesAllocator;

  /// @brief Field m_CopyPositionsShader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_CopyPositionsShader;

  /// @brief Field m_CopyVerticesKernel, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_CopyVerticesKernel;

  /// @brief Field m_CopyShader, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_CopyShader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool, ___m_VerticesBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool, ___m_VerticesAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool, ___m_CopyPositionsShader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool, ___m_CopyVerticesKernel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool, ___m_CopyShader) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
