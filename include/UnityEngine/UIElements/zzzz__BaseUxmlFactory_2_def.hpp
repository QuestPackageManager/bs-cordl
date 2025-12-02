#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseUxmlFactory_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseUxmlFactory_2)
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TCreatedType, typename TTraits> class BaseUxmlFactory_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseUxmlFactory_2);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename TCreatedType, typename TTraits>
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseUxmlFactory`2<TCreatedType,TTraits>
class CORDL_TYPE BaseUxmlFactory_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Traits, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Traits, put = __cordl_internal_set_m_Traits)) TTraits m_Traits;

  __declspec(property(get = get_uxmlName)) ::StringW uxmlName;

  __declspec(property(get = get_uxmlNamespace)) ::StringW uxmlNamespace;

  __declspec(property(get = get_uxmlQualifiedName)) ::StringW uxmlQualifiedName;

  __declspec(property(get = get_uxmlType)) ::System::Type* uxmlType;

  /// @brief Method AcceptsAttributeBag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>* New_ctor();

  constexpr TTraits const& __cordl_internal_get_m_Traits() const;

  constexpr TTraits& __cordl_internal_get_m_Traits();

  constexpr void __cordl_internal_set_m_Traits(TTraits value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_uxmlName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlNamespace();

  /// @brief Method get_uxmlQualifiedName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method get_uxmlType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_uxmlType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseUxmlFactory_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseUxmlFactory_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseUxmlFactory_2(BaseUxmlFactory_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseUxmlFactory_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseUxmlFactory_2(BaseUxmlFactory_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5183 };

  /// @brief Field m_Traits, offset: 0x10, size: 0x8, def value: None
  TTraits ___m_Traits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseUxmlFactory_2, "UnityEngine.UIElements", "BaseUxmlFactory`2");
