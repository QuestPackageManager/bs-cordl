#pragma once
// IWYU pragma private; include "Zenject/IFactory_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactory_def.hpp"
CORDL_MODULE_EXPORT(IFactory_3)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TValue> class IFactory_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_3);
// Dependencies Zenject.IFactory
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TValue>
// Is value type: false
// CS Name: Zenject.IFactory`3<TParam1,TParam2,TValue>
class CORDL_TYPE IFactory_3 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Create(TParam1 param1, TParam2 param2);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_3(IFactory_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_3, "Zenject", "IFactory`3");
