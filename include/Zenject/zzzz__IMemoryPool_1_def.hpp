#pragma once
// IWYU pragma private; include "Zenject/IMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
CORDL_MODULE_EXPORT(IMemoryPool_1)
// Forward declare root types
namespace Zenject {
template <typename TValue> class IMemoryPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IMemoryPool_1);
// Dependencies Zenject.IDespawnableMemoryPool`1<TValue>, Zenject.IMemoryPool
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: Zenject.IMemoryPool`1<TValue>
class CORDL_TYPE IMemoryPool_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Method Spawn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Spawn();

  /// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept;

  /// @brief Convert to "::Zenject::IMemoryPool"
  constexpr ::Zenject::IMemoryPool* i___Zenject__IMemoryPool() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IMemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemoryPool_1(IMemoryPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IMemoryPool_1, "Zenject", "IMemoryPool`1");
