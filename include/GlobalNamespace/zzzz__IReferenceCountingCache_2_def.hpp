#pragma once
// IWYU pragma private; include "GlobalNamespace\IReferenceCountingCache_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReferenceCountingCache_2)
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class IReferenceCountingCache_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IReferenceCountingCache_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IReferenceCountingCache_2, "", "IReferenceCountingCache`2");
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: IReferenceCountingCache`2<TKey,TValue>
class CORDL_TYPE IReferenceCountingCache_2 {
public:
  // Declarations
  /// @brief Method AddReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t AddReference(TKey key);

  /// @brief Method GetReferenceCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetReferenceCount(TKey key);

  /// @brief Method Insert, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Insert(TKey key, TValue item);

  /// @brief Method RemoveReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t RemoveReference(TKey key);

  /// @brief Method TryGet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGet(TKey key, ::by_ref<TValue> result);

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceCountingCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReferenceCountingCache_2(IReferenceCountingCache_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
