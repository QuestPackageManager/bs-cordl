#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlStyleTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStyleTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlStyleTraits);
// Type: UnityEngine.UIElements::UxmlStyleTraits
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6973))
// CS Name: ::UnityEngine.UIElements::UxmlStyleTraits*
class CORDL_TYPE UxmlStyleTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Name, put = __set_m_Name))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_Path, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Path, put = __set_m_Path))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Path;

  /// @brief Field m_Src, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Src, put = __set_m_Src))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Src;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Name();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Name() const;

  constexpr void __set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Path();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Path() const;

  constexpr void __set_m_Path(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Src();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Src() const;

  constexpr void __set_m_Src(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  static inline ::UnityEngine::UIElements::UxmlStyleTraits* New_ctor();

  /// @brief Method .ctor addr 0x2e0e210 size 0xf0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStyleTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlStyleTraits(UxmlStyleTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStyleTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlStyleTraits(UxmlStyleTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlStyleTraits();

public:
  /// @brief Field m_Name, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Name;

  /// @brief Field m_Path, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Path;

  /// @brief Field m_Src, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Src;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlStyleTraits, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStyleTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStyleTraits*, "UnityEngine.UIElements", "UxmlStyleTraits");
