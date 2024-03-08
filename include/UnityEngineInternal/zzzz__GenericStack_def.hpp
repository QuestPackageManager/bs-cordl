#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Stack_def.hpp"
CORDL_MODULE_EXPORT(GenericStack)
// Forward declare root types
namespace UnityEngineInternal {
class GenericStack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::GenericStack);
// Type: UnityEngineInternal::GenericStack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngineInternal {
// Is value type: false
// CS Name: ::UnityEngineInternal::GenericStack*
class CORDL_TYPE GenericStack : public ::System::Collections::Stack {
public:
  // Declarations
  static inline ::UnityEngineInternal::GenericStack* New_ctor();

  /// @brief Method .ctor, addr 0x2de4968, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericStack(GenericStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericStack(GenericStack const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::GenericStack, 0x28>, "Size mismatch!");

} // namespace UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::GenericStack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::GenericStack*, "UnityEngineInternal", "GenericStack");
