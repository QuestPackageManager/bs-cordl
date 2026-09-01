#pragma once
// IWYU pragma private; include "System\Marvin.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::System::Marvin*);
DEFINE_IL2CPP_CLASS(::System::Marvin*, "System", "Marvin");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Marvin
class CORDL_TYPE Marvin : public ::System::Object {
public:
  // Declarations
  /// @brief Field <DefaultSeed>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__DefaultSeed_k__BackingField, put = setStaticF__DefaultSeed_k__BackingField)) uint64_t _DefaultSeed_k__BackingField;

  /// @brief Method Block, addr 0x5c49598, size 0x8c, virtual false, abstract: false, final false
  static inline void Block(::by_ref<uint32_t> rp0, ::by_ref<uint32_t> rp1);

  /// @brief Method ComputeHash32, addr 0x5c490a8, size 0x98, virtual false, abstract: false, final false
  static inline int32_t ComputeHash32(::System::ReadOnlySpan_1<uint8_t> data, uint64_t seed);

  /// @brief Method ComputeHash32, addr 0x5c49140, size 0x458, virtual false, abstract: false, final false
  static inline int32_t ComputeHash32(::by_ref<uint8_t> data, int32_t count, uint64_t seed);

  /// @brief Method GenerateSeed, addr 0x5c4968c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t GenerateSeed();

  /// @brief Method _rotl, addr 0x5c49624, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t _rotl(uint32_t value, int32_t shift);

  static inline uint64_t getStaticF__DefaultSeed_k__BackingField();

  /// @brief Method get_DefaultSeed, addr 0x5c49630, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2438 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Marvin) == 0x10, "Size mismatch!");

} // namespace System
