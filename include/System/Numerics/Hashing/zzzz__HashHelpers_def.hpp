#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashHelpers)
// Forward declare root types
namespace System::Numerics::Hashing {
class HashHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::Hashing::HashHelpers);
// Type: System.Numerics.Hashing::HashHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics::Hashing {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3555))
// CS Name: ::System.Numerics.Hashing::HashHelpers*
class CORDL_TYPE HashHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field RandomSeed, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_RandomSeed, put = setStaticF_RandomSeed)) int32_t RandomSeed;

  static inline void setStaticF_RandomSeed(int32_t value);

  static inline int32_t getStaticF_RandomSeed();

  /// @brief Method Combine, addr 0x24fbef8, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t h1, int32_t h2);

  // Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashHelpers(HashHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashHelpers(HashHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::Hashing::HashHelpers, 0x10>, "Size mismatch!");

} // namespace System::Numerics::Hashing
NEED_NO_BOX(::System::Numerics::Hashing::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Hashing::HashHelpers*, "System.Numerics.Hashing", "HashHelpers");
