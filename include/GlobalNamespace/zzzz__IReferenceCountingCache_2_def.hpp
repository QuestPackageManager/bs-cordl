#pragma once
// IWYU pragma private; include "GlobalNamespace/IReferenceCountingCache_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IReferenceCountingCache_2)
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class IReferenceCountingCache_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IReferenceCountingCache_2);
// Type: ::IReferenceCountingCache`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::IReferenceCountingCache`2<TKey,TValue>*
class CORDL_TYPE IReferenceCountingCache_2 {
public:
  // Declarations
  /// @brief Method AddReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t AddReference(TKey key);

  /// @brief Method GetReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetReferenceCount(TKey key);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Insert(TKey key, TValue item);

  /// @brief Method RemoveReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t RemoveReference(TKey key);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGet(TKey key, ByRef<TValue> result);

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceCountingCache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReferenceCountingCache_2(IReferenceCountingCache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceCountingCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReferenceCountingCache_2(IReferenceCountingCache_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IReferenceCountingCache_2, "", "IReferenceCountingCache`2");
