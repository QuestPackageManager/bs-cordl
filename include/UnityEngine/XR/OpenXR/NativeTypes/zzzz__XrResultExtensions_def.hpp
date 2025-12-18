#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrResultExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XrResultExtensions)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
class XrResultExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions);
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrResultExtensions
class CORDL_TYPE XrResultExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsError, addr 0x68264e8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsError(::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrResult);

  /// @brief Method IsSuccess, addr 0x68264d0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSuccess(::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrResult);

  /// @brief Method IsUnqualifiedSuccess, addr 0x68264dc, size 0xc, virtual false, abstract: false, final false
  static inline bool IsUnqualifiedSuccess(::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrResult);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrResultExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XrResultExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XrResultExtensions(XrResultExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XrResultExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XrResultExtensions(XrResultExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
NEED_NO_BOX(::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*, "UnityEngine.XR.OpenXR.NativeTypes", "XrResultExtensions");
