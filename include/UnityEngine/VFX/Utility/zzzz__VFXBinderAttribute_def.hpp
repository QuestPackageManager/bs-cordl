#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXBinderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXBinderAttribute)
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXBinderAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXBinderAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXBinderAttribute*, "UnityEngine.VFX.Utility", "VFXBinderAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXBinderAttribute
class CORDL_TYPE VFXBinderAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field MenuPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_MenuPath, put = __cordl_internal_set_MenuPath)) ::StringW MenuPath;

  static inline ::UnityEngine::VFX::Utility::VFXBinderAttribute* New_ctor(::StringW menuPath);

  constexpr ::StringW const& __cordl_internal_get_MenuPath() const;

  constexpr ::StringW& __cordl_internal_get_MenuPath();

  constexpr void __cordl_internal_set_MenuPath(::StringW value);

  /// @brief Method .ctor, addr 0x69e39ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW menuPath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXBinderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXBinderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXBinderAttribute(VFXBinderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXBinderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXBinderAttribute(VFXBinderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19981 };

  /// @brief Field MenuPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___MenuPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXBinderAttribute, ___MenuPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXBinderAttribute) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
