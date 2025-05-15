#pragma once
// IWYU pragma private; include "TMPro/TMP_InputValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputValidator)
// Forward declare root types
namespace TMPro {
class TMP_InputValidator;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_InputValidator);
// Dependencies UnityEngine.ScriptableObject
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_InputValidator
class CORDL_TYPE TMP_InputValidator : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  static inline ::TMPro::TMP_InputValidator* New_ctor();

  /// @brief Method Validate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline char16_t Validate(::ByRef<::StringW> text, ::ByRef<int32_t> pos, char16_t ch);

  /// @brief Method .ctor, addr 0x47f7eec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_InputValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_InputValidator(TMP_InputValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_InputValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_InputValidator(TMP_InputValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_InputValidator, 0x18>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_InputValidator);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputValidator*, "TMPro", "TMP_InputValidator");
