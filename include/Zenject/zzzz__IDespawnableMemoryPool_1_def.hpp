#pragma once
// IWYU pragma private; include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IMemoryPool_def.hpp"
CORDL_MODULE_EXPORT(IDespawnableMemoryPool_1)
// Forward declare root types
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IDespawnableMemoryPool_1);
// Dependencies Zenject.IMemoryPool
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: Zenject.IDespawnableMemoryPool`1<TValue>
class CORDL_TYPE IDespawnableMemoryPool_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Method Despawn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Despawn(TValue item);

  /// @brief Convert to "::Zenject::IMemoryPool"
  constexpr ::Zenject::IMemoryPool* i___Zenject__IMemoryPool() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDespawnableMemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDespawnableMemoryPool_1(IDespawnableMemoryPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IDespawnableMemoryPool_1, "Zenject", "IDespawnableMemoryPool`1");
