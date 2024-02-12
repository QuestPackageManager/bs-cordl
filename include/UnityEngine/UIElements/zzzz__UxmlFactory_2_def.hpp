#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlFactory_2)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TCreatedType, typename TTraits> class UxmlFactory_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlFactory_2);
// Type: UnityEngine.UIElements::UxmlFactory`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TCreatedType, typename TTraits>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6256))
// CS Name: ::UnityEngine.UIElements::UxmlFactory`2<TCreatedType,TTraits>*
class CORDL_TYPE UxmlFactory_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Traits, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Traits, put = __cordl_internal_set_m_Traits)) TTraits m_Traits;

  __declspec(property(get = get_uxmlName))::StringW uxmlName;

  __declspec(property(get = get_uxmlNamespace))::StringW uxmlNamespace;

  __declspec(property(get = get_uxmlQualifiedName))::StringW uxmlQualifiedName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IUxmlFactory"
  constexpr operator ::UnityEngine::UIElements::IUxmlFactory*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IUxmlFactory"
  constexpr ::UnityEngine::UIElements::IUxmlFactory* i___UnityEngine__UIElements__IUxmlFactory() noexcept;

  constexpr TTraits& __cordl_internal_get_m_Traits();

  constexpr TTraits const& __cordl_internal_get_m_Traits() const;

  constexpr void __cordl_internal_set_m_Traits(TTraits value);

  static inline ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_uxmlName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlNamespace();

  /// @brief Method get_uxmlQualifiedName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method AcceptsAttributeBag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlFactory_2(UxmlFactory_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlFactory_2(UxmlFactory_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlFactory_2();

public:
  /// @brief Field m_Traits, offset: 0x10, size: 0x8, def value: None
  TTraits ___m_Traits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlFactory_2, "UnityEngine.UIElements", "UxmlFactory`2");
