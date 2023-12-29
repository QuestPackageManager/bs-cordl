#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SR)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SR;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SR);
// Type: ::SR
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14585))
// CS Name: ::SR*
class CORDL_TYPE SR : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetString addr 0x2692084 size 0x4 virtual false final false
  static inline ::StringW GetString(::StringW name);

  /// @brief Method Format addr 0x2692088 size 0x70 virtual false final false
  static inline ::StringW Format(::StringW resourceFormat, ::System::Object* p1);

  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SR(SR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SR(SR const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SR();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SR, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SR);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SR*, "", "SR");
