#pragma once
// IWYU pragma private; include "Zenject/IFactory_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactory_def.hpp"
CORDL_MODULE_EXPORT(IFactory_4)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> class IFactory_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_4);
// Dependencies Zenject.IFactory
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
// Is value type: false
// CS Name: Zenject.IFactory`4<TParam1,TParam2,TParam3,TValue>
class CORDL_TYPE IFactory_4 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Create(TParam1 param1, TParam2 param2, TParam3 param3);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_4(IFactory_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_4, "Zenject", "IFactory`4");
