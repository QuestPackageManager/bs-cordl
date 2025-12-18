#pragma once
// IWYU pragma private; include "GlobalNamespace/HttpBadRequestException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpBadRequestException)
// Forward declare root types
namespace GlobalNamespace {
class HttpBadRequestException;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HttpBadRequestException);
// Dependencies System.Exception
namespace GlobalNamespace {
// Is value type: false
// CS Name: HttpBadRequestException
class CORDL_TYPE HttpBadRequestException : public ::System::Exception {
public:
  // Declarations
  static inline ::GlobalNamespace::HttpBadRequestException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3236e44, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpBadRequestException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpBadRequestException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpBadRequestException(HttpBadRequestException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpBadRequestException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpBadRequestException(HttpBadRequestException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18121 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HttpBadRequestException, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HttpBadRequestException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HttpBadRequestException*, "", "HttpBadRequestException");
