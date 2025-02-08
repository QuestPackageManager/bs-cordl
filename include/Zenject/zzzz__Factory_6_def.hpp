#pragma once
// IWYU pragma private; include "Zenject/Factory_6.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PlaceholderFactory_6_def.hpp"
CORDL_MODULE_EXPORT(Factory_6)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue> class Factory_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Factory_6);
// Dependencies Zenject.PlaceholderFactory`6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
// Is value type: false
// CS Name: Zenject.Factory`6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>
class CORDL_TYPE Factory_6 : public ::Zenject::PlaceholderFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue> {
public:
  // Declarations
  static inline ::Zenject::Factory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Factory_6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Factory_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Factory_6(Factory_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Factory_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Factory_6(Factory_6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_6, "Zenject", "Factory`6");
