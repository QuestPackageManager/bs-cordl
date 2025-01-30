#pragma once
// IWYU pragma private; include "System/Marvin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Marvin)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class Marvin;
}
// Write type traits
MARK_REF_PTR_T(::System::Marvin);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Marvin
class CORDL_TYPE Marvin : public ::System::Object {
public:
  // Declarations
  /// @brief Field <DefaultSeed>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__DefaultSeed_k__BackingField, put = setStaticF__DefaultSeed_k__BackingField)) uint64_t _DefaultSeed_k__BackingField;

  /// @brief Method Block, addr 0x3dee328, size 0x88, virtual false, abstract: false, final false
  static inline void Block(::ByRef<uint32_t> rp0, ::ByRef<uint32_t> rp1);

  /// @brief Method ComputeHash32, addr 0x3dedf38, size 0x3f0, virtual false, abstract: false, final false
  static inline int32_t ComputeHash32(::ByRef<uint8_t> data, int32_t count, uint64_t seed);

  /// @brief Method ComputeHash32, addr 0x3dede8c, size 0xac, virtual false, abstract: false, final false
  static inline int32_t ComputeHash32(::System::ReadOnlySpan_1<uint8_t> data, uint64_t seed);

  /// @brief Method GenerateSeed, addr 0x3dee414, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t GenerateSeed();

  /// @brief Method _rotl, addr 0x3dee3b0, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t _rotl(uint32_t value, int32_t shift);

  static inline uint64_t getStaticF__DefaultSeed_k__BackingField();

  /// @brief Method get_DefaultSeed, addr 0x3dee3bc, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t get_DefaultSeed();

  static inline void setStaticF__DefaultSeed_k__BackingField(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marvin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marvin(Marvin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marvin(Marvin const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Marvin, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Marvin);
DEFINE_IL2CPP_ARG_TYPE(::System::Marvin*, "System", "Marvin");
