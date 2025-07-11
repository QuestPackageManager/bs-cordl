#pragma once
// IWYU pragma private; include "UnityEngine/XR/HashCodeHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashCodeHelper)
// Forward declare root types
namespace UnityEngine::XR {
class HashCodeHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::HashCodeHelper);
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.HashCodeHelper
class CORDL_TYPE HashCodeHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Combine, addr 0x4aec178, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2);

  /// @brief Method Combine, addr 0x4aec188, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3);

  /// @brief Method Combine, addr 0x4aec19c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4);

  /// @brief Method Combine, addr 0x4aec1b4, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5);

  /// @brief Method Combine, addr 0x4aec1d0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6);

  /// @brief Method Combine, addr 0x4aec1f0, size 0x24, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6, int32_t hash7);

  /// @brief Method Combine, addr 0x4aec214, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6, int32_t hash7, int32_t hash8);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashCodeHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashCodeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashCodeHelper(HashCodeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashCodeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashCodeHelper(HashCodeHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::HashCodeHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::HashCodeHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::HashCodeHelper*, "UnityEngine.XR", "HashCodeHelper");
