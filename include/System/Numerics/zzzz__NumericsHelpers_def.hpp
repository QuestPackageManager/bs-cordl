#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NumericsHelpers)
// Forward declare root types
namespace System::Numerics {
class NumericsHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::NumericsHelpers);
// Type: System.Numerics::NumericsHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15651))
// CS Name: ::System.Numerics::NumericsHelpers*
class CORDL_TYPE NumericsHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method DangerousMakeTwosComplement, addr 0x2844c94, size 0xbc, virtual false, abstract: false, final false
  static inline void DangerousMakeTwosComplement(::ArrayW<uint32_t, ::Array<uint32_t>*> d);

  /// @brief Method MakeUlong, addr 0x2848214, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t MakeUlong(uint32_t uHi, uint32_t uLo);

  /// @brief Method Abs, addr 0x2845b30, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Abs(int32_t a);

  /// @brief Method CombineHash, addr 0x2848364, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t CombineHash(uint32_t u1, uint32_t u2);

  /// @brief Method CombineHash, addr 0x2844fa4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t CombineHash(int32_t n1, int32_t n2);

  // Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericsHelpers(NumericsHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericsHelpers(NumericsHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericsHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::NumericsHelpers, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::NumericsHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::NumericsHelpers*, "System.Numerics", "NumericsHelpers");
