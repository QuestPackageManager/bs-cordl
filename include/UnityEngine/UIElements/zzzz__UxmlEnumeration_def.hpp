#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlEnumeration)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlEnumeration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlEnumeration);
// Type: UnityEngine.UIElements::UxmlEnumeration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6978))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6979))
// CS Name: ::UnityEngine.UIElements::UxmlEnumeration*
class CORDL_TYPE UxmlEnumeration : public ::UnityEngine::UIElements::UxmlTypeRestriction {
public:
  // Declarations
  /// @brief Field m_Values, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Values, put = __set_m_Values))::System::Collections::Generic::List_1<::StringW>* m_Values;

  __declspec(property(get = get_values, put = set_values))::System::Collections::Generic::IEnumerable_1<::StringW>* values;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_Values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_Values() const;

  constexpr void __set_m_Values(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_values addr 0x2e0e69c size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_values();

  /// @brief Method set_values addr 0x2e0e6a4 size 0x5c virtual false final false
  inline void set_values(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method Equals addr 0x2e0e700 size 0x14c virtual true final false
  inline bool Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other);

  static inline ::UnityEngine::UIElements::UxmlEnumeration* New_ctor();

  /// @brief Method .ctor addr 0x2e0e84c size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlEnumeration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlEnumeration(UxmlEnumeration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlEnumeration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlEnumeration(UxmlEnumeration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlEnumeration();

public:
  /// @brief Field m_Values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlEnumeration, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlEnumeration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlEnumeration*, "UnityEngine.UIElements", "UxmlEnumeration");
