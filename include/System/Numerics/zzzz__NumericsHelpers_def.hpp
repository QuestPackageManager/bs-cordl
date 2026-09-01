#pragma once
// IWYU pragma private; include "System\Numerics\NumericsHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumericsHelpers)
// Forward declare root types
namespace System::Numerics {
class NumericsHelpers;
}
// Write type traits
MARK_REF_T(::System::Numerics::NumericsHelpers*);
DEFINE_IL2CPP_CLASS(::System::Numerics::NumericsHelpers*, "System.Numerics", "NumericsHelpers");
// Dependencies System.Object
namespace System::Numerics {
// Is value type: false
// CS Name: System.Numerics.NumericsHelpers
class CORDL_TYPE NumericsHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method Abs, addr 0x60f3b0c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Abs(int32_t a);

  /// @brief Method CbitHighZero, addr 0x60f4940, size 0x78, virtual false, abstract: false, final false
  static inline int32_t CbitHighZero(uint32_t u);

  /// @brief Method CbitHighZero, addr 0x60f925c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t CbitHighZero(uint64_t uu);

  /// @brief Method CombineHash, addr 0x60f2bac, size 0x8, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t n1, int32_t n2);

  /// @brief Method CombineHash, addr 0x60f9280, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t CombineHash(uint32_t u1, uint32_t u2);

  /// @brief Method DangerousMakeTwosComplement, addr 0x60f26e8, size 0xa0, virtual false, abstract: false, final false
  static inline void DangerousMakeTwosComplement(::ArrayW<uint32_t> d);

  /// @brief Method GetDoubleFromParts, addr 0x60f49b8, size 0xa8, virtual false, abstract: false, final false
  static inline double_t GetDoubleFromParts(int32_t sign, int32_t exp, uint64_t man);

  /// @brief Method GetDoubleParts, addr 0x60f1e60, size 0x7c, virtual false, abstract: false, final false
  static inline void GetDoubleParts(double_t dbl, ::by_ref<int32_t> sign, ::by_ref<int32_t> exp, ::by_ref<uint64_t> man, ::by_ref<bool> fFinite);

  /// @brief Method MakeUlong, addr 0x60f2d90, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t MakeUlong(uint32_t uHi, uint32_t uLo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericsHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericsHelpers(NumericsHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericsHelpers(NumericsHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Numerics::NumericsHelpers) == 0x10, "Size mismatch!");

} // namespace System::Numerics
