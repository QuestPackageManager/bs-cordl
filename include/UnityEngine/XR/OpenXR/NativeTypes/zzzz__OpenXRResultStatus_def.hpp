#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/OpenXRResultStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRResultStatus)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct OpenXRResultStatus_StatusCode;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct OpenXRResultStatus_StatusCode;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct OpenXRResultStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode, "UnityEngine.XR.OpenXR.NativeTypes", "OpenXRResultStatus/StatusCode");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus, "UnityEngine.XR.OpenXR.NativeTypes", "OpenXRResultStatus");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.OpenXRResultStatus/StatusCode
struct CORDL_TYPE OpenXRResultStatus_StatusCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRResultStatus_StatusCode_Unwrapped
  enum struct __OpenXRResultStatus_StatusCode_Unwrapped : int32_t {
    __E_PlatformQualifiedSuccess = static_cast<int32_t>(0x1),
    __E_UnqualifiedSuccess = static_cast<int32_t>(0x0),
    __E_PlatformError = static_cast<int32_t>(0xffffffff),
    __E_UnknownError = static_cast<int32_t>(0xfffffffe),
    __E_ProviderUninitialized = static_cast<int32_t>(0xfffffffd),
    __E_ProviderNotStarted = static_cast<int32_t>(0xfffffffc),
    __E_ValidationFailure = static_cast<int32_t>(0xfffffffb),
    __E_Unsupported = static_cast<int32_t>(0xfffffffa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRResultStatus_StatusCode_Unwrapped() const noexcept {
    return static_cast<__OpenXRResultStatus_StatusCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRResultStatus_StatusCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRResultStatus_StatusCode(int32_t value__) noexcept;

  /// @brief Field PlatformError value: I32(-1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const PlatformError;

  /// @brief Field PlatformQualifiedSuccess value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const PlatformQualifiedSuccess;

  /// @brief Field ProviderNotStarted value: I32(-4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const ProviderNotStarted;

  /// @brief Field ProviderUninitialized value: I32(-3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const ProviderUninitialized;

  /// @brief Field UnknownError value: I32(-2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const UnknownError;

  /// @brief Field UnqualifiedSuccess value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const UnqualifiedSuccess;

  /// @brief Field Unsupported value: I32(-6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const Unsupported;

  /// @brief Field ValidationFailure value: I32(-5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode const ValidationFailure;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17526 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.OpenXRResultStatus::StatusCode, UnityEngine.XR.OpenXR.NativeTypes.XrResult
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.OpenXRResultStatus
struct CORDL_TYPE OpenXRResultStatus {
public:
  // Declarations
  using StatusCode = ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode;

  __declspec(property(get = get_nativeStatusCode)) ::UnityEngine::XR::OpenXR::NativeTypes::XrResult nativeStatusCode;

  __declspec(property(get = get_statusCode)) ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode statusCode;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
  constexpr operator ::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>*();

  /// @brief Method CompareTo, addr 0x6e3e604, size 0xdc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus other);

  /// @brief Method Equals, addr 0x6e3e590, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus other);

  /// @brief Method Equals, addr 0x6e3e5b8, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrResult other);

  /// @brief Method IsError, addr 0x6e3e578, size 0xc, virtual false, abstract: false, final false
  inline bool IsError();

  /// @brief Method IsSuccess, addr 0x6e3e568, size 0x10, virtual false, abstract: false, final false
  inline bool IsSuccess();

  /// @brief Method IsUnqualifiedSuccess, addr 0x6e3e558, size 0x10, virtual false, abstract: false, final false
  inline bool IsUnqualifiedSuccess();

  /// @brief Method ToString, addr 0x6e3e6e0, size 0x13c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6e3e540, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult nativeStatusCode);

  /// @brief Method .ctor, addr 0x6e3e49c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode statusCode);

  /// @brief Method .ctor, addr 0x6e3e484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode statusCode, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult nativeStatusCode);

  /// [CompilerGenerated]
  /// @brief Method get_nativeStatusCode, addr 0x6e3e494, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult get_nativeStatusCode();

  /// [CompilerGenerated]
  /// @brief Method get_statusCode, addr 0x6e3e48c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode get_statusCode();

  /// @brief Method get_unqualifiedSuccess, addr 0x6e3e47c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus get_unqualifiedSuccess();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
  constexpr ::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>* i___System__IComparable_1___UnityEngine__XR__OpenXR__NativeTypes__OpenXRResultStatus_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__OpenXRResultStatus_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrResult_();

  /// @brief Method op_Implicit, addr 0x6e3e584, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus status);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRResultStatus();

  // Ctor Parameters [CppParam { name: "_statusCode_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "_nativeStatusCode_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRResultStatus(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode _statusCode_k__BackingField,
                               ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _nativeStatusCode_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17527 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [CompilerGenerated]
  /// @brief Field <statusCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode _statusCode_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <nativeStatusCode>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _nativeStatusCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus, _statusCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus, _nativeStatusCode_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus) == 0x8, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
