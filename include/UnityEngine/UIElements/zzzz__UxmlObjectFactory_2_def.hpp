#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectFactory_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseUxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlObjectFactory_1_def.hpp"
CORDL_MODULE_EXPORT(UxmlObjectFactory_2)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TCreatedType, typename TTraits> class UxmlObjectFactory_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectFactory_2);
// Dependencies UnityEngine.UIElements.BaseUxmlFactory`2<TCreatedType, TTraits>, UnityEngine.UIElements.IBaseUxmlFactory, UnityEngine.UIElements.IBaseUxmlObjectFactory,
// UnityEngine.UIElements.IUxmlObjectFactory`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename TCreatedType, typename TTraits>
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectFactory`2<TCreatedType,TTraits>
class CORDL_TYPE UxmlObjectFactory_2 : public ::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits> {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
  constexpr operator ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
  constexpr operator ::UnityEngine::UIElements::IBaseUxmlObjectFactory*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>"
  constexpr operator ::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>*() noexcept;

  /// @brief Method CreateObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TCreatedType CreateObject(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlObjectFactory_2<TCreatedType, TTraits>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
  constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
  constexpr ::UnityEngine::UIElements::IBaseUxmlObjectFactory* i___UnityEngine__UIElements__IBaseUxmlObjectFactory() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>"
  constexpr ::UnityEngine::UIElements::IUxmlObjectFactory_1<TCreatedType>* i___UnityEngine__UIElements__IUxmlObjectFactory_1_TCreatedType_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectFactory_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectFactory_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectFactory_2(UxmlObjectFactory_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectFactory_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectFactory_2(UxmlObjectFactory_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlObjectFactory_2, "UnityEngine.UIElements", "UxmlObjectFactory`2");
