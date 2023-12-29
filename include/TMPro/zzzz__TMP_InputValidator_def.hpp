#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputValidator)
// Forward declare root types
namespace TMPro {
class TMP_InputValidator;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_InputValidator);
// Type: TMPro::TMP_InputValidator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12321))
// CS Name: ::TMPro::TMP_InputValidator*
class CORDL_TYPE TMP_InputValidator : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline char16_t Validate(ByRef<::StringW> text, ByRef<int32_t> pos, char16_t ch);

  static inline ::TMPro::TMP_InputValidator* New_ctor();

  /// @brief Method .ctor addr 0x2ab5974 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputValidator(TMP_InputValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputValidator(TMP_InputValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputValidator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputValidator, 0x18>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_InputValidator);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputValidator*, "TMPro", "TMP_InputValidator");
