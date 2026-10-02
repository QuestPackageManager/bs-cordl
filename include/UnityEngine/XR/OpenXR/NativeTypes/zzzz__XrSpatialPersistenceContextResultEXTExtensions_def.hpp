#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceContextResultEXTExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XrSpatialPersistenceContextResultEXTExtensions)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceContextResultEXT;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
class XrSpatialPersistenceContextResultEXTExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions*, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPersistenceContextResultEXTExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceContextResultEXTExtensions
class CORDL_TYPE XrSpatialPersistenceContextResultEXTExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method IsError, addr 0x6e445fc, size 0x8, virtual false, abstract: false, final false
  static inline bool IsError(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT result);

  /// [Extension]
  /// @brief Method IsSuccess, addr 0x6e445f0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSuccess(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPersistenceContextResultEXTExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XrSpatialPersistenceContextResultEXTExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XrSpatialPersistenceContextResultEXTExtensions(XrSpatialPersistenceContextResultEXTExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XrSpatialPersistenceContextResultEXTExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XrSpatialPersistenceContextResultEXTExtensions(XrSpatialPersistenceContextResultEXTExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
