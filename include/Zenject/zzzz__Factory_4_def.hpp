#pragma once
// IWYU pragma private; include "Zenject/Factory_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
CORDL_MODULE_EXPORT(Factory_4)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> class Factory_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Factory_4);
// Dependencies Zenject.PlaceholderFactory`4<TParam1, TParam2, TParam3, TValue>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
// Is value type: false
// CS Name: Zenject.Factory`4<TParam1,TParam2,TParam3,TValue>
class CORDL_TYPE Factory_4 : public ::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue> {
public:
  // Declarations
  static inline ::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>* New_ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Factory_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Factory_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Factory_4(Factory_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Factory_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Factory_4(Factory_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Factory_4, "Zenject", "Factory`4");
