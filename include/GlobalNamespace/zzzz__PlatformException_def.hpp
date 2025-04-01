#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformException)
namespace GlobalNamespace {
struct PlatformException_ErrorType;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlatformException_ErrorType;
}
namespace GlobalNamespace {
class PlatformException;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlatformException_ErrorType);
MARK_REF_PTR_T(::GlobalNamespace::PlatformException);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformException/ErrorType
struct CORDL_TYPE PlatformException_ErrorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformException_ErrorType_Unwrapped
  enum struct __PlatformException_ErrorType_Unwrapped : int32_t {
    __E_PlatformNotInstalled = static_cast<int32_t>(0x0),
    __E_PlatformInitialization = static_cast<int32_t>(0x1),
    __E_PlatformUserEntitlement = static_cast<int32_t>(0x2),
    __E_InvalidPlatformVersion = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformException_ErrorType_Unwrapped() const noexcept {
    return static_cast<__PlatformException_ErrorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformException_ErrorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformException_ErrorType(int32_t value__) noexcept;

  /// @brief Field InvalidPlatformVersion value: I32(3)
  static ::GlobalNamespace::PlatformException_ErrorType const InvalidPlatformVersion;

  /// @brief Field PlatformInitialization value: I32(1)
  static ::GlobalNamespace::PlatformException_ErrorType const PlatformInitialization;

  /// @brief Field PlatformNotInstalled value: I32(0)
  static ::GlobalNamespace::PlatformException_ErrorType const PlatformNotInstalled;

  /// @brief Field PlatformUserEntitlement value: I32(2)
  static ::GlobalNamespace::PlatformException_ErrorType const PlatformUserEntitlement;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18758 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformException_ErrorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformException_ErrorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlatformException::ErrorType, System.Exception
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformException
class CORDL_TYPE PlatformException : public ::System::Exception {
public:
  // Declarations
  using ErrorType = ::GlobalNamespace::PlatformException_ErrorType;

  /// @brief Field code, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code)) int32_t code;

  /// @brief Field error, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::GlobalNamespace::PlatformException_ErrorType error;

  /// @brief Field httpCode, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_httpCode, put = __cordl_internal_set_httpCode)) int32_t httpCode;

  static inline ::GlobalNamespace::PlatformException* New_ctor(::GlobalNamespace::PlatformException_ErrorType error, int32_t code, int32_t httpCode, ::StringW message,
                                                               ::System::Exception* innerException);

  static inline ::GlobalNamespace::PlatformException* New_ctor(::GlobalNamespace::PlatformException_ErrorType error, ::StringW message, ::System::Exception* innerException);

  constexpr int32_t const& __cordl_internal_get_code() const;

  constexpr int32_t& __cordl_internal_get_code();

  constexpr ::GlobalNamespace::PlatformException_ErrorType const& __cordl_internal_get_error() const;

  constexpr ::GlobalNamespace::PlatformException_ErrorType& __cordl_internal_get_error();

  constexpr int32_t const& __cordl_internal_get_httpCode() const;

  constexpr int32_t& __cordl_internal_get_httpCode();

  constexpr void __cordl_internal_set_code(int32_t value);

  constexpr void __cordl_internal_set_error(::GlobalNamespace::PlatformException_ErrorType value);

  constexpr void __cordl_internal_set_httpCode(int32_t value);

  /// @brief Method .ctor, addr 0x407bbd8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlatformException_ErrorType error, int32_t code, int32_t httpCode, ::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x407bbc4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlatformException_ErrorType error, ::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformException(PlatformException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformException(PlatformException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18759 };

  /// @brief Field error, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::PlatformException_ErrorType ___error;

  /// @brief Field code, offset: 0x90, size: 0x4, def value: None
  int32_t ___code;

  /// @brief Field httpCode, offset: 0x94, size: 0x4, def value: None
  int32_t ___httpCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformException, ___error) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformException, ___code) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformException, ___httpCode) == 0x94, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformException, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformException_ErrorType, "", "PlatformException/ErrorType");
NEED_NO_BOX(::GlobalNamespace::PlatformException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformException*, "", "PlatformException");
