#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDespawnableMemoryPool_1)
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IDespawnableMemoryPool_1);
// Type: Zenject::IDespawnableMemoryPool`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::Zenject::IDespawnableMemoryPool`1<TValue>*
class CORDL_TYPE IDespawnableMemoryPool_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Method Despawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Despawn(TValue item);

  /// @brief Convert to "::Zenject::IMemoryPool"
  constexpr ::Zenject::IMemoryPool* i___Zenject__IMemoryPool() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDespawnableMemoryPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDespawnableMemoryPool_1(IDespawnableMemoryPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDespawnableMemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDespawnableMemoryPool_1(IDespawnableMemoryPool_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IDespawnableMemoryPool_1, "Zenject", "IDespawnableMemoryPool`1");
