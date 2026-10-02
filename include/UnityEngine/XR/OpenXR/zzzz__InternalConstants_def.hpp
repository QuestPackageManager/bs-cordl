#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/InternalConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InternalConstants)
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class InternalConstants;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::InternalConstants*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::InternalConstants*, "UnityEngine.XR.OpenXR", "InternalConstants");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.InternalConstants
class CORDL_TYPE InternalConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalConstants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalConstants(InternalConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalConstants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalConstants(InternalConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17455 };

  /// @brief Field companyName offset 0xffffffff size 0x8
  static constexpr ::ConstString companyName{ u"Unity" };

  /// @brief Field openXRLibrary offset 0xffffffff size 0x8
  static constexpr ::ConstString openXRLibrary{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::InternalConstants) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
