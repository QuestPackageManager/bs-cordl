#pragma once
// IWYU pragma private; include "Zenject/IFactory_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactory_2)
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_2);
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1, typename TValue>
// Is value type: false
// CS Name: Zenject.IFactory`2<TParam1,TValue>
class CORDL_TYPE IFactory_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Create(TParam1 param);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_2(IFactory_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14311 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_2, "Zenject", "IFactory`2");
