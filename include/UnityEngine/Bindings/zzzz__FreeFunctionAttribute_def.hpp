#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FreeFunctionAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class FreeFunctionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::FreeFunctionAttribute);
// Type: UnityEngine.Bindings::FreeFunctionAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15889))
// CS Name: ::UnityEngine.Bindings::FreeFunctionAttribute*
class CORDL_TYPE FreeFunctionAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2bb1500 size 0x20 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2bb1520 size 0x1c virtual false final false
  inline void _ctor(::StringW name);

  static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor(::StringW name, bool isThreadSafe);

  /// @brief Method .ctor addr 0x2bb153c size 0x30 virtual false final false
  inline void _ctor(::StringW name, bool isThreadSafe);

  // Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeFunctionAttribute(FreeFunctionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeFunctionAttribute(FreeFunctionAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeFunctionAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::FreeFunctionAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::FreeFunctionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::FreeFunctionAttribute*, "UnityEngine.Bindings", "FreeFunctionAttribute");
