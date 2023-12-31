#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlRootElementTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlRootElementTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlRootElementTraits);
// Type: UnityEngine.UIElements::UxmlRootElementTraits
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6971))
// CS Name: ::UnityEngine.UIElements::UxmlRootElementTraits*
class CORDL_TYPE UxmlRootElementTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Name, put = __set_m_Name))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_Class, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Class, put = __set_m_Class))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Class;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Name();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Name() const;

  constexpr void __set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Class();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Class() const;

  constexpr void __set_m_Class(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  static inline ::UnityEngine::UIElements::UxmlRootElementTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e0df94, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlRootElementTraits(UxmlRootElementTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlRootElementTraits(UxmlRootElementTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlRootElementTraits();

public:
  /// @brief Field m_Name, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Name;

  /// @brief Field m_Class, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Class;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlRootElementTraits, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlRootElementTraits, ___m_Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlRootElementTraits, ___m_Class) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlRootElementTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlRootElementTraits*, "UnityEngine.UIElements", "UxmlRootElementTraits");
