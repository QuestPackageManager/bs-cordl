#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
// Forward declare root types
namespace Oculus::Platform::Models {
class Error;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Error);
// Type: Oculus.Platform.Models::Error
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::Error*
class CORDL_TYPE Error : public ::System::Object {
public:
  // Declarations
  /// @brief Field Code, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Code, put = __cordl_internal_set_Code)) int32_t Code;

  /// @brief Field HttpCode, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_HttpCode, put = __cordl_internal_set_HttpCode)) int32_t HttpCode;

  /// @brief Field Message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Message, put = __cordl_internal_set_Message))::StringW Message;

  static inline ::Oculus::Platform::Models::Error* New_ctor(int32_t code, ::StringW message, int32_t httpCode);

  constexpr int32_t const& __cordl_internal_get_Code() const;

  constexpr int32_t& __cordl_internal_get_Code();

  constexpr int32_t const& __cordl_internal_get_HttpCode() const;

  constexpr int32_t& __cordl_internal_get_HttpCode();

  constexpr ::StringW const& __cordl_internal_get_Message() const;

  constexpr ::StringW& __cordl_internal_get_Message();

  constexpr void __cordl_internal_set_Code(int32_t value);

  constexpr void __cordl_internal_set_HttpCode(int32_t value);

  constexpr void __cordl_internal_set_Message(::StringW value);

  /// @brief Method .ctor, addr 0x27f76c8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t code, ::StringW message, int32_t httpCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Error(Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Error(Error const&) = delete;

  /// @brief Field Code, offset: 0x10, size: 0x4, def value: None
  int32_t ___Code;

  /// @brief Field HttpCode, offset: 0x14, size: 0x4, def value: None
  int32_t ___HttpCode;

  /// @brief Field Message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Error, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Error, ___Code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Error, ___HttpCode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Error, ___Message) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Error);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Error*, "Oculus.Platform.Models", "Error");
