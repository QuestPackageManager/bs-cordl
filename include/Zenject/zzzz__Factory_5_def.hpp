#pragma once
// IWYU pragma private; include "Zenject/Factory_5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PlaceholderFactory_5_def.hpp"
CORDL_MODULE_EXPORT(Factory_5)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class Factory_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Factory_5);
// Dependencies Zenject.PlaceholderFactory`5<TParam1, TParam2, TParam3, TParam4, TValue>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
// Is value type: false
// CS Name: Zenject.Factory`5<TParam1,TParam2,TParam3,TParam4,TValue>
class CORDL_TYPE Factory_5 : public ::Zenject::PlaceholderFactory_5<TParam1, TParam2, TParam3, TParam4, TValue> {
public:
  // Declarations
  static inline ::Zenject::Factory_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Factory_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Factory_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Factory_5(Factory_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Factory_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Factory_5(Factory_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14342 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_5, "Zenject", "Factory`5");
