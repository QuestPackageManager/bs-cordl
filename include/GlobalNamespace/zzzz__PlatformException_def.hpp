#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformException)
namespace GlobalNamespace {
struct __PlatformException__ErrorType;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PlatformException__ErrorType;
}
namespace GlobalNamespace {
class PlatformException;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PlatformException__ErrorType);
MARK_REF_PTR_T(::GlobalNamespace::PlatformException);
// Type: ::ErrorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4036))
// CS Name: ::PlatformException::ErrorType
struct CORDL_TYPE __PlatformException__ErrorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlatformException__ErrorType_Unwrapped
  enum struct ____PlatformException__ErrorType_Unwrapped : int32_t {
    __E_PlatformNotInstalled = static_cast<int32_t>(0x0),
    __E_PlatformInitialization = static_cast<int32_t>(0x1),
    __E_PlatformUserEntitlement = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlatformException__ErrorType_Unwrapped() const noexcept {
    return static_cast<____PlatformException__ErrorType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlatformException__ErrorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformException__ErrorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PlatformNotInstalled value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlatformException__ErrorType const PlatformNotInstalled;

  /// @brief Field PlatformInitialization value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlatformException__ErrorType const PlatformInitialization;

  /// @brief Field PlatformUserEntitlement value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlatformException__ErrorType const PlatformUserEntitlement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformException__ErrorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformException__ErrorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561)), TypeDefinitionIndex(TypeDefinitionIndex(4036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4037))
// CS Name: ::PlatformException*
class CORDL_TYPE PlatformException : public ::System::Exception {
public:
  // Declarations
  using ErrorType = ::GlobalNamespace::__PlatformException__ErrorType;

  /// @brief Field error, offset 0x8c, size 0x4
  __declspec(property(get = __get_error, put = __set_error))::GlobalNamespace::__PlatformException__ErrorType error;

  /// @brief Field code, offset 0x90, size 0x4
  __declspec(property(get = __get_code, put = __set_code)) int32_t code;

  /// @brief Field httpCode, offset 0x94, size 0x4
  __declspec(property(get = __get_httpCode, put = __set_httpCode)) int32_t httpCode;

  constexpr ::GlobalNamespace::__PlatformException__ErrorType& __get_error();

  constexpr ::GlobalNamespace::__PlatformException__ErrorType const& __get_error() const;

  constexpr void __set_error(::GlobalNamespace::__PlatformException__ErrorType value);

  constexpr int32_t& __get_code();

  constexpr int32_t const& __get_code() const;

  constexpr void __set_code(int32_t value);

  constexpr int32_t& __get_httpCode();

  constexpr int32_t const& __get_httpCode() const;

  constexpr void __set_httpCode(int32_t value);

  static inline ::GlobalNamespace::PlatformException* New_ctor(::GlobalNamespace::__PlatformException__ErrorType error, ::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2228ee4, size 0x14, virtual false, abstract: false, final false
  /// @param message: ::StringW (default: nullptr)
  /// @param innerException: ::System::Exception* (default: nullptr)
  inline void _ctor(::GlobalNamespace::__PlatformException__ErrorType error, ::StringW message = nullptr, ::System::Exception* innerException = nullptr);

  static inline ::GlobalNamespace::PlatformException* New_ctor(::GlobalNamespace::__PlatformException__ErrorType error, int32_t code, int32_t httpCode, ::StringW message,
                                                               ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2229358, size 0x98, virtual false, abstract: false, final false
  /// @param message: ::StringW (default: nullptr)
  /// @param innerException: ::System::Exception* (default: nullptr)
  inline void _ctor(::GlobalNamespace::__PlatformException__ErrorType error, int32_t code, int32_t httpCode, ::StringW message = nullptr, ::System::Exception* innerException = nullptr);

  // Ctor Parameters [CppParam { name: "", ty: "PlatformException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformException(PlatformException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformException(PlatformException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformException();

public:
  /// @brief Field error, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__PlatformException__ErrorType ___error;

  /// @brief Field code, offset: 0x90, size: 0x4, def value: None
  int32_t ___code;

  /// @brief Field httpCode, offset: 0x94, size: 0x4, def value: None
  int32_t ___httpCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformException, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformException, ___error) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformException, ___code) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformException, ___httpCode) == 0x94, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformException__ErrorType, "", "PlatformException/ErrorType");
NEED_NO_BOX(::GlobalNamespace::PlatformException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformException*, "", "PlatformException");
