#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
// Forward declare root types
namespace ENet {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Extensions);
// Type: ENet::Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// CS Name: ::ENet::Extensions*
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method StringLength, addr 0x2354a04, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t StringLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Extensions, 0x10>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Extensions*, "ENet", "Extensions");
