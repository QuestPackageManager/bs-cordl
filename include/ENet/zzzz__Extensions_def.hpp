#pragma once
// IWYU pragma private; include "ENet\Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
// Forward declare root types
namespace ENet {
class Extensions;
}
// Write type traits
MARK_REF_T(::ENet::Extensions*);
DEFINE_IL2CPP_CLASS(::ENet::Extensions*, "ENet", "Extensions");
// Dependencies System.Object
namespace ENet {
// Is value type: false
// CS Name: ENet.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method StringLength, addr 0x5894a5c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t StringLength(::ArrayW<uint8_t> data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21732 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ENet::Extensions) == 0x10, "Size mismatch!");

} // namespace ENet
