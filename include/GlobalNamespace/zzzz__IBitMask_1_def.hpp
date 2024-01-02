#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBitMask_1)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IBitMask_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IBitMask_1);
// Type: ::IBitMask`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15007))
// CS Name: ::IBitMask`1<T>*
class CORDL_TYPE IBitMask_1 {
public:
  // Declarations
  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::System::IEquatable_1<T>"
  constexpr operator ::System::IEquatable_1<T>*() noexcept;

  /// @brief Method get_bitCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_bitCount();

  /// @brief Method SetBits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T SetBits(int32_t offset, uint64_t bits);

  /// @brief Method GetBits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t GetBits(int32_t offset, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "IBitMask_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBitMask_1(IBitMask_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBitMask_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBitMask_1(IBitMask_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IBitMask_1, "", "IBitMask`1");
