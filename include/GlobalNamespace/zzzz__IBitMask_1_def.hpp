#pragma once
// IWYU pragma private; include "GlobalNamespace/IBitMask_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBitMask_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IBitMask_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IBitMask_1);
// Dependencies System.IEquatable`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: IBitMask`1<T>
class CORDL_TYPE IBitMask_1 {
public:
  // Declarations
  __declspec(property(get = get_bitCount)) int32_t bitCount;

  /// @brief Convert operator to "::System::IEquatable_1<T>"
  constexpr operator ::System::IEquatable_1<T>*() noexcept;

  /// @brief Method GetBits, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t GetBits(int32_t offset, int32_t count);

  /// @brief Method SetBits, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T SetBits(int32_t offset, uint64_t bits);

  /// @brief Method get_bitCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_bitCount();

  /// @brief Convert to "::System::IEquatable_1<T>"
  constexpr ::System::IEquatable_1<T>* i___System__IEquatable_1_T_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IBitMask_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBitMask_1(IBitMask_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IBitMask_1, "", "IBitMask`1");
